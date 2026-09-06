# How This Fix Was Found — The Full Process

A record of how the MT7902 Bluetooth issue was diagnosed and fixed, including
the dead ends. Written up so the reasoning is reusable, not just the result.

## 1. The starting symptom

Bluetooth and WiFi both broken on a laptop with a MediaTek MT7902 (Filogic
310) chip. Bluetooth showed no visible error to the user — it just never
connected. WiFi showed "No Wi-Fi Adapter Found" in Settings.

## 2. Collecting real data first

Before touching anything, a diagnostic script pulled: OS/kernel version,
exact chipset via `lspci -k` / `lsusb`, loaded modules, `dmesg` filtered for
wifi/bluetooth/firmware lines, Secure Boot state, rfkill state, and firmware
package versions. This turned up the concrete signal:

```
Bluetooth: hci0: Opcode 0x0c03 failed: -110
```

`-110` is `-ETIMEDOUT`. Opcode `0x0c03` is HCI Reset. The controller was
being detected but never finishing initialization.

## 3. What had already gone wrong

Before this process started, community one-click fix scripts
(`hmtheboy154/mt7902`, `VashuTheGreat/mt7902-fix`) had already been tried
and caused a kernel panic requiring a hard reboot. The panic itself was
never captured — no crash dump existed at the time, and journald hadn't
persisted the crash-boot's logs.

Reading those repos afterward showed why this was risky: they ship
pre-built driver source snapshotted from a different kernel version (an
Arch kernel, not Ubuntu's), and their own install instructions use
`dkms install --force`. That flag bypasses the kernel's normal
per-symbol version check (`CONFIG_MODVERSIONS`) — the exact mechanism
that would otherwise refuse to load a module built against a mismatched
kernel. Forcing past that check is a plausible, concrete panic cause.

**Lesson carried forward:** never use `--force`. Build only from source
that genuinely matches the running kernel, so the version check passes on
its own merit.

## 4. Setting up a safety net before trying anything else

`linux-crashdump` (kdump) was installed and enabled
(`USE_KDUMP=1` in `/etc/default/kdump-tools`, then reboot). This meant any
future real panic would produce an actual crash dump in `/var/crash/`
instead of losing the trace, the way the earlier one had been lost.

## 5. Getting the real source instead of a foreign snapshot

Rather than reuse a third-party repo's pre-built files, Ubuntu's own
kernel source package was fetched directly:

```bash
grep -r "^deb-src" /etc/apt/sources.list.d/*.sources   # check if deb-src is enabled
sudo sed -i 's/^Types: deb$/Types: deb deb-src/' /etc/apt/sources.list.d/ubuntu.sources
sudo apt update
apt-get source linux-image-unsigned-$(uname -r)
```

This gives the *exact* `drivers/bluetooth/btusb.c`, `btmtk.c`, and
`btmtk.h` already compiled into the system — patching this in place means
the rebuilt modules stay ABI-compatible with the sibling Bluetooth modules
(`bluetooth.ko`, `btintel.ko`, `btrtl.ko`, `btbcm.ko`) that aren't being
touched.

(Building against a source version one point-release off the running
kernel — e.g. source labeled `-31.31` on a `-30-generic` kernel — turned
out not to matter in practice: struct-layout/ABI compatibility is
determined by what the installed kernel headers define at build time,
not by the source package's version label, and Ubuntu doesn't break
in-tree struct ABI between point releases.)

## 6. Finding and applying the actual fix

The real, minimal patch was reverse-engineered by reading a small,
BT-only community repo (`bupd/bt-driver-mt7902`) that ships the same
change as unified diffs — used as a reference for *what* to change, not
as a binary to install directly. Reading its 3 patch files plus the
driver source showed the fix is genuinely small:

1. **`btusb.c`** — add 4 USB device IDs (`13d3:3579/3580/3594/3596`) to
   the quirks table with the `BTUSB_MEDIATEK` flag, next to the existing
   MT7922 entries.
2. **`btmtk.c`** — extend two `dev_id == 0x7922` checks in the USB
   subsystem-reset function to also match `0x7902`, and add a
   `case 0x7902:` to the firmware-name switch statement (falls through
   to the same code path as `0x7922`/`0x7925`/`0x7961`).
3. **`btmtk.h`** — add a `FIRMWARE_MT7902` macro. The actual firmware
   file (`BT_RAM_CODE_MT7902_1_1_hdr.bin`) turned out to already be on
   disk via `linux-firmware-mediatek` — nothing needed downloading.

Each edit was verified against the real source with `grep`/`sed -n`
before changing anything, and every `sed -i` edit was immediately
re-verified by re-reading the changed lines — never assumed to have
worked.

## 7. Building and testing without touching the running system yet

```bash
make -C /lib/modules/$(uname -r)/build M=$(pwd)/drivers/bluetooth modules
```

Built clean (only unrelated compiler/pahole version warnings). Before
loading anything, the original stock `.ko.zst` files were backed up:

```bash
sudo cp /lib/modules/$(uname -r)/kernel/drivers/bluetooth/{btusb,btmtk}.ko.zst ~/bt-mt7902-backup/
```

Then live-tested by unloading the stock modules and loading the built
ones directly (not yet installed system-wide), watching `dmesg -w` live
in a second terminal:

```bash
sudo rmmod btusb btmtk
sudo insmod ./drivers/bluetooth/btmtk.ko
sudo insmod ./drivers/bluetooth/btusb.ko
```

Result: `Device setup in ... usecs`, no timeout, `Powered: yes`.

## 8. Making it permanent — DKMS, not a manual file swap

A DKMS package (`mt7902-bt/1.0.0`) was set up pointing at the patched
`drivers/bluetooth` source tree, using the kernel's own build system
(so the real `.config` — including `CONFIG_BT_HCIBTUSB_MTK` — is
inherited automatically, rather than needing to be faked). DKMS installs
to `/updates/dkms/`, a location the kernel's module search order checks
*before* `/kernel/...`, which is what makes the override take effect
without touching or deleting the original file. DKMS also automatically
archives the original module before overwriting it — meaning
`dkms remove` alone restores the exact original, no manual backup
restore needed as the primary path.

## 9. Proving it survives the conditions that broke it before

Three separate tests, not just "did it boot":

- **Reboot** — modules loaded automatically via DKMS override, no manual
  `insmod` needed. Confirmed via `modinfo` showing the `/updates/dkms/`
  path.
- **Suspend/resume** — this is what had actually reproduced the failure
  reliably in earlier testing (cold boot alone was inconsistent).
  Confirmed clean twice in a row.
- **Rollback and re-install** — `uninstall-mt7902-bt.sh` was run and
  verified two ways: SHA-256 checksum match against the independent
  backup (confirms DKMS restored the *exact* original, not a similar
  one), and a suspend/resume cycle reproducing the original
  `Opcode 0x0c03` error (confirms the rollback is a genuine, working
  revert, not a silent no-op). Then `install-mt7902-bt.sh` was re-run
  and re-verified clean.

## 10. What's left — WiFi

The same chip's WiFi half (PCI ID `14c3:7902`) turned out to need more
than a device-ID table entry. Adding the PCI ID alone let the driver
correctly identify the chip (`ASIC revision: 79020000` — a genuine
hardware register read, not something we set), but MCU communication
timed out (`Failed to get patch semaphore`).

Comparing against MediaTek's actual upstream patch series (posted
2026-02-19, 11 patches, "wifi: mt76: mt7921: enable MT7902 WiFi 6E
support") showed why: MT7902 needs a **different MCU ring/queue
layout** than MT7921/MT7922 — a different TX queue index, a different
RX ring size, and it doesn't use the `MCU_WA` ring those chips use at
all. That's a structural change to the queue-initialization function,
not a table entry, and needs its own careful, from-scratch pass —
tracked separately, not rushed into this fix.

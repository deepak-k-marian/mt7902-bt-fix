# MT7902 Bluetooth Fix for Ubuntu / Linux

Fixes Bluetooth on laptops with the MediaTek MT7902 (Filogic 310) combo
WiFi+Bluetooth chip, where the controller never powers on and `dmesg` shows:

```
Bluetooth: hci0: Opcode 0x0c03 failed: -110
```

Tested on: Acer Aspire Lite AL15-41, Ubuntu 26.04, kernel `7.0.0-31-generic`,
Bluetooth USB ID `13d3:3580`.

## Root cause

Stock Ubuntu's `btusb`/`btmtk` drivers don't have the `BTUSB_MEDIATEK` quirk
entry for this chip's USB ID (`13d3:3580`, and siblings `3579`/`3594`/`3596`).
Without it, the kernel treats the controller as a generic Bluetooth USB
device instead of routing it through MediaTek's proper HCI reset and
firmware-load sequence — so the HCI Reset command times out and the
controller never comes up.

## What this fix does

- Adds the 4 missing MediaTek USB device-ID quirk entries to `btusb.c`
- Extends `btmtk.c`'s device-ID switch and reset logic to recognize `0x7902`
  alongside the existing MediaTek family (`0x7922` / `0x7925` / `0x7961`)
- Adds a `FIRMWARE_MT7902` macro pointing at the firmware file — which
  Ubuntu's `linux-firmware-mediatek` package already ships, so nothing
  extra needs downloading
- Builds only the two changed modules (`btusb.ko`, `btmtk.ko`) via DKMS,
  compiled against **your own kernel's real source**, so they load with
  genuinely matching `vermagic` — no `--force`, no bypassed safety checks

See `PROCESS.md` for the full story of how this was diagnosed and derived,
including the dead ends that came before it.

## Requirements

- Ubuntu (or another distro with a similar kernel-headers setup)
- `linux-headers-$(uname -r)` installed and matching your running kernel
- `dkms`

Install prerequisites:
```bash
sudo apt install dkms linux-headers-$(uname -r)
```

## Install

```bash
chmod +x install-mt7902-bt.sh uninstall-mt7902-bt.sh
sudo ./install-mt7902-bt.sh
```

The install script expects the patched source tree to already exist at
`/usr/src/mt7902-bt-1.0.0/`. If you're setting this up fresh on a different
machine, see "Re-deriving the patch" below first.

## Uninstall / rollback

```bash
sudo ./uninstall-mt7902-bt.sh
```

DKMS automatically restores the original stock `btusb.ko`/`btmtk.ko` it
archived at install time. A second, independent backup of those original
files is also kept at `~/bt-mt7902-backup/` in case DKMS's own restore
ever needs a manual fallback.

## Verify it worked

```bash
sudo dmesg | grep hci0
bluetoothctl show
rfkill list
```

Expect:
- `Bluetooth: hci0: Device setup in ... usecs` — **not** `Opcode 0x0c03 failed`
- `Powered: yes`
- No soft/hard block

The real test is a suspend/resume cycle, not just a cold boot — this bug
was intermittent on cold boot but reliably reproduced on resume:
```bash
systemctl suspend
# wake it back up, then:
sudo dmesg | grep hci0
```

## Re-deriving the patch (for a different kernel version)

This fix edits Ubuntu's own kernel source directly, not a foreign snapshot,
so it needs to be re-derived if you're on a different kernel:

```bash
apt-get source linux-image-unsigned-$(uname -r)
```

Then apply the same edits described in `PROCESS.md` step 6 to your fetched
`drivers/bluetooth/btusb.c`, `btmtk.c`, and `btmtk.h`, and rebuild the DKMS
package pointing `dkms.conf` at that source.

## Known limitations

- **Bluetooth only.** This chip's WiFi half needs a separate, more invasive
  fix — different MCU ring/queue layout, not just a device-ID table entry —
  and isn't covered by this repo (yet).
- Tied to the exact kernel source it was built against. A future kernel
  update that meaningfully changes `drivers/bluetooth/btusb.c`/`btmtk.c`
  may require re-deriving the patch (see above) rather than just rebuilding.
- MediaTek has since posted an official upstream patch series for this chip
  family; once that lands in a stock kernel, this fix becomes unnecessary.

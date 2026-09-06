#!/usr/bin/env bash
# install-mt7902-bt.sh
#
# Installs a DKMS-managed fix for the MediaTek MT7902 (Filogic 310)
# Bluetooth controller (USB ID 13d3:3580 and siblings 3579/3594/3596),
# which stock Ubuntu btusb/btmtk do not yet recognize as a MediaTek
# device -- causing "Bluetooth: hci0: Opcode 0x0c03 failed: -110" and
# a controller that never powers up.
#
# What this does, precisely:
#   - Adds the missing BTUSB_MEDIATEK quirk entries for MT7902's USB IDs
#     to btusb.c
#   - Extends btmtk.c's dev_id switch/reset paths to handle 0x7902
#     alongside the existing 0x7922/0x7925/0x7961 MediaTek family
#   - Adds the FIRMWARE_MT7902 macro (firmware file itself ships in
#     Ubuntu's linux-firmware-mediatek package already; not fetched here)
#   - Builds btusb.ko + btmtk.ko via DKMS against your actual running
#     kernel's headers, so vermagic/modversions match for real -- no
#     --force, no bypassed compatibility checks
#
# Source of the patch: manually derived and hand-verified against
# Ubuntu's own kernel source package (not a third-party binary/module
# snapshot), validated on kernel 7.0.0-31-generic on this machine
# (Acer Aspire Lite AL15-41). See README.md alongside this script for
# the full derivation if you need to re-apply this against a kernel
# whose drivers/bluetooth/ has changed enough that the source here no
# longer applies cleanly (check via `dkms build`'s output for
# unexpected compile errors -- that's the sign to re-derive from a
# fresh `apt-get source linux` on the new kernel).
#
# This script installs an ALREADY-PREPARED patched source tree; it
# does not regenerate the patch from a stock kernel tree.
#
# Safe to re-run.

set -euo pipefail

PKG="mt7902-bt"
VER="1.0.0"
SRC_DIR="/usr/src/${PKG}-${VER}"
KVER="$(uname -r)"

if [ "$EUID" -ne 0 ]; then
    echo "Run with sudo: sudo $0" >&2
    exit 1
fi

if ! command -v dkms >/dev/null 2>&1; then
    echo "ERROR: dkms not found. Install it first: sudo apt install dkms" >&2
    exit 1
fi

if [ ! -d "$SRC_DIR" ]; then
    echo "ERROR: $SRC_DIR not found." >&2
    echo "This script installs a pre-existing patched DKMS source tree;" >&2
    echo "it does not create it. Copy the patched drivers/bluetooth/" >&2
    echo "directory + dkms.conf to $SRC_DIR first." >&2
    exit 1
fi

if [ ! -f "$SRC_DIR/dkms.conf" ]; then
    echo "ERROR: $SRC_DIR/dkms.conf not found. Incomplete source tree." >&2
    exit 1
fi

if [ ! -f "/lib/modules/${KVER}/build/Module.symvers" ]; then
    echo "ERROR: matching kernel headers not found for ${KVER}." >&2
    echo "Install them first: sudo apt install linux-headers-${KVER}" >&2
    exit 1
fi

echo "==> Kernel headers OK for ${KVER}"

# Idempotent: if this exact kernel already has it installed, do a clean
# reinstall rather than erroring out or silently no-op'ing.
if dkms status "${PKG}/${VER}" 2>/dev/null | grep -q ", ${KVER},"; then
    echo "==> ${PKG}/${VER} already present for ${KVER}; removing before reinstall"
    dkms remove "${PKG}/${VER}" -k "${KVER}"
fi

# 'add' errors harmlessly if already registered for other kernels; that's fine.
dkms add "${PKG}/${VER}" 2>/dev/null || true

echo "==> Building ${PKG}/${VER} for ${KVER}"
dkms build "${PKG}/${VER}" -k "${KVER}"

echo "==> Installing ${PKG}/${VER} for ${KVER}"
dkms install "${PKG}/${VER}" -k "${KVER}"

depmod -a

echo "==> Reloading btusb/btmtk now (no reboot required)"
modprobe -r btusb btmtk 2>/dev/null || true
modprobe btmtk
modprobe btusb

echo
echo "==> Done. Verify:"
echo "    modinfo btmtk | grep filename     # should show /updates/dkms/"
echo "    sudo dmesg | grep hci0            # expect 'Device setup in ... usecs',"
echo "                                       # NOT 'Opcode 0x0c03 failed: -110'"
echo "    bluetoothctl show                 # expect 'Powered: yes'"

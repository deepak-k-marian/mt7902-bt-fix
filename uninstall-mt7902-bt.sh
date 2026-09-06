#!/usr/bin/env bash
# uninstall-mt7902-bt.sh
#
# Cleanly reverts install-mt7902-bt.sh. DKMS archived Ubuntu's original
# stock btusb.ko/btmtk.ko at install time (you'll have seen "Found
# pre-existing ..., archiving for uninstallation" in the install log);
# `dkms remove` restores that archived original automatically as part
# of removing the override.
#
# This does NOT touch /usr/src/<pkg>-<ver> (the patched source tree)
# unless you confirm at the prompt below -- so you can re-install later
# without regenerating anything.

set -euo pipefail

PKG="mt7902-bt"
VER="1.0.0"

if [ "$EUID" -ne 0 ]; then
    echo "Run with sudo: sudo $0" >&2
    exit 1
fi

if ! command -v dkms >/dev/null 2>&1; then
    echo "ERROR: dkms not found -- nothing for this script to do." >&2
    exit 1
fi

if ! dkms status "${PKG}/${VER}" 2>/dev/null | grep -q .; then
    echo "==> ${PKG}/${VER} is not registered with DKMS. Nothing to remove."
    exit 0
fi

echo "==> Current registration:"
dkms status "${PKG}/${VER}"

echo "==> Removing ${PKG}/${VER} for all installed kernels"
echo "    (DKMS restores the stock module it archived at install time)"
dkms remove "${PKG}/${VER}" --all

depmod -a

echo "==> Reloading btusb/btmtk (restores stock behavior immediately, no reboot needed)"
modprobe -r btusb btmtk 2>/dev/null || true
modprobe btmtk
modprobe btusb

echo
echo "==> Done. Verify the stock module is back:"
echo "    modinfo btmtk | grep filename"
echo "    sudo dmesg | grep hci0"
echo
echo "Note: reverting means the original MT7902 Bluetooth issue returns"
echo "('Opcode 0x0c03 failed: -110', controller never powers up) -- that"
echo "confirms the rollback worked, it is not a new problem."
echo
echo "A second, independent backup of the original .ko.zst files (made"
echo "before this fix was first installed) also still exists at:"
echo "    ~/bt-mt7902-backup/"
echo "if you ever need to restore manually instead of via DKMS."

read -r -p "Also delete the DKMS source tree at /usr/src/${PKG}-${VER}? [y/N] " REPLY
echo
if [[ "$REPLY" =~ ^[Yy]$ ]]; then
    rm -rf "/usr/src/${PKG}-${VER}"
    echo "==> Removed /usr/src/${PKG}-${VER}"
else
    echo "==> Left /usr/src/${PKG}-${VER} in place for future reinstall"
fi

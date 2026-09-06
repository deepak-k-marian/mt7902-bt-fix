savedcmd_hci_vhci.mod := printf '%s\n'   hci_vhci.o | awk '!x[$$0]++ { print("./"$$0) }' > hci_vhci.mod

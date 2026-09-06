savedcmd_hci_bcm4377.mod := printf '%s\n'   hci_bcm4377.o | awk '!x[$$0]++ { print("./"$$0) }' > hci_bcm4377.mod

savedcmd_hci_nokia.mod := printf '%s\n'   hci_nokia.o | awk '!x[$$0]++ { print("./"$$0) }' > hci_nokia.mod

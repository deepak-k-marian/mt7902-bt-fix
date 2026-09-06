savedcmd_bfusb.mod := printf '%s\n'   bfusb.o | awk '!x[$$0]++ { print("./"$$0) }' > bfusb.mod

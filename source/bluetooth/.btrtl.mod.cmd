savedcmd_btrtl.mod := printf '%s\n'   btrtl.o | awk '!x[$$0]++ { print("./"$$0) }' > btrtl.mod

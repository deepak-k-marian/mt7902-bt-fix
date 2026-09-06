savedcmd_btintel.mod := printf '%s\n'   btintel.o | awk '!x[$$0]++ { print("./"$$0) }' > btintel.mod

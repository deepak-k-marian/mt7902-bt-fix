savedcmd_btqca.mod := printf '%s\n'   btqca.o | awk '!x[$$0]++ { print("./"$$0) }' > btqca.mod

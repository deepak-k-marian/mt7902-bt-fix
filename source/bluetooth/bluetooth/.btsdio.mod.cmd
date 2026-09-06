savedcmd_btsdio.mod := printf '%s\n'   btsdio.o | awk '!x[$$0]++ { print("./"$$0) }' > btsdio.mod

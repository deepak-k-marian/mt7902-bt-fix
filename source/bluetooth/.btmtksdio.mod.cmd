savedcmd_btmtksdio.mod := printf '%s\n'   btmtksdio.o | awk '!x[$$0]++ { print("./"$$0) }' > btmtksdio.mod

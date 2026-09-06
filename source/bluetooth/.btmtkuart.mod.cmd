savedcmd_btmtkuart.mod := printf '%s\n'   btmtkuart.o | awk '!x[$$0]++ { print("./"$$0) }' > btmtkuart.mod

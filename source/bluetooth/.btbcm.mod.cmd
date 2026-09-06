savedcmd_btbcm.mod := printf '%s\n'   btbcm.o | awk '!x[$$0]++ { print("./"$$0) }' > btbcm.mod

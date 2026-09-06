savedcmd_bluecard_cs.mod := printf '%s\n'   bluecard_cs.o | awk '!x[$$0]++ { print("./"$$0) }' > bluecard_cs.mod

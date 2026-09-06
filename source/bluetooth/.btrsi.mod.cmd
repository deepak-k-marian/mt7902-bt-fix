savedcmd_btrsi.mod := printf '%s\n'   btrsi.o | awk '!x[$$0]++ { print("./"$$0) }' > btrsi.mod

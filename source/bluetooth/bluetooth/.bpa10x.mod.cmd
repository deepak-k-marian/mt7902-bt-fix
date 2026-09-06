savedcmd_bpa10x.mod := printf '%s\n'   bpa10x.o | awk '!x[$$0]++ { print("./"$$0) }' > bpa10x.mod

savedcmd_bcm203x.mod := printf '%s\n'   bcm203x.o | awk '!x[$$0]++ { print("./"$$0) }' > bcm203x.mod

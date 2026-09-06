savedcmd_dtl1_cs.mod := printf '%s\n'   dtl1_cs.o | awk '!x[$$0]++ { print("./"$$0) }' > dtl1_cs.mod

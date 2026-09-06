savedcmd_bt3c_cs.mod := printf '%s\n'   bt3c_cs.o | awk '!x[$$0]++ { print("./"$$0) }' > bt3c_cs.mod

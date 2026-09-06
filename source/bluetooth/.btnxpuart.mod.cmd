savedcmd_btnxpuart.mod := printf '%s\n'   btnxpuart.o | awk '!x[$$0]++ { print("./"$$0) }' > btnxpuart.mod

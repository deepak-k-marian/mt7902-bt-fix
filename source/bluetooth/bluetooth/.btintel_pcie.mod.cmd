savedcmd_btintel_pcie.mod := printf '%s\n'   btintel_pcie.o | awk '!x[$$0]++ { print("./"$$0) }' > btintel_pcie.mod

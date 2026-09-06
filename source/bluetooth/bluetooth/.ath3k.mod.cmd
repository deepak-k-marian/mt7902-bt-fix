savedcmd_ath3k.mod := printf '%s\n'   ath3k.o | awk '!x[$$0]++ { print("./"$$0) }' > ath3k.mod

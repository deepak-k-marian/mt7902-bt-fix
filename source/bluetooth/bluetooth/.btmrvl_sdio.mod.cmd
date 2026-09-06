savedcmd_btmrvl_sdio.mod := printf '%s\n'   btmrvl_sdio.o | awk '!x[$$0]++ { print("./"$$0) }' > btmrvl_sdio.mod

savedcmd_btmrvl.mod := printf '%s\n'   btmrvl_main.o btmrvl_debugfs.o | awk '!x[$$0]++ { print("./"$$0) }' > btmrvl.mod

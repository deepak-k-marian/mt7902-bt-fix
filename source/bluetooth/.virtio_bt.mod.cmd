savedcmd_virtio_bt.mod := printf '%s\n'   virtio_bt.o | awk '!x[$$0]++ { print("./"$$0) }' > virtio_bt.mod

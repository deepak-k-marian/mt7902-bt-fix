savedcmd_btmrvl.o := ld -m elf_x86_64 -z noexecstack --no-warn-rwx-segments   -r -o btmrvl.o @btmrvl.mod  ; /usr/src/linux-headers-7.0.0-31-generic/tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --retpoline --rethunk --sls --stackval --static-call --uaccess --prefix=16  --link  --module btmrvl.o

btmrvl.o: $(wildcard /usr/src/linux-headers-7.0.0-31-generic/tools/objtool/objtool)

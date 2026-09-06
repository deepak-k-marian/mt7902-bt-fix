#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(rsi_bt_ops, "", "");

SYMBOL_CRC(rsi_bt_ops, 0x42b3de20, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x5d051a5e, "skb_realloc_headroom" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xf122d403, "skb_push" },
	{ 0xf122d403, "skb_pull" },
	{ 0xfbe7861b, "memmove" },
	{ 0x65ed6ca7, "skb_trim" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x553959eb, "bt_err" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x7c7f31b9, "__netdev_alloc_skb" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xf122d403, "skb_put" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x21891121,
	0x21891121,
	0xcb8b6ec6,
	0x5a844b26,
	0x5d051a5e,
	0xcb138788,
	0xf122d403,
	0xf122d403,
	0xfbe7861b,
	0x65ed6ca7,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x87510f11,
	0x41a2b9f1,
	0x553959eb,
	0xd272d446,
	0xd272d446,
	0x7c7f31b9,
	0xfbe7861b,
	0xf122d403,
	0x9131c961,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"kfree\0"
	"__x86_indirect_thunk_rax\0"
	"skb_realloc_headroom\0"
	"sk_skb_reason_drop\0"
	"skb_push\0"
	"skb_pull\0"
	"memmove\0"
	"skb_trim\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"hci_alloc_dev_priv\0"
	"hci_register_dev\0"
	"bt_err\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__netdev_alloc_skb\0"
	"memcpy\0"
	"skb_put\0"
	"hci_recv_frame\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "0A481D0AA4A48D57124CF2C");

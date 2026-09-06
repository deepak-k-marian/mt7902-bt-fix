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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x773eb86a, "usb_alloc_urb" },
	{ 0xf122d403, "skb_push" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0xacefd448, "usb_anchor_urb" },
	{ 0x0b0a7e9f, "usb_submit_urb" },
	{ 0x251d9cb7, "usb_free_urb" },
	{ 0x553959eb, "bt_err" },
	{ 0x251d9cb7, "usb_unanchor_urb" },
	{ 0x553959eb, "bt_info" },
	{ 0x14890a55, "hci_set_fw_info" },
	{ 0x8e5a9bc9, "usb_kill_anchored_urbs" },
	{ 0xbb64fac7, "h4_recv_buf" },
	{ 0x645ed827, "usb_deregister" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x9131c961, "hci_recv_diag" },
	{ 0xd272d446, "__fentry__" },
	{ 0x3fc0ae15, "usb_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0xcb8b6ec6,
	0x773eb86a,
	0xf122d403,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0xacefd448,
	0x0b0a7e9f,
	0x251d9cb7,
	0x553959eb,
	0x251d9cb7,
	0x553959eb,
	0x14890a55,
	0x8e5a9bc9,
	0xbb64fac7,
	0x645ed827,
	0xb6b7f2c0,
	0xe804603d,
	0x87510f11,
	0x41a2b9f1,
	0x9131c961,
	0x9131c961,
	0xd272d446,
	0x3fc0ae15,
	0xd272d446,
	0x21891121,
	0x21891121,
	0xcb138788,
	0x30eb81ed,
	0xd272d446,
	0xbd03ed67,
	0xf68beac4,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__stack_chk_fail\0"
	"kfree\0"
	"usb_alloc_urb\0"
	"skb_push\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"usb_anchor_urb\0"
	"usb_submit_urb\0"
	"usb_free_urb\0"
	"bt_err\0"
	"usb_unanchor_urb\0"
	"bt_info\0"
	"hci_set_fw_info\0"
	"usb_kill_anchored_urbs\0"
	"h4_recv_buf\0"
	"usb_deregister\0"
	"devm_kmalloc\0"
	"__init_waitqueue_head\0"
	"hci_alloc_dev_priv\0"
	"hci_register_dev\0"
	"hci_recv_frame\0"
	"hci_recv_diag\0"
	"__fentry__\0"
	"usb_register_driver\0"
	"__x86_return_thunk\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"sk_skb_reason_drop\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"__ref_stack_chk_guard\0"
	"__hci_cmd_sync\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,hci_uart");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "40485229D233CFAC856C148");

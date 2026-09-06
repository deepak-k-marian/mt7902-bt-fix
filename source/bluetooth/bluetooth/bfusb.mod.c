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
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x251d9cb7, "usb_free_urb" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x0b0a7e9f, "usb_submit_urb" },
	{ 0x553959eb, "bt_err" },
	{ 0x93618180, "skb_unlink" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0x773eb86a, "usb_alloc_urb" },
	{ 0xe6111b34, "_raw_read_lock" },
	{ 0xe6111b34, "_raw_read_unlock" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x285cc76d, "request_firmware" },
	{ 0x553959eb, "bt_info" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0xc9e0b93e, "usb_control_msg" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xda0450c1, "usb_bulk_msg" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x645ed827, "usb_deregister" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_push" },
	{ 0xf122d403, "skb_put" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xd272d446, "__fentry__" },
	{ 0x3fc0ae15, "usb_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x5352a048, "_raw_write_lock_irqsave" },
	{ 0x7cd8c895, "_raw_write_unlock_irqrestore" },
	{ 0x251d9cb7, "usb_kill_urb" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x464ea3f9,
	0x251d9cb7,
	0x21891121,
	0x21891121,
	0x0b0a7e9f,
	0x553959eb,
	0x93618180,
	0x464ea3f9,
	0x773eb86a,
	0xe6111b34,
	0xe6111b34,
	0xbd03ed67,
	0xb6b7f2c0,
	0x285cc76d,
	0x553959eb,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0xc9e0b93e,
	0xfbe7861b,
	0xda0450c1,
	0xcb8b6ec6,
	0x1abc7887,
	0x87510f11,
	0x41a2b9f1,
	0xd272d446,
	0x645ed827,
	0x6780c24b,
	0xf122d403,
	0xf122d403,
	0x9131c961,
	0xd272d446,
	0x3fc0ae15,
	0xd272d446,
	0xde299862,
	0xcb138788,
	0x30eb81ed,
	0xd272d446,
	0xe81a5327,
	0x5352a048,
	0x7cd8c895,
	0x251d9cb7,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"skb_queue_tail\0"
	"usb_free_urb\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"usb_submit_urb\0"
	"bt_err\0"
	"skb_unlink\0"
	"skb_queue_head\0"
	"usb_alloc_urb\0"
	"_raw_read_lock\0"
	"_raw_read_unlock\0"
	"__ref_stack_chk_guard\0"
	"devm_kmalloc\0"
	"request_firmware\0"
	"bt_info\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"usb_control_msg\0"
	"memcpy\0"
	"usb_bulk_msg\0"
	"kfree\0"
	"release_firmware\0"
	"hci_alloc_dev_priv\0"
	"hci_register_dev\0"
	"__stack_chk_fail\0"
	"usb_deregister\0"
	"__alloc_skb\0"
	"skb_push\0"
	"skb_put\0"
	"hci_recv_frame\0"
	"__fentry__\0"
	"usb_register_driver\0"
	"__x86_return_thunk\0"
	"skb_dequeue\0"
	"sk_skb_reason_drop\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"skb_queue_purge_reason\0"
	"_raw_write_lock_irqsave\0"
	"_raw_write_unlock_irqrestore\0"
	"usb_kill_urb\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "50443D0946E56D4C0FBCC46");

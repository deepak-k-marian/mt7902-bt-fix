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
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0xcf1ca6d3, "sdio_claim_host" },
	{ 0x01761acb, "sdio_writeb" },
	{ 0x233dde08, "sdio_release_irq" },
	{ 0x233dde08, "sdio_disable_func" },
	{ 0xcf1ca6d3, "sdio_release_host" },
	{ 0x233dde08, "sdio_enable_func" },
	{ 0xb359fb01, "sdio_claim_irq" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xf122d403, "skb_push" },
	{ 0x193951ea, "sdio_writesb" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xf122d403, "skb_pull" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xac82d61d, "sdio_unregister_driver" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x1b024e60, "sdio_readb" },
	{ 0xfb95a300, "sdio_readsb" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xd272d446, "__fentry__" },
	{ 0xf00b4892, "__sdio_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe81a5327,
	0xcf1ca6d3,
	0x01761acb,
	0x233dde08,
	0x233dde08,
	0xcf1ca6d3,
	0x233dde08,
	0xb359fb01,
	0xde299862,
	0xf122d403,
	0x193951ea,
	0xcb138788,
	0xf122d403,
	0x464ea3f9,
	0xb6b7f2c0,
	0x87510f11,
	0x41a2b9f1,
	0xac82d61d,
	0xbd03ed67,
	0x1b024e60,
	0xfb95a300,
	0x6780c24b,
	0xf122d403,
	0x9131c961,
	0xd272d446,
	0x464ea3f9,
	0xaef1f20d,
	0x49733ad6,
	0xd272d446,
	0xf00b4892,
	0xd272d446,
	0x2d88a3ab,
	0x21891121,
	0x21891121,
	0x30eb81ed,
	0xd272d446,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"skb_queue_purge_reason\0"
	"sdio_claim_host\0"
	"sdio_writeb\0"
	"sdio_release_irq\0"
	"sdio_disable_func\0"
	"sdio_release_host\0"
	"sdio_enable_func\0"
	"sdio_claim_irq\0"
	"skb_dequeue\0"
	"skb_push\0"
	"sdio_writesb\0"
	"sk_skb_reason_drop\0"
	"skb_pull\0"
	"skb_queue_head\0"
	"devm_kmalloc\0"
	"hci_alloc_dev_priv\0"
	"hci_register_dev\0"
	"sdio_unregister_driver\0"
	"__ref_stack_chk_guard\0"
	"sdio_readb\0"
	"sdio_readsb\0"
	"__alloc_skb\0"
	"skb_put\0"
	"hci_recv_frame\0"
	"__stack_chk_fail\0"
	"skb_queue_tail\0"
	"system_percpu_wq\0"
	"queue_work_on\0"
	"__fentry__\0"
	"__sdio_register_driver\0"
	"__x86_return_thunk\0"
	"cancel_work_sync\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");

MODULE_INFO(srcversion, "D2CA2B4BB733DE135B2CE4B");

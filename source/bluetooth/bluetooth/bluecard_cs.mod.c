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
	{ 0xd03c3ede, "pcmcia_disable_device" },
	{ 0xd02ffbde, "pcmcia_request_irq" },
	{ 0x9c22e1c5, "pcmcia_enable_device" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x67628f51, "msleep" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x553959eb, "bt_err" },
	{ 0x3b9a1bba, "pcmcia_dev_present" },
	{ 0xde299862, "skb_dequeue" },
	{ 0x024101ca, "pv_ops" },
	{ 0xd272d446, "BUG_func" },
	{ 0xf122d403, "skb_pull" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xf122d403, "skb_put" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0xf122d403, "skb_push" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0xd272d446, "__fentry__" },
	{ 0xb1f836e7, "pcmcia_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x058c185a, "jiffies" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x5f57d57d, "pcmcia_unregister_driver" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x9c22e1c5, "pcmcia_request_io" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd03c3ede,
	0xd02ffbde,
	0x9c22e1c5,
	0x02f9bbf0,
	0x87510f11,
	0x67628f51,
	0x41a2b9f1,
	0x553959eb,
	0x3b9a1bba,
	0xde299862,
	0x024101ca,
	0xd272d446,
	0xf122d403,
	0x464ea3f9,
	0xcb138788,
	0xcbae5412,
	0xbd03ed67,
	0xf122d403,
	0x6780c24b,
	0x9131c961,
	0x90a48d82,
	0xd272d446,
	0x5af09d8b,
	0x5af09d8b,
	0xf122d403,
	0x464ea3f9,
	0xd272d446,
	0xb1f836e7,
	0xd272d446,
	0xe81a5327,
	0x2352b148,
	0x058c185a,
	0x32feeafc,
	0x5f57d57d,
	0x21891121,
	0x21891121,
	0xb6b7f2c0,
	0x9c22e1c5,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"pcmcia_disable_device\0"
	"pcmcia_request_irq\0"
	"pcmcia_enable_device\0"
	"timer_init_key\0"
	"hci_alloc_dev_priv\0"
	"msleep\0"
	"hci_register_dev\0"
	"bt_err\0"
	"pcmcia_dev_present\0"
	"skb_dequeue\0"
	"pv_ops\0"
	"BUG_func\0"
	"skb_pull\0"
	"skb_queue_head\0"
	"sk_skb_reason_drop\0"
	"__const_udelay\0"
	"__ref_stack_chk_guard\0"
	"skb_put\0"
	"__alloc_skb\0"
	"hci_recv_frame\0"
	"__ubsan_handle_out_of_bounds\0"
	"__stack_chk_fail\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"skb_push\0"
	"skb_queue_tail\0"
	"__fentry__\0"
	"pcmcia_register_driver\0"
	"__x86_return_thunk\0"
	"skb_queue_purge_reason\0"
	"timer_delete_sync\0"
	"jiffies\0"
	"mod_timer\0"
	"pcmcia_unregister_driver\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"devm_kmalloc\0"
	"pcmcia_request_io\0"
	"module_layout\0"
;

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBAF16FBFpb657CC15Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3987764pb2524B59Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A0736ECpb24E6DFABpc*pd*");

MODULE_INFO(srcversion, "F42DFFF255D1A4AC461D52D");

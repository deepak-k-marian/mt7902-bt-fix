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
	{ 0x553959eb, "bt_err" },
	{ 0xf122d403, "skb_push" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xd03c3ede, "pcmcia_disable_device" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0xfd9b3927, "pcmcia_loop_config" },
	{ 0xd02ffbde, "pcmcia_request_irq" },
	{ 0x9c22e1c5, "pcmcia_enable_device" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x285cc76d, "request_firmware" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0xbd069841, "kstrtoull" },
	{ 0x8e142c2e, "kstrtouint" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x67628f51, "msleep" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0x553959eb, "bt_info" },
	{ 0xf122d403, "skb_put" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xb1f836e7, "pcmcia_register_driver" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x9c22e1c5, "pcmcia_request_io" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x5f57d57d, "pcmcia_unregister_driver" },
	{ 0x3b9a1bba, "pcmcia_dev_present" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x553959eb,
	0xf122d403,
	0x464ea3f9,
	0x11f4259a,
	0x444885a7,
	0x21891121,
	0x21891121,
	0xd03c3ede,
	0xbd03ed67,
	0xb6b7f2c0,
	0xfd9b3927,
	0xd02ffbde,
	0x9c22e1c5,
	0x87510f11,
	0x285cc76d,
	0xcbae5412,
	0xbd069841,
	0x8e142c2e,
	0x1abc7887,
	0x67628f51,
	0x41a2b9f1,
	0xd272d446,
	0x5af09d8b,
	0x5af09d8b,
	0x553959eb,
	0xf122d403,
	0x6780c24b,
	0x9131c961,
	0xd272d446,
	0xd272d446,
	0xb1f836e7,
	0xe81a5327,
	0x9c22e1c5,
	0x90a48d82,
	0x5f57d57d,
	0x3b9a1bba,
	0xde299862,
	0xcb138788,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"bt_err\0"
	"skb_push\0"
	"skb_queue_tail\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"pcmcia_disable_device\0"
	"__ref_stack_chk_guard\0"
	"devm_kmalloc\0"
	"pcmcia_loop_config\0"
	"pcmcia_request_irq\0"
	"pcmcia_enable_device\0"
	"hci_alloc_dev_priv\0"
	"request_firmware\0"
	"__const_udelay\0"
	"kstrtoull\0"
	"kstrtouint\0"
	"release_firmware\0"
	"msleep\0"
	"hci_register_dev\0"
	"__stack_chk_fail\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"bt_info\0"
	"skb_put\0"
	"__alloc_skb\0"
	"hci_recv_frame\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"pcmcia_register_driver\0"
	"skb_queue_purge_reason\0"
	"pcmcia_request_io\0"
	"__ubsan_handle_out_of_bounds\0"
	"pcmcia_unregister_driver\0"
	"pcmcia_dev_present\0"
	"skb_dequeue\0"
	"sk_skb_reason_drop\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEFCE0A31pb*pcD4CE9B02pd*");

MODULE_INFO(srcversion, "961A8E992FFA2DCD4023B7C");

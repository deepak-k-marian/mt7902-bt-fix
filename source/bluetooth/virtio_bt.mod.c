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
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x2d5c56a9, "virtio_reset_device" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0xda9ade42, "virtqueue_detach_unused_buf" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0x68bac0ae, "virtqueue_add_inbuf" },
	{ 0x553959eb, "bt_err_ratelimited" },
	{ 0xf122d403, "skb_put" },
	{ 0xf122d403, "skb_pull" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x3d90b337, "virtio_check_driver_offered_feature" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x4ee46bd1, "__register_virtio_driver" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0x553959eb, "bt_info" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x14890a55, "hci_set_fw_info" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xf122d403, "skb_push" },
	{ 0x66526f72, "sg_init_one" },
	{ 0x68bac0ae, "virtqueue_add_outbuf" },
	{ 0x79bf0e6d, "virtqueue_kick" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x8a7023ad, "virtqueue_get_buf" },
	{ 0x7d652503, "unregister_virtio_driver" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x21891121,
	0x2d5c56a9,
	0x2d88a3ab,
	0xda9ade42,
	0x7851be11,
	0x21891121,
	0x5a844b26,
	0xcb8b6ec6,
	0x6780c24b,
	0x68bac0ae,
	0x553959eb,
	0xf122d403,
	0xf122d403,
	0x9131c961,
	0xaef1f20d,
	0x49733ad6,
	0x7851be11,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x87510f11,
	0x3d90b337,
	0x41a2b9f1,
	0xd272d446,
	0xd272d446,
	0x4ee46bd1,
	0xf68beac4,
	0x553959eb,
	0xcb138788,
	0x14890a55,
	0xbd03ed67,
	0xf122d403,
	0x66526f72,
	0x68bac0ae,
	0x79bf0e6d,
	0xd272d446,
	0x8a7023ad,
	0x7d652503,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"hci_unregister_dev\0"
	"virtio_reset_device\0"
	"cancel_work_sync\0"
	"virtqueue_detach_unused_buf\0"
	"__SCT__cond_resched\0"
	"hci_free_dev\0"
	"__x86_indirect_thunk_rax\0"
	"kfree\0"
	"__alloc_skb\0"
	"virtqueue_add_inbuf\0"
	"bt_err_ratelimited\0"
	"skb_put\0"
	"skb_pull\0"
	"hci_recv_frame\0"
	"system_percpu_wq\0"
	"queue_work_on\0"
	"__SCT__might_resched\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"hci_alloc_dev_priv\0"
	"virtio_check_driver_offered_feature\0"
	"hci_register_dev\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__register_virtio_driver\0"
	"__hci_cmd_sync\0"
	"bt_info\0"
	"sk_skb_reason_drop\0"
	"hci_set_fw_info\0"
	"__ref_stack_chk_guard\0"
	"skb_push\0"
	"sg_init_one\0"
	"virtqueue_add_outbuf\0"
	"virtqueue_kick\0"
	"__stack_chk_fail\0"
	"virtqueue_get_buf\0"
	"unregister_virtio_driver\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("virtio:d00000028v*");

MODULE_INFO(srcversion, "171481A38741FC3B8270676");

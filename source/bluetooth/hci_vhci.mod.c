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
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xdfafb5b5, "kstrtobool_from_user" },
	{ 0x437e81c7, "simple_read_from_buffer" },
	{ 0x41a2b9f1, "hci_suspend_dev" },
	{ 0x41a2b9f1, "hci_resume_dev" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x6d6d291d, "nonseekable_open" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x0f490cb2, "debugfs_create_file_full" },
	{ 0xf122d403, "skb_put" },
	{ 0x553959eb, "bt_err" },
	{ 0xddb470cf, "_copy_from_iter" },
	{ 0xf122d403, "skb_pull" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x696ea24f, "iov_iter_revert" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0xb89645a0, "hci_devcd_init" },
	{ 0x4f2be87a, "hci_devcd_append" },
	{ 0x10c0e01f, "hci_devcd_abort" },
	{ 0x10c0e01f, "hci_devcd_complete" },
	{ 0x5a2322a3, "param_ops_bool" },
	{ 0xf40559ea, "simple_open" },
	{ 0xc1cd8d94, "default_llseek" },
	{ 0x4bd3c296, "debugfs_attr_read" },
	{ 0x444b656f, "debugfs_attr_write" },
	{ 0xf40559ea, "simple_attr_release" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0xe98a2697, "misc_register" },
	{ 0x85acaba2, "cancel_delayed_work_sync" },
	{ 0x2d88a3ab, "flush_work" },
	{ 0xab477787, "debugfs_lookup_and_remove" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xf122d403, "skb_push" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x8697a748, "simple_attr_open" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xde299862, "skb_dequeue" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xd272d446, "schedule" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0xb730487b, "finish_wait" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x155e60e3, "misc_deregister" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe4de56b4,
	0xdfafb5b5,
	0x437e81c7,
	0x41a2b9f1,
	0x41a2b9f1,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0xe804603d,
	0x9aa6980d,
	0x71798f7e,
	0x02f9bbf0,
	0x6d6d291d,
	0xaef1f20d,
	0x8ce83585,
	0x49733ad6,
	0x6780c24b,
	0x87510f11,
	0x41a2b9f1,
	0x0f490cb2,
	0xf122d403,
	0x553959eb,
	0xddb470cf,
	0xf122d403,
	0x9aa6980d,
	0x9aa6980d,
	0x9131c961,
	0x696ea24f,
	0x092a35a2,
	0xfbe7861b,
	0xf517dbbb,
	0xb89645a0,
	0x4f2be87a,
	0x10c0e01f,
	0x10c0e01f,
	0x5a2322a3,
	0xf40559ea,
	0xc1cd8d94,
	0x4bd3c296,
	0x444b656f,
	0xf40559ea,
	0xd272d446,
	0xd272d446,
	0x5a844b26,
	0xe98a2697,
	0x85acaba2,
	0x2d88a3ab,
	0xab477787,
	0x21891121,
	0x21891121,
	0xe81a5327,
	0xcb8b6ec6,
	0xf122d403,
	0x464ea3f9,
	0x68a1b6c6,
	0x8697a748,
	0xbd03ed67,
	0xde299862,
	0x7851be11,
	0x7a5ffe84,
	0xd272d446,
	0xc281f1fb,
	0xb730487b,
	0x5cb46e6d,
	0xa61fd7aa,
	0x092a35a2,
	0xcb138788,
	0x464ea3f9,
	0xd272d446,
	0x155e60e3,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__ubsan_handle_load_invalid_value\0"
	"kstrtobool_from_user\0"
	"simple_read_from_buffer\0"
	"hci_suspend_dev\0"
	"hci_resume_dev\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"__init_waitqueue_head\0"
	"mutex_init_generic\0"
	"delayed_work_timer_fn\0"
	"timer_init_key\0"
	"nonseekable_open\0"
	"system_percpu_wq\0"
	"queue_delayed_work_on\0"
	"queue_work_on\0"
	"__alloc_skb\0"
	"hci_alloc_dev_priv\0"
	"hci_register_dev\0"
	"debugfs_create_file_full\0"
	"skb_put\0"
	"bt_err\0"
	"_copy_from_iter\0"
	"skb_pull\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"hci_recv_frame\0"
	"iov_iter_revert\0"
	"_copy_from_user\0"
	"memcpy\0"
	"hci_devcd_register\0"
	"hci_devcd_init\0"
	"hci_devcd_append\0"
	"hci_devcd_abort\0"
	"hci_devcd_complete\0"
	"param_ops_bool\0"
	"simple_open\0"
	"default_llseek\0"
	"debugfs_attr_read\0"
	"debugfs_attr_write\0"
	"simple_attr_release\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__x86_indirect_thunk_rcx\0"
	"misc_register\0"
	"cancel_delayed_work_sync\0"
	"flush_work\0"
	"debugfs_lookup_and_remove\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"skb_queue_purge_reason\0"
	"kfree\0"
	"skb_push\0"
	"skb_queue_tail\0"
	"__wake_up\0"
	"simple_attr_open\0"
	"__ref_stack_chk_guard\0"
	"skb_dequeue\0"
	"__SCT__might_resched\0"
	"init_wait_entry\0"
	"schedule\0"
	"prepare_to_wait_event\0"
	"finish_wait\0"
	"validate_usercopy_range\0"
	"__check_object_size\0"
	"_copy_to_user\0"
	"sk_skb_reason_drop\0"
	"skb_queue_head\0"
	"__stack_chk_fail\0"
	"misc_deregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5A18ADBA8DA4C4680919B77");

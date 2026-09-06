#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btmrvl_interrupt, "_gpl", "");
KSYMTAB_FUNC(btmrvl_check_evtpkt, "_gpl", "");
KSYMTAB_FUNC(btmrvl_process_event, "_gpl", "");
KSYMTAB_FUNC(btmrvl_send_module_cfg_cmd, "_gpl", "");
KSYMTAB_FUNC(btmrvl_pscan_window_reporting, "_gpl", "");
KSYMTAB_FUNC(btmrvl_send_hscfg_cmd, "_gpl", "");
KSYMTAB_FUNC(btmrvl_enable_ps, "_gpl", "");
KSYMTAB_FUNC(btmrvl_enable_hs, "_gpl", "");
KSYMTAB_FUNC(btmrvl_register_hdev, "_gpl", "");
KSYMTAB_FUNC(btmrvl_add_card, "_gpl", "");
KSYMTAB_FUNC(btmrvl_remove_card, "_gpl", "");

SYMBOL_CRC(btmrvl_interrupt, 0x9f93d732, "_gpl");
SYMBOL_CRC(btmrvl_check_evtpkt, 0x6b68f237, "_gpl");
SYMBOL_CRC(btmrvl_process_event, 0x673b0179, "_gpl");
SYMBOL_CRC(btmrvl_send_module_cfg_cmd, 0x158ed30a, "_gpl");
SYMBOL_CRC(btmrvl_pscan_window_reporting, 0x158ed30a, "_gpl");
SYMBOL_CRC(btmrvl_send_hscfg_cmd, 0x86f73528, "_gpl");
SYMBOL_CRC(btmrvl_enable_ps, 0x86f73528, "_gpl");
SYMBOL_CRC(btmrvl_enable_hs, 0x86f73528, "_gpl");
SYMBOL_CRC(btmrvl_register_hdev, 0x86f73528, "_gpl");
SYMBOL_CRC(btmrvl_add_card, 0x566020f2, "_gpl");
SYMBOL_CRC(btmrvl_remove_card, 0x86f73528, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0xd272d446, "__fentry__" },
	{ 0x42baf079, "wake_up_process" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "schedule" },
	{ 0x57fa0ee9, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xf40559ea, "simple_open" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xf122d403, "skb_push" },
	{ 0xfb65ef62, "debugfs_remove" },
	{ 0x8b881dc5, "const_current_task" },
	{ 0x2794f3c0, "kthread_stop" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0xc1cd8d94, "default_llseek" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2247bd2b, "default_wake_function" },
	{ 0xd43bb0d3, "kstrtol_from_user" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0xc58fccce, "debugfs_create_x16" },
	{ 0x553959eb, "bt_err" },
	{ 0xca31368d, "kthread_create_on_node" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x0f490cb2, "debugfs_create_file_full" },
	{ 0xb730487b, "remove_wait_queue" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xfd22b0a8, "debugfs_create_u8" },
	{ 0x8d5972d1, "debugfs_create_dir" },
	{ 0x437e81c7, "simple_read_from_buffer" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0xf122d403, "skb_put" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x40a621c5, "snprintf" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xb730487b, "finish_wait" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xb730487b, "add_wait_queue" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xc281f1fb,
	0x5e505530,
	0x68a1b6c6,
	0x11f4259a,
	0xd272d446,
	0x42baf079,
	0xe81a5327,
	0x5a844b26,
	0xd272d446,
	0xbd03ed67,
	0x6ac784f4,
	0xd272d446,
	0x57fa0ee9,
	0xd272d446,
	0x6780c24b,
	0x464ea3f9,
	0x7a5ffe84,
	0xf40559ea,
	0xcb138788,
	0xbd03ed67,
	0xf122d403,
	0xfb65ef62,
	0x8b881dc5,
	0x2794f3c0,
	0x444885a7,
	0xc1cd8d94,
	0xd272d446,
	0x2247bd2b,
	0xd43bb0d3,
	0xe804603d,
	0xc58fccce,
	0x553959eb,
	0xca31368d,
	0x21891121,
	0x30eb81ed,
	0x4574d0c7,
	0x0f490cb2,
	0xb730487b,
	0x41a2b9f1,
	0xe4de56b4,
	0xf68beac4,
	0xfd22b0a8,
	0x8d5972d1,
	0x437e81c7,
	0x7851be11,
	0xc4fee520,
	0xb2e62cba,
	0x464ea3f9,
	0xf122d403,
	0x21891121,
	0x40a621c5,
	0xde299862,
	0xb730487b,
	0xfbe7861b,
	0x87510f11,
	0xcb8b6ec6,
	0xb730487b,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"prepare_to_wait_event\0"
	"kthread_should_stop\0"
	"__wake_up\0"
	"_raw_spin_lock_irqsave\0"
	"__fentry__\0"
	"wake_up_process\0"
	"skb_queue_purge_reason\0"
	"__x86_indirect_thunk_rax\0"
	"dump_stack\0"
	"__ref_stack_chk_guard\0"
	"schedule_timeout\0"
	"schedule\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"__alloc_skb\0"
	"skb_queue_tail\0"
	"init_wait_entry\0"
	"simple_open\0"
	"sk_skb_reason_drop\0"
	"random_kmalloc_seed\0"
	"skb_push\0"
	"debugfs_remove\0"
	"const_current_task\0"
	"kthread_stop\0"
	"_raw_spin_unlock_irqrestore\0"
	"default_llseek\0"
	"__x86_return_thunk\0"
	"default_wake_function\0"
	"kstrtol_from_user\0"
	"__init_waitqueue_head\0"
	"debugfs_create_x16\0"
	"bt_err\0"
	"kthread_create_on_node\0"
	"hci_unregister_dev\0"
	"__dynamic_pr_debug\0"
	"__kmalloc_cache_noprof\0"
	"debugfs_create_file_full\0"
	"remove_wait_queue\0"
	"hci_register_dev\0"
	"__ubsan_handle_load_invalid_value\0"
	"__hci_cmd_sync\0"
	"debugfs_create_u8\0"
	"debugfs_create_dir\0"
	"simple_read_from_buffer\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"skb_queue_head\0"
	"skb_put\0"
	"hci_free_dev\0"
	"snprintf\0"
	"skb_dequeue\0"
	"finish_wait\0"
	"memcpy\0"
	"hci_alloc_dev_priv\0"
	"kfree\0"
	"add_wait_queue\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "F2E01FEBFA52BAAF2D60F04");

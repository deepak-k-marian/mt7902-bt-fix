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
	{ 0x80977f86, "serdev_device_write_buf" },
	{ 0xe419cfc2, "serdev_device_wait_until_sent" },
	{ 0x888b8f57, "strcmp" },
	{ 0x285cc76d, "request_firmware_direct" },
	{ 0x895c5424, "device_property_read_string" },
	{ 0x8badee2a, "driver_unregister" },
	{ 0x8e3336dd, "disable_irq" },
	{ 0xfe9be5a6, "irq_set_irq_wake" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x8e3336dd, "enable_irq" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0x058c185a, "jiffies" },
	{ 0x32feeafc, "mod_timer" },
	{ 0xbb64fac7, "h4_recv_buf" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x0853e371, "device_get_match_data" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x79cc75b3, "device_property_read_u32_array" },
	{ 0x9bf5aeec, "crc8_populate_msb" },
	{ 0x06a4ff74, "__devm_reset_control_get" },
	{ 0x60522fc7, "devm_regulator_get_enable" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x78379b76, "reset_control_deassert" },
	{ 0x196aad98, "device_property_read_u8_array" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xfe330516, "devm_gpiod_get_optional" },
	{ 0x553959eb, "bt_warn" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0x97b56d08, "devm_request_threaded_irq" },
	{ 0x2aecda4b, "device_set_wakeup_capable" },
	{ 0x0394badf, "device_wakeup_enable" },
	{ 0x78379b76, "reset_control_assert" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x003f084b, "_dev_err" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0xb89645a0, "hci_devcd_init" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x24380e4e, "skb_clone" },
	{ 0x4f2be87a, "hci_devcd_append" },
	{ 0x10c0e01f, "hci_devcd_complete" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xf122d403, "skb_pull" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0xf122d403, "skb_push" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x2d449822, "hci_cmd_sync_queue" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0x2d88a3ab, "flush_work" },
	{ 0x2352b148, "timer_shutdown_sync" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0x8cdd43c2, "crc8" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x8f103771, "__serdev_device_driver_register" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0xbd2119fb, "gpiod_set_value_cansleep" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x9d4ad279, "serdev_device_break_ctl" },
	{ 0x67628f51, "msleep" },
	{ 0x152a7579, "serdev_device_set_tiocm" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x40a621c5, "snprintf" },
	{ 0x1899fa1f, "kobject_uevent_env" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xf4ea0980, "__hci_cmd_sync_status" },
	{ 0x553959eb, "bt_err" },
	{ 0xaad8cb6e, "serdev_device_set_baudrate" },
	{ 0x8e6ff9ac, "serdev_device_set_flow_control" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xb730487b, "finish_wait" },
	{ 0x553959eb, "bt_info" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x6a415a87, "serdev_device_write_flush" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x6a415a87, "serdev_device_close" },
	{ 0xa78b01f6, "serdev_device_open" },
	{ 0x6a415a87, "serdev_device_write_wakeup" },
	{ 0x8bc8f40f, "crc32_be" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x80977f86,
	0xe419cfc2,
	0x888b8f57,
	0x285cc76d,
	0x895c5424,
	0x8badee2a,
	0x8e3336dd,
	0xfe9be5a6,
	0xe4de56b4,
	0x8e3336dd,
	0x534ed5f3,
	0x058c185a,
	0x32feeafc,
	0xbb64fac7,
	0xb6b7f2c0,
	0x0853e371,
	0xe804603d,
	0x79cc75b3,
	0x9bf5aeec,
	0x06a4ff74,
	0x60522fc7,
	0x87510f11,
	0x78379b76,
	0x196aad98,
	0x41a2b9f1,
	0xfe330516,
	0x553959eb,
	0x9aa6980d,
	0x02f9bbf0,
	0xf517dbbb,
	0x97b56d08,
	0x2aecda4b,
	0x0394badf,
	0x78379b76,
	0x21891121,
	0x003f084b,
	0x6780c24b,
	0xf122d403,
	0x9131c961,
	0x44010dfe,
	0xb89645a0,
	0x8ce83585,
	0x24380e4e,
	0x4f2be87a,
	0x10c0e01f,
	0xde299862,
	0xf122d403,
	0x464ea3f9,
	0xf122d403,
	0x464ea3f9,
	0x2d449822,
	0xf68beac4,
	0x2d88a3ab,
	0x2352b148,
	0x21891121,
	0x9f3b7783,
	0x8cdd43c2,
	0xd272d446,
	0xd272d446,
	0x5a844b26,
	0x8f103771,
	0x68a1b6c6,
	0x9aa6980d,
	0xbd2119fb,
	0x9aa6980d,
	0xaef1f20d,
	0x49733ad6,
	0x9d4ad279,
	0x67628f51,
	0x152a7579,
	0x30eb81ed,
	0xd272d446,
	0xbd03ed67,
	0x40a621c5,
	0x1899fa1f,
	0xd272d446,
	0xf4ea0980,
	0x553959eb,
	0xaad8cb6e,
	0x8e6ff9ac,
	0x7851be11,
	0x9479a1e8,
	0x0feb1e94,
	0x7a5ffe84,
	0xc281f1fb,
	0x6ac784f4,
	0xb730487b,
	0x553959eb,
	0x1abc7887,
	0xe54e0a6b,
	0x6a415a87,
	0xe81a5327,
	0x2d88a3ab,
	0xcb138788,
	0x6a415a87,
	0xa78b01f6,
	0x6a415a87,
	0x8bc8f40f,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"serdev_device_write_buf\0"
	"serdev_device_wait_until_sent\0"
	"strcmp\0"
	"request_firmware_direct\0"
	"device_property_read_string\0"
	"driver_unregister\0"
	"disable_irq\0"
	"irq_set_irq_wake\0"
	"__ubsan_handle_load_invalid_value\0"
	"enable_irq\0"
	"__msecs_to_jiffies\0"
	"jiffies\0"
	"mod_timer\0"
	"h4_recv_buf\0"
	"devm_kmalloc\0"
	"device_get_match_data\0"
	"__init_waitqueue_head\0"
	"device_property_read_u32_array\0"
	"crc8_populate_msb\0"
	"__devm_reset_control_get\0"
	"devm_regulator_get_enable\0"
	"hci_alloc_dev_priv\0"
	"reset_control_deassert\0"
	"device_property_read_u8_array\0"
	"hci_register_dev\0"
	"devm_gpiod_get_optional\0"
	"bt_warn\0"
	"mutex_init_generic\0"
	"timer_init_key\0"
	"hci_devcd_register\0"
	"devm_request_threaded_irq\0"
	"device_set_wakeup_capable\0"
	"device_wakeup_enable\0"
	"reset_control_assert\0"
	"hci_free_dev\0"
	"_dev_err\0"
	"__alloc_skb\0"
	"skb_put\0"
	"hci_recv_frame\0"
	"skb_pull_data\0"
	"hci_devcd_init\0"
	"queue_delayed_work_on\0"
	"skb_clone\0"
	"hci_devcd_append\0"
	"hci_devcd_complete\0"
	"skb_dequeue\0"
	"skb_pull\0"
	"skb_queue_head\0"
	"skb_push\0"
	"skb_queue_tail\0"
	"hci_cmd_sync_queue\0"
	"__hci_cmd_sync\0"
	"flush_work\0"
	"timer_shutdown_sync\0"
	"hci_unregister_dev\0"
	"__hci_cmd_send\0"
	"crc8\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__x86_indirect_thunk_rax\0"
	"__serdev_device_driver_register\0"
	"__wake_up\0"
	"mutex_lock\0"
	"gpiod_set_value_cansleep\0"
	"mutex_unlock\0"
	"system_percpu_wq\0"
	"queue_work_on\0"
	"serdev_device_break_ctl\0"
	"msleep\0"
	"serdev_device_set_tiocm\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"__ref_stack_chk_guard\0"
	"snprintf\0"
	"kobject_uevent_env\0"
	"__stack_chk_fail\0"
	"__hci_cmd_sync_status\0"
	"bt_err\0"
	"serdev_device_set_baudrate\0"
	"serdev_device_set_flow_control\0"
	"__SCT__might_resched\0"
	"strnlen\0"
	"usleep_range_state\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"bt_info\0"
	"release_firmware\0"
	"__fortify_panic\0"
	"serdev_device_write_flush\0"
	"skb_queue_purge_reason\0"
	"cancel_work_sync\0"
	"sk_skb_reason_drop\0"
	"serdev_device_close\0"
	"serdev_device_open\0"
	"serdev_device_write_wakeup\0"
	"crc32_be\0"
	"module_layout\0"
;

MODULE_INFO(depends, "hci_uart,crc8,bluetooth");

MODULE_ALIAS("of:N*T*Cnxp,88w8987-bt");
MODULE_ALIAS("of:N*T*Cnxp,88w8987-btC*");
MODULE_ALIAS("of:N*T*Cnxp,88w8997-bt");
MODULE_ALIAS("of:N*T*Cnxp,88w8997-btC*");

MODULE_INFO(srcversion, "765A727F473BED440489001");

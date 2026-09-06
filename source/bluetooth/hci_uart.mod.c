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

KSYMTAB_FUNC(hci_uart_tx_wakeup, "_gpl", "");
KSYMTAB_FUNC(hci_uart_register_device_priv, "_gpl", "");
KSYMTAB_FUNC(hci_uart_unregister_device, "_gpl", "");
KSYMTAB_FUNC(h4_recv_buf, "_gpl", "");

SYMBOL_CRC(hci_uart_tx_wakeup, 0x2c2b4ea5, "_gpl");
SYMBOL_CRC(hci_uart_register_device_priv, 0xda8c55ce, "_gpl");
SYMBOL_CRC(hci_uart_unregister_device, 0xfa401486, "_gpl");
SYMBOL_CRC(h4_recv_buf, 0xbb64fac7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe63c85d9, "desc_to_gpio" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x2ee9feb8, "qca_read_soc_version" },
	{ 0x5a2322a3, "param_ops_bool" },
	{ 0x6a415a87, "serdev_device_close" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x651bbffe, "acpi_evaluate_object" },
	{ 0xfe330516, "devm_gpiod_get" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x97acb853, "ktime_get" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x1196918c, "tty_termios_encode_baud_rate" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x047db20f, "__percpu_down_read" },
	{ 0x3ac04553, "gpiod_remove_lookup_table" },
	{ 0xfde7ef82, "btbcm_write_pcm_int_params" },
	{ 0x6ad88cc3, "btbcm_set_bdaddr" },
	{ 0x3b1bb331, "tty_unthrottle" },
	{ 0x41a2b9f1, "hci_reset_dev" },
	{ 0x33d0c686, "clk_disable" },
	{ 0x73dc77ab, "btbcm_check_bdaddr" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0x211491a2, "rcuwait_wake_up" },
	{ 0x9cebbbad, "device_property_read_bool" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x4c77c343, "acpi_dev_get_property" },
	{ 0x0ec27a9a, "regulator_disable" },
	{ 0x4f1d1483, "dev_err_probe" },
	{ 0xc5abc00d, "qca_set_bdaddr_rome" },
	{ 0x02af579a, "__pm_runtime_suspend" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xc5abc00d, "qca_set_bdaddr" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x553959eb, "bt_warn" },
	{ 0xbcb91f3b, "__pm_runtime_use_autosuspend" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x2df46e82, "btintel_enter_mfg" },
	{ 0x5a2322a3, "param_ops_int" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xfd22b0a8, "debugfs_create_u8" },
	{ 0xfb71eed5, "__pm_runtime_disable" },
	{ 0x8d5972d1, "debugfs_create_dir" },
	{ 0xd8b288f3, "clk_enable" },
	{ 0x67628f51, "msleep" },
	{ 0x4c0c3cb9, "dmi_first_match" },
	{ 0x926aa910, "devm_clk_get_optional_enabled_with_rate" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x10c0e01f, "hci_devcd_abort" },
	{ 0x723e077b, "acpi_dev_free_resource_list" },
	{ 0x9131c961, "hci_recv_diag" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0x33d0c686, "clk_unprepare" },
	{ 0xc60fc56c, "percpu_free_rwsem" },
	{ 0xe63c85d9, "gpiod_get_value_cansleep" },
	{ 0x76f9d337, "tty_set_termios" },
	{ 0x0ec27a9a, "regulator_enable" },
	{ 0x9cebbbad, "device_property_present" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x86862d8c, "is_acpi_device_node" },
	{ 0x2aecda4b, "device_set_wakeup_capable" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x97b56d08, "devm_request_threaded_irq" },
	{ 0xc60fc56c, "percpu_down_write" },
	{ 0x2d88a3ab, "enable_work" },
	{ 0xe1b0a92a, "wait_for_completion_timeout" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0xf122d403, "skb_put" },
	{ 0xbd2119fb, "gpiod_set_value" },
	{ 0xcedfc400, "tty_register_ldisc" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xaad8cb6e, "serdev_device_set_baudrate" },
	{ 0xb620cc7d, "platform_driver_unregister" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xfb44fc3a, "platform_get_irq" },
	{ 0x2df46e82, "btintel_check_bdaddr" },
	{ 0x0414f344, "btbcm_finalize" },
	{ 0x40a621c5, "snprintf" },
	{ 0x62cbec20, "complete" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x9c752bb6, "btrtl_download_firmware" },
	{ 0xd272d446, "__SCT__preempt_schedule" },
	{ 0xde299862, "skb_dequeue" },
	{ 0x406f8976, "pm_runtime_set_autosuspend_delay" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0xb730487b, "finish_wait" },
	{ 0xb09e77c1, "btintel_send_intel_reset" },
	{ 0x6a7101a7, "nvmem_cell_get" },
	{ 0xbd2119fb, "gpiod_set_value_cansleep" },
	{ 0xe2f93c4e, "devm_pwrseq_get" },
	{ 0x285cc76d, "request_firmware" },
	{ 0x31d13ff1, "btintel_download_firmware" },
	{ 0x0414f344, "btbcm_initialize" },
	{ 0x8e6ff9ac, "serdev_device_set_flow_control" },
	{ 0x9afd8d1a, "btrtl_initialize" },
	{ 0xe63c85d9, "gpiod_to_irq" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0xa0b8d053, "btintel_read_version" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x10c0e01f, "qca_send_pre_shutdown_cmd" },
	{ 0xa78b01f6, "serdev_device_open" },
	{ 0x3239fbdb, "x86_apple_machine" },
	{ 0x2352b148, "timer_delete" },
	{ 0xa0b8d053, "btintel_version_info" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0xe6c955ef, "dev_kfree_skb_irq_reason" },
	{ 0xfe330516, "devm_gpiod_get_optional" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x265559b4, "crc_ccitt" },
	{ 0x0c613219, "__module_get" },
	{ 0x71a97e4a, "clk_set_rate" },
	{ 0xf6d395cd, "get_device" },
	{ 0x6e9b7228, "btintel_set_bdaddr" },
	{ 0xb89645a0, "hci_devcd_init" },
	{ 0x1f077293, "hci_devcd_append_pattern" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x6197c68e, "__dynamic_dev_dbg" },
	{ 0xd32ebbf4, "serdev_device_set_parity" },
	{ 0xbc48b7ee, "devm_clk_get" },
	{ 0xd272d446, "__fentry__" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x10c0e01f, "hci_devcd_complete" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x640f2de9, "__pm_runtime_set_status" },
	{ 0x32e47f68, "nvmem_cell_put" },
	{ 0xd8b288f3, "clk_prepare" },
	{ 0xd272d446, "dump_stack" },
	{ 0x484af076, "acpi_dev_get_resources" },
	{ 0xda1b6b32, "btrtl_free" },
	{ 0x2d88a3ab, "disable_work_sync" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x58318492, "device_reprobe" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0x4f40061d, "pwrseq_power_on" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x7da205ac, "btrtl_get_uart_settings" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x850f5c5a, "put_device" },
	{ 0xfe45a892, "devm_free_irq" },
	{ 0x3b1bb331, "tty_driver_flush_buffer" },
	{ 0x07e84e3f, "pm_runtime_enable" },
	{ 0x1b5526c6, "btintel_exit_mfg" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x4f40061d, "pwrseq_power_off" },
	{ 0xcbbc3084, "btintel_set_diag" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xfa63c498, "regulator_bulk_disable" },
	{ 0x79cc75b3, "device_property_read_u32_array" },
	{ 0xc318d27b, "devm_regulator_get" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0xf4ea0980, "__hci_cmd_sync_status" },
	{ 0x003f084b, "_dev_info" },
	{ 0xcc507ab7, "clk_is_match" },
	{ 0x0c161ddc, "capable" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x0c613219, "module_put" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x5c6dfe23, "nvmem_cell_read" },
	{ 0x946c7204, "device_wakeup_disable" },
	{ 0x55e5dc35, "acpi_get_handle" },
	{ 0x06802bbd, "btbcm_read_pcm_int_params" },
	{ 0xc60fc56c, "percpu_up_write" },
	{ 0x6d70f166, "regulator_set_load" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x1690648c, "byte_rev_table" },
	{ 0x9ce14fa0, "devm_acpi_dev_add_driver_gpios" },
	{ 0x003f084b, "_dev_err" },
	{ 0x0394badf, "device_wakeup_enable" },
	{ 0x17435bd6, "debugfs_create_bool" },
	{ 0xf122d403, "skb_pull" },
	{ 0x196aad98, "device_property_read_u8_array" },
	{ 0x7e55877f, "devm_clk_put" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x6a415a87, "serdev_device_write_flush" },
	{ 0xa78b01f6, "serdev_device_get_tiocm" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x0297537d, "out_of_line_wait_on_bit_timeout" },
	{ 0x559921d1, "irq_get_irq_data" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x769c429b, "acpi_execute_simple_method" },
	{ 0x895c5424, "device_property_read_string" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x86a914d4, "btrtl_set_quirks" },
	{ 0xf122d403, "skb_push" },
	{ 0x8a59d41e, "device_property_read_string_array" },
	{ 0xe85c62be, "btintel_load_ddc_config" },
	{ 0x536dc385, "n_tty_ioctl_helper" },
	{ 0x528705f3, "debugfs_create_u64" },
	{ 0x8badee2a, "driver_unregister" },
	{ 0xde055c90, "baswap" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0x21564c0e, "btintel_set_event_mask_mfg" },
	{ 0xe4c12e04, "tty_ldisc_flush" },
	{ 0x48e5c9f7, "__percpu_init_rwsem" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0xe419cfc2, "serdev_device_wait_until_sent" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x8f103771, "__serdev_device_driver_register" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0x399050fd, "qca_uart_setup" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0x003f084b, "_dev_warn" },
	{ 0x0853e371, "device_get_match_data" },
	{ 0x4f2be87a, "hci_devcd_append" },
	{ 0x2352b148, "timer_shutdown_sync" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xa2dd3843, "debugfs_create_u32" },
	{ 0xdef8cba5, "acpi_match_device" },
	{ 0x152a7579, "serdev_device_set_tiocm" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x553959eb, "bt_info" },
	{ 0xfe9be5a6, "irq_set_irq_wake" },
	{ 0xfa63c498, "regulator_bulk_enable" },
	{ 0x613c25d9, "devm_regulator_bulk_get" },
	{ 0x553959eb, "bt_err" },
	{ 0xd60c254a, "btintel_read_boot_params" },
	{ 0xaef1f20d, "system_long_wq" },
	{ 0x80977f86, "serdev_device_write_buf" },
	{ 0x65ed6ca7, "skb_trim" },
	{ 0x058c185a, "jiffies" },
	{ 0x21b62837, "tty_unregister_ldisc" },
	{ 0xdc54cc96, "__platform_driver_register" },
	{ 0xbc48b7ee, "devm_clk_get_optional" },
	{ 0xa160fc8b, "__hci_cmd_sync_ev" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x3ac04553, "gpiod_add_lookup_table" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0x29d12a64, "bit_wait_timeout" },
	{ 0x02af579a, "__pm_runtime_resume" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe63c85d9,
	0x9131c961,
	0x9aa6980d,
	0x2ee9feb8,
	0x5a2322a3,
	0x6a415a87,
	0xcbae5412,
	0x651bbffe,
	0xfe330516,
	0x30eb81ed,
	0x4574d0c7,
	0x97acb853,
	0x2d88a3ab,
	0x1196918c,
	0x71798f7e,
	0x047db20f,
	0x3ac04553,
	0xfde7ef82,
	0x6ad88cc3,
	0x3b1bb331,
	0x41a2b9f1,
	0x33d0c686,
	0x73dc77ab,
	0x44010dfe,
	0x211491a2,
	0x9cebbbad,
	0x02f9bbf0,
	0x4c77c343,
	0x0ec27a9a,
	0x4f1d1483,
	0xc5abc00d,
	0x02af579a,
	0x41a2b9f1,
	0xc5abc00d,
	0xdf4bee3d,
	0xe4de56b4,
	0x553959eb,
	0xbcb91f3b,
	0xe8e0a5a9,
	0x2df46e82,
	0x5a2322a3,
	0xf68beac4,
	0xfd22b0a8,
	0xfb71eed5,
	0x8d5972d1,
	0xd8b288f3,
	0x67628f51,
	0x4c0c3cb9,
	0x926aa910,
	0x7851be11,
	0xc4fee520,
	0x10c0e01f,
	0x723e077b,
	0x9131c961,
	0x9aa6980d,
	0x464ea3f9,
	0x33d0c686,
	0xc60fc56c,
	0xe63c85d9,
	0x76f9d337,
	0x0ec27a9a,
	0x9cebbbad,
	0x1abc7887,
	0x86862d8c,
	0x2aecda4b,
	0xdc352a3b,
	0x97b56d08,
	0xc60fc56c,
	0x2d88a3ab,
	0xe1b0a92a,
	0xb6b7f2c0,
	0xf122d403,
	0xbd2119fb,
	0xcedfc400,
	0x534ed5f3,
	0xd710adbf,
	0xaad8cb6e,
	0xb620cc7d,
	0xa6c3b74d,
	0x21891121,
	0xfb44fc3a,
	0x2df46e82,
	0x0414f344,
	0x40a621c5,
	0x62cbec20,
	0x49733ad6,
	0x9c752bb6,
	0xd272d446,
	0xde299862,
	0x406f8976,
	0xc2ccdd1e,
	0xb730487b,
	0xb09e77c1,
	0x6a7101a7,
	0xbd2119fb,
	0xe2f93c4e,
	0x285cc76d,
	0x31d13ff1,
	0x0414f344,
	0x8e6ff9ac,
	0x9afd8d1a,
	0xe63c85d9,
	0xfbe7861b,
	0x87510f11,
	0xa0b8d053,
	0xcb8b6ec6,
	0x10c0e01f,
	0xa78b01f6,
	0x3239fbdb,
	0x2352b148,
	0xa0b8d053,
	0x0feb1e94,
	0xc281f1fb,
	0xe6c955ef,
	0xfe330516,
	0x2352b148,
	0x68a1b6c6,
	0x265559b4,
	0x0c613219,
	0x71a97e4a,
	0xf6d395cd,
	0x6e9b7228,
	0xb89645a0,
	0x1f077293,
	0x11f4259a,
	0x6197c68e,
	0xd32ebbf4,
	0xbc48b7ee,
	0xd272d446,
	0xe81a5327,
	0x10c0e01f,
	0x5a844b26,
	0x640f2de9,
	0x32e47f68,
	0xd8b288f3,
	0xd272d446,
	0x484af076,
	0xda1b6b32,
	0x2d88a3ab,
	0xbd03ed67,
	0x58318492,
	0x6ac784f4,
	0x4f40061d,
	0xd272d446,
	0x7da205ac,
	0x8ce83585,
	0x850f5c5a,
	0xfe45a892,
	0x3b1bb331,
	0x07e84e3f,
	0x1b5526c6,
	0x9479a1e8,
	0x4f40061d,
	0xcbbc3084,
	0x6780c24b,
	0xfa63c498,
	0x79cc75b3,
	0xc318d27b,
	0x5a844b26,
	0xf4ea0980,
	0x003f084b,
	0xcc507ab7,
	0x0c161ddc,
	0x464ea3f9,
	0x0c613219,
	0x90a48d82,
	0x5c6dfe23,
	0x946c7204,
	0x55e5dc35,
	0x06802bbd,
	0xc60fc56c,
	0x6d70f166,
	0x7a5ffe84,
	0x1690648c,
	0x9ce14fa0,
	0x003f084b,
	0x0394badf,
	0x17435bd6,
	0xf122d403,
	0x196aad98,
	0x7e55877f,
	0xcb138788,
	0x6a415a87,
	0xa78b01f6,
	0xaef1f20d,
	0x32feeafc,
	0x0297537d,
	0x559921d1,
	0xbd03ed67,
	0x769c429b,
	0x895c5424,
	0xbeb1d261,
	0x9aa6980d,
	0x86a914d4,
	0xf122d403,
	0x8a59d41e,
	0xe85c62be,
	0x536dc385,
	0x528705f3,
	0x8badee2a,
	0xde055c90,
	0x4f1e5fd0,
	0x21564c0e,
	0xe4c12e04,
	0x48e5c9f7,
	0x9f3b7783,
	0xe419cfc2,
	0xe54e0a6b,
	0x8f103771,
	0x444885a7,
	0x399050fd,
	0x85acaba2,
	0xf517dbbb,
	0x003f084b,
	0x0853e371,
	0x4f2be87a,
	0x2352b148,
	0xd272d446,
	0xa2dd3843,
	0xdef8cba5,
	0x152a7579,
	0xe804603d,
	0x553959eb,
	0xfe9be5a6,
	0xfa63c498,
	0x613c25d9,
	0x553959eb,
	0xd60c254a,
	0xaef1f20d,
	0x80977f86,
	0x65ed6ca7,
	0x058c185a,
	0x21b62837,
	0xdc54cc96,
	0xbc48b7ee,
	0xa160fc8b,
	0x21891121,
	0x3ac04553,
	0x7ec472ba,
	0x29d12a64,
	0x02af579a,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"desc_to_gpio\0"
	"hci_recv_frame\0"
	"mutex_unlock\0"
	"qca_read_soc_version\0"
	"param_ops_bool\0"
	"serdev_device_close\0"
	"__const_udelay\0"
	"acpi_evaluate_object\0"
	"devm_gpiod_get\0"
	"__dynamic_pr_debug\0"
	"__kmalloc_cache_noprof\0"
	"ktime_get\0"
	"cancel_work_sync\0"
	"tty_termios_encode_baud_rate\0"
	"delayed_work_timer_fn\0"
	"__percpu_down_read\0"
	"gpiod_remove_lookup_table\0"
	"btbcm_write_pcm_int_params\0"
	"btbcm_set_bdaddr\0"
	"tty_unthrottle\0"
	"hci_reset_dev\0"
	"clk_disable\0"
	"btbcm_check_bdaddr\0"
	"skb_pull_data\0"
	"rcuwait_wake_up\0"
	"device_property_read_bool\0"
	"timer_init_key\0"
	"acpi_dev_get_property\0"
	"regulator_disable\0"
	"dev_err_probe\0"
	"qca_set_bdaddr_rome\0"
	"__pm_runtime_suspend\0"
	"hci_register_dev\0"
	"qca_set_bdaddr\0"
	"alloc_workqueue_noprof\0"
	"__ubsan_handle_load_invalid_value\0"
	"bt_warn\0"
	"__pm_runtime_use_autosuspend\0"
	"wake_up_bit\0"
	"btintel_enter_mfg\0"
	"param_ops_int\0"
	"__hci_cmd_sync\0"
	"debugfs_create_u8\0"
	"__pm_runtime_disable\0"
	"debugfs_create_dir\0"
	"clk_enable\0"
	"msleep\0"
	"dmi_first_match\0"
	"devm_clk_get_optional_enabled_with_rate\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"hci_devcd_abort\0"
	"acpi_dev_free_resource_list\0"
	"hci_recv_diag\0"
	"mutex_init_generic\0"
	"skb_queue_head\0"
	"clk_unprepare\0"
	"percpu_free_rwsem\0"
	"gpiod_get_value_cansleep\0"
	"tty_set_termios\0"
	"regulator_enable\0"
	"device_property_present\0"
	"release_firmware\0"
	"is_acpi_device_node\0"
	"device_set_wakeup_capable\0"
	"__list_add_valid_or_report\0"
	"devm_request_threaded_irq\0"
	"percpu_down_write\0"
	"enable_work\0"
	"wait_for_completion_timeout\0"
	"devm_kmalloc\0"
	"skb_put\0"
	"gpiod_set_value\0"
	"tty_register_ldisc\0"
	"__msecs_to_jiffies\0"
	"__kmalloc_noprof\0"
	"serdev_device_set_baudrate\0"
	"platform_driver_unregister\0"
	"ktime_get_mono_fast_ns\0"
	"hci_free_dev\0"
	"platform_get_irq\0"
	"btintel_check_bdaddr\0"
	"btbcm_finalize\0"
	"snprintf\0"
	"complete\0"
	"queue_work_on\0"
	"btrtl_download_firmware\0"
	"__SCT__preempt_schedule\0"
	"skb_dequeue\0"
	"pm_runtime_set_autosuspend_delay\0"
	"__init_swait_queue_head\0"
	"finish_wait\0"
	"btintel_send_intel_reset\0"
	"nvmem_cell_get\0"
	"gpiod_set_value_cansleep\0"
	"devm_pwrseq_get\0"
	"request_firmware\0"
	"btintel_download_firmware\0"
	"btbcm_initialize\0"
	"serdev_device_set_flow_control\0"
	"btrtl_initialize\0"
	"gpiod_to_irq\0"
	"memcpy\0"
	"hci_alloc_dev_priv\0"
	"btintel_read_version\0"
	"kfree\0"
	"qca_send_pre_shutdown_cmd\0"
	"serdev_device_open\0"
	"x86_apple_machine\0"
	"timer_delete\0"
	"btintel_version_info\0"
	"usleep_range_state\0"
	"prepare_to_wait_event\0"
	"dev_kfree_skb_irq_reason\0"
	"devm_gpiod_get_optional\0"
	"timer_delete_sync\0"
	"__wake_up\0"
	"crc_ccitt\0"
	"__module_get\0"
	"clk_set_rate\0"
	"get_device\0"
	"btintel_set_bdaddr\0"
	"hci_devcd_init\0"
	"hci_devcd_append_pattern\0"
	"_raw_spin_lock_irqsave\0"
	"__dynamic_dev_dbg\0"
	"serdev_device_set_parity\0"
	"devm_clk_get\0"
	"__fentry__\0"
	"skb_queue_purge_reason\0"
	"hci_devcd_complete\0"
	"__x86_indirect_thunk_rax\0"
	"__pm_runtime_set_status\0"
	"nvmem_cell_put\0"
	"clk_prepare\0"
	"dump_stack\0"
	"acpi_dev_get_resources\0"
	"btrtl_free\0"
	"disable_work_sync\0"
	"__ref_stack_chk_guard\0"
	"device_reprobe\0"
	"schedule_timeout\0"
	"pwrseq_power_on\0"
	"__stack_chk_fail\0"
	"btrtl_get_uart_settings\0"
	"queue_delayed_work_on\0"
	"put_device\0"
	"devm_free_irq\0"
	"tty_driver_flush_buffer\0"
	"pm_runtime_enable\0"
	"btintel_exit_mfg\0"
	"strnlen\0"
	"pwrseq_power_off\0"
	"btintel_set_diag\0"
	"__alloc_skb\0"
	"regulator_bulk_disable\0"
	"device_property_read_u32_array\0"
	"devm_regulator_get\0"
	"__x86_indirect_thunk_rdx\0"
	"__hci_cmd_sync_status\0"
	"_dev_info\0"
	"clk_is_match\0"
	"capable\0"
	"skb_queue_tail\0"
	"module_put\0"
	"__ubsan_handle_out_of_bounds\0"
	"nvmem_cell_read\0"
	"device_wakeup_disable\0"
	"acpi_get_handle\0"
	"btbcm_read_pcm_int_params\0"
	"percpu_up_write\0"
	"regulator_set_load\0"
	"init_wait_entry\0"
	"byte_rev_table\0"
	"devm_acpi_dev_add_driver_gpios\0"
	"_dev_err\0"
	"device_wakeup_enable\0"
	"debugfs_create_bool\0"
	"skb_pull\0"
	"device_property_read_u8_array\0"
	"devm_clk_put\0"
	"sk_skb_reason_drop\0"
	"serdev_device_write_flush\0"
	"serdev_device_get_tiocm\0"
	"system_percpu_wq\0"
	"mod_timer\0"
	"out_of_line_wait_on_bit_timeout\0"
	"irq_get_irq_data\0"
	"random_kmalloc_seed\0"
	"acpi_execute_simple_method\0"
	"device_property_read_string\0"
	"destroy_workqueue\0"
	"mutex_lock\0"
	"btrtl_set_quirks\0"
	"skb_push\0"
	"device_property_read_string_array\0"
	"btintel_load_ddc_config\0"
	"n_tty_ioctl_helper\0"
	"debugfs_create_u64\0"
	"driver_unregister\0"
	"baswap\0"
	"__list_del_entry_valid_or_report\0"
	"btintel_set_event_mask_mfg\0"
	"tty_ldisc_flush\0"
	"__percpu_init_rwsem\0"
	"__hci_cmd_send\0"
	"serdev_device_wait_until_sent\0"
	"__fortify_panic\0"
	"__serdev_device_driver_register\0"
	"_raw_spin_unlock_irqrestore\0"
	"qca_uart_setup\0"
	"cancel_delayed_work\0"
	"hci_devcd_register\0"
	"_dev_warn\0"
	"device_get_match_data\0"
	"hci_devcd_append\0"
	"timer_shutdown_sync\0"
	"__x86_return_thunk\0"
	"debugfs_create_u32\0"
	"acpi_match_device\0"
	"serdev_device_set_tiocm\0"
	"__init_waitqueue_head\0"
	"bt_info\0"
	"irq_set_irq_wake\0"
	"regulator_bulk_enable\0"
	"devm_regulator_bulk_get\0"
	"bt_err\0"
	"btintel_read_boot_params\0"
	"system_long_wq\0"
	"serdev_device_write_buf\0"
	"skb_trim\0"
	"jiffies\0"
	"tty_unregister_ldisc\0"
	"__platform_driver_register\0"
	"devm_clk_get_optional\0"
	"__hci_cmd_sync_ev\0"
	"hci_unregister_dev\0"
	"gpiod_add_lookup_table\0"
	"__preempt_count\0"
	"bit_wait_timeout\0"
	"__pm_runtime_resume\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,btqca,btbcm,btintel,btrtl,pwrseq-core");

MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8822cs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8822cs-btC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723bs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723bs-btC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723cs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723cs-btC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723ds-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723ds-btC*");
MODULE_ALIAS("acpi*:OBDA0623:*");
MODULE_ALIAS("acpi*:OBDA8723:*");
MODULE_ALIAS("acpi*:INT33E1:*");
MODULE_ALIAS("acpi*:INT33E3:*");
MODULE_ALIAS("acpi*:BCM2E00:*");
MODULE_ALIAS("acpi*:BCM2E01:*");
MODULE_ALIAS("acpi*:BCM2E02:*");
MODULE_ALIAS("acpi*:BCM2E03:*");
MODULE_ALIAS("acpi*:BCM2E04:*");
MODULE_ALIAS("acpi*:BCM2E05:*");
MODULE_ALIAS("acpi*:BCM2E06:*");
MODULE_ALIAS("acpi*:BCM2E07:*");
MODULE_ALIAS("acpi*:BCM2E08:*");
MODULE_ALIAS("acpi*:BCM2E09:*");
MODULE_ALIAS("acpi*:BCM2E0A:*");
MODULE_ALIAS("acpi*:BCM2E0B:*");
MODULE_ALIAS("acpi*:BCM2E0C:*");
MODULE_ALIAS("acpi*:BCM2E0D:*");
MODULE_ALIAS("acpi*:BCM2E0E:*");
MODULE_ALIAS("acpi*:BCM2E0F:*");
MODULE_ALIAS("acpi*:BCM2E10:*");
MODULE_ALIAS("acpi*:BCM2E11:*");
MODULE_ALIAS("acpi*:BCM2E12:*");
MODULE_ALIAS("acpi*:BCM2E13:*");
MODULE_ALIAS("acpi*:BCM2E14:*");
MODULE_ALIAS("acpi*:BCM2E15:*");
MODULE_ALIAS("acpi*:BCM2E16:*");
MODULE_ALIAS("acpi*:BCM2E17:*");
MODULE_ALIAS("acpi*:BCM2E18:*");
MODULE_ALIAS("acpi*:BCM2E19:*");
MODULE_ALIAS("acpi*:BCM2E1A:*");
MODULE_ALIAS("acpi*:BCM2E1B:*");
MODULE_ALIAS("acpi*:BCM2E1C:*");
MODULE_ALIAS("acpi*:BCM2E1D:*");
MODULE_ALIAS("acpi*:BCM2E1F:*");
MODULE_ALIAS("acpi*:BCM2E20:*");
MODULE_ALIAS("acpi*:BCM2E21:*");
MODULE_ALIAS("acpi*:BCM2E22:*");
MODULE_ALIAS("acpi*:BCM2E23:*");
MODULE_ALIAS("acpi*:BCM2E24:*");
MODULE_ALIAS("acpi*:BCM2E25:*");
MODULE_ALIAS("acpi*:BCM2E26:*");
MODULE_ALIAS("acpi*:BCM2E27:*");
MODULE_ALIAS("acpi*:BCM2E28:*");
MODULE_ALIAS("acpi*:BCM2E29:*");
MODULE_ALIAS("acpi*:BCM2E2A:*");
MODULE_ALIAS("acpi*:BCM2E2B:*");
MODULE_ALIAS("acpi*:BCM2E2C:*");
MODULE_ALIAS("acpi*:BCM2E2D:*");
MODULE_ALIAS("acpi*:BCM2E2E:*");
MODULE_ALIAS("acpi*:BCM2E2F:*");
MODULE_ALIAS("acpi*:BCM2E30:*");
MODULE_ALIAS("acpi*:BCM2E31:*");
MODULE_ALIAS("acpi*:BCM2E32:*");
MODULE_ALIAS("acpi*:BCM2E33:*");
MODULE_ALIAS("acpi*:BCM2E34:*");
MODULE_ALIAS("acpi*:BCM2E35:*");
MODULE_ALIAS("acpi*:BCM2E36:*");
MODULE_ALIAS("acpi*:BCM2E37:*");
MODULE_ALIAS("acpi*:BCM2E38:*");
MODULE_ALIAS("acpi*:BCM2E39:*");
MODULE_ALIAS("acpi*:BCM2E3A:*");
MODULE_ALIAS("acpi*:BCM2E3B:*");
MODULE_ALIAS("acpi*:BCM2E3C:*");
MODULE_ALIAS("acpi*:BCM2E3D:*");
MODULE_ALIAS("acpi*:BCM2E3E:*");
MODULE_ALIAS("acpi*:BCM2E3F:*");
MODULE_ALIAS("acpi*:BCM2E40:*");
MODULE_ALIAS("acpi*:BCM2E41:*");
MODULE_ALIAS("acpi*:BCM2E42:*");
MODULE_ALIAS("acpi*:BCM2E43:*");
MODULE_ALIAS("acpi*:BCM2E44:*");
MODULE_ALIAS("acpi*:BCM2E45:*");
MODULE_ALIAS("acpi*:BCM2E46:*");
MODULE_ALIAS("acpi*:BCM2E47:*");
MODULE_ALIAS("acpi*:BCM2E48:*");
MODULE_ALIAS("acpi*:BCM2E49:*");
MODULE_ALIAS("acpi*:BCM2E4A:*");
MODULE_ALIAS("acpi*:BCM2E4B:*");
MODULE_ALIAS("acpi*:BCM2E4C:*");
MODULE_ALIAS("acpi*:BCM2E4D:*");
MODULE_ALIAS("acpi*:BCM2E4E:*");
MODULE_ALIAS("acpi*:BCM2E4F:*");
MODULE_ALIAS("acpi*:BCM2E50:*");
MODULE_ALIAS("acpi*:BCM2E51:*");
MODULE_ALIAS("acpi*:BCM2E52:*");
MODULE_ALIAS("acpi*:BCM2E53:*");
MODULE_ALIAS("acpi*:BCM2E54:*");
MODULE_ALIAS("acpi*:BCM2E55:*");
MODULE_ALIAS("acpi*:BCM2E56:*");
MODULE_ALIAS("acpi*:BCM2E57:*");
MODULE_ALIAS("acpi*:BCM2E58:*");
MODULE_ALIAS("acpi*:BCM2E59:*");
MODULE_ALIAS("acpi*:BCM2E5A:*");
MODULE_ALIAS("acpi*:BCM2E5B:*");
MODULE_ALIAS("acpi*:BCM2E5C:*");
MODULE_ALIAS("acpi*:BCM2E5D:*");
MODULE_ALIAS("acpi*:BCM2E5E:*");
MODULE_ALIAS("acpi*:BCM2E5F:*");
MODULE_ALIAS("acpi*:BCM2E60:*");
MODULE_ALIAS("acpi*:BCM2E61:*");
MODULE_ALIAS("acpi*:BCM2E62:*");
MODULE_ALIAS("acpi*:BCM2E63:*");
MODULE_ALIAS("acpi*:BCM2E64:*");
MODULE_ALIAS("acpi*:BCM2E65:*");
MODULE_ALIAS("acpi*:BCM2E66:*");
MODULE_ALIAS("acpi*:BCM2E67:*");
MODULE_ALIAS("acpi*:BCM2E68:*");
MODULE_ALIAS("acpi*:BCM2E69:*");
MODULE_ALIAS("acpi*:BCM2E6B:*");
MODULE_ALIAS("acpi*:BCM2E6D:*");
MODULE_ALIAS("acpi*:BCM2E6E:*");
MODULE_ALIAS("acpi*:BCM2E6F:*");
MODULE_ALIAS("acpi*:BCM2E70:*");
MODULE_ALIAS("acpi*:BCM2E71:*");
MODULE_ALIAS("acpi*:BCM2E72:*");
MODULE_ALIAS("acpi*:BCM2E73:*");
MODULE_ALIAS("acpi*:BCM2E74:*");
MODULE_ALIAS("acpi*:BCM2E75:*");
MODULE_ALIAS("acpi*:BCM2E76:*");
MODULE_ALIAS("acpi*:BCM2E77:*");
MODULE_ALIAS("acpi*:BCM2E78:*");
MODULE_ALIAS("acpi*:BCM2E79:*");
MODULE_ALIAS("acpi*:BCM2E7A:*");
MODULE_ALIAS("acpi*:BCM2E7B:*");
MODULE_ALIAS("acpi*:BCM2E7C:*");
MODULE_ALIAS("acpi*:BCM2E7D:*");
MODULE_ALIAS("acpi*:BCM2E7E:*");
MODULE_ALIAS("acpi*:BCM2E7F:*");
MODULE_ALIAS("acpi*:BCM2E80:*");
MODULE_ALIAS("acpi*:BCM2E81:*");
MODULE_ALIAS("acpi*:BCM2E82:*");
MODULE_ALIAS("acpi*:BCM2E83:*");
MODULE_ALIAS("acpi*:BCM2E84:*");
MODULE_ALIAS("acpi*:BCM2E85:*");
MODULE_ALIAS("acpi*:BCM2E86:*");
MODULE_ALIAS("acpi*:BCM2E87:*");
MODULE_ALIAS("acpi*:BCM2E88:*");
MODULE_ALIAS("acpi*:BCM2E89:*");
MODULE_ALIAS("acpi*:BCM2E8A:*");
MODULE_ALIAS("acpi*:BCM2E8B:*");
MODULE_ALIAS("acpi*:BCM2E8C:*");
MODULE_ALIAS("acpi*:BCM2E8D:*");
MODULE_ALIAS("acpi*:BCM2E8E:*");
MODULE_ALIAS("acpi*:BCM2E90:*");
MODULE_ALIAS("acpi*:BCM2E92:*");
MODULE_ALIAS("acpi*:BCM2E93:*");
MODULE_ALIAS("acpi*:BCM2E94:*");
MODULE_ALIAS("acpi*:BCM2E95:*");
MODULE_ALIAS("acpi*:BCM2E96:*");
MODULE_ALIAS("acpi*:BCM2E97:*");
MODULE_ALIAS("acpi*:BCM2E98:*");
MODULE_ALIAS("acpi*:BCM2E99:*");
MODULE_ALIAS("acpi*:BCM2E9A:*");
MODULE_ALIAS("acpi*:BCM2E9B:*");
MODULE_ALIAS("acpi*:BCM2E9C:*");
MODULE_ALIAS("acpi*:BCM2E9D:*");
MODULE_ALIAS("acpi*:BCM2E9F:*");
MODULE_ALIAS("acpi*:BCM2EA0:*");
MODULE_ALIAS("acpi*:BCM2EA1:*");
MODULE_ALIAS("acpi*:BCM2EA2:*");
MODULE_ALIAS("acpi*:BCM2EA3:*");
MODULE_ALIAS("acpi*:BCM2EA4:*");
MODULE_ALIAS("acpi*:BCM2EA5:*");
MODULE_ALIAS("acpi*:BCM2EA6:*");
MODULE_ALIAS("acpi*:BCM2EA7:*");
MODULE_ALIAS("acpi*:BCM2EA8:*");
MODULE_ALIAS("acpi*:BCM2EA9:*");
MODULE_ALIAS("acpi*:BCM2EAA:*");
MODULE_ALIAS("acpi*:BCM2EAB:*");
MODULE_ALIAS("acpi*:BCM2EAC:*");
MODULE_ALIAS("acpi*:QCOM2066:*");
MODULE_ALIAS("acpi*:QCOM6390:*");
MODULE_ALIAS("acpi*:DLA16390:*");
MODULE_ALIAS("acpi*:DLB16390:*");
MODULE_ALIAS("acpi*:DLB26390:*");
MODULE_ALIAS("of:N*T*Cmrvl,88w8897");
MODULE_ALIAS("of:N*T*Cmrvl,88w8897C*");
MODULE_ALIAS("of:N*T*Cmrvl,88w8997");
MODULE_ALIAS("of:N*T*Cmrvl,88w8997C*");
MODULE_ALIAS("of:N*T*Camlogic,w155s2-bt");
MODULE_ALIAS("of:N*T*Camlogic,w155s2-btC*");
MODULE_ALIAS("of:N*T*Camlogic,w265s2-bt");
MODULE_ALIAS("of:N*T*Camlogic,w265s2-btC*");

MODULE_INFO(srcversion, "F46A74FA4EBE4877733C891");

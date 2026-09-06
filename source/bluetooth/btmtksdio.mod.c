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
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0x233dde08, "sdio_enable_func" },
	{ 0xb359fb01, "sdio_claim_irq" },
	{ 0xabcb2f9c, "sdio_set_block_size" },
	{ 0x233dde08, "sdio_release_irq" },
	{ 0x233dde08, "sdio_disable_func" },
	{ 0xad221fd3, "sdio_set_host_pm_flags" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x02af579a, "__pm_runtime_resume" },
	{ 0xbd2119fb, "gpiod_set_value_cansleep" },
	{ 0x67628f51, "msleep" },
	{ 0xfb71eed5, "__pm_runtime_disable" },
	{ 0x41a2b9f1, "hci_reset_dev" },
	{ 0x058c185a, "jiffies" },
	{ 0x553959eb, "bt_warn" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xf122d403, "skb_push" },
	{ 0x193951ea, "sdio_writesb" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0xfb95a300, "sdio_readsb" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0x02af579a, "__pm_runtime_suspend" },
	{ 0xf122d403, "skb_pull" },
	{ 0x65ed6ca7, "skb_trim" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x464ea3f9, "skb_queue_head" },
	{ 0x0b4f0302, "pskb_expand_head" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x946c7204, "device_wakeup_disable" },
	{ 0x2aecda4b, "device_set_wakeup_capable" },
	{ 0xecb1b43c, "pm_wakeup_dev_event" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0x29d12a64, "bit_wait_timeout" },
	{ 0x0297537d, "out_of_line_wait_on_bit_timeout" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x053dcaae, "btmtk_setup_firmware" },
	{ 0x553959eb, "bt_info" },
	{ 0x406f8976, "pm_runtime_set_autosuspend_delay" },
	{ 0xbcb91f3b, "__pm_runtime_use_autosuspend" },
	{ 0x640f2de9, "__pm_runtime_set_status" },
	{ 0x07e84e3f, "pm_runtime_enable" },
	{ 0xb9536939, "btmtk_fw_get_filename" },
	{ 0x40a621c5, "snprintf" },
	{ 0x053dcaae, "btmtk_setup_firmware_79xx" },
	{ 0x07e84e3f, "pm_runtime_allow" },
	{ 0xf8cca585, "devm_gpiod_put" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x20169180, "btmtk_set_bdaddr" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x0394badf, "device_wakeup_enable" },
	{ 0xd69e7b5a, "__devm_add_action" },
	{ 0xfe330516, "devm_gpiod_get_optional" },
	{ 0x003f084b, "_dev_err" },
	{ 0x5a2322a3, "param_ops_bool" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xf00b4892, "__sdio_register_driver" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x553959eb, "bt_err" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x24380e4e, "skb_clone" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x07e84e3f, "pm_runtime_forbid" },
	{ 0x9131c961, "hci_recv_diag" },
	{ 0xac82d61d, "sdio_unregister_driver" },
	{ 0xcf1ca6d3, "sdio_claim_host" },
	{ 0xc5a87569, "sdio_writel" },
	{ 0x97acb853, "ktime_get" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xb48804d0, "sdio_readl" },
	{ 0xcf1ca6d3, "sdio_release_host" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe4de56b4,
	0x30eb81ed,
	0xd272d446,
	0x233dde08,
	0xb359fb01,
	0xabcb2f9c,
	0x233dde08,
	0x233dde08,
	0xad221fd3,
	0x21891121,
	0x21891121,
	0x02af579a,
	0xbd2119fb,
	0x67628f51,
	0xfb71eed5,
	0x41a2b9f1,
	0x058c185a,
	0x553959eb,
	0xde299862,
	0xf122d403,
	0x193951ea,
	0x6780c24b,
	0xf122d403,
	0xfb95a300,
	0xa6c3b74d,
	0x02af579a,
	0xf122d403,
	0x65ed6ca7,
	0x5a844b26,
	0x464ea3f9,
	0x0b4f0302,
	0x464ea3f9,
	0xaef1f20d,
	0x49733ad6,
	0x946c7204,
	0x2aecda4b,
	0xecb1b43c,
	0xd710adbf,
	0xfbe7861b,
	0x9f3b7783,
	0x29d12a64,
	0x0297537d,
	0xe54e0a6b,
	0x053dcaae,
	0x553959eb,
	0x406f8976,
	0xbcb91f3b,
	0x640f2de9,
	0x07e84e3f,
	0xb9536939,
	0x40a621c5,
	0x053dcaae,
	0x07e84e3f,
	0xf8cca585,
	0xb6b7f2c0,
	0x87510f11,
	0x20169180,
	0x41a2b9f1,
	0x0394badf,
	0xd69e7b5a,
	0xfe330516,
	0x003f084b,
	0x5a2322a3,
	0xd272d446,
	0xd272d446,
	0xf00b4892,
	0xbd03ed67,
	0xf68beac4,
	0xcb138788,
	0xd272d446,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x553959eb,
	0xcb8b6ec6,
	0xe81a5327,
	0x2d88a3ab,
	0x24380e4e,
	0x9131c961,
	0xe8e0a5a9,
	0x07e84e3f,
	0x9131c961,
	0xac82d61d,
	0xcf1ca6d3,
	0xc5a87569,
	0x97acb853,
	0x7851be11,
	0x0feb1e94,
	0xb48804d0,
	0xcf1ca6d3,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__ubsan_handle_load_invalid_value\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"sdio_enable_func\0"
	"sdio_claim_irq\0"
	"sdio_set_block_size\0"
	"sdio_release_irq\0"
	"sdio_disable_func\0"
	"sdio_set_host_pm_flags\0"
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"__pm_runtime_resume\0"
	"gpiod_set_value_cansleep\0"
	"msleep\0"
	"__pm_runtime_disable\0"
	"hci_reset_dev\0"
	"jiffies\0"
	"bt_warn\0"
	"skb_dequeue\0"
	"skb_push\0"
	"sdio_writesb\0"
	"__alloc_skb\0"
	"skb_put\0"
	"sdio_readsb\0"
	"ktime_get_mono_fast_ns\0"
	"__pm_runtime_suspend\0"
	"skb_pull\0"
	"skb_trim\0"
	"__x86_indirect_thunk_rax\0"
	"skb_queue_head\0"
	"pskb_expand_head\0"
	"skb_queue_tail\0"
	"system_percpu_wq\0"
	"queue_work_on\0"
	"device_wakeup_disable\0"
	"device_set_wakeup_capable\0"
	"pm_wakeup_dev_event\0"
	"__kmalloc_noprof\0"
	"memcpy\0"
	"__hci_cmd_send\0"
	"bit_wait_timeout\0"
	"out_of_line_wait_on_bit_timeout\0"
	"__fortify_panic\0"
	"btmtk_setup_firmware\0"
	"bt_info\0"
	"pm_runtime_set_autosuspend_delay\0"
	"__pm_runtime_use_autosuspend\0"
	"__pm_runtime_set_status\0"
	"pm_runtime_enable\0"
	"btmtk_fw_get_filename\0"
	"snprintf\0"
	"btmtk_setup_firmware_79xx\0"
	"pm_runtime_allow\0"
	"devm_gpiod_put\0"
	"devm_kmalloc\0"
	"hci_alloc_dev_priv\0"
	"btmtk_set_bdaddr\0"
	"hci_register_dev\0"
	"device_wakeup_enable\0"
	"__devm_add_action\0"
	"devm_gpiod_get_optional\0"
	"_dev_err\0"
	"param_ops_bool\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__sdio_register_driver\0"
	"__ref_stack_chk_guard\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"__stack_chk_fail\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"bt_err\0"
	"kfree\0"
	"skb_queue_purge_reason\0"
	"cancel_work_sync\0"
	"skb_clone\0"
	"hci_recv_frame\0"
	"wake_up_bit\0"
	"pm_runtime_forbid\0"
	"hci_recv_diag\0"
	"sdio_unregister_driver\0"
	"sdio_claim_host\0"
	"sdio_writel\0"
	"ktime_get\0"
	"__SCT__might_resched\0"
	"usleep_range_state\0"
	"sdio_readl\0"
	"sdio_release_host\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,btmtk");

MODULE_ALIAS("sdio:c*v037Ad7663*");
MODULE_ALIAS("sdio:c*v037Ad7668*");
MODULE_ALIAS("sdio:c*v037Ad7961*");

MODULE_INFO(srcversion, "B7A5FE8E075D99C07F1E193");

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
	{ 0xbd2119fb, "gpiod_set_value" },
	{ 0xfb71eed5, "__pm_runtime_disable" },
	{ 0x07e84e3f, "pm_runtime_enable" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0xfe330516, "devm_gpiod_get" },
	{ 0xe63c85d9, "gpiod_to_irq" },
	{ 0x97b56d08, "devm_request_threaded_irq" },
	{ 0xbc48b7ee, "devm_clk_get" },
	{ 0xd8b288f3, "clk_prepare" },
	{ 0xd8b288f3, "clk_enable" },
	{ 0xa0928e7c, "clk_get_rate" },
	{ 0x33d0c686, "clk_disable" },
	{ 0x33d0c686, "clk_unprepare" },
	{ 0xda8c55ce, "hci_uart_register_device_priv" },
	{ 0x8badee2a, "driver_unregister" },
	{ 0xde299862, "skb_dequeue" },
	{ 0x02af579a, "__pm_runtime_resume" },
	{ 0xbd2119fb, "gpiod_set_value_cansleep" },
	{ 0xe419cfc2, "serdev_device_wait_until_sent" },
	{ 0x02af579a, "__pm_runtime_idle" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xe63c85d9, "gpiod_get_value" },
	{ 0x152a7579, "serdev_device_set_tiocm" },
	{ 0x8e6ff9ac, "serdev_device_set_flow_control" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x67628f51, "msleep" },
	{ 0xe63c85d9, "gpiod_get_value_cansleep" },
	{ 0x6a415a87, "serdev_device_write_flush" },
	{ 0xaad8cb6e, "serdev_device_set_baudrate" },
	{ 0x97acb853, "ktime_get" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0xa78b01f6, "serdev_device_get_tiocm" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0x2c2b4ea5, "hci_uart_tx_wakeup" },
	{ 0xf745e777, "wait_for_completion_interruptible_timeout" },
	{ 0x285cc76d, "request_firmware" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x6ad88cc3, "btbcm_set_bdaddr" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xd272d446, "__fentry__" },
	{ 0x8f103771, "__serdev_device_driver_register" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xfa401486, "hci_uart_unregister_device" },
	{ 0xf122d403, "skb_push" },
	{ 0xe4b429e4, "__skb_pad" },
	{ 0xf122d403, "skb_put" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0xbb64fac7, "h4_recv_buf" },
	{ 0x003f084b, "_dev_err" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xf122d403, "skb_pull" },
	{ 0x6197c68e, "__dynamic_dev_dbg" },
	{ 0x62cbec20, "complete" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xd272d446, "dump_stack" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe81a5327,
	0xbd2119fb,
	0xfb71eed5,
	0x07e84e3f,
	0xb6b7f2c0,
	0xfe330516,
	0xe63c85d9,
	0x97b56d08,
	0xbc48b7ee,
	0xd8b288f3,
	0xd8b288f3,
	0xa0928e7c,
	0x33d0c686,
	0x33d0c686,
	0xda8c55ce,
	0x8badee2a,
	0xde299862,
	0x02af579a,
	0xbd2119fb,
	0xe419cfc2,
	0x02af579a,
	0xe4de56b4,
	0xe63c85d9,
	0x152a7579,
	0x8e6ff9ac,
	0xbd03ed67,
	0x67628f51,
	0xe63c85d9,
	0x6a415a87,
	0xaad8cb6e,
	0x97acb853,
	0x7851be11,
	0xa78b01f6,
	0x0feb1e94,
	0x6780c24b,
	0xc2ccdd1e,
	0x2c2b4ea5,
	0xf745e777,
	0x285cc76d,
	0xf68beac4,
	0x1abc7887,
	0x6ad88cc3,
	0xd272d446,
	0xd272d446,
	0x8f103771,
	0xd272d446,
	0xfa401486,
	0xf122d403,
	0xe4b429e4,
	0xf122d403,
	0x464ea3f9,
	0xbb64fac7,
	0x003f084b,
	0x9131c961,
	0xf122d403,
	0x6197c68e,
	0x62cbec20,
	0xcb138788,
	0xd272d446,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"skb_queue_purge_reason\0"
	"gpiod_set_value\0"
	"__pm_runtime_disable\0"
	"pm_runtime_enable\0"
	"devm_kmalloc\0"
	"devm_gpiod_get\0"
	"gpiod_to_irq\0"
	"devm_request_threaded_irq\0"
	"devm_clk_get\0"
	"clk_prepare\0"
	"clk_enable\0"
	"clk_get_rate\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"hci_uart_register_device_priv\0"
	"driver_unregister\0"
	"skb_dequeue\0"
	"__pm_runtime_resume\0"
	"gpiod_set_value_cansleep\0"
	"serdev_device_wait_until_sent\0"
	"__pm_runtime_idle\0"
	"__ubsan_handle_load_invalid_value\0"
	"gpiod_get_value\0"
	"serdev_device_set_tiocm\0"
	"serdev_device_set_flow_control\0"
	"__ref_stack_chk_guard\0"
	"msleep\0"
	"gpiod_get_value_cansleep\0"
	"serdev_device_write_flush\0"
	"serdev_device_set_baudrate\0"
	"ktime_get\0"
	"__SCT__might_resched\0"
	"serdev_device_get_tiocm\0"
	"usleep_range_state\0"
	"__alloc_skb\0"
	"__init_swait_queue_head\0"
	"hci_uart_tx_wakeup\0"
	"wait_for_completion_interruptible_timeout\0"
	"request_firmware\0"
	"__hci_cmd_sync\0"
	"release_firmware\0"
	"btbcm_set_bdaddr\0"
	"__stack_chk_fail\0"
	"__fentry__\0"
	"__serdev_device_driver_register\0"
	"__x86_return_thunk\0"
	"hci_uart_unregister_device\0"
	"skb_push\0"
	"__skb_pad\0"
	"skb_put\0"
	"skb_queue_tail\0"
	"h4_recv_buf\0"
	"_dev_err\0"
	"hci_recv_frame\0"
	"skb_pull\0"
	"__dynamic_dev_dbg\0"
	"complete\0"
	"sk_skb_reason_drop\0"
	"dump_stack\0"
	"module_layout\0"
;

MODULE_INFO(depends, "hci_uart,bluetooth,btbcm");


MODULE_INFO(srcversion, "3BC03A062BEFAC8C9DAE5CD");

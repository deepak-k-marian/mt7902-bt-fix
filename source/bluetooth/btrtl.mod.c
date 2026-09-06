#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btrtl_set_driver_name, "_gpl", "");
KSYMTAB_FUNC(btrtl_free, "_gpl", "");
KSYMTAB_FUNC(btrtl_initialize, "_gpl", "");
KSYMTAB_FUNC(btrtl_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btrtl_set_quirks, "_gpl", "");
KSYMTAB_FUNC(btrtl_setup_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_shutdown_realtek, "_gpl", "");
KSYMTAB_FUNC(btrtl_get_uart_settings, "_gpl", "");

SYMBOL_CRC(btrtl_set_driver_name, 0x9522c011, "_gpl");
SYMBOL_CRC(btrtl_free, 0xda1b6b32, "_gpl");
SYMBOL_CRC(btrtl_initialize, 0x9afd8d1a, "_gpl");
SYMBOL_CRC(btrtl_download_firmware, 0x9c752bb6, "_gpl");
SYMBOL_CRC(btrtl_set_quirks, 0x86a914d4, "_gpl");
SYMBOL_CRC(btrtl_setup_realtek, 0x99b93aa7, "_gpl");
SYMBOL_CRC(btrtl_shutdown_realtek, 0x99b93aa7, "_gpl");
SYMBOL_CRC(btrtl_get_uart_settings, 0x7da205ac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xf1de9e85, "kvfree" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0x553959eb, "bt_err" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x553959eb, "bt_info" },
	{ 0x285cc76d, "request_firmware" },
	{ 0x386e4ba3, "kvmemdup" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xd272d446, "dump_stack" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0x553959eb, "bt_warn" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0xc5eb118c, "__kvmalloc_node_noprof" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x67628f51, "msleep" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0x40a621c5, "snprintf" },
	{ 0x14890a55, "hci_set_hw_info" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0xd272d446,
	0x90a48d82,
	0xf1de9e85,
	0xcb8b6ec6,
	0x4f1e5fd0,
	0xf68beac4,
	0x553959eb,
	0xcb138788,
	0xbd03ed67,
	0x553959eb,
	0x285cc76d,
	0x386e4ba3,
	0x1abc7887,
	0xd272d446,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0xfbe7861b,
	0x30eb81ed,
	0xe54e0a6b,
	0xd272d446,
	0x9f3b7783,
	0x553959eb,
	0xe4de56b4,
	0xdc352a3b,
	0xf517dbbb,
	0xc5eb118c,
	0x6780c24b,
	0xf122d403,
	0x5a844b26,
	0x67628f51,
	0x44010dfe,
	0x40a621c5,
	0x14890a55,
	0x9479a1e8,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__ubsan_handle_out_of_bounds\0"
	"kvfree\0"
	"kfree\0"
	"__list_del_entry_valid_or_report\0"
	"__hci_cmd_sync\0"
	"bt_err\0"
	"sk_skb_reason_drop\0"
	"__ref_stack_chk_guard\0"
	"bt_info\0"
	"request_firmware\0"
	"kvmemdup\0"
	"release_firmware\0"
	"__stack_chk_fail\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"memcpy\0"
	"__dynamic_pr_debug\0"
	"__fortify_panic\0"
	"dump_stack\0"
	"__hci_cmd_send\0"
	"bt_warn\0"
	"__ubsan_handle_load_invalid_value\0"
	"__list_add_valid_or_report\0"
	"hci_devcd_register\0"
	"__kvmalloc_node_noprof\0"
	"__alloc_skb\0"
	"skb_put\0"
	"__x86_indirect_thunk_rax\0"
	"msleep\0"
	"skb_pull_data\0"
	"snprintf\0"
	"hci_set_hw_info\0"
	"strnlen\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "924EFE59CE1945CEB65334F");

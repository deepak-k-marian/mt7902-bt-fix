#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btintel_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btintel_enter_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_exit_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btintel_set_diag, "_gpl", "");
KSYMTAB_FUNC(btintel_hw_error, "_gpl", "");
KSYMTAB_FUNC(btintel_version_info, "_gpl", "");
KSYMTAB_FUNC(btintel_load_ddc_config, "_gpl", "");
KSYMTAB_FUNC(btintel_set_event_mask_mfg, "_gpl", "");
KSYMTAB_FUNC(btintel_read_version, "_gpl", "");
KSYMTAB_FUNC(btintel_version_info_tlv, "_gpl", "");
KSYMTAB_FUNC(btintel_parse_version_tlv, "_gpl", "");
KSYMTAB_FUNC(btintel_regmap_init, "_gpl", "");
KSYMTAB_FUNC(btintel_send_intel_reset, "_gpl", "");
KSYMTAB_FUNC(btintel_read_boot_params, "_gpl", "");
KSYMTAB_FUNC(btintel_download_firmware, "_gpl", "");
KSYMTAB_FUNC(btintel_set_quality_report, "_gpl", "");
KSYMTAB_FUNC(btintel_bootloader_setup_tlv, "_gpl", "");
KSYMTAB_FUNC(btintel_set_msft_opcode, "_gpl", "");
KSYMTAB_FUNC(btintel_print_fseq_info, "_gpl", "");
KSYMTAB_FUNC(btintel_shutdown_combined, "_gpl", "");
KSYMTAB_FUNC(btintel_configure_setup, "_gpl", "");
KSYMTAB_FUNC(btintel_recv_event, "_gpl", "");
KSYMTAB_FUNC(btintel_bootup, "_gpl", "");
KSYMTAB_FUNC(btintel_secure_send_result, "_gpl", "");

SYMBOL_CRC(btintel_check_bdaddr, 0x2df46e82, "_gpl");
SYMBOL_CRC(btintel_enter_mfg, 0x2df46e82, "_gpl");
SYMBOL_CRC(btintel_exit_mfg, 0x1b5526c6, "_gpl");
SYMBOL_CRC(btintel_set_bdaddr, 0x6e9b7228, "_gpl");
SYMBOL_CRC(btintel_set_diag, 0xcbbc3084, "_gpl");
SYMBOL_CRC(btintel_hw_error, 0x12907c3e, "_gpl");
SYMBOL_CRC(btintel_version_info, 0xa0b8d053, "_gpl");
SYMBOL_CRC(btintel_load_ddc_config, 0xe85c62be, "_gpl");
SYMBOL_CRC(btintel_set_event_mask_mfg, 0x21564c0e, "_gpl");
SYMBOL_CRC(btintel_read_version, 0xa0b8d053, "_gpl");
SYMBOL_CRC(btintel_version_info_tlv, 0xd25f3cae, "_gpl");
SYMBOL_CRC(btintel_parse_version_tlv, 0x81766d22, "_gpl");
SYMBOL_CRC(btintel_regmap_init, 0xdedab5a5, "_gpl");
SYMBOL_CRC(btintel_send_intel_reset, 0xb09e77c1, "_gpl");
SYMBOL_CRC(btintel_read_boot_params, 0xd60c254a, "_gpl");
SYMBOL_CRC(btintel_download_firmware, 0x31d13ff1, "_gpl");
SYMBOL_CRC(btintel_set_quality_report, 0xcbbc3084, "_gpl");
SYMBOL_CRC(btintel_bootloader_setup_tlv, 0x2b79a8f6, "_gpl");
SYMBOL_CRC(btintel_set_msft_opcode, 0x1cf928e3, "_gpl");
SYMBOL_CRC(btintel_print_fseq_info, 0xeab42a7b, "_gpl");
SYMBOL_CRC(btintel_shutdown_combined, 0x2df46e82, "_gpl");
SYMBOL_CRC(btintel_configure_setup, 0xe08a1e6f, "_gpl");
SYMBOL_CRC(btintel_recv_event, 0xe11a8d70, "_gpl");
SYMBOL_CRC(btintel_bootup, 0xc46d9f69, "_gpl");
SYMBOL_CRC(btintel_secure_send_result, 0xc46d9f69, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x553959eb, "bt_info" },
	{ 0x285cc76d, "request_firmware_direct" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xf122d403, "skb_pull" },
	{ 0x40a621c5, "snprintf" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xf68beac4, "hci_cmd_sync" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x25d6e170, "bt_to_errno" },
	{ 0x553959eb, "bt_warn" },
	{ 0x67628f51, "msleep" },
	{ 0x402db74e, "memcmp" },
	{ 0x86862d8c, "is_acpi_device_node" },
	{ 0x651bbffe, "acpi_evaluate_object" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xb89645a0, "hci_devcd_init" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x24380e4e, "skb_clone" },
	{ 0x4f2be87a, "hci_devcd_append" },
	{ 0x10c0e01f, "hci_devcd_complete" },
	{ 0x81780efa, "__regmap_init" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x97acb853, "ktime_get" },
	{ 0x29d12a64, "bit_wait_timeout" },
	{ 0x0297537d, "out_of_line_wait_on_bit_timeout" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0x97d7321b, "acpi_format_exception" },
	{ 0x83596232, "firmware_request_nowarn" },
	{ 0x285cc76d, "request_firmware" },
	{ 0xa160fc8b, "__hci_cmd_sync_ev" },
	{ 0xb053df26, "efi" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xf122d403, "skb_put" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x14890a55, "hci_set_hw_info" },
	{ 0xd5ed4c7f, "acpi_has_method" },
	{ 0xd79b18fb, "acpi_check_dsm" },
	{ 0xce40870d, "acpi_evaluate_dsm" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x553959eb, "bt_err" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0x9aa6980d,
	0x9aa6980d,
	0x553959eb,
	0x285cc76d,
	0x1abc7887,
	0xfbe7861b,
	0xf122d403,
	0x40a621c5,
	0xcb8b6ec6,
	0xf68beac4,
	0x30eb81ed,
	0xd272d446,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0xd710adbf,
	0x25d6e170,
	0x553959eb,
	0x67628f51,
	0x402db74e,
	0x86862d8c,
	0x651bbffe,
	0x44010dfe,
	0x86d206f6,
	0x9131c961,
	0xb89645a0,
	0xe8e0a5a9,
	0x24380e4e,
	0x4f2be87a,
	0x10c0e01f,
	0x81780efa,
	0x7851be11,
	0x97acb853,
	0x29d12a64,
	0x0297537d,
	0xf517dbbb,
	0x97d7321b,
	0x83596232,
	0x285cc76d,
	0xa160fc8b,
	0xb053df26,
	0x5a844b26,
	0x9479a1e8,
	0xf122d403,
	0xe54e0a6b,
	0x14890a55,
	0xd5ed4c7f,
	0xd79b18fb,
	0xce40870d,
	0xd272d446,
	0xd272d446,
	0xf68beac4,
	0xcb138788,
	0x553959eb,
	0xbd03ed67,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__stack_chk_fail\0"
	"mutex_lock\0"
	"mutex_unlock\0"
	"bt_info\0"
	"request_firmware_direct\0"
	"release_firmware\0"
	"memcpy\0"
	"skb_pull\0"
	"snprintf\0"
	"kfree\0"
	"hci_cmd_sync\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"__kmalloc_noprof\0"
	"bt_to_errno\0"
	"bt_warn\0"
	"msleep\0"
	"memcmp\0"
	"is_acpi_device_node\0"
	"acpi_evaluate_object\0"
	"skb_pull_data\0"
	"__SCT__WARN_trap\0"
	"hci_recv_frame\0"
	"hci_devcd_init\0"
	"wake_up_bit\0"
	"skb_clone\0"
	"hci_devcd_append\0"
	"hci_devcd_complete\0"
	"__regmap_init\0"
	"__SCT__might_resched\0"
	"ktime_get\0"
	"bit_wait_timeout\0"
	"out_of_line_wait_on_bit_timeout\0"
	"hci_devcd_register\0"
	"acpi_format_exception\0"
	"firmware_request_nowarn\0"
	"request_firmware\0"
	"__hci_cmd_sync_ev\0"
	"efi\0"
	"__x86_indirect_thunk_rax\0"
	"strnlen\0"
	"skb_put\0"
	"__fortify_panic\0"
	"hci_set_hw_info\0"
	"acpi_has_method\0"
	"acpi_check_dsm\0"
	"acpi_evaluate_dsm\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"bt_err\0"
	"__ref_stack_chk_guard\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "2EF4E473A884C5AF7C3B19E");

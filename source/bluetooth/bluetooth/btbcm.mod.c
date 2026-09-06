#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btbcm_check_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btbcm_read_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_write_pcm_int_params, "_gpl", "");
KSYMTAB_FUNC(btbcm_patchram, "", "");
KSYMTAB_FUNC(btbcm_initialize, "_gpl", "");
KSYMTAB_FUNC(btbcm_finalize, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_patchram, "_gpl", "");
KSYMTAB_FUNC(btbcm_setup_apple, "_gpl", "");

SYMBOL_CRC(btbcm_check_bdaddr, 0x73dc77ab, "_gpl");
SYMBOL_CRC(btbcm_set_bdaddr, 0x6ad88cc3, "_gpl");
SYMBOL_CRC(btbcm_read_pcm_int_params, 0x06802bbd, "_gpl");
SYMBOL_CRC(btbcm_write_pcm_int_params, 0xfde7ef82, "_gpl");
SYMBOL_CRC(btbcm_patchram, 0x26f27364, "");
SYMBOL_CRC(btbcm_initialize, 0x0414f344, "_gpl");
SYMBOL_CRC(btbcm_finalize, 0x0414f344, "_gpl");
SYMBOL_CRC(btbcm_setup_patchram, 0x73dc77ab, "_gpl");
SYMBOL_CRC(btbcm_setup_apple, 0x73dc77ab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x402db74e, "memcmp" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xd272d446, "__fentry__" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x553959eb, "bt_err" },
	{ 0x67628f51, "msleep" },
	{ 0x553959eb, "bt_info" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x40a621c5, "snprintf" },
	{ 0x83596232, "firmware_request_nowarn" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x4c0c3cb9, "dmi_first_match" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xb053df26, "efi" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xde055c90, "baswap" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x402db74e,
	0xd272d446,
	0xd272d446,
	0xf68beac4,
	0xcb138788,
	0x553959eb,
	0x67628f51,
	0x553959eb,
	0xbd03ed67,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x40a621c5,
	0x83596232,
	0xcb8b6ec6,
	0x4c0c3cb9,
	0x1abc7887,
	0xd272d446,
	0xe4de56b4,
	0xb053df26,
	0x5a844b26,
	0xde055c90,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"memcmp\0"
	"__x86_return_thunk\0"
	"__fentry__\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"bt_err\0"
	"msleep\0"
	"bt_info\0"
	"__ref_stack_chk_guard\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"snprintf\0"
	"firmware_request_nowarn\0"
	"kfree\0"
	"dmi_first_match\0"
	"release_firmware\0"
	"__stack_chk_fail\0"
	"__ubsan_handle_load_invalid_value\0"
	"efi\0"
	"__x86_indirect_thunk_rax\0"
	"baswap\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "ED8857580F38726D0C4626B");

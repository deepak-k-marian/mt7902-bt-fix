#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(qca_read_soc_version, "_gpl", "");
KSYMTAB_FUNC(qca_send_pre_shutdown_cmd, "_gpl", "");
KSYMTAB_FUNC(qca_set_bdaddr_rome, "_gpl", "");
KSYMTAB_FUNC(qca_uart_setup, "_gpl", "");
KSYMTAB_FUNC(qca_set_bdaddr, "_gpl", "");

SYMBOL_CRC(qca_read_soc_version, 0x2ee9feb8, "_gpl");
SYMBOL_CRC(qca_send_pre_shutdown_cmd, 0x10c0e01f, "_gpl");
SYMBOL_CRC(qca_set_bdaddr_rome, 0xc5abc00d, "_gpl");
SYMBOL_CRC(qca_uart_setup, 0x399050fd, "_gpl");
SYMBOL_CRC(qca_set_bdaddr, 0xc5abc00d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xa160fc8b, "__hci_cmd_sync_ev" },
	{ 0x553959eb, "bt_err" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x553959eb, "bt_info" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xd272d446, "dump_stack" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0xde055c90, "baswap" },
	{ 0x40a621c5, "snprintf" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0x285cc76d, "request_firmware" },
	{ 0x296b9459, "strrchr" },
	{ 0x296b9459, "strchr" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x888b8f57, "strcmp" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xf1de9e85, "vfree" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x67628f51, "msleep" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0x46c12dd3, "kstrndup" },
	{ 0x14890a55, "hci_set_fw_info" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0xbd03ed67,
	0xa160fc8b,
	0x553959eb,
	0xcb138788,
	0xd272d446,
	0x30eb81ed,
	0x553959eb,
	0xd272d446,
	0xd272d446,
	0xfbe7861b,
	0x9f3b7783,
	0xde055c90,
	0x40a621c5,
	0x44010dfe,
	0x285cc76d,
	0x296b9459,
	0x296b9459,
	0x9479a1e8,
	0xd70733be,
	0x888b8f57,
	0xd7a59a65,
	0x1abc7887,
	0xf1de9e85,
	0x6780c24b,
	0xf122d403,
	0x9131c961,
	0xe54e0a6b,
	0x67628f51,
	0xf68beac4,
	0x46c12dd3,
	0x14890a55,
	0xcb8b6ec6,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"__ref_stack_chk_guard\0"
	"__hci_cmd_sync_ev\0"
	"bt_err\0"
	"sk_skb_reason_drop\0"
	"__x86_return_thunk\0"
	"__dynamic_pr_debug\0"
	"bt_info\0"
	"__stack_chk_fail\0"
	"dump_stack\0"
	"memcpy\0"
	"__hci_cmd_send\0"
	"baswap\0"
	"snprintf\0"
	"skb_pull_data\0"
	"request_firmware\0"
	"strrchr\0"
	"strchr\0"
	"strnlen\0"
	"sized_strscpy\0"
	"strcmp\0"
	"vmalloc_noprof\0"
	"release_firmware\0"
	"vfree\0"
	"__alloc_skb\0"
	"skb_put\0"
	"hci_recv_frame\0"
	"__fortify_panic\0"
	"msleep\0"
	"__hci_cmd_sync\0"
	"kstrndup\0"
	"hci_set_fw_info\0"
	"kfree\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "4122E70F0EC6519A375CC4E");

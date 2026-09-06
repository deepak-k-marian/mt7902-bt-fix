#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(btmtk_fw_get_filename, "_gpl", "");
KSYMTAB_FUNC(btmtk_setup_firmware_79xx, "_gpl", "");
KSYMTAB_FUNC(btmtk_setup_firmware, "_gpl", "");
KSYMTAB_FUNC(btmtk_set_bdaddr, "_gpl", "");
KSYMTAB_FUNC(btmtk_reset_sync, "_gpl", "");
KSYMTAB_FUNC(btmtk_register_coredump, "_gpl", "");
KSYMTAB_FUNC(btmtk_process_coredump, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_subsys_reset, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_recv_acl, "_gpl", "");
KSYMTAB_FUNC(alloc_mtk_intr_urb, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_resume, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_suspend, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_setup, "_gpl", "");
KSYMTAB_FUNC(btmtk_usb_shutdown, "_gpl", "");

SYMBOL_CRC(btmtk_fw_get_filename, 0xb9536939, "_gpl");
SYMBOL_CRC(btmtk_setup_firmware_79xx, 0x053dcaae, "_gpl");
SYMBOL_CRC(btmtk_setup_firmware, 0x053dcaae, "_gpl");
SYMBOL_CRC(btmtk_set_bdaddr, 0x20169180, "_gpl");
SYMBOL_CRC(btmtk_reset_sync, 0xcfbb1b8b, "_gpl");
SYMBOL_CRC(btmtk_register_coredump, 0xbca7803a, "_gpl");
SYMBOL_CRC(btmtk_process_coredump, 0x7c5bf660, "_gpl");
SYMBOL_CRC(btmtk_usb_subsys_reset, 0xbe8ee8c8, "_gpl");
SYMBOL_CRC(btmtk_usb_recv_acl, 0x7c5bf660, "_gpl");
SYMBOL_CRC(alloc_mtk_intr_urb, 0xb0bf63bd, "_gpl");
SYMBOL_CRC(btmtk_usb_resume, 0x99b93aa7, "_gpl");
SYMBOL_CRC(btmtk_usb_suspend, 0x99b93aa7, "_gpl");
SYMBOL_CRC(btmtk_usb_setup, 0x99b93aa7, "_gpl");
SYMBOL_CRC(btmtk_usb_shutdown, 0x99b93aa7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0x40a621c5, "snprintf" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x285cc76d, "request_firmware" },
	{ 0x553959eb, "bt_info" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0x67628f51, "msleep" },
	{ 0x553959eb, "bt_err" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x2d449822, "hci_cmd_sync_queue" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0x773eb86a, "usb_alloc_urb" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0xacefd448, "usb_anchor_urb" },
	{ 0x0b0a7e9f, "usb_submit_urb" },
	{ 0x251d9cb7, "usb_free_urb" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x251d9cb7, "usb_unanchor_urb" },
	{ 0xd272d446, "dump_stack" },
	{ 0x8e5a9bc9, "usb_kill_anchored_urbs" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x07448b9c, "usb_autopm_get_interface" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0xfb8382ea, "usb_autopm_put_interface" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x29d12a64, "bit_wait_timeout" },
	{ 0x0297537d, "out_of_line_wait_on_bit_timeout" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x4f2be87a, "hci_devcd_append" },
	{ 0x10c0e01f, "hci_devcd_complete" },
	{ 0xb89645a0, "hci_devcd_init" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0xf9283f73, "usb_disable_autosuspend" },
	{ 0x24380e4e, "skb_clone" },
	{ 0x9131c961, "hci_recv_diag" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0xe4b429e4, "__skb_pad" },
	{ 0xc9e0b93e, "usb_control_msg" },
	{ 0x97acb853, "ktime_get" },
	{ 0xaa154820, "usb_set_interface" },
	{ 0x694a8673, "hci_cmd_sync_cancel" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0x40a621c5,
	0xd272d446,
	0xbd03ed67,
	0x285cc76d,
	0x553959eb,
	0x0feb1e94,
	0x5a844b26,
	0x67628f51,
	0x553959eb,
	0x1abc7887,
	0xd272d446,
	0x5a844b26,
	0xf68beac4,
	0xcb138788,
	0x9aa6980d,
	0x2d449822,
	0x9aa6980d,
	0xf517dbbb,
	0x9f3b7783,
	0x773eb86a,
	0xd710adbf,
	0xa6c3b74d,
	0xacefd448,
	0x0b0a7e9f,
	0x251d9cb7,
	0x30eb81ed,
	0x251d9cb7,
	0xd272d446,
	0x8e5a9bc9,
	0xfbe7861b,
	0x07448b9c,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0xfb8382ea,
	0x7851be11,
	0x44010dfe,
	0xcb8b6ec6,
	0x29d12a64,
	0x0297537d,
	0xe54e0a6b,
	0x4f2be87a,
	0x10c0e01f,
	0xb89645a0,
	0xaef1f20d,
	0x8ce83585,
	0xf9283f73,
	0x24380e4e,
	0x9131c961,
	0x9131c961,
	0xcbae5412,
	0x6780c24b,
	0xf122d403,
	0xe8e0a5a9,
	0xe4b429e4,
	0xc9e0b93e,
	0x97acb853,
	0xaa154820,
	0x694a8673,
	0x11f4259a,
	0x444885a7,
	0xe4de56b4,
	0x9479a1e8,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"snprintf\0"
	"__x86_return_thunk\0"
	"__ref_stack_chk_guard\0"
	"request_firmware\0"
	"bt_info\0"
	"usleep_range_state\0"
	"__x86_indirect_thunk_r15\0"
	"msleep\0"
	"bt_err\0"
	"release_firmware\0"
	"__stack_chk_fail\0"
	"__x86_indirect_thunk_r13\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"mutex_lock\0"
	"hci_cmd_sync_queue\0"
	"mutex_unlock\0"
	"hci_devcd_register\0"
	"__hci_cmd_send\0"
	"usb_alloc_urb\0"
	"__kmalloc_noprof\0"
	"ktime_get_mono_fast_ns\0"
	"usb_anchor_urb\0"
	"usb_submit_urb\0"
	"usb_free_urb\0"
	"__dynamic_pr_debug\0"
	"usb_unanchor_urb\0"
	"dump_stack\0"
	"usb_kill_anchored_urbs\0"
	"memcpy\0"
	"usb_autopm_get_interface\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"usb_autopm_put_interface\0"
	"__SCT__might_resched\0"
	"skb_pull_data\0"
	"kfree\0"
	"bit_wait_timeout\0"
	"out_of_line_wait_on_bit_timeout\0"
	"__fortify_panic\0"
	"hci_devcd_append\0"
	"hci_devcd_complete\0"
	"hci_devcd_init\0"
	"system_percpu_wq\0"
	"queue_delayed_work_on\0"
	"usb_disable_autosuspend\0"
	"skb_clone\0"
	"hci_recv_diag\0"
	"hci_recv_frame\0"
	"__const_udelay\0"
	"__alloc_skb\0"
	"skb_put\0"
	"wake_up_bit\0"
	"__skb_pad\0"
	"usb_control_msg\0"
	"ktime_get\0"
	"usb_set_interface\0"
	"hci_cmd_sync_cancel\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"__ubsan_handle_load_invalid_value\0"
	"strnlen\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "8B27107061B482AC60A5049");

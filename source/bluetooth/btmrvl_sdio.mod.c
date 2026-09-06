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
	{ 0x553959eb, "bt_info" },
	{ 0xe3bcfb07, "sdio_get_host_pm_caps" },
	{ 0x8e3336dd, "enable_irq" },
	{ 0xfe9be5a6, "irq_set_irq_wake" },
	{ 0x41a2b9f1, "hci_suspend_dev" },
	{ 0x86f73528, "btmrvl_enable_hs" },
	{ 0xad221fd3, "sdio_set_host_pm_flags" },
	{ 0x8e3336dd, "disable_irq" },
	{ 0x67628f51, "msleep" },
	{ 0xac82d61d, "sdio_unregister_driver" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x41a2b9f1, "hci_resume_dev" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xfb95a300, "sdio_readsb" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0x9f93d732, "btmrvl_interrupt" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x193951ea, "sdio_writesb" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xf1de9e85, "vfree" },
	{ 0xd7a59a65, "vzalloc_noprof" },
	{ 0x40a621c5, "scnprintf" },
	{ 0x89bd5572, "dev_coredumpv" },
	{ 0x9479a1e8, "strnlen" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0xf122d403, "skb_pull" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x673b0179, "btmrvl_process_event" },
	{ 0x6b68f237, "btmrvl_check_evtpkt" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x233dde08, "sdio_enable_func" },
	{ 0xb359fb01, "sdio_claim_irq" },
	{ 0xabcb2f9c, "sdio_set_block_size" },
	{ 0x285cc76d, "request_firmware" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x233dde08, "sdio_release_irq" },
	{ 0x233dde08, "sdio_disable_func" },
	{ 0x003f084b, "_dev_info" },
	{ 0x566020f2, "btmrvl_add_card" },
	{ 0x86f73528, "btmrvl_register_hdev" },
	{ 0x86f73528, "btmrvl_remove_card" },
	{ 0x158ed30a, "btmrvl_send_module_cfg_cmd" },
	{ 0xd272d446, "__fentry__" },
	{ 0xf00b4892, "__sdio_register_driver" },
	{ 0x553959eb, "bt_err" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xcf1ca6d3, "sdio_claim_host" },
	{ 0x01761acb, "sdio_writeb" },
	{ 0xcf1ca6d3, "sdio_release_host" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xd272d446, "dump_stack" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x246e0e22, "sdio_f0_readb" },
	{ 0x1b024e60, "sdio_readb" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x553959eb,
	0xe3bcfb07,
	0x8e3336dd,
	0xfe9be5a6,
	0x41a2b9f1,
	0x86f73528,
	0xad221fd3,
	0x8e3336dd,
	0x67628f51,
	0xac82d61d,
	0x5a844b26,
	0x41a2b9f1,
	0xe4de56b4,
	0xfb95a300,
	0x11f4259a,
	0x444885a7,
	0x9f93d732,
	0xcbae5412,
	0xd710adbf,
	0xfbe7861b,
	0x193951ea,
	0xcb8b6ec6,
	0x0feb1e94,
	0xf1de9e85,
	0xd7a59a65,
	0x40a621c5,
	0x89bd5572,
	0x9479a1e8,
	0x90a48d82,
	0xe54e0a6b,
	0x6780c24b,
	0xf122d403,
	0xf122d403,
	0x9131c961,
	0xcb138788,
	0x673b0179,
	0x6b68f237,
	0x82fd7238,
	0xb6b7f2c0,
	0x233dde08,
	0xb359fb01,
	0xabcb2f9c,
	0x285cc76d,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x1abc7887,
	0x233dde08,
	0x233dde08,
	0x003f084b,
	0x566020f2,
	0x86f73528,
	0x86f73528,
	0x158ed30a,
	0xd272d446,
	0xf00b4892,
	0x553959eb,
	0xd272d446,
	0xbd03ed67,
	0xcf1ca6d3,
	0x01761acb,
	0xcf1ca6d3,
	0x30eb81ed,
	0xd272d446,
	0xd272d446,
	0xdd6830c7,
	0x246e0e22,
	0x1b024e60,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"bt_info\0"
	"sdio_get_host_pm_caps\0"
	"enable_irq\0"
	"irq_set_irq_wake\0"
	"hci_suspend_dev\0"
	"btmrvl_enable_hs\0"
	"sdio_set_host_pm_flags\0"
	"disable_irq\0"
	"msleep\0"
	"sdio_unregister_driver\0"
	"__x86_indirect_thunk_rax\0"
	"hci_resume_dev\0"
	"__ubsan_handle_load_invalid_value\0"
	"sdio_readsb\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"btmrvl_interrupt\0"
	"__const_udelay\0"
	"__kmalloc_noprof\0"
	"memcpy\0"
	"sdio_writesb\0"
	"kfree\0"
	"usleep_range_state\0"
	"vfree\0"
	"vzalloc_noprof\0"
	"scnprintf\0"
	"dev_coredumpv\0"
	"strnlen\0"
	"__ubsan_handle_out_of_bounds\0"
	"__fortify_panic\0"
	"__alloc_skb\0"
	"skb_put\0"
	"skb_pull\0"
	"hci_recv_frame\0"
	"sk_skb_reason_drop\0"
	"btmrvl_process_event\0"
	"btmrvl_check_evtpkt\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"devm_kmalloc\0"
	"sdio_enable_func\0"
	"sdio_claim_irq\0"
	"sdio_set_block_size\0"
	"request_firmware\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"release_firmware\0"
	"sdio_release_irq\0"
	"sdio_disable_func\0"
	"_dev_info\0"
	"btmrvl_add_card\0"
	"btmrvl_register_hdev\0"
	"btmrvl_remove_card\0"
	"btmrvl_send_module_cfg_cmd\0"
	"__fentry__\0"
	"__sdio_register_driver\0"
	"bt_err\0"
	"__x86_return_thunk\0"
	"__ref_stack_chk_guard\0"
	"sdio_claim_host\0"
	"sdio_writeb\0"
	"sdio_release_host\0"
	"__dynamic_pr_debug\0"
	"__stack_chk_fail\0"
	"dump_stack\0"
	"sprintf\0"
	"sdio_f0_readb\0"
	"sdio_readb\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,btmrvl");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "135DD55010916C4AC66B3AE");

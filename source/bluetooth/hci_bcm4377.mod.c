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
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0xf745e777, "wait_for_completion_interruptible_timeout" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x0e9cab28, "memset" },
	{ 0x62cbec20, "complete" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x8cc3762a, "dma_set_mask" },
	{ 0x8cc3762a, "dma_set_coherent_mask" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0x4c0c3cb9, "dmi_first_match" },
	{ 0x0d1ace87, "pci_reset_function_locked" },
	{ 0x67628f51, "msleep" },
	{ 0x82ca6a36, "pcim_enable_device" },
	{ 0xe7d8631f, "pci_set_master" },
	{ 0x011a1eab, "pci_write_config_dword" },
	{ 0x44ed41cc, "pci_read_config_dword" },
	{ 0x26f124d0, "pcim_iomap" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x7e2232fb, "ioread8" },
	{ 0x9c59321c, "pci_disable_link_state" },
	{ 0x8be8f029, "pcie_capability_clear_and_set_word_locked" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x7136143f, "pci_alloc_irq_vectors" },
	{ 0xd69e7b5a, "__devm_add_action" },
	{ 0x86b5dd39, "pci_irq_vector" },
	{ 0x97b56d08, "devm_request_threaded_irq" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0xa018176d, "dma_alloc_attrs" },
	{ 0xb63d3d85, "dma_free_attrs" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0xd272d446, "__fentry__" },
	{ 0x75762315, "__pci_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xfad8f384, "iowrite32" },
	{ 0x41a2b9f1, "hci_resume_dev" },
	{ 0x41a2b9f1, "hci_suspend_dev" },
	{ 0x003f084b, "_dev_warn" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x6197c68e, "__dynamic_dev_dbg" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x40a621c5, "snprintf" },
	{ 0x83596232, "firmware_request_nowarn" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x003f084b, "_dev_err" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x7f1956e2, "pci_free_irq_vectors" },
	{ 0x1561c533, "dmam_alloc_attrs" },
	{ 0x3629ead7, "skip_spaces" },
	{ 0x296b9459, "strchrnul" },
	{ 0x9b4b48a0, "_ctype" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x99e8367a, "pci_unregister_driver" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x86632fd6, "_find_next_bit" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x444885a7,
	0xf745e777,
	0xe4de56b4,
	0x0e9cab28,
	0x62cbec20,
	0xb6b7f2c0,
	0x6780c24b,
	0xf122d403,
	0x9131c961,
	0x82fd7238,
	0x7e2232fb,
	0x8cc3762a,
	0x8cc3762a,
	0xc2ccdd1e,
	0x4c0c3cb9,
	0x0d1ace87,
	0x67628f51,
	0x82ca6a36,
	0xe7d8631f,
	0x011a1eab,
	0x44ed41cc,
	0x26f124d0,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x7e2232fb,
	0x9c59321c,
	0x8be8f029,
	0xcb8b6ec6,
	0x7136143f,
	0xd69e7b5a,
	0x86b5dd39,
	0x97b56d08,
	0x87510f11,
	0xa018176d,
	0xb63d3d85,
	0x41a2b9f1,
	0xd272d446,
	0x75762315,
	0xd272d446,
	0xfad8f384,
	0x41a2b9f1,
	0x41a2b9f1,
	0x003f084b,
	0x21891121,
	0x6197c68e,
	0xd272d446,
	0xbd03ed67,
	0x40a621c5,
	0x83596232,
	0xd272d446,
	0x003f084b,
	0xf68beac4,
	0xcb138788,
	0x5a844b26,
	0x1abc7887,
	0xfbe7861b,
	0x21891121,
	0x7f1956e2,
	0x1561c533,
	0x3629ead7,
	0x296b9459,
	0x9b4b48a0,
	0x9479a1e8,
	0xd70733be,
	0x90a48d82,
	0xe54e0a6b,
	0x99e8367a,
	0x11f4259a,
	0x86632fd6,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_raw_spin_unlock_irqrestore\0"
	"wait_for_completion_interruptible_timeout\0"
	"__ubsan_handle_load_invalid_value\0"
	"memset\0"
	"complete\0"
	"devm_kmalloc\0"
	"__alloc_skb\0"
	"skb_put\0"
	"hci_recv_frame\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"ioread32\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"__init_swait_queue_head\0"
	"dmi_first_match\0"
	"pci_reset_function_locked\0"
	"msleep\0"
	"pcim_enable_device\0"
	"pci_set_master\0"
	"pci_write_config_dword\0"
	"pci_read_config_dword\0"
	"pcim_iomap\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"ioread8\0"
	"pci_disable_link_state\0"
	"pcie_capability_clear_and_set_word_locked\0"
	"kfree\0"
	"pci_alloc_irq_vectors\0"
	"__devm_add_action\0"
	"pci_irq_vector\0"
	"devm_request_threaded_irq\0"
	"hci_alloc_dev_priv\0"
	"dma_alloc_attrs\0"
	"dma_free_attrs\0"
	"hci_register_dev\0"
	"__fentry__\0"
	"__pci_register_driver\0"
	"__x86_return_thunk\0"
	"iowrite32\0"
	"hci_resume_dev\0"
	"hci_suspend_dev\0"
	"_dev_warn\0"
	"hci_unregister_dev\0"
	"__dynamic_dev_dbg\0"
	"dump_stack\0"
	"__ref_stack_chk_guard\0"
	"snprintf\0"
	"firmware_request_nowarn\0"
	"__stack_chk_fail\0"
	"_dev_err\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"__x86_indirect_thunk_rax\0"
	"release_firmware\0"
	"memcpy\0"
	"hci_free_dev\0"
	"pci_free_irq_vectors\0"
	"dmam_alloc_attrs\0"
	"skip_spaces\0"
	"strchrnul\0"
	"_ctype\0"
	"strnlen\0"
	"sized_strscpy\0"
	"__ubsan_handle_out_of_bounds\0"
	"__fortify_panic\0"
	"pci_unregister_driver\0"
	"_raw_spin_lock_irqsave\0"
	"_find_next_bit\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("pci:v000014E4d00005FA0sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00005F69sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00005F71sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00005F72sv*sd*bc02sc80i*");

MODULE_INFO(srcversion, "30738CC2A8470153761EA4B");

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
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xb730487b, "finish_wait" },
	{ 0x553959eb, "bt_warn" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x43a349ca, "strlen" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0x888b8f57, "strcmp" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x97acb853, "ktime_get" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0x65ed6ca7, "skb_trim" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0xc46d9f69, "btintel_secure_send_result" },
	{ 0x9131c961, "hci_recv_diag" },
	{ 0xc46d9f69, "btintel_bootup" },
	{ 0xe8e0a5a9, "wake_up_bit" },
	{ 0x01da6614, "iowrite8" },
	{ 0x40a621c5, "snprintf" },
	{ 0x680628e7, "ktime_get_real_ts64" },
	{ 0x7fd36f2e, "time64_to_tm" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0x89bd5572, "dev_coredumpv" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x6f1ee4ae, "pci_dev_get" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x12ca6142, "ktime_get_coarse_with_offset" },
	{ 0x8e3336dd, "synchronize_irq" },
	{ 0x2d88a3ab, "flush_work" },
	{ 0x9dd4105e, "free_irq" },
	{ 0x7f1956e2, "pci_free_irq_vectors" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0xb63d3d85, "dma_free_attrs" },
	{ 0x3e1af5f1, "dma_pool_free" },
	{ 0xab48d875, "dma_pool_destroy" },
	{ 0xe7d8631f, "pci_clear_master" },
	{ 0xd272d446, "pci_lock_rescan_remove" },
	{ 0x0d1ace87, "pci_reset_function" },
	{ 0xbb034ebc, "pci_dev_put" },
	{ 0xd272d446, "pci_unlock_rescan_remove" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0x82ca6a36, "pcim_enable_device" },
	{ 0xe7d8631f, "pci_set_master" },
	{ 0x8cc3762a, "dma_set_mask" },
	{ 0x8cc3762a, "dma_set_coherent_mask" },
	{ 0x32234928, "pcim_iomap_region" },
	{ 0x7136143f, "pci_alloc_irq_vectors" },
	{ 0x86b5dd39, "pci_irq_vector" },
	{ 0x97b56d08, "devm_request_threaded_irq" },
	{ 0xa47b9a5a, "dma_pool_create_node" },
	{ 0xe1a85ad3, "dma_pool_alloc" },
	{ 0xa018176d, "dma_alloc_attrs" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0xde299862, "skb_dequeue" },
	{ 0xf122d403, "skb_push" },
	{ 0x61079369, "print_hex_dump" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x75762315, "__pci_register_driver" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xfad8f384, "iowrite32" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0x2df46e82, "btintel_shutdown_combined" },
	{ 0xcbbc3084, "btintel_set_diag" },
	{ 0x6e9b7228, "btintel_set_bdaddr" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x553959eb, "bt_err" },
	{ 0x21891121, "hci_free_dev" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x91c38921, "hci_drv_cmd_complete" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x7e2232fb, "ioread32" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0xcbbc3084, "btintel_set_quality_report" },
	{ 0x81766d22, "btintel_parse_version_tlv" },
	{ 0xd25f3cae, "btintel_version_info_tlv" },
	{ 0x1cf928e3, "btintel_set_msft_opcode" },
	{ 0x2b79a8f6, "btintel_bootloader_setup_tlv" },
	{ 0xeab42a7b, "btintel_print_fseq_info" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x1561c533, "dmam_alloc_attrs" },
	{ 0x99e8367a, "pci_unregister_driver" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x7851be11,
	0x7a5ffe84,
	0xc281f1fb,
	0x6ac784f4,
	0xb730487b,
	0x553959eb,
	0xe4de56b4,
	0x43a349ca,
	0x5af09d8b,
	0x888b8f57,
	0x5af09d8b,
	0xd710adbf,
	0x9479a1e8,
	0xd70733be,
	0xdc352a3b,
	0xe54e0a6b,
	0x97acb853,
	0x44010dfe,
	0x65ed6ca7,
	0x9131c961,
	0xc46d9f69,
	0x9131c961,
	0xc46d9f69,
	0xe8e0a5a9,
	0x01da6614,
	0x40a621c5,
	0x680628e7,
	0x7fd36f2e,
	0xd7a59a65,
	0x89bd5572,
	0x68a1b6c6,
	0x6f1ee4ae,
	0xaef1f20d,
	0x12ca6142,
	0x8e3336dd,
	0x2d88a3ab,
	0x9dd4105e,
	0x7f1956e2,
	0x21891121,
	0xbeb1d261,
	0xb63d3d85,
	0x3e1af5f1,
	0xab48d875,
	0xe7d8631f,
	0xd272d446,
	0x0d1ace87,
	0xbb034ebc,
	0xd272d446,
	0xe804603d,
	0xdf4bee3d,
	0x82ca6a36,
	0xe7d8631f,
	0x8cc3762a,
	0x8cc3762a,
	0x32234928,
	0x7136143f,
	0x86b5dd39,
	0x97b56d08,
	0xa47b9a5a,
	0xe1a85ad3,
	0xa018176d,
	0x6780c24b,
	0xf122d403,
	0x464ea3f9,
	0xde299862,
	0xf122d403,
	0x61079369,
	0x82fd7238,
	0xd272d446,
	0xd272d446,
	0x75762315,
	0x49733ad6,
	0xfad8f384,
	0x30eb81ed,
	0xd272d446,
	0x87510f11,
	0x2df46e82,
	0xcbbc3084,
	0x6e9b7228,
	0x41a2b9f1,
	0x553959eb,
	0x21891121,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x91c38921,
	0xcb8b6ec6,
	0x90a48d82,
	0xfbe7861b,
	0x7e2232fb,
	0x0feb1e94,
	0xbd03ed67,
	0xf68beac4,
	0xcb138788,
	0xcbbc3084,
	0x81766d22,
	0xd25f3cae,
	0x1cf928e3,
	0x2b79a8f6,
	0xeab42a7b,
	0xd272d446,
	0xb6b7f2c0,
	0x1561c533,
	0x99e8367a,
	0x4f1e5fd0,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__SCT__might_resched\0"
	"init_wait_entry\0"
	"prepare_to_wait_event\0"
	"schedule_timeout\0"
	"finish_wait\0"
	"bt_warn\0"
	"__ubsan_handle_load_invalid_value\0"
	"strlen\0"
	"_raw_spin_lock\0"
	"strcmp\0"
	"_raw_spin_unlock\0"
	"__kmalloc_noprof\0"
	"strnlen\0"
	"sized_strscpy\0"
	"__list_add_valid_or_report\0"
	"__fortify_panic\0"
	"ktime_get\0"
	"skb_pull_data\0"
	"skb_trim\0"
	"hci_recv_frame\0"
	"btintel_secure_send_result\0"
	"hci_recv_diag\0"
	"btintel_bootup\0"
	"wake_up_bit\0"
	"iowrite8\0"
	"snprintf\0"
	"ktime_get_real_ts64\0"
	"time64_to_tm\0"
	"vmalloc_noprof\0"
	"dev_coredumpv\0"
	"__wake_up\0"
	"pci_dev_get\0"
	"system_percpu_wq\0"
	"ktime_get_coarse_with_offset\0"
	"synchronize_irq\0"
	"flush_work\0"
	"free_irq\0"
	"pci_free_irq_vectors\0"
	"hci_unregister_dev\0"
	"destroy_workqueue\0"
	"dma_free_attrs\0"
	"dma_pool_free\0"
	"dma_pool_destroy\0"
	"pci_clear_master\0"
	"pci_lock_rescan_remove\0"
	"pci_reset_function\0"
	"pci_dev_put\0"
	"pci_unlock_rescan_remove\0"
	"__init_waitqueue_head\0"
	"alloc_workqueue_noprof\0"
	"pcim_enable_device\0"
	"pci_set_master\0"
	"dma_set_mask\0"
	"dma_set_coherent_mask\0"
	"pcim_iomap_region\0"
	"pci_alloc_irq_vectors\0"
	"pci_irq_vector\0"
	"devm_request_threaded_irq\0"
	"dma_pool_create_node\0"
	"dma_pool_alloc\0"
	"dma_alloc_attrs\0"
	"__alloc_skb\0"
	"skb_put\0"
	"skb_queue_tail\0"
	"skb_dequeue\0"
	"skb_push\0"
	"print_hex_dump\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__pci_register_driver\0"
	"queue_work_on\0"
	"iowrite32\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"hci_alloc_dev_priv\0"
	"btintel_shutdown_combined\0"
	"btintel_set_diag\0"
	"btintel_set_bdaddr\0"
	"hci_register_dev\0"
	"bt_err\0"
	"hci_free_dev\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"hci_drv_cmd_complete\0"
	"kfree\0"
	"__ubsan_handle_out_of_bounds\0"
	"memcpy\0"
	"ioread32\0"
	"usleep_range_state\0"
	"__ref_stack_chk_guard\0"
	"__hci_cmd_sync\0"
	"sk_skb_reason_drop\0"
	"btintel_set_quality_report\0"
	"btintel_parse_version_tlv\0"
	"btintel_version_info_tlv\0"
	"btintel_set_msft_opcode\0"
	"btintel_bootloader_setup_tlv\0"
	"btintel_print_fseq_info\0"
	"__stack_chk_fail\0"
	"devm_kmalloc\0"
	"dmam_alloc_attrs\0"
	"pci_unregister_driver\0"
	"__list_del_entry_valid_or_report\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,btintel");

MODULE_ALIAS("pci:v00008086d00004D76sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A876sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000E376sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000E476sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FA4AA353BB9807CB8D761FF");

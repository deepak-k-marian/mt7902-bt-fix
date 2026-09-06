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
	{ 0xdfafb5b5, "kstrtobool_from_user" },
	{ 0x437e81c7, "simple_read_from_buffer" },
	{ 0x44010dfe, "skb_pull_data" },
	{ 0x553959eb, "bt_warn" },
	{ 0x07e84e3f, "pm_runtime_allow" },
	{ 0x02af579a, "__pm_runtime_suspend" },
	{ 0x07e84e3f, "pm_runtime_forbid" },
	{ 0x2aecda4b, "device_set_wakeup_capable" },
	{ 0xfb8382ea, "usb_autopm_put_interface" },
	{ 0x24380e4e, "skb_clone" },
	{ 0x9d80d654, "consume_skb" },
	{ 0x9131c961, "hci_recv_frame" },
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x561420e7, "gpiod_put" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x946c7204, "device_wakeup_disable" },
	{ 0x3fdde6b2, "usb_driver_release_interface" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x6780c24b, "__alloc_skb" },
	{ 0xf122d403, "skb_put" },
	{ 0xb0bf63bd, "alloc_mtk_intr_urb" },
	{ 0xe6c955ef, "dev_kfree_skb_irq_reason" },
	{ 0x99b93aa7, "btmtk_usb_shutdown" },
	{ 0x85acaba2, "cancel_delayed_work" },
	{ 0xe81a5327, "skb_queue_purge_reason" },
	{ 0x8e5a9bc9, "usb_scuttle_anchored_urbs" },
	{ 0xbe8ee8c8, "btmtk_usb_subsys_reset" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x464ea3f9, "skb_queue_tail" },
	{ 0x8ce83585, "queue_delayed_work_on" },
	{ 0x94463d80, "usb_get_from_anchor" },
	{ 0x8e3336dd, "disable_irq" },
	{ 0x9131c961, "hci_recv_diag" },
	{ 0xaa154820, "usb_set_interface" },
	{ 0x70306088, "hci_drv_cmd_status" },
	{ 0x3d2c0787, "usb_match_id" },
	{ 0x71798f7e, "delayed_work_timer_fn" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0xe11a8d70, "btintel_recv_event" },
	{ 0x87510f11, "hci_alloc_dev_priv" },
	{ 0xa768db85, "gpiod_get_optional" },
	{ 0xcfbb1b8b, "btmtk_reset_sync" },
	{ 0x20169180, "btmtk_set_bdaddr" },
	{ 0x7c5bf660, "btmtk_usb_recv_acl" },
	{ 0x99b93aa7, "btmtk_usb_suspend" },
	{ 0x99b93aa7, "btmtk_usb_resume" },
	{ 0x41a2b9f1, "hci_register_dev" },
	{ 0x0f490cb2, "debugfs_create_file_full" },
	{ 0xe08a1e6f, "btintel_configure_setup" },
	{ 0x73dc77ab, "btbcm_setup_apple" },
	{ 0x73dc77ab, "btbcm_setup_patchram" },
	{ 0x6ad88cc3, "btbcm_set_bdaddr" },
	{ 0x9517df2c, "pci_get_subsys" },
	{ 0xbb034ebc, "pci_dev_put" },
	{ 0xf517dbbb, "hci_devcd_register" },
	{ 0x9522c011, "btrtl_set_driver_name" },
	{ 0x99b93aa7, "btrtl_shutdown_realtek" },
	{ 0x9c25c67b, "dmi_check_system" },
	{ 0x5a2322a3, "param_ops_bool" },
	{ 0xc1cd8d94, "default_llseek" },
	{ 0xf40559ea, "simple_open" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x3fc0ae15, "usb_register_driver" },
	{ 0x773eb86a, "usb_alloc_urb" },
	{ 0xacefd448, "usb_anchor_urb" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0x0b0a7e9f, "usb_submit_urb" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0x553959eb, "bt_err" },
	{ 0x251d9cb7, "usb_unanchor_urb" },
	{ 0xd272d446, "dump_stack" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xc4fee520, "kmalloc_caches" },
	{ 0x4574d0c7, "__kmalloc_cache_noprof" },
	{ 0x251d9cb7, "usb_free_urb" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xcb138788, "sk_skb_reason_drop" },
	{ 0x694a8673, "hci_cmd_sync_cancel" },
	{ 0x29bb29eb, "hci_discovery_active" },
	{ 0x5af09d8b, "_raw_spin_lock_irq" },
	{ 0x5af09d8b, "_raw_spin_unlock_irq" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x8e5a9bc9, "usb_kill_anchored_urbs" },
	{ 0xfe9be5a6, "irq_set_irq_wake" },
	{ 0x8e3336dd, "enable_irq" },
	{ 0xf68beac4, "__hci_cmd_sync" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x07448b9c, "usb_autopm_get_interface" },
	{ 0xbf1283dc, "usb_queue_reset_device" },
	{ 0x553959eb, "bt_info" },
	{ 0xbd2119fb, "gpiod_set_value_cansleep" },
	{ 0x67628f51, "msleep" },
	{ 0x99b93aa7, "btrtl_setup_realtek" },
	{ 0xa160fc8b, "__hci_cmd_sync_ev" },
	{ 0x9f3b7783, "__hci_cmd_send" },
	{ 0xf122d403, "skb_pull" },
	{ 0xb89645a0, "hci_devcd_init" },
	{ 0xf9283f73, "usb_disable_autosuspend" },
	{ 0x4f2be87a, "hci_devcd_append" },
	{ 0x10c0e01f, "hci_devcd_complete" },
	{ 0x1f077293, "hci_devcd_append_pattern" },
	{ 0xf9283f73, "usb_enable_autosuspend" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xc9e0b93e, "usb_control_msg" },
	{ 0xda0450c1, "usb_bulk_msg" },
	{ 0x40a621c5, "snprintf" },
	{ 0x285cc76d, "request_firmware" },
	{ 0x1abc7887, "release_firmware" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x003f084b, "_dev_err" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x91c38921, "hci_drv_cmd_complete" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0xde299862, "skb_dequeue" },
	{ 0x99b93aa7, "btmtk_usb_setup" },
	{ 0xe5c85858, "usb_ifnum_to_if" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x088616a6, "usb_driver_claim_interface" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x645ed827, "usb_deregister" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0x8db9b6ac, "__usecs_to_jiffies" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xdfafb5b5,
	0x437e81c7,
	0x44010dfe,
	0x553959eb,
	0x07e84e3f,
	0x02af579a,
	0x07e84e3f,
	0x2aecda4b,
	0xfb8382ea,
	0x24380e4e,
	0x9d80d654,
	0x9131c961,
	0x21891121,
	0x561420e7,
	0x21891121,
	0x946c7204,
	0x3fdde6b2,
	0xaef1f20d,
	0x49733ad6,
	0x6780c24b,
	0xf122d403,
	0xb0bf63bd,
	0xe6c955ef,
	0x99b93aa7,
	0x85acaba2,
	0xe81a5327,
	0x8e5a9bc9,
	0xbe8ee8c8,
	0xd272d446,
	0xd272d446,
	0x464ea3f9,
	0x8ce83585,
	0x94463d80,
	0x8e3336dd,
	0x9131c961,
	0xaa154820,
	0x70306088,
	0x3d2c0787,
	0x71798f7e,
	0x02f9bbf0,
	0xe11a8d70,
	0x87510f11,
	0xa768db85,
	0xcfbb1b8b,
	0x20169180,
	0x7c5bf660,
	0x99b93aa7,
	0x99b93aa7,
	0x41a2b9f1,
	0x0f490cb2,
	0xe08a1e6f,
	0x73dc77ab,
	0x73dc77ab,
	0x6ad88cc3,
	0x9517df2c,
	0xbb034ebc,
	0xf517dbbb,
	0x9522c011,
	0x99b93aa7,
	0x9c25c67b,
	0x5a2322a3,
	0xc1cd8d94,
	0xf40559ea,
	0xd272d446,
	0xd272d446,
	0x5a844b26,
	0x3fc0ae15,
	0x773eb86a,
	0xacefd448,
	0xa6c3b74d,
	0x0b0a7e9f,
	0x30eb81ed,
	0x553959eb,
	0x251d9cb7,
	0xd272d446,
	0xbd03ed67,
	0xc4fee520,
	0x4574d0c7,
	0x251d9cb7,
	0x11f4259a,
	0x444885a7,
	0xcb8b6ec6,
	0xcb138788,
	0x694a8673,
	0x29bb29eb,
	0x5af09d8b,
	0x5af09d8b,
	0x2d88a3ab,
	0x8e5a9bc9,
	0xfe9be5a6,
	0x8e3336dd,
	0xf68beac4,
	0xbd03ed67,
	0xd272d446,
	0x07448b9c,
	0xbf1283dc,
	0x553959eb,
	0xbd2119fb,
	0x67628f51,
	0x99b93aa7,
	0xa160fc8b,
	0x9f3b7783,
	0xf122d403,
	0xb89645a0,
	0xf9283f73,
	0x4f2be87a,
	0x10c0e01f,
	0x1f077293,
	0xf9283f73,
	0xfbe7861b,
	0xc9e0b93e,
	0xda0450c1,
	0x40a621c5,
	0x285cc76d,
	0x1abc7887,
	0xd710adbf,
	0x003f084b,
	0x9479a1e8,
	0xd70733be,
	0x91c38921,
	0x90a48d82,
	0xe54e0a6b,
	0x5a844b26,
	0xde299862,
	0x99b93aa7,
	0xe5c85858,
	0x9aa6980d,
	0x088616a6,
	0x9aa6980d,
	0xe804603d,
	0x645ed827,
	0x534ed5f3,
	0x8db9b6ac,
	0xe4de56b4,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"kstrtobool_from_user\0"
	"simple_read_from_buffer\0"
	"skb_pull_data\0"
	"bt_warn\0"
	"pm_runtime_allow\0"
	"__pm_runtime_suspend\0"
	"pm_runtime_forbid\0"
	"device_set_wakeup_capable\0"
	"usb_autopm_put_interface\0"
	"skb_clone\0"
	"consume_skb\0"
	"hci_recv_frame\0"
	"hci_unregister_dev\0"
	"gpiod_put\0"
	"hci_free_dev\0"
	"device_wakeup_disable\0"
	"usb_driver_release_interface\0"
	"system_percpu_wq\0"
	"queue_work_on\0"
	"__alloc_skb\0"
	"skb_put\0"
	"alloc_mtk_intr_urb\0"
	"dev_kfree_skb_irq_reason\0"
	"btmtk_usb_shutdown\0"
	"cancel_delayed_work\0"
	"skb_queue_purge_reason\0"
	"usb_scuttle_anchored_urbs\0"
	"btmtk_usb_subsys_reset\0"
	"__rcu_read_lock\0"
	"__rcu_read_unlock\0"
	"skb_queue_tail\0"
	"queue_delayed_work_on\0"
	"usb_get_from_anchor\0"
	"disable_irq\0"
	"hci_recv_diag\0"
	"usb_set_interface\0"
	"hci_drv_cmd_status\0"
	"usb_match_id\0"
	"delayed_work_timer_fn\0"
	"timer_init_key\0"
	"btintel_recv_event\0"
	"hci_alloc_dev_priv\0"
	"gpiod_get_optional\0"
	"btmtk_reset_sync\0"
	"btmtk_set_bdaddr\0"
	"btmtk_usb_recv_acl\0"
	"btmtk_usb_suspend\0"
	"btmtk_usb_resume\0"
	"hci_register_dev\0"
	"debugfs_create_file_full\0"
	"btintel_configure_setup\0"
	"btbcm_setup_apple\0"
	"btbcm_setup_patchram\0"
	"btbcm_set_bdaddr\0"
	"pci_get_subsys\0"
	"pci_dev_put\0"
	"hci_devcd_register\0"
	"btrtl_set_driver_name\0"
	"btrtl_shutdown_realtek\0"
	"dmi_check_system\0"
	"param_ops_bool\0"
	"default_llseek\0"
	"simple_open\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__x86_indirect_thunk_rax\0"
	"usb_register_driver\0"
	"usb_alloc_urb\0"
	"usb_anchor_urb\0"
	"ktime_get_mono_fast_ns\0"
	"usb_submit_urb\0"
	"__dynamic_pr_debug\0"
	"bt_err\0"
	"usb_unanchor_urb\0"
	"dump_stack\0"
	"random_kmalloc_seed\0"
	"kmalloc_caches\0"
	"__kmalloc_cache_noprof\0"
	"usb_free_urb\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_unlock_irqrestore\0"
	"kfree\0"
	"sk_skb_reason_drop\0"
	"hci_cmd_sync_cancel\0"
	"hci_discovery_active\0"
	"_raw_spin_lock_irq\0"
	"_raw_spin_unlock_irq\0"
	"cancel_work_sync\0"
	"usb_kill_anchored_urbs\0"
	"irq_set_irq_wake\0"
	"enable_irq\0"
	"__hci_cmd_sync\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"usb_autopm_get_interface\0"
	"usb_queue_reset_device\0"
	"bt_info\0"
	"gpiod_set_value_cansleep\0"
	"msleep\0"
	"btrtl_setup_realtek\0"
	"__hci_cmd_sync_ev\0"
	"__hci_cmd_send\0"
	"skb_pull\0"
	"hci_devcd_init\0"
	"usb_disable_autosuspend\0"
	"hci_devcd_append\0"
	"hci_devcd_complete\0"
	"hci_devcd_append_pattern\0"
	"usb_enable_autosuspend\0"
	"memcpy\0"
	"usb_control_msg\0"
	"usb_bulk_msg\0"
	"snprintf\0"
	"request_firmware\0"
	"release_firmware\0"
	"__kmalloc_noprof\0"
	"_dev_err\0"
	"strnlen\0"
	"sized_strscpy\0"
	"hci_drv_cmd_complete\0"
	"__ubsan_handle_out_of_bounds\0"
	"__fortify_panic\0"
	"__x86_indirect_thunk_rdx\0"
	"skb_dequeue\0"
	"btmtk_usb_setup\0"
	"usb_ifnum_to_if\0"
	"mutex_lock\0"
	"usb_driver_claim_interface\0"
	"mutex_unlock\0"
	"__init_waitqueue_head\0"
	"usb_deregister\0"
	"__msecs_to_jiffies\0"
	"__usecs_to_jiffies\0"
	"__ubsan_handle_load_invalid_value\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth,btmtk,btintel,btbcm,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DF0883EFDF4E3EF2DAD9A1");

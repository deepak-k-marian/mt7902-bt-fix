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
	{ 0x251d9cb7, "usb_kill_urb" },
	{ 0x251d9cb7, "usb_free_urb" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x30eb81ed, "__dynamic_pr_debug" },
	{ 0xd272d446, "dump_stack" },
	{ 0x645ed827, "usb_deregister" },
	{ 0x0b0a7e9f, "usb_submit_urb" },
	{ 0x553959eb, "bt_err" },
	{ 0xaef1f20d, "system_percpu_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x773eb86a, "usb_alloc_urb" },
	{ 0x285cc76d, "request_firmware" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x386e4ba3, "kmemdup_noprof" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xd272d446, "__fentry__" },
	{ 0x3fc0ae15, "usb_register_driver" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x251d9cb7,
	0x251d9cb7,
	0xcb8b6ec6,
	0x30eb81ed,
	0xd272d446,
	0x645ed827,
	0x0b0a7e9f,
	0x553959eb,
	0xaef1f20d,
	0x49733ad6,
	0xbd03ed67,
	0xb6b7f2c0,
	0x773eb86a,
	0x285cc76d,
	0xd710adbf,
	0xfbe7861b,
	0x1abc7887,
	0x386e4ba3,
	0xd272d446,
	0xe54e0a6b,
	0xd272d446,
	0x3fc0ae15,
	0xd272d446,
	0x2d88a3ab,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"usb_kill_urb\0"
	"usb_free_urb\0"
	"kfree\0"
	"__dynamic_pr_debug\0"
	"dump_stack\0"
	"usb_deregister\0"
	"usb_submit_urb\0"
	"bt_err\0"
	"system_percpu_wq\0"
	"queue_work_on\0"
	"__ref_stack_chk_guard\0"
	"devm_kmalloc\0"
	"usb_alloc_urb\0"
	"request_firmware\0"
	"__kmalloc_noprof\0"
	"memcpy\0"
	"release_firmware\0"
	"kmemdup_noprof\0"
	"__stack_chk_fail\0"
	"__fortify_panic\0"
	"__fentry__\0"
	"usb_register_driver\0"
	"__x86_return_thunk\0"
	"cancel_work_sync\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6F353E3D485AC8F6C820B01");

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
	{ 0x21891121, "hci_unregister_dev" },
	{ 0x21891121, "hci_free_dev" },
	{ 0x0ec27a9a, "regulator_disable" },
	{ 0x33d0c686, "clk_disable" },
	{ 0x33d0c686, "clk_unprepare" },
	{ 0xb6b7f2c0, "devm_kmalloc" },
	{ 0x8badee2a, "driver_unregister" },
	{ 0xd272d446, "__fentry__" },
	{ 0x8f103771, "__serdev_device_driver_register" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xe9196a28, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x21891121,
	0x21891121,
	0x0ec27a9a,
	0x33d0c686,
	0x33d0c686,
	0xb6b7f2c0,
	0x8badee2a,
	0xd272d446,
	0x8f103771,
	0xd272d446,
	0xe9196a28,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"hci_unregister_dev\0"
	"hci_free_dev\0"
	"regulator_disable\0"
	"clk_disable\0"
	"clk_unprepare\0"
	"devm_kmalloc\0"
	"driver_unregister\0"
	"__fentry__\0"
	"__serdev_device_driver_register\0"
	"__x86_return_thunk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "C52EB4F7BC8AF4C57B0A848");

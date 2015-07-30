#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x11c92bdf, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x96f668f0, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0xb8a418f6, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3a013b7d, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x5ceb6c25, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85dcd2ea, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x9cfb9192, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x4792c572, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x5e268bee, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf49f78f, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{        0, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2c2ed339, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x13d191b5, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfff958a1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x38815850, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8e9fac64, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x2bc95bd4, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x601909b6, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x18c3289d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x2dc1578c, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6bb99a83, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8449d761, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x84798637, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xb3bbe024, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd3b0daa9, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb562bc29, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7270e2ae, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xae4a51cc, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xb0d02989, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x72203758, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xcc80c95d, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x6191a065, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xa30ad478, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x8b88b576, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x54fb340d, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x88050b1e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa87552aa, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x19897a3b, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xa56d356, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd7bd3af2, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e60bace, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xc4554217, __VMLINUX_SYMBOL_STR(up) },
	{ 0x47a094fe, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x75bb675a, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x19a9e62b, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe0e3e8a2, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8b1af1a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7bceafa2, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb1d9523e, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe43fc9a7, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x8838885, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x9f82716e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x9392797e, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x1b1ee113, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdb18b84e, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x5a64bc57, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v148Fp7650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp6370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DDF49D69752F55164792590");

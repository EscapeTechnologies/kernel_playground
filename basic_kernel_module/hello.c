// Created By: Vineeth Yeevani
// Date: 10/10/2018
// Description: Basic "hello world" kernel module

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VINEETH YEEVANI");
MODULE_DESCRIPTION("Hello World linux kernel module");
MODULE_VERSION("0.1");

static char *name = "world";
module_param(name, charp, S_IRGUO);
MODULE_PARAM_DESC(name, "The name to display in /var/log/kern.log");

static init __init hello_init(void)
{
    printk(KERN_INFO "HELLO_WORLD: Hello %s from the kernel", name);
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "HELLO_WORLD: Goodbye %s from the kernel", name);
}

module_init(hello_init);
module_exit(hello_exit);

// Created By: Vineeth Yeevani
// Date: 10/10/2018
// Description: Test for c wrapper of c++ api

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include "c_wrapper.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VINEETH YEEVANI");
MODULE_DESCRIPTION("Testing the C wrapper for C++ code");

static int __init kernel_entry_point(void)
{
    char in[] = "12345";
    reverse(in, in, 5);
    printk(KERN_INFO "SHARED LIBRARY MODULE: Loading complete");
    printk(KERN_INFO "SHARED LIBRARY MODULE: %s", in);
    return 0;
}

static int __exit hello_exit(void)
{
    printk(KERN_INFO "SHARED LIBRARY MODULE: Unloading complete");
}

/*Module exporting choosen symbols Authour Tested  Linux kernel version*/
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

void func(void);

EXPORT_SYMBOL(func);

static int val=300;

void func(void)
{
	printk("func invoked\n");
	printk("val=%d", val);
}

int myinit(void)
{
	
	printk("module inserted\n");
	printk("Harish software Developed\n");
	printk("Software Testing Developed by my init routine\n");
	return 0;
}
void myexit(void)
{
	printk("module removed\n");
	printk("Bye Bye..\n");
}

module_init(myinit);
module_exit(myexit);

MODULE_AUTHOR("HARISH GOUD");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL and additional rights");

#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/moduleparam.h>

static int val=0;
char *x="Hai Hello";

module_param(val, int, S_IRUGO);
module_param(x, charp, S_IRUGO);
void func(void);

void func()
{
	printk("func invoked\n ");
	printk(" val = %d",val);
	printk(" x = %s",x);
}
int myinit(void)
{
	printk("module inserted\n ");
	printk("Harish developed it\n ");
	func();
	return 0;
}

void myexit(void)
{
	printk("module removed\n ");
	printk("Bye Bye..\n ");
}

module_init(myinit);
module_exit(myexit);

MODULE_AUTHOR("HARI");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");

#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/version.h>

int myinit(void)
{
	printk("module inserted\n");
	printk("harish and devendra software developed it \n");
	printk("Software Testing Developed By my init routine modules \n");
	return 0;
}
void myexit(void)
{
	printk("module removed\n");
	printk("Bye Bye ..\n");
}

module_init(myinit);
module_exit(myexit);


MODULE_AUTHOR("HARISH");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");



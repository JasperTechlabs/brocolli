/*write a program character device driver*/
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/types.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/uaccess.h>

#define MAJORNO 300
#define MINORNO 0
dev_t mydevice_number;
struct cdev *my_cdev;

int my_open(struct inode *inode, struct file *filp)
{
printk("my_open function called\n");
return 0;
}
int my_release(struct inode *inode, struct file *filp)
{
printk("my_release is called\n");
return 0;
}
ssize_t my_read(struct file *filp, char __user *buf, size_t count,loff_t *f_pos)
{
char rbuf[] = " Jasper Embedded Pvt Ltd";
copy_to_user(buf, rbuf,sizeof(rbuf));
printk("my_read is called\n");
printk("data=%s\n",rbuf);
return 0;

}

ssize_t my_write(struct file *filp, const char *buf, size_t count,loff_t *f_pos)
{
char Kbuf[20];
copy_from_user (Kbuf, buf, 15);
printk("Kbuf = %s\n",Kbuf);
printk("my_write is called\n");
return 0;
}

struct file_operations my_fops = {
.owner =THIS_MODULE,
.read = my_read,
.write = my_write,
.open = my_open,
.release = my_release,
};

int init_mod(void)
{
int ret,rbuf;
	printk("module inserted\n ");
/*step 1:Choose a major and minor number and create a device number using them */
mydevice_number = MKDEV(MAJORNO,MINORNO);
printk("mydevice_number = %d\n",mydevice_number);
printk("Major number =  %d\n", MAJOR(mydevice_number));
printk("Minor number =  %d\n", MINOR(mydevice_number));
/*step2: Register the device number with the kernel*/
ret = register_chrdev_region(mydevice_number,1,"mynull_char_driver");
if(ret == 0)
{
printk("Device nubmer Registration succesful\n");
}
else
{
printk("Device nubmer Registration is failed\n");
}
/* step3: Allocate a cdev structure*/
my_cdev = cdev_alloc( ); 

/*step4: Initialize cdev structure with file operations structure */
 cdev_init(my_cdev, &my_fops);

/*step5: Register cdev structure with the Kernel */
ret =  cdev_add(my_cdev, mydevice_number, 1);
if(ret == 0)
{
printk("character device driver Registration succesful\n");
}
else
{
printk("character device driver Registration is failed\n");
}
return 0;
}

void cleanup_mod(void)
{
	printk("module removed\n ");
	unregister_chrdev_region(mydevice_number,1);
 	printk("Device number unregistered\n");
	cdev_del(my_cdev);
	printk("Character Device driver unregistered\n");
}

module_init(init_mod);
module_exit(cleanup_mod);

MODULE_AUTHOR("MYNULL");
MODULE_DESCRIPTION("FIRST MODULE");
MODULE_LICENSE("GPL");


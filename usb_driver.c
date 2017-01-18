/* *File : usb_driver.c
 * *Author : Vish Chopra
 * *Date : 9 jan 2017
 * *Brief : This is USB driver include initialization and function perform on the device.
 */


#include "header.h"
/*-------------------Device ID Table---------------*/
static struct usb_device_id usb_table[] = {	// array of table define different id for different devices
	{USB_DEVICE(USB_VENDOR_ID, USB_PRODUCT_ID)},	//used to describe a specific usb device. 16 bit vender and product id
	{}					/* Termination entry */
};

MODULE_DEVICE_TABLE( usb, usb_table );

static struct usb_device_id usb_id[] = {
	{.driver_info = 42},
	{}
};
struct usb_driver usb_driver = {
//	.owner = THIS_MODULE,
        .name = "USB_DRIVER",
	.id_table = usb_table,
};

static int __init usb_init_device(void)
{
	#ifdef DEBUG
	printk(KERN_INFO "Driver is initialization start\n");
	#endif

	int result;
	result = usb_register(&usb_driver);
	if (result)
//		driver_err("Unable to register usb driver %s %d\n" __FUNC__, result);
	#ifdef DEBUG
	printk(KERN_INFO "Driver is initialization end\n");
	#endif
	return 0;	
}

static void __exit usb_exit(void)
{
        #ifdef DEBUG
        printk(KERN_INFO "Driver unregistration start\n");
        #endif

        usb_deregister(&usb_driver);

        #ifdef DEBUG
        printk(KERN_INFO "Driver unregistration end\n");
        #endif
}

module_exit(usb_exit);
module_init(usb_init_device);

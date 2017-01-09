/* *File : usb_driver.c
 * *Author : Vish Chopra
 * *Date : 9 jan 2017
 * *Brief : This is USB driver include initialization and function perform on the device.
 */


#include "header.h"

/*-------------------Device ID Table---------------*/
static struct usb_device_id skel_table[] = {	// array of table define different id for different devices
	{USB_DEVICE(USB_VENDOR_ID, USB_PRODUCT_ID)},
	{}					/* Termination entry */
};

MODULE_DEVICE_TABLE( `usb, skel_table );
static int __init usb_init()
{
	#ifdef DEBUG
	printk(KERN_INFO "Driver is initialization start\n");
	#endif


	#ifdef DEBUG
	printk(KERN_INFO "Driver is initialization end\n");
	#endif
	return 0;	
}



module_init(usb_init);

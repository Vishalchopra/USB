/* *File : exit_usb_driver.c
 * *Author : Vish Chopra
 * *Date : 9 jan 2017
 * *Brief : This is USB driver unregister driver.
 */


#include "header.h"


static void __exit usb_exit()
{
	#ifdef DEBUG
	printk(KERN_INFO "Driver unregistration start\n");
	#endif


	#ifdef DEBUG
	printk(KERN_INFO "Driver unregistration end\n");
	#endif
	
}



module_exit(usb_exit);

/* *File : header.h
 * *Author : Vishal Chopra
 * *Date : 9 jan 2017
 * *Brief : This file include all the header file used by USB driver4
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/usb.h>

#ifndef DEBUG
#define DEBUG
#endif

#define USB_VENDER_ID 0xfff0
#define USB_PRODUCT_ID  0xfff0

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vish Chopra");
MODULE_DESCRIPTION("USB driver");

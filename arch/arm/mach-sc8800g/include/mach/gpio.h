/*
 *  linux/arch/arm/mach-sprd/gpio.h
 *
 *  Generic SPRD GPIO handling
 *
 *  Author:	Yingchun Li(yingchun.li@spreadtrum.com)
 *  Created:	March 10, 2010
 *  Copyright:	Spreadtrum Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */
#ifndef __ARCH_ARM_MACH_GPIO_H_
#define  __ARCH_ARM_MACH_GPIO_H_

#include <linux/init.h>

 
#define GPIO_MAX_PIN_NUM 	205

#define CHARGER_DETECT_GPIO 162

#define USB_DM_GPIO 145
#define USB_DP_GPIO 146

#define ARCH_NR_GPIOS	GPIO_MAX_PIN_NUM

#define gpio_get_value __gpio_get_value
#define gpio_set_value __gpio_set_value
#define gpio_to_irq  __gpio_to_irq

extern __must_check int sprd_alloc_gpio_irq(unsigned gpio);
extern int irq_to_gpio(unsigned long irq);
extern void sprd_free_gpio_irq(int irq);
#include <asm-generic/gpio.h>

extern void __init sprd_gpio_init(void);
extern void gpio_set_hw_debounce(unsigned int gpio, u8 period);
#endif
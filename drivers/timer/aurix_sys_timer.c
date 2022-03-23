/*
 * Copyright (c) 2018 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <device.h>
#include <drivers/timer/system_timer.h>
#include <sys_clock.h>
#include <spinlock.h>

static struct k_spinlock lock;
static unsigned int last_count;

static void set_ccompare(uint32_t val)
{

}

static uint32_t ccount(void)
{
	return 0;
}

static void ccompare_isr(const void *arg)
{

}

void sys_clock_set_timeout(int32_t ticks, bool idle)
{

}

uint32_t sys_clock_elapsed(void)
{

	return 0;
}

uint32_t sys_clock_cycle_get_32(void)
{
	return ccount();
}

#ifdef CONFIG_SMP
void smp_timer_init(void)
{
	
}
#endif

static int sys_clock_driver_init(const struct device *dev)
{
	ARG_UNUSED(dev);
	
	return 0;
}

SYS_INIT(sys_clock_driver_init, PRE_KERNEL_2,
	 CONFIG_SYSTEM_CLOCK_INIT_PRIORITY);

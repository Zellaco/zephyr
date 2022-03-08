/*
 * Copyright (c) 2018 Linaro, Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <kernel_internal.h>

extern const int _k_neg_eagain;

/* The 'key' actually represents the BASEPRI register
 * prior to disabling interrupts via the BASEPRI mechanism.
 *
 * arch_swap() itself does not do much.
 *
 * It simply stores the intlock key (the BASEPRI value) parameter into
 * current->basepri, and then triggers a PendSV exception, which does
 * the heavy lifting of context switching.

 * This is the only place we have to save BASEPRI since the other paths to
 * z_arm_pendsv all come from handling an interrupt, which means we know the
 * interrupts were not locked: in that case the BASEPRI value is 0.
 *
 * Given that arch_swap() is called to effect a cooperative context switch,
 * only the caller-saved integer registers need to be saved in the thread of the
 * outgoing thread. This is all performed by the hardware, which stores it in
 * its exception stack frame, created when handling the z_arm_pendsv exception.
 *
 * On ARMv6-M, the intlock key is represented by the PRIMASK register,
 * as BASEPRI is not available.
 */
int arch_swap(unsigned int key)
{
	
	return 0; //TODO: Define correctly.
}

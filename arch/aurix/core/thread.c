/*
 * Copyright (c) 2010-2015 Wind River Systems, Inc.
 * Copyright (c) 2017 Oticon A/S
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Thread support primitives
 *
 * This module provides core thread related primitives for the POSIX
 * architecture
 */

#include <toolchain.h>
#include <kernel_structs.h>
#include <ksched.h>
#include <wait_q.h>

/* Note that in this arch we cheat quite a bit: we use as stack a normal
 * pthreads stack and therefore we ignore the stack size
 */
void arch_new_thread(struct k_thread *thread, k_thread_stack_t *stack,
		     char *stack_ptr, k_thread_entry_t entry,
		     void *p1, void *p2, void *p3)
{
}

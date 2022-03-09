/*
 * Copyright (c) 2016 Cadence Design Systems, Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#include <tracing/tracing.h>

void arch_cpu_idle(void)
{
	//sys_trace_idle();
}

void arch_cpu_atomic_idle(unsigned int key)
{
	//sys_trace_idle();
}

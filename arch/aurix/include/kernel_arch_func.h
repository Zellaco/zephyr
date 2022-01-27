#ifndef ZEPHYR_ARCH_AURIX_INCLUDE_KERNEL_ARCH_FUNC_H_
#define ZEPHYR_ARCH_AURIX_INCLUDE_KERNEL_ARCH_FUNC_H_

static ALWAYS_INLINE void
arch_thread_return_value_set(struct k_thread *thread, unsigned int value)
{
	thread->arch.swap_return_value = value;
}

#endif /* ZEPHYR_ARCH_AURIX_INCLUDE_KERNEL_ARCH_FUNC_H_ */

#ifndef ZEPHYR_INCLUDE_ARCH_AURIX_THREAD_H_
#define ZEPHYR_INCLUDE_ARCH_AURIX_THREAD_H_

struct _callee_saved {
	uint64_t sp;
};

struct _thread_arch {
	uint32_t swap_return_value; /* Return value of z_swap() */
};
#endif
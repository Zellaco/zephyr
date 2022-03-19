#ifndef ZEPHYR_INCLUDE_ARCH_AURIX_THREAD_H_
#define ZEPHYR_INCLUDE_ARCH_AURIX_THREAD_H_

#ifndef _ASMLANGUAGE

struct _callee_saved {
	uint64_t sp;
};

typedef struct _callee_saved _callee_saved_t;

struct _thread_arch {
	uint32_t swap_return_value; /* Return value of z_swap() */
};

typedef struct _thread_arch _thread_arch_t;

#endif /* _ASMLANGUAGE */

#endif
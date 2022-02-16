#ifndef ZEPHYR_INCLUDE_ARCH_AURIX_ARCH_H_
#define ZEPHYR_INCLUDE_ARCH_AURIX_ARCH_H_

#include <arch/aurix/thread.h>
#include <arch/common/ffs.h>
#include <arch/common/sys_bitops.h>
#include <devicetree.h>
/* Not sure about value.
*/
#define ARCH_STACK_PTR_ALIGN  0//TODO: Define correctly

typedef struct __esf z_arch_esf_t;

#endif

static inline uint64_t arch_k_cycle_get_64(void){
	return 0;//TODO: Define correctly
}

static inline uint32_t arch_k_cycle_get_32(void)
{
	return 0;//TODO: Define correctly
}

static ALWAYS_INLINE void arch_irq_unlock(unsigned int key)
{
	//TODO: Define correctly
}

static ALWAYS_INLINE bool arch_irq_unlocked(unsigned int key)
{
	return true; //TODO: Define correctly
}

static ALWAYS_INLINE unsigned int arch_irq_lock(void)
{

	return 0;//TODO: Define correctly
}
static ALWAYS_INLINE void arch_nop(void)
{
	//TODO: Define correctly
}
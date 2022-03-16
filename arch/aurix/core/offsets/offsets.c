#include <kernel.h>
#include <kernel_arch_data.h>
#include <gen_offset.h>
#include <kernel_offsets.h>

#include <gen_offset.h>
 /* /@ include struct definitions for which offsets symbols are to be
 * generated @/
 **/
#include <kernel_structs.h>

//GEN_ABS_SYM_BEGIN (_OffsetAbsSyms)/*	/@ the name parameter is arbitrary @/
// * /@ _kernel_t structure member offsets @/*/

GEN_OFFSET_SYM (_cpu_t, nested);
GEN_OFFSET_SYM (_cpu_t, irq_stack);
GEN_OFFSET_SYM (_cpu_t, current);
GEN_OFFSET_SYM (_cpu_t, idle_thread);

//#include "offsets_aarch32.c"

GEN_ABSOLUTE_SYM (___kernel_t_SIZEOF, sizeof(_kernel_t));

GEN_ABS_SYM_END

void funapa(_kernel_t * testvar){
	testvar->cpus[0].nested +=1;
}	
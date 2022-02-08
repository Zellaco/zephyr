message(INFO '${ARCH}')

list(APPEND TOOLCHAIN_C_FLAGS   -mcpu=${GCC_M_CPU})
list(APPEND TOOLCHAIN_LD_FLAGS  -mcpu=${GCC_M_CPU})

add_definitions(-D__TriCore__)
set(__TriCore__ 1)
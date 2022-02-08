
set_ifndef(TRICORE_TOOLCHAIN_PATH "$ENV{TRICORE_TOOLCHAIN_PATH}")
set(       TRICORE_TOOLCHAIN_PATH ${TRICORE_TOOLCHAIN_PATH} CACHE PATH "TRICORE install directory")
assert(    TRICORE_TOOLCHAIN_PATH "TRICORE_TOOLCHAIN_PATH is not set")

if(NOT EXISTS ${TRICORE_TOOLCHAIN_PATH})
  message(FATAL_ERROR "Nothing found at TRICORE_TOOLCHAIN_PATH: '${TRICORE_TOOLCHAIN_PATH}'")
endif()

set(TOOLCHAIN_HOME ${TRICORE_TOOLCHAIN_PATH})

set(COMPILER gcc)
set(LINKER ld)
set(BINTOOLS gnu)

set(CROSS_COMPILE_TARGET tricore)
set(SYSROOT_TARGET       tricore)

set(CROSS_COMPILE ${TOOLCHAIN_HOME}/bin/${CROSS_COMPILE_TARGET}-)
set(SYSROOT_DIR   ${TOOLCHAIN_HOME}/${SYSROOT_TARGET})
set(TOOLCHAIN_HAS_NEWLIB ON CACHE BOOL "True if toolchain supports newlib")



message(STATUS "Found toolchain: TRICORE (${TRICORE_TOOLCHAIN_PATH})")

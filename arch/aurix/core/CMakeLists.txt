zephyr_library()

zephyr_library_sources(
  tc3x_crt0.S
  swap.c
  thread.c
  cpu_idle.c
)
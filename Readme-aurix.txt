Readme aurix branch - board KIT_A2G_TC397XA_3V3_TFT
---------------------------------------------------
Currently the aurix-board-variant is not building properly.
A method to catch the error would be recreating (mirroring) a working board, to have a working startpoint.

How to build as far as possible right now, when all is set up correctly (add --pristine for rebuilds):
set ZEPHYR_TOOLCHAIN_VARIANT=tricore
west build -p auto -b KIT_A2G_TC397XA_3V3_TFT samples/hello_world

Current build error:
Currently the build of the aurix-branch with the board KIT_A2G_TC397XA_3V3_TFT stops at the error:
[92/95] Generating dev_handles.c
FAILED: zephyr/dev_handles.c C:/Users/USER/zephyrproject/zephyr/build/zephyr/dev_handles.c
cmd.exe /C "cd /D C:\Users\USER\zephyrproject\zephyr\build\zephyr && C:\Python310\python.exe C:/Users/USER/zephyrproject/zephyr/scripts/gen_handles.py --output-source dev_handles.c --kernel C:/Users/USER/zephyrproject/zephyr/build/zephyr/zephyr_pre0.elf --zephyr-base C:/Users/USER/zephyrproject/zephyr --start-symbol __device_start"
Traceback (most recent call last):
  File "C:\Users\USER\zephyrproject\zephyr\scripts\gen_handles.py", line 372, in <module>
    main()
  File "C:\Users\USER\zephyrproject\zephyr\scripts\gen_handles.py", line 220, in main
    assert len(devices) == len(handles), 'mismatch devices and handles'
AssertionError: mismatch devices and handles
ninja: build stopped: subcommand failed.
FATAL ERROR: command exited with status 1: 'C:\Program Files\CMake\bin\cmake.EXE' --build 'C:\Users\USER\zephyrproject\zephyr\build'

Prerequisities:
Hightec Free Tricore compiler (Free TriCore™ Entry Tool Chain - HighTec EDV-Systeme GmbH) - https://free-entry-toolchain.hightec-rt.com/
Hightec Free Tricore compiler license file in C:\HighTec\licenses

Windows 10 Zephyr installation (follow zephyr guide online) - https://docs.zephyrproject.org/latest/getting_started/index.html
Always use the standard Windows Command Prompt (cmd.exe), do not use powershell or git bash etc.

Nice to have:
Arm-compiler for Windows, GNU Arm Embedded Toolchain (ZEPHYR_TOOLCHAIN_VARIANT=gnuarmemb)

Extra files in the aurix branch (may be incomplete):
./arch/aurix
./arch/aurix/CMakeLists.txt
./arch/aurix/core
./arch/aurix/core/CMakeLists.txt
./arch/aurix/core/cpu_idle.c
./arch/aurix/core/offsets
./arch/aurix/core/offsets/offsets.c
./arch/aurix/core/offsets/offsets_aarch32.c
./arch/aurix/core/swap.c
./arch/aurix/core/tc3x_crt0.S
./arch/aurix/core/thread.c
./arch/aurix/include
./arch/aurix/include/kernel_arch_data.h
./arch/aurix/include/kernel_arch_func.h
./arch/aurix/include/offsets_short_arch.h
./arch/aurix/Kconfig
./arch/aurix/README
./boards/aurix
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/board.cmake
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/CMakeLists.txt
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/doc
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/doc/index.rst
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/doc/plank.png
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/Kconfig.board
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/Kconfig.defconfig
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/KIT_A2G_TC397XA_3V3_TFT.dts
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/KIT_A2G_TC397XA_3V3_TFT.yaml
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/KIT_A2G_TC397XA_3V3_TFT_defconfig
./boards/aurix/KIT_A2G_TC397XA_3V3_TFT/README
./cmake/compiler/gcc/target_aurix.cmake
./drivers/serial/Kconfig.aurix
./drivers/serial/serial_aurix.c
./drivers/timer/aurix_sys_timer.c
./drivers/timer/Kconfig.aurix
./dts/aurix
./dts/aurix/sample_controller.dtsi
./dts/aurix/TC397XA.dtsi
./dts/bindings/timer/infineon,aurix-sample-controller.yaml
./include/arch/aurix
./include/arch/aurix/arch.h
./include/arch/aurix/aurix_mmu.h
./include/arch/aurix/exc.h
./include/arch/aurix/mm.h
./include/arch/aurix/scripts
./include/arch/aurix/scripts/linker.ld
./include/arch/aurix/thread.h
./include/arch/aurix/thread_stack.h
./include/arch/aurix-test
./soc/aurix
./soc/aurix/TC397XA
./soc/aurix/TC397XA/CMakeLists.txt
./soc/aurix/TC397XA/Kconfig.defconfig
./soc/aurix/TC397XA/Kconfig.soc
./soc/aurix/TC397XA/linker.ld

Manipulated files for the aurix branch (may be incomplete):
./cmake/compiler/gcc/target.cmake:56
./cmake/gcc-m-cpu.cmake:72
./drivers/serial/Kconfig:188
./drivers/timer/Kconfig:61
./include/arch/cpu.h:35

Extra files for the tricore compiler (may be incomplete):
./cmake/compiler/tricore
./cmake/toolchain/tricore
./cmake/toolchain/tricore/generic.cmake
./cmake/toolchain/tricore/target.cmake
./include/toolchain/tricore.h

Manipulated files for the tricore compiler (may be incomplete):
./include/toolchain.h:50


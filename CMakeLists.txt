cmake_minimum_required(VERSION 3.20)
project(bea LANGUAGES C CXX)

# Phase 1: a 32-bit DLL that masquerades as zlib.dll (BEA.exe imports ordinals 9
# and 63 from it), forwards those two calls to the renamed real DLL and hooks the
# original game functions that have been re-implemented under src/.
#
# Build inside the MSYS2 MinGW32 environment (i686-w64-mingw32), see tools/build.sh.

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
  message(FATAL_ERROR "BEA.exe is 32-bit: configure with the i686 MinGW-w64 toolchain (MSYSTEM=MINGW32)")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# --- MinHook (BSD-2) -------------------------------------------------------
add_library(minhook STATIC
  third_party/minhook/src/buffer.c
  third_party/minhook/src/hook.c
  third_party/minhook/src/trampoline.c
  third_party/minhook/src/hde/hde32.c)
target_include_directories(minhook PUBLIC third_party/minhook/include)

# --- recovered game code ---------------------------------------------------
file(GLOB_RECURSE BEA_SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_library(zlib SHARED
  hook/dllmain.cpp
  hook/zlib.def
  ${BEA_SOURCES})
set_target_properties(zlib PROPERTIES PREFIX "" OUTPUT_NAME "zlib" SUFFIX ".dll")
target_include_directories(zlib PRIVATE src)
target_link_libraries(zlib PRIVATE minhook winmm)

# Match the original's x87 arithmetic: no SSE math, no fast-math contractions,
# and keep excess precision in registers the way VC6 did.
target_compile_options(zlib PRIVATE
  -O2 -g
  -mfpmath=387 -fno-fast-math -ffp-contract=off -fno-math-errno
  -fno-strict-aliasing
  -Wall -Wextra -Wno-unused-parameter)
# Auto-ported files are Ghidra C compiled as C++: relax pointer conversions.
# Frame pointers: VC6 code sometimes leaves an argument on the stack for the
# next call (0x4d1fd0: a virtual call pops 8 of 12 pushed bytes and 0x4aa630's
# `ret 4` takes the rest), which Ghidra cannot show, so a port can disagree
# with a callee about how many bytes it pops.  With an EBP frame GCC restores
# the saved registers and ESP from EBP (`leave`) and writes outgoing
# arguments relative to ESP at each call, so such a mismatch no longer sends
# the port's `ret` to a stale stack slot (NOTES A1-13, 2026-10-20).
file(GLOB BEA_AUTOPORT_SOURCES CONFIGURE_DEPENDS src/bea/autoport/*.cpp src/bea/verified/*.cpp src/bea/direct/*.cpp)
if(BEA_AUTOPORT_SOURCES)
  set_source_files_properties(${BEA_AUTOPORT_SOURCES} PROPERTIES COMPILE_OPTIONS "-fpermissive;-w;-fno-omit-frame-pointer")
endif()
# Lifted functions (tools/asmlift.py): the original's code instruction by
# instruction.  -frounding-math keeps GCC from folding x87 arithmetic at
# compile time in another precision than the game's control word gives.
file(GLOB BEA_LIFTED_SOURCES CONFIGURE_DEPENDS src/bea/lifted/lift_*.cpp)
# -DBEA_EXTRA_LIFTED=<dir>: lifted functions waiting for the offline check
# (bea_scratch/lift_pool) built into a separate build directory to capture and
# check them, never into the game's own DLL (2026-10-31)
set(BEA_EXTRA_LIFTED "" CACHE PATH "a directory of lift_*.cpp to build in as well")
if(BEA_EXTRA_LIFTED)
  file(GLOB BEA_EXTRA_LIFTED_SOURCES CONFIGURE_DEPENDS ${BEA_EXTRA_LIFTED}/lift_*.cpp)
  target_sources(zlib PRIVATE ${BEA_EXTRA_LIFTED_SOURCES})
  list(APPEND BEA_LIFTED_SOURCES ${BEA_EXTRA_LIFTED_SOURCES})
endif()
if(BEA_LIFTED_SOURCES)
  set_source_files_properties(${BEA_LIFTED_SOURCES} PROPERTIES COMPILE_OPTIONS "-w;-frounding-math")
endif()
target_link_options(zlib PRIVATE
  -static -static-libgcc -static-libstdc++
  -Wl,--enable-stdcall-fixup)

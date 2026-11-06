#!/bin/bash
# Build the Phase 1 hook DLL (build/zlib.dll) with the MSYS2 MinGW32 toolchain.
# Works from Git Bash or an MSYS2 shell.  Usage: tools/build.sh [clean]
set -e
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
WROOT="$(cygpath -m "$ROOT" 2>/dev/null || echo "$ROOT")"
if [ "$1" = "clean" ]; then rm -rf "$ROOT/build"; fi
MSYSTEM=MINGW32 /c/msys64/usr/bin/bash.exe -lc "
  set -e
  cd '$WROOT'
  cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
  cmake --build build
"
ls -la "$ROOT/build/zlib.dll"

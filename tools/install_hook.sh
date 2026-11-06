#!/bin/bash
# Install or remove the hook DLL in the game folder.
#   tools/install_hook.sh install   [gamedir]
#   tools/install_hook.sh uninstall [gamedir]
# install: renames the original zlib.dll to zlib_real.dll (once) and copies
#          build/zlib.dll over zlib.dll.
# uninstall: restores zlib_real.dll -> zlib.dll and removes hook artefacts.
set -e
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
MODE="${1:-install}"
GAME="${2:-$ROOT/Battle Engine Aquila}"
ORIG_SIZE=63827   # GnuWin32 zlib 1.1.4 that ships with the game

cd "$GAME"
case "$MODE" in
  install)
    if [ ! -f zlib_real.dll ]; then
      sz=$(stat -c %s zlib.dll)
      if [ "$sz" != "$ORIG_SIZE" ]; then
        echo "zlib.dll is not the original ($sz bytes) and zlib_real.dll is missing; refusing" >&2
        exit 1
      fi
      cp -p zlib.dll zlib_real.dll
      echo "saved original zlib.dll as zlib_real.dll"
    fi
    cp "$ROOT/build/zlib.dll" zlib.dll
    echo "installed $(stat -c %s zlib.dll)-byte hook DLL as zlib.dll"
    ;;
  uninstall)
    if [ -f zlib_real.dll ]; then
      mv -f zlib_real.dll zlib.dll
      echo "restored original zlib.dll"
    fi
    rm -f bea_hook.log bea_hook_disable.txt
    ;;
  *)
    echo "usage: $0 install|uninstall [gamedir]" >&2; exit 2;;
esac

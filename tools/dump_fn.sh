#!/bin/bash
# Print decompiled C and disassembly for each address given (hex, no 0x).
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
for a in "$@"; do
  a=${a#0x}
  echo "################ $a"
  f=$(ls "$ROOT"/ghidra_out/per_function/00${a}_*.c 2>/dev/null | head -1)
  [ -n "$f" ] && sed -n '2,200p' "$f" | grep -v '^$'
  echo "---- asm"
  python -I "$ROOT/tools/disasm.py" "$ROOT/Battle Engine Aquila/BEA.exe" 0x$a --func | cut -c1-72
done

// auto-ported from 00403f40_FUN_00403f40.c (FUN_00403f40, 55 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined1 * BEA_THISCALL ap_00403f40(undefined1 * in_ECX)
{
  *in_ECX = 0;
  in_ECX[0x100] = 0;
  in_ECX[0x200] = 0;
  in_ECX[0x300] = 0;
  *(undefined4 *)(in_ECX + 0x400) = 0;
  *(undefined4 *)(in_ECX + 0x40c) = 0;
  *(undefined4 *)(in_ECX + 0x410) = 0;
  *(undefined4 *)(in_ECX + 0x414) = 0;
  *(undefined4 *)(in_ECX + 0x418) = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 5781 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00403f40, ap_00403f40));

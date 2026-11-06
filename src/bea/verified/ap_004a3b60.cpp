// auto-ported from 004a3b60_FUN_004a3b60.c (FUN_004a3b60, 57 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_004a3b60(undefined4 * in_ECX, undefined4 param_1, undefined4 param_2, undefined1 param_3)
{
  in_ECX[1] = param_2;
  in_ECX[6] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 1;
  in_ECX[5] = 0xffd6d6d6;
  *(undefined1 *)((int)in_ECX + 0x25) = param_3;
  *(undefined1 *)(in_ECX + 9) = 0;
  *in_ECX = ((void*)0x005dc5c4);
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 10 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004a3b60, ap_004a3b60));

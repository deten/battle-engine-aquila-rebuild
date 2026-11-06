// auto-ported from 00488f00_FUN_00488f00.c (FUN_00488f00, 16 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00488f00(undefined4 * in_ECX)
{
  in_ECX[1] = 0;
  *in_ECX = ((void*)0x005dbf78);
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 146 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00488f00, ap_00488f00));

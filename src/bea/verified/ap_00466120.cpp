// auto-ported from 00466120_FUN_00466120.c (FUN_00466120, 16 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00466120(undefined4 * in_ECX)
{
  in_ECX[1] = 0;
  *in_ECX = ((void*)0x005d92d4);
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 5 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00466120, ap_00466120));

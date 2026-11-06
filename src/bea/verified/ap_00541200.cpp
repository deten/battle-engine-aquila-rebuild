// auto-ported from 00541200_FUN_00541200.c (FUN_00541200, 32 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00541200(undefined4 * in_ECX)
{
  in_ECX[2] = 0;
  in_ECX[0xb] = 0;
  *in_ECX = ((void*)0x005e5084);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 6 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00541200, ap_00541200));

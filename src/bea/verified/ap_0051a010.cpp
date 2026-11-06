// auto-ported from 0051a010_FUN_0051a010.c (FUN_0051a010, 32 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_0051a010(undefined4 * in_ECX, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  *in_ECX = param_1;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = param_2;
  in_ECX[3] = param_3;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 153 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051a010, ap_0051a010));

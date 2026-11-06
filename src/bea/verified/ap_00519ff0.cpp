// auto-ported from 00519ff0_FUN_00519ff0.c (FUN_00519ff0, 32 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00519ff0(undefined4 * in_ECX, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = 0;
  in_ECX[3] = param_3;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 102 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00519ff0, ap_00519ff0));

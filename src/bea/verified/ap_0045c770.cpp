// auto-ported from 0045c770_FUN_0045c770.c (FUN_0045c770, 46 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_0045c770(undefined4 * in_ECX, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 282 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0045c770, ap_0045c770));

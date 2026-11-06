// auto-ported from 00443fc0_FUN_00443fc0.c (FUN_00443fc0, 62 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 * BEA_THISCALL ap_00443fc0(undefined4 * in_ECX, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  in_ECX[4] = param_1;
  in_ECX[5] = param_2;
  in_ECX[9] = param_3;
  in_ECX[10] = param_4;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  in_ECX[0xb] = 0;
  in_ECX[2] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  *in_ECX = 1;
  return in_ECX;
  return in_ECX;
}

// @autoport-registration (verified: 39 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00443fc0, ap_00443fc0));

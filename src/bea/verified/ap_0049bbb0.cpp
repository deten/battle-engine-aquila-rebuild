// auto-ported from 0049bbb0_FUN_0049bbb0.c (FUN_0049bbb0, 91 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_0049bbb0(float * in_ECX, float param_1)
{
  *in_ECX = *in_ECX / param_1;
  in_ECX[1] = in_ECX[1] / param_1;
  in_ECX[2] = in_ECX[2] / param_1;
  in_ECX[4] = in_ECX[4] / param_1;
  in_ECX[5] = in_ECX[5] / param_1;
  in_ECX[6] = in_ECX[6] / param_1;
  in_ECX[8] = in_ECX[8] / param_1;
  in_ECX[9] = in_ECX[9] / param_1;
  in_ECX[10] = in_ECX[10] / param_1;
  return;
}

// @autoport-registration (verified: 59200 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0049bbb0, ap_0049bbb0));

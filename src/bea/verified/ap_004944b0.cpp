// auto-ported from 004944b0_FUN_004944b0.c (FUN_004944b0, 31 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_004944b0(float * in_ECX, float param_1)
{
  *in_ECX = *in_ECX / param_1;
  in_ECX[1] = in_ECX[1] / param_1;
  in_ECX[2] = in_ECX[2] / param_1;
  return;
}

// @autoport-registration (verified: 30384 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004944b0, ap_004944b0));

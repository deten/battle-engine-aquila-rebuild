// auto-ported from 00442870_vslot11.c (CDestroyableSegment::vslot11, 20 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_00442870(int in_ECX, float param_1, float param_2)
{
  param_1 = (*(float *)(in_ECX + 0x34) / param_2) * param_1;
  *(float *)(in_ECX + 0xc) = param_1;
  *(float *)(in_ECX + 0x10) = param_1;
  return;
}

// @autoport-registration (verified: 361 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00442870, ap_00442870));

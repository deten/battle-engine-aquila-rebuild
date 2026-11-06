// auto-ported from 004d8ac0_vslot16.c (CRound::vslot16, 28 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004d8ac0(int in_ECX)
{
  return (float10)*(float *)(*(int *)(in_ECX + 0xf0) + 0x2c) * (float10)0.05f * (float10)0.5f +
         (float10)*(float *)(*(int *)(in_ECX + 0xf0) + 0x8c);
}

// @autoport-registration (verified: 132 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d8ac0, ap_004d8ac0));

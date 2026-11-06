// auto-ported from 004db600_vslot45.c (CRound::vslot45, 40 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004db600(int in_ECX)
{
  if ((*(int *)(*(int *)(in_ECX + 0xf0) + 0x6c) != 0) && (*(int *)(in_ECX + 300) != 0)) {
    return (float10)0.0f;
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0xf0) + 0x3c) * (float10)0.025f;
}

// @autoport-registration (verified: 18061 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004db600, ap_004db600));

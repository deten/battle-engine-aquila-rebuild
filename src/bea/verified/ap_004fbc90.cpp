// auto-ported from 004fbc90_FUN_004fbc90.c (FUN_004fbc90, 30 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004fbc90(int in_ECX)
{
  if (*(int *)(in_ECX + 0x140) != 0) {
    return (float10)*(float *)(*(int *)(*(int *)(in_ECX + 0x140) + 0xa0) + 0x88);
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 550 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fbc90, ap_004fbc90));

// auto-ported from 004048c0_FUN_004048c0.c (FUN_004048c0, 33 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)

static float10 BEA_THISCALL ap_004048c0(int in_ECX)
{
  if (*(float *)(in_ECX + 8) < *(float *)(in_ECX + 0xc)) {
    return (float10)*(float *)(in_ECX + 8);
  }
  return ((float10)*(float *)(in_ECX + 8) - (float10)*(float *)(in_ECX + 0xc)) *
         (float10)DAT_008a9e44 + (float10)*(float *)(in_ECX + 0xc);
}

// @autoport-registration (verified: 391168 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004048c0, ap_004048c0));

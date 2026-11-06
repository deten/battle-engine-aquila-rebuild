// auto-ported from 004114d0_FUN_004114d0.c (FUN_004114d0, 36 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004114d0(int in_ECX)
{
  if (*(float *)(*(int *)(in_ECX + 0x18) + 0xfc) == 0.0f) {
    return (float10)0.005f;
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 746 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004114d0, ap_004114d0));

// auto-ported from 00428bc0_FUN_00428bc0.c (FUN_00428bc0, 30 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_00428bc0(int in_ECX)
{
  if (*(int *)(in_ECX + 0x26c) != 0) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x26c) + 0x114) +
           (float10)*(float *)(in_ECX + 0x274);
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 6261 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00428bc0, ap_00428bc0));

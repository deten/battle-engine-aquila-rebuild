// auto-ported from 0040d0f0_FUN_0040d0f0.c (FUN_0040d0f0, 45 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_0040d0f0(int in_ECX)
{
  if (((*(float *)(in_ECX + 0x3c) * 0.025f != 0.0f) && (*(int *)(in_ECX + 0x50) == 0)) &&
     (*(int *)(in_ECX + 0x6c) == 0)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 79553 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040d0f0, ap_0040d0f0));

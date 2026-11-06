// auto-ported from 0050a0b0_FUN_0050a0b0.c (FUN_0050a0b0, 31 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint BEA_THISCALL ap_0050a0b0(int in_ECX, int param_1)
{
  if (*(int *)(in_ECX + 0x9c) == 0) {
    return 0;
  }
  return *(uint *)(in_ECX + 0xa8) & *(uint *)(param_1 + 0x34);
}

// @autoport-registration (verified: 104013 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050a0b0, ap_0050a0b0));

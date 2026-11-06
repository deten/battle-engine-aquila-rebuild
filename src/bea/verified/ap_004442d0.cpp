// auto-ported from 004442d0_FUN_004442d0.c (FUN_004442d0, 34 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004442d0(int in_ECX, int param_1)
{
  int iVar1;

  if ((param_1 != -1) && (iVar1 = *(int *)(*(int *)(in_ECX + 4) + param_1 * 4), iVar1 != 0)) {
    return (float10)*(float *)(iVar1 + 0x14);
  }
  return (float10)-1.0f;
}

// @autoport-registration (verified: 351798 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004442d0, ap_004442d0));

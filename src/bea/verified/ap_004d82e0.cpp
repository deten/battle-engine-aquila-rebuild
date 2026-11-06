// auto-ported from 004d82e0_vslot44.c (CRound::vslot44, 63 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004d82e0(int in_ECX)
{
  int iVar1;

  iVar1 = *(int *)(in_ECX + 0xf0);
  if (((*(float *)(iVar1 + 0x30) == 0.0f) && (*(float *)(iVar1 + 0x3c) == 0.0f)) &&
     (*(float *)(iVar1 + 0x28) <= 0.0f)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 6532 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d82e0, ap_004d82e0));

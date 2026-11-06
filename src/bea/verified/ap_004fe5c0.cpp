// auto-ported from 004fe5c0_vslot111.c (CUnit::vslot111, 48 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004fe5c0(int in_ECX)
{
  if ((*(int *)(in_ECX + 0x244) != 1) && (*(int *)(in_ECX + 0x244) != 2)) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x164) + 0xb4);
  }
  return (float10)*(float *)(*(int *)(in_ECX + 0x164) + 0xb4) * (float10)1.5f;
}

// @autoport-registration (verified: 46177 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fe5c0, ap_004fe5c0));

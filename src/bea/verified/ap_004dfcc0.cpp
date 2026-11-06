// auto-ported from 004dfcc0_vslot45.c (CSimpleBuilding::vslot45, 20 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_004dfcc0(int in_ECX)
{
  if ((*(byte *)(in_ECX + 0x2c) & 4) != 0) {
    return (float10)0.002f;
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 5768 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004dfcc0, ap_004dfcc0));

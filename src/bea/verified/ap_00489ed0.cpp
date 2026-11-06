// auto-ported from 00489ed0_vslot23_t8.c (CInfantryUnit::vslot23_t8, 20 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_00489ed0(int in_ECX)
{
  if ((*(byte *)(in_ECX + 0x24) & 4) != 0) {
    return (float10)0.0f;
  }
  return (float10)1.0f;
}

// @autoport-registration (verified: 46480 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00489ed0, ap_00489ed0));

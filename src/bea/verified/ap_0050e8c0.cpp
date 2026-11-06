// auto-ported from 0050e8c0_vslot45.c (CCarver::vslot45, 20 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_0050e8c0(int in_ECX)
{
  if ((*(byte *)(in_ECX + 0x2c) & 4) != 0) {
    return (float10)0.025f;
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 11247 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050e8c0, ap_0050e8c0));

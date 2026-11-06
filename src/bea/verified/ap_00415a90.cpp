// auto-ported from 00415a90_vslot49.c (CFeature::vslot49, 11 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint BEA_THISCALL ap_00415a90(int in_ECX)
{
  return ((int)*(char *)(in_ECX + 0x2c) & 4U) >> 2;
}

// @autoport-registration (verified: 10 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00415a90, ap_00415a90));

// auto-ported from 004014e0_vslot26.c (CComplexThing::vslot26, 11 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint BEA_THISCALL ap_004014e0(int in_ECX)
{
  return ((int)*(char *)(in_ECX + 0x2c) & 0x20U) >> 5;
}

// @autoport-registration (verified: 98052 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004014e0, ap_004014e0));

// auto-ported from 004dfcb0_vslot49.c (CComponent::vslot49, 15 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static uint BEA_THISCALL ap_004dfcb0(int in_ECX)
{
  return ((int)(char)~*(byte *)(in_ECX + 0x2c) & 4U) >> 2;
}

// @autoport-registration (verified: 11135 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004dfcb0, ap_004dfcb0));

// auto-ported from 00448160_vslot97.c (CDropship::vslot97, 15 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_00448160(int in_ECX)
{
  return *(int *)(in_ECX + 0x27c) == 4;
}

// @autoport-registration (verified: 500 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00448160, ap_00448160));

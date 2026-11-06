// auto-ported from 00405e70_vslot109.c (CUnit::vslot109, 14 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_00405e70(int in_ECX)
{
  return *(int *)(in_ECX + 0x168) == 0;
}

// @autoport-registration (verified: 46309 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00405e70, ap_00405e70));

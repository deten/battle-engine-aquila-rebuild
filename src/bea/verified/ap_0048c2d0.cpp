// auto-ported from 0048c2d0_FUN_0048c2d0.c (FUN_0048c2d0, 11 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_0048c2d0(int in_ECX)
{
  return *(int *)(in_ECX + 0x14) < 1;
}

// @autoport-registration (verified: 2946 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0048c2d0, ap_0048c2d0));

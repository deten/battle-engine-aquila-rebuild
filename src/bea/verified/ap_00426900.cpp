// auto-ported from 00426900_vslot8.c (CCollisionSeekingThing::vslot8, 23 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_00426900(int in_ECX, int param_1)
{
  return (*(uint *)(*(int *)(param_1 + 8) + 0x34) & *(uint *)(in_ECX + 0x10)) == 0;
}

// @autoport-registration (verified: 164750 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00426900, ap_00426900));

// auto-ported from 00428c50_vslot44.c (CComponent::vslot44, 22 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_THISCALL ap_00428c50(int in_ECX)
{
  return *(int *)(*(int *)(in_ECX + 0x164) + 0x198) != 0;
}

// @autoport-registration (verified: 6267 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00428c50, ap_00428c50));

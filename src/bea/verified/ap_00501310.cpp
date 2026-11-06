// auto-ported from 00501310_FUN_00501310.c (FUN_00501310, 4 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_00501310(int in_ECX)
{
  *(int *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x60) + -1;
  return;
}

// @autoport-registration (verified: 25 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00501310, ap_00501310));

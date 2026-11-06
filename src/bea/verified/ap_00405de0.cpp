// auto-ported from 00405de0_vslot76.c (CUnit::vslot76, 35 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00405de0(int in_ECX)
{
  if (((*(int *)(in_ECX + 0x168) != 0) || (*(int *)(in_ECX + 0x214) == 0)) &&
     ((*(byte *)(in_ECX + 0x2c) & 4) == 0)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 66477 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00405de0, ap_00405de0));

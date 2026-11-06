// auto-ported from 004175e0_vslot81.c (CUnit::vslot81, 17 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004175e0(int in_ECX)
{
  if (*(int *)(in_ECX + 0x13c) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x13c) + 0xc);
  }
  return 0;
}

// @autoport-registration (verified: 316 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004175e0, ap_004175e0));

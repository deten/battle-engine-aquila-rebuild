// auto-ported from 00417630_vslot104.c (CUnit::vslot104, 23 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00417630(int in_ECX)
{
  if (*(int *)(in_ECX + 0x164) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x164) + 0x114);
  }
  return 1;
}

// @autoport-registration (verified: 4634 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00417630, ap_00417630));

// auto-ported from 004fdc90_vslot46.c (CUnit::vslot46, 25 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004fdc90(int in_ECX)
{
  if ((*(int *)(in_ECX + 0x13c) != 0) && (*(int *)(*(int *)(in_ECX + 0x13c) + 0x20) == 2)) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 28016 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fdc90, ap_004fdc90));

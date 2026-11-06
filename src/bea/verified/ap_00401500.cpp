// auto-ported from 00401500_vslot22_t8.c (CComplexThing::vslot22_t8, 14 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00401500(int in_ECX)
{
  if (*(int *)(in_ECX + 100) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 100) + 0x14);
  }
  return 0;
}

// @autoport-registration (verified: 23285 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00401500, ap_00401500));

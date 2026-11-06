// auto-ported from 004014d0_vslot7_t8.c (CComplexThing::vslot7_t8, 15 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004014d0(int in_ECX)
{
  if (*(int *)(in_ECX + 100) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 100) + 0x10);
  }
  return 0xffffffff;
}

// @autoport-registration (verified: 2089713 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004014d0, ap_004014d0));

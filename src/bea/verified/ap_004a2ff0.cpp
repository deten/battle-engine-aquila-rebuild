// auto-ported from 004a2ff0_FUN_004a2ff0.c (FUN_004a2ff0, 27 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_004a2ff0(void * this_, int param_1)
{
  if (param_1 != 0) {
    *(uint *)((int)this_ + 4) = *(uint *)((int)this_ + 4) | 2;
    return;
  }
  *(uint *)((int)this_ + 4) = *(uint *)((int)this_ + 4) & 0xfffffffd;
  return;
}

// @autoport-registration (verified: 603 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004a2ff0, ap_004a2ff0));

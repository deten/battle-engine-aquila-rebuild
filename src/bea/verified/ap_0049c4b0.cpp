// auto-ported from 0049c4b0_vslot8.c (CMCMine::vslot8, 39 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMCMine;

static undefined4 BEA_THISCALL ap_0049c4b0(CMCMine * this_)
{
  int iVar1;
  
  if (*(int *)(this_ + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this_ + 8) + -8;
  }
  if (*(float *)(this_ + 0xc) != *(float *)(iVar1 + 0x250)) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 739 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0049c4b0, ap_0049c4b0));

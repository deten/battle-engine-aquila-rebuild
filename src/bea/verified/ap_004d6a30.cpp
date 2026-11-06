// auto-ported from 004d6a30_vslot1.c (CRenderThing::vslot1, 30 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CRenderThing;

static uint32_t BEA_THISCALL ap_004d6a30(CRenderThing * this_, int param_1)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(this_ + 4) = 0x3727c5ac;
  *(undefined4 *)(this_ + 8) = uVar1;
  *(undefined4 *)(this_ + 0xc) = 0;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 679 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d6a30, ap_004d6a30));

// auto-ported from 00528ad0_vslot0.c (CTweakSLONG::vslot0, 24 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char CTweakSLONG;

static void BEA_THISCALL ap_00528ad0(CTweakSLONG * this_, float param_1)
{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(param_1);
  *(undefined4 *)(this_ + 0xc) = local_8;
  return;
}

// @autoport-registration (verified: 30 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00528ad0, ap_00528ad0));

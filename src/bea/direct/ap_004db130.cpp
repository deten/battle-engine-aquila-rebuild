// auto-ported from 004db130_vslot50.c (CRound::vslot50, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CRound;
typedef undefined4 (BEA_THISCALL* CComplexThing__vslot50_t)(uint32_t);
static const bea_guard<CComplexThing__vslot50_t> CComplexThing__vslot50 = {(CComplexThing__vslot50_t)0x004f4430};

static undefined4 BEA_THISCALL ap_004db130(CRound * this_)
{
  undefined4 uVar1;
  
  if (*(int *)(this_ + 0x120) == 0) {
    uVar1 = CComplexThing__vslot50(bea_arg((CComplexThing *)this_));
    return uVar1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db130, ap_004db130));

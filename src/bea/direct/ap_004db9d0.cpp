// auto-ported from 004db9d0_vslot6.c (CRTBuilding::vslot6, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRTBuilding;

static float10 BEA_THISCALL ap_004db9d0(CRTBuilding * this_)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(this_, 0x24);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0x164);
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db9d0, ap_004db9d0));

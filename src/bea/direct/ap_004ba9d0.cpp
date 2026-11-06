// auto-ported from 004ba9d0_vslot50.c (CMine::vslot50, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMine;
typedef undefined4 (BEA_THISCALL* CGroundUnit__vslot50_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot50_t> CGroundUnit__vslot50 = {(CGroundUnit__vslot50_t)0x0047ce80};

static undefined4 BEA_THISCALL ap_004ba9d0(CMine * this_)
{
  int iVar1;
  
  iVar1 = CGroundUnit__vslot50(bea_arg((CGroundUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  bea_vcall<uint32_t>(this_, 0x1d4);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ba9d0, ap_004ba9d0));

// auto-ported from 0041b590_vslot50.c (CCannon::vslot50, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCannon;
typedef char CGroundUnit;
typedef undefined4 (BEA_THISCALL* CGroundUnit__vslot50_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot50_t> CGroundUnit__vslot50 = {(CGroundUnit__vslot50_t)0x0047ce80};
typedef uint32_t (BEA_THISCALL* FUN_004fd040_t)(uint32_t);
static const bea_guard<FUN_004fd040_t> FUN_004fd040 = {(FUN_004fd040_t)0x004fd040};

static undefined4 BEA_THISCALL ap_0041b590(CCannon * this_)
{
  int iVar1;
  
  iVar1 = CGroundUnit__vslot50(bea_arg((CGroundUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004fd040(bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b590, ap_0041b590));

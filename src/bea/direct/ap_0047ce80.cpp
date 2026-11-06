// auto-ported from 0047ce80_vslot50.c (CGroundUnit::vslot50, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CUnit;
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};

static undefined4 BEA_THISCALL ap_0047ce80(CGroundUnit * this_)
{
  int iVar1;
  
  iVar1 = CUnit__vslot50(bea_arg((CUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this_ + 0x25c) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047ce80, ap_0047ce80));

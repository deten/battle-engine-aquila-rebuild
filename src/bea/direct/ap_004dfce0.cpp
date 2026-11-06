// auto-ported from 004dfce0_vslot50.c (CSimpleBuilding::vslot50, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSimpleBuilding;
typedef char CUnit;
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};

static undefined4 BEA_THISCALL ap_004dfce0(CSimpleBuilding * this_)
{
  int iVar1;
  
  iVar1 = CUnit__vslot50(bea_arg((CUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004ebfb0(bea_arg(&DAT_009c8010), bea_arg(this_), bea_arg(1));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dfce0, ap_004dfce0));

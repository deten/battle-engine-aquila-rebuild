// auto-ported from 004d38c0_vslot50.c (CPod::vslot50, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPod;
typedef char CUnit;
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef uint32_t (BEA_THISCALL* FUN_004fd040_t)(uint32_t);
static const bea_guard<FUN_004fd040_t> FUN_004fd040 = {(FUN_004fd040_t)0x004fd040};

static undefined4 BEA_THISCALL ap_004d38c0(CPod * this_)
{
  int iVar1;
  
  iVar1 = CUnit__vslot50(bea_arg((CUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004fd040(bea_arg(this_));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d38c0, ap_004d38c0));

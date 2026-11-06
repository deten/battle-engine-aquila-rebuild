// auto-ported from 00489040_vslot74.c (CInfantryUnit::vslot74, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInfantryUnit;
typedef char CUnit;
typedef undefined4 (BEA_THISCALL* CUnit__vslot74_t)(uint32_t);
static const bea_guard<CUnit__vslot74_t> CUnit__vslot74 = {(CUnit__vslot74_t)0x004fc080};

static int BEA_THISCALL ap_00489040(CInfantryUnit * this_)
{
  int iVar1;
  
  iVar1 = 0;
  if ((((*(int *)(this_ + 0x140) != 0) && (*(int *)(this_ + 0x26c) == 0)) &&
      (((byte)this_[0x2c] & 4) == 0)) && (iVar1 = CUnit__vslot74(bea_arg((CUnit *)this_)), iVar1 != 0)) {
    *(undefined4 *)(this_ + 0x268) = 0x12;
    bea_vcall<uint32_t>(this_, 0xf0, 4,1,0);
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00489040, ap_00489040));

// auto-ported from 00403bf0_vslot39.c (CBigAirUnit::vslot39, 71 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBigAirUnit;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot39_t> CUnit__vslot39 = {(CUnit__vslot39_t)0x004fcc30};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static uint32_t BEA_THISCALL ap_00403bf0(CBigAirUnit * this_, int param_1, undefined4 param_2)
{
  if (((*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0) && (((byte)this_[0x2c] & 4) != 0)) &&
     ((*(uint *)(param_1 + 0x34) & 0x100000) != 0)) {
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return CUnit__vslot39(bea_arg((CUnit *)this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403bf0, ap_00403bf0));

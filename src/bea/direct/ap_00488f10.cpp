// auto-ported from 00488f10_vslot39.c (CInfantryUnit::vslot39, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInfantryUnit;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* CUnit__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot39_t> CUnit__vslot39 = {(CUnit__vslot39_t)0x004fcc30};

static uint32_t BEA_THISCALL ap_00488f10(CInfantryUnit * this_, int param_1, undefined4 param_2)
{
  if ((((*(uint *)(param_1 + 0x34) & 0x20000) != 0) && (((byte)this_[0x2c] & 4) == 0)) &&
     (DAT_00672fd0 - *(float *)(this_ + 0xcc) < 2.0f)) {
    return bea_vcall<uint32_t>(this_, 0xa0, 0x41200000,param_1,1,0xffffffff);
  }
  return CUnit__vslot39(bea_arg((CUnit *)this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488f10, ap_00488f10));

// auto-ported from 00488f60_vslot2.c (CInfantryUnit::vslot2, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInfantryUnit;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot2_t)(uint32_t);
static const bea_guard<CUnit__vslot2_t> CUnit__vslot2 = {(CUnit__vslot2_t)0x004f95d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};

static uint32_t BEA_THISCALL ap_00488f60(CInfantryUnit * this_)
{
  FUN_004cb0b0(bea_arg(this_ + 0x270), bea_arg(0));
  return CUnit__vslot2(bea_arg((CUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488f60, ap_00488f60));

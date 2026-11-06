// auto-ported from 00417870_vslot2.c (CBuilding::vslot2, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CUnit;
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
typedef uint32_t (BEA_THISCALL* CUnit__vslot2_t)(uint32_t);
static const bea_guard<CUnit__vslot2_t> CUnit__vslot2 = {(CUnit__vslot2_t)0x004f95d0};
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};
typedef uint32_t (BEA_STDCALL* FUN_0050b020_t)(uint32_t);
static const bea_guard<FUN_0050b020_t> FUN_0050b020 = {(FUN_0050b020_t)0x0050b020};

static uint32_t BEA_THISCALL ap_00417870(CBuilding * this_)
{
  FUN_0050b020(bea_arg(this_));
  FUN_004ebfb0(bea_arg(&DAT_009c8010), bea_arg(this_), bea_arg(1));
  return CUnit__vslot2(bea_arg((CUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417870, ap_00417870));

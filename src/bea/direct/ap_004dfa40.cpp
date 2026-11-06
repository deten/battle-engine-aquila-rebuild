// auto-ported from 004dfa40_vslot9.c (CSimpleBuilding::vslot9, 93 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CSimpleBuilding;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};

static uint32_t BEA_THISCALL ap_004dfa40(CSimpleBuilding * this_, int param_1)
{
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x8000020;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(this_ + 0x250) = 0;
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  bea_vcall<uint32_t>(this_, 0x48);
  *(undefined4 *)(this_ + 0x13c) = 0;
  return FUN_0050b010(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dfa40, ap_004dfa40));

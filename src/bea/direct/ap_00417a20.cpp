// auto-ported from 00417a20_vslot39.c (CBuilding::vslot39, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot39_t> CUnit__vslot39 = {(CUnit__vslot39_t)0x004fcc30};

static uint32_t BEA_THISCALL ap_00417a20(CUnit * this_, undefined4 param_1, undefined4 param_2)
{
  return CUnit__vslot39(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417a20, ap_00417a20));

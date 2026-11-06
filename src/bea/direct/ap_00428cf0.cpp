// auto-ported from 00428cf0_vslot107.c (CComponent::vslot107, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot107_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot107_t> CUnit__vslot107 = {(CUnit__vslot107_t)0x004fe540};

static uint32_t BEA_THISCALL ap_00428cf0(CComponent * this_, undefined4 param_1)
{
  if ((*(int *)(*(int *)(this_ + 0x164) + 0x134) != 0) && (*(int **)(this_ + 0x26c) != (int *)0x0)) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x26c), 0x1ac, param_1);
  }
  return CUnit__vslot107(bea_arg((CUnit *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428cf0, ap_00428cf0));

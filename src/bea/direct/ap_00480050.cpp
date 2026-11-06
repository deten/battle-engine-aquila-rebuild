// auto-ported from 00480050_vslot40.c (CHiveBoss::vslot40, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot40_t> CUnit__vslot40 = {(CUnit__vslot40_t)0x004f9a90};

static void BEA_THISCALL ap_00480050(CUnit * this_, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  if ((*(uint *)(param_2 + 0x34) & 0x1000000) == 0) {
    CUnit__vslot40(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480050, ap_00480050));

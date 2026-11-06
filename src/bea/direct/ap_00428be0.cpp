// auto-ported from 00428be0_vslot77.c (CComponent::vslot77, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot77_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot77_t> CUnit__vslot77 = {(CUnit__vslot77_t)0x004fa4b0};

static void BEA_THISCALL ap_00428be0(CComponent * this_, float *param_1, float *param_2, undefined4 param_3, undefined4 param_4)
{
  if (((byte)this_[0x2c] & 4) != 0) {
    if (((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) {
      CUnit__vslot77(bea_arg((CUnit *)this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428be0, ap_00428be0));

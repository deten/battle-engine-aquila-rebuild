// auto-ported from 0041b540_vslot90.c (CCannon::vslot90, 78 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCannon;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot90_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot90_t> CUnit__vslot90 = {(CUnit__vslot90_t)0x004fd4d0};

static void BEA_THISCALL ap_0041b540(CCannon * this_, float *param_1)
{
  CUnit__vslot90(bea_arg((CUnit *)this_), bea_arg(param_1));
  *param_1 = *(float *)(this_ + 0x1c) + *param_1;
  param_1[1] = *(float *)(this_ + 0x20) + param_1[1];
  param_1[2] = *(float *)(this_ + 0x24) + param_1[2];
  *param_1 = *param_1 * 0.5f;
  param_1[1] = param_1[1] * 0.5f;
  param_1[2] = param_1[2] * 0.5f;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b540, ap_0041b540));

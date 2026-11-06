// auto-ported from 004a4310_vslot4.c (CApplyMenuItem::vslot4, 138 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CApplyMenuItem;
#define DAT_00704a88 GLOBAL_AT(char, 0x00704a88)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_004a32c0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a32c0_t> FUN_004a32c0 = {(FUN_004a32c0_t)0x004a32c0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static uint32_t BEA_THISCALL ap_004a4310(CApplyMenuItem * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 uVar1;
  uint uVar2;
  float10 fVar3;
  int local_8;
  uVar2 = 0xffffffff;
  if (DAT_00704a88 != '\0') {
    fVar3 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
    fVar3 = _CIfmod(bea_fcast<float10>(2.0),fVar3);
    fVar3 = bea_fcast<float10>(fcos(fVar3 * bea_fcast<float10>(6.2831855f)));
    local_8 = (int)(longlong)ROUND((fVar3 + bea_fcast<float10>(1.0f)) * bea_fcast<float10>(0.5f) * bea_fcast<float10>(255.0f));
    uVar2 = 0xff - local_8;
    uVar2 = ((uVar2 | 0xffffff00) << 8 | uVar2) << 8 | uVar2;
  }
  uVar1 = bea_vcall<uint32_t>(this_, 0x8);
  return FUN_004a32c0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(uVar2), bea_arg(uVar1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4310, ap_004a4310));

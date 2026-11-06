// auto-ported from 0044cc10_vslot66.c (CFeature::vslot66, 261 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CFeature;
typedef uint32_t (BEA_THISCALL* CActor__vslot66_t)(uint32_t);
static const bea_guard<CActor__vslot66_t> CActor__vslot66 = {(CActor__vslot66_t)0x004015e0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0044cee0_t)(uint32_t);
static const bea_guard<FUN_0044cee0_t> FUN_0044cee0 = {(FUN_0044cee0_t)0x0044cee0};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_0044cc10(CFeature * this_)
{
  float fVar1;
  int iVar2;
  int iVar3;
  CFeature *pCVar4;
  undefined4 *puVar5;
  CFeature *pCVar6;
  float10 fVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x30);
  CActor__vslot66(bea_arg((CActor *)this_));
  if ((((byte)this_[0x2c] & 4) != 0) && (*(int *)(this_ + 0xe8) == 0)) {
    pCVar4 = this_ + 0x3c;
    pCVar6 = this_ + 0x9c;
    for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar6 = *(undefined4 *)pCVar4;
      pCVar4 = pCVar4 + 4;
      pCVar6 = pCVar6 + 4;
    }
    local_38 = *(float *)(this_ + 0x60);
    fVar1 = SQRT(local_38 * local_38 + *(float *)(this_ + 0x50) * *(float *)(this_ + 0x50) +
                 *(float *)(this_ + 0x40) * *(float *)(this_ + 0x40));
    if (fVar1 <= 0.0f) {
      fVar7 = bea_fcast<float10>(0.0f);
    }
    else {
      fVar7 = _CIasin(bea_fcast<float10>(local_38) / bea_fcast<float10>(fVar1));
    }
    fVar8 = bea_fcast<float10>(fpatan(bea_fcast<float10>(*(float *)(this_ + 0x40)),bea_fcast<float10>(*(float *)(this_ + 0x50))));
    FUN_004062d0(bea_arg(local_30), bea_arg(bea_fcast<float>(-fVar8)), bea_arg(bea_fcast<float>((fVar7 + bea_fcast<float10>(0.0015f)))), bea_arg(0));
    iVar2 = *(int *)this_;
    puVar5 = local_30;
    pCVar4 = this_ + 0x3c;
    for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      pCVar4 = pCVar4 + 4;
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0.04;
    bea_vcall<uint32_t>(this_, 0x70, &local_40);
    FUN_0044cee0(bea_arg(this_));
    if (25.0f < *(float *)(this_ + 0x24)) {
      bea_vcall<uint32_t>(this_, 0x38);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044cc10, ap_0044cc10));

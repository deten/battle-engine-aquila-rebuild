// auto-ported from 005524a0_FUN_005524a0.c (FUN_005524a0, 441 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)

static void BEA_THISCALL ap_005524a0(void * this_, float param_1, float param_2, float param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float (&local_40)[9] = *reinterpret_cast<float (*)[9]>(bea_frame_ + 0x40 - 0x40);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  if (DAT_0089d680 == '\0') {
    fVar1 = -(param_1 / param_3);
    *(float *)((int)this_ + 0x5a4) = fVar1;
    fVar3 = -(param_2 / param_3);
    *(float *)((int)this_ + 0x5a8) = fVar3;
    fVar2 = SQRT(fVar1 * fVar1 + fVar3 * fVar3);
    if (2.0f < fVar2) {
      fVar2 = 2.0f / fVar2;
      *(float *)((int)this_ + 0x5a4) = fVar2 * fVar1;
      *(float *)((int)this_ + 0x5a8) = fVar2 * fVar3;
    }
    *(float *)((int)this_ + 0x5ac) = ABS(*(float *)((int)this_ + 0x5a4));
    if (ABS(*(float *)((int)this_ + 0x5a4)) < ABS(*(float *)((int)this_ + 0x5a8))) {
      *(float *)((int)this_ + 0x5ac) = ABS(*(float *)((int)this_ + 0x5a8));
    }
    fVar1 = SQRT(param_2 * param_2 + param_3 * param_3 + param_1 * param_1);
    if (fVar1 != 0.0f) {
      fVar1 = 1.0f / fVar1;
      param_1 = fVar1 * param_1;
      param_2 = fVar1 * param_2;
      param_3 = fVar1 * param_3;
    }
    *(float *)((int)this_ + 0x594) = param_1;
    local_40[8] = *(float *)((int)this_ + 0x5a4) * 100.0f;
    *(float *)((int)this_ + 0x598) = param_2;
    local_40[0] = 100.0f;
    local_1c = *(float *)((int)this_ + 0x5a8) * 100.0f;
    local_40[1] = 0.0f;
    local_40[2] = 0.0f;
    local_40[3] = 0.0f;
    local_40[4] = 0.0f;
    local_40[5] = 100.0f;
    local_40[6] = 0.0f;
    local_40[7] = 0.0f;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_c = 0;
    local_10 = 0;
    local_8 = 0;
    local_4 = 0x42c80000;
    *(float *)((int)this_ + 0x59c) = param_3;
    pfVar5 = local_40;
    pfVar6 = (float *)((int)this_ + 0x6c4);
    for (iVar4 = 0x10; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
    }
    *(undefined4 *)((int)this_ + 0x5a0) = param_4;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005524a0, ap_005524a0));

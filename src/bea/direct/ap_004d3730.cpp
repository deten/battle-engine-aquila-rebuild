// auto-ported from 004d3730_FUN_004d3730.c (FUN_004d3730, 343 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char fStack_1c;
typedef char fStack_2c;
typedef char fStack_c;
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};

static void BEA_THISCALL ap_004d3730(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x50);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  undefined1 (&auStack_30)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x50 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x1c);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  fVar12 = (float10)fpatan((float10)*(float *)((int)this_ + 600) -
                           (float10)*(float *)((int)this_ + 0x1c),
                           (float10)*(float *)((int)this_ + 0x25c) -
                           (float10)*(float *)((int)this_ + 0x20));
  fVar1 = *(float *)((int)this_ + 0x260);
  fVar2 = *(float *)((int)this_ + 0x24);
  fVar3 = *(float *)(*(int *)((int)this_ + 0x164) + 0xb4) * 0.05f;
  fVar4 = (float10)bea_vcall<float10>(this_, 0xb4);
  fVar5 = (float10)*(float *)((int)this_ + 600) - (float10)*(float *)((int)this_ + 0x1c);
  fVar6 = (float10)*(float *)((int)this_ + 0x25c) - (float10)*(float *)((int)this_ + 0x20);
  fStack_50 = 99999.0;
  fVar7 = (float10)-1.5707964f;
  fVar8 = fVar4 * (float10)(fVar1 - fVar2);
  do {
    fVar9 = (float10)fsin(fVar7);
    fVar9 = fVar9 * (float10)fVar3;
    fVar10 = fVar9 * fVar9 + (float10)(float)(fVar8 + fVar8);
    if ((float10)0.0f < fVar10) {
      fVar11 = (float10)fcos(fVar7);
      fVar9 = fVar11 * (float10)fVar3 * ((SQRT(fVar10) - fVar9) / fVar4);
      if (((float10)0.0f < fVar9) &&
         (fVar9 = ABS(fVar9 - SQRT(fVar5 * fVar5 + fVar6 * fVar6)), fVar9 < (float10)fStack_50)) {
        fStack_50 = (float)fVar9;
        fStack_48 = (float)fVar7;
      }
    }
    fVar7 = fVar7 + (float10)0.02f;
  } while (BEA_LOOP_GUARD((fVar7 < (float10)0.0f)));
  FUN_004062d0(bea_arg(auStack_30), bea_arg((float)-fVar12), bea_arg(fStack_48), bea_arg(0));
  *(float *)((int)this_ + 0x7c) = fStack_2c * fVar3;
  *(float *)((int)this_ + 0x80) = fStack_1c * fVar3;
  *(float *)((int)this_ + 0x84) = fStack_c * fVar3;
  *(undefined4 *)((int)this_ + 0x88) = uStack_34;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3730, ap_004d3730));

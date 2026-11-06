// auto-ported from 0050a0e0_FUN_0050a0e0.c (FUN_0050a0e0, 422 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char fStack_3c;
typedef char fStack_40;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_60;
typedef char fStack_88;
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef uint32_t (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};

static void BEA_THISCALL ap_0050a0e0(void * this_, float *param_1, int *param_2)
{
  float fVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x88);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x38);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x90 - 0x30);
  if ((*(int *)((int)this_ + 0xa0) != 0) && (*(int *)(*(int *)((int)this_ + 0xa0) + 0xb0) != 0)) {
    FUN_0044a850(bea_arg(this_), bea_arg(&local_80));
    bea_vcall<uint32_t>(param_2, 0x168, &local_70);
    if ((*(int *)((int)this_ + 0xa0) == 0) ||
       (iVar2 = *(int *)(*(int *)((int)this_ + 0xa0) + 0x18), iVar2 == 0)) {
      fStack_88 = 0.0;
    }
    else if (*(int *)(iVar2 + 0x50) == 0) {
      fStack_88 = *(float *)(iVar2 + 0x2c);
    }
    else {
      fStack_88 = 1000.0;
    }
    iVar2 = FUN_0044a930(bea_arg(this_), bea_arg(auStack_30));
    fStack_60 = fStack_88 * *(float *)(iVar2 + 4);
    fStack_5c = fStack_88 * *(float *)(iVar2 + 0x14);
    fStack_58 = fStack_88 * *(float *)(iVar2 + 0x24);
    bea_vcall<uint32_t>(param_2, 0x6c, &fStack_40);
    // class 19: the asm's order (2 sums)
    fVar1 = (SQRT((fStack_78 - fStack_68) * (fStack_78 - fStack_68) +
                  (fStack_7c - fStack_6c) * (fStack_7c - fStack_6c) +
                  (local_80 - local_70) * (local_80 - local_70)) /
            SQRT(fStack_5c * fStack_5c + fStack_58 * fStack_58 + fStack_60 * fStack_60)) * 20.0f;
    *param_1 = fStack_40 * fVar1 + local_70;
    param_1[1] = fStack_3c * fVar1 + fStack_6c;
    param_1[2] = fVar1 * fStack_38 + fStack_68;
    return;
  }
  bea_vcall<uint32_t>(param_2, 0x168, &local_50);
  *param_1 = local_50;
  param_1[1] = fStack_4c;
  param_1[2] = fStack_48;
  param_1[3] = fStack_44;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050a0e0, ap_0050a0e0));

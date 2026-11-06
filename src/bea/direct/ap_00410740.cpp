// auto-ported from 00410740_FUN_00410740.c (FUN_00410740, 642 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char fStack_10;
typedef char fStack_20;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};

static void BEA_THISCALL ap_00410740(void * this_, float param_1)
{
  int *piVar1;
  float *pfVar2;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  float (&afStack_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x40 - 0x30);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  if (*(float *)((int)this_ + 0x48) == 0.0f) {
    if (*(int *)((int)this_ + 0x2c) == 0) {
      if ((-0.9f < *(float *)((int)this_ + 0x28)) && (param_1 < -0.9f)) {
        *(float *)((int)this_ + 0x3c) = DAT_00672fd0;
      }
      if ((((-0.8f < *(float *)((int)this_ + 0x28)) && (param_1 < -0.8f)) &&
          (DAT_00672fd0 - 0.2f < *(float *)((int)this_ + 0x40))) &&
         (*(float *)((int)this_ + 0x40) < DAT_00672fd0 - 0.1f)) {
        piVar1 = *(int **)((int)this_ + 0x18);
        if (bea_fcast<float>(piVar1[0x3f]) <= 0.0f) {
          piVar1[0xb9] = bea_piece32(DAT_00672fd0);
        }
        else {
          pfVar2 = (float *)bea_vcall<uint32_t>(piVar1, 0x6c, &local_40);
          if (0.09f < *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]) {
            *(undefined4 *)((int)this_ + 0x48) = 0x41d00000;
            FUN_004062d0(bea_arg(afStack_30), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x114)), bea_arg(0), bea_arg(0));
            local_40 = afStack_30[0] * -0.2f;
            fStack_3c = fStack_20 * -0.2f;
            fStack_38 = fStack_10 * -0.2f;
            bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x74, &local_40);
            *(undefined4 *)((int)this_ + 0x4c) = 1;
          }
        }
      }
      piVar1 = *(int **)((int)this_ + 0x18);
      *(float *)((int)this_ + 0x28) = param_1;
      if ((bea_fcast<float>(piVar1[0x3f]) != 0.0f) && (0.5f < ABS(param_1))) {
        local_40 = param_1 * 0.0033333334f;
        fStack_38 = local_40 * bea_fcast<float>(piVar1[0x17]);
        fStack_3c = local_40 * bea_fcast<float>(piVar1[0x13]);
        local_40 = local_40 * bea_fcast<float>(piVar1[0xf]);
        bea_vcall<uint32_t>(piVar1, 0x74, &local_40);
        *(float *)((int)this_ + 0x50) = DAT_00672fd0;
        return;
      }
    }
    else if (*(int *)((int)this_ + 0x34) == 0) {
      if ((-0.9f < *(float *)((int)this_ + 0x28)) && (param_1 < -0.9f)) {
        *(float *)((int)this_ + 0x3c) = DAT_00672fd0;
      }
      if (((0.8f < param_1) && (DAT_00672fd0 - 0.2f < *(float *)((int)this_ + 0x40))) &&
         (*(float *)((int)this_ + 0x40) < DAT_00672fd0 - 0.1f)) {
        *(undefined4 *)((int)this_ + 0x34) = 1;
        return;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00410740, ap_00410740));

// auto-ported from 00410310_FUN_00410310.c (FUN_00410310, 371 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_00410310(void * this_, float param_1)
{
  int *piVar1;
  float *pfVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  if (*(float *)((int)this_ + 0x48) <= 0.0f) {
    if ((*(int *)((int)this_ + 0x2c) == 0) &&
       (piVar1 = *(int **)((int)this_ + 0x18), bea_fcast<float>(piVar1[0x3f]) != 0.0f)) {
      *(float *)((int)this_ + 0x20) = 0.5f - param_1 * 0.5f;
      if ((-0.6f < *(float *)((int)this_ + 0x24)) && (param_1 < -0.9f)) {
        *(float *)((int)this_ + 0x44) = DAT_00672fd0;
      }
      if (((0.8f < param_1) && (DAT_00672fd0 - 0.2f < *(float *)((int)this_ + 0x44))) &&
         (*(float *)((int)this_ + 0x44) < DAT_00672fd0 - 0.1f)) {
        if (bea_fcast<float>(piVar1[0x3f]) <= 0.0f) {
          piVar1[0xb9] = bea_piece32(DAT_00672fd0);
          *(float *)((int)this_ + 0x24) = param_1;
          return;
        }
        pfVar2 = (float *)bea_vcall<uint32_t>(piVar1, 0x6c, local_10);
        if (0.09f < *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]) {
          *(undefined4 *)((int)this_ + 0x2c) = 1;
          *(undefined4 *)((int)this_ + 0x30) = 0;
          *(undefined4 *)((int)this_ + 0x34) = 0;
          *(float *)(*(int *)((int)this_ + 0x18) + 0x280) =
               *(float *)(*(int *)((int)this_ + 0x18) + 0x280) - 0.015f;
          *(float *)((int)this_ + 0x24) = param_1;
          return;
        }
      }
    }
    *(float *)((int)this_ + 0x24) = param_1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00410310, ap_00410310));

// auto-ported from 00410490_FUN_00410490.c (FUN_00410490, 474 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char fStack_18;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef float10 (BEA_STDCALL* FUN_00409e60_t)(uint32_t);
static const bea_guard<FUN_00409e60_t> FUN_00409e60 = {(FUN_00409e60_t)0x00409e60};

static void BEA_THISCALL ap_00410490(void * this_, float param_1)
{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  if (((*(int *)((int)this_ + 0x2c) == 0) && (*(float *)((int)this_ + 0x48) == 0.0f)) &&
     (pfVar3 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, local_10),
     0.0001f < *pfVar3 * *pfVar3 + pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1])) {
    iVar4 = *(int *)((int)this_ + 0x18);
    fVar5 = bea_fcast<float10>(FUN_00409e60(bea_arg(*(undefined4 *)(iVar4 + 0x2c8))));
    fVar1 = bea_fcast<float>((bea_fcast<float10>(param_1) * bea_fcast<float10>(*(float *)(*(int *)(iVar4 + 0x4b0) + 0x14)) *
                    bea_fcast<float10>(0.010638298f) * fVar5));
    fVar5 = bea_fcast<float10>(FUN_00409e60(bea_arg(*(undefined4 *)(iVar4 + 0x2c8))));
    param_1 = bea_fcast<float>((bea_fcast<float10>(param_1) * bea_fcast<float10>(0.008547009f) * fVar5));
    pfVar3 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, local_10);
    if ((*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2] < 1.0f) &&
       (iVar4 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x10c), iVar4 != 0)) {
      pfVar3 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, local_10);
      fStack_18 = SQRT(*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2]);
      if (fStack_18 < 0.1f) {
        fStack_18 = 0.0f;
      }
      fVar1 = fStack_18 * fVar1;
      param_1 = fStack_18 * param_1;
    }
    iVar4 = *(int *)((int)this_ + 0x18);
    if (*(int *)(iVar4 + 0x588) != 0) {
      fVar1 = fVar1 * 0.25f;
      param_1 = param_1 * 0.25f;
    }
    if (DAT_00672fd0 < *(float *)(iVar4 + 0x520) + 1.5f) {
      fVar2 = (DAT_00672fd0 - *(float *)(iVar4 + 0x520)) * 0.6666667f;
      fVar1 = fVar2 * fVar1;
      param_1 = fVar2 * param_1;
    }
    *(float *)(iVar4 + 0x278) = *(float *)(iVar4 + 0x278) - fVar1;
    *(float *)(*(int *)((int)this_ + 0x18) + 0x27c) =
         *(float *)(*(int *)((int)this_ + 0x18) + 0x27c) - param_1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00410490, ap_00410490));

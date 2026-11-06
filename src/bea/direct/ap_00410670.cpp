// auto-ported from 00410670_FUN_00410670.c (FUN_00410670, 207 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef float10 (BEA_STDCALL* FUN_00409e60_t)(uint32_t);
static const bea_guard<FUN_00409e60_t> FUN_00409e60 = {(FUN_00409e60_t)0x00409e60};

static void BEA_THISCALL ap_00410670(void * this_, float param_1)
{
  int iVar1;
  float *pfVar2;
  float10 fVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  if ((*(int *)((int)this_ + 0x2c) == 0) && (*(float *)((int)this_ + 0x48) == 0.0f)) {
    pfVar2 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, local_10);
    if (0.0001f < *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]) {
      fVar3 = bea_fcast<float10>(FUN_00409e60(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x2c8))));
      iVar1 = *(int *)((int)this_ + 0x18);
      fVar3 = bea_fcast<float10>(param_1) * bea_fcast<float10>(0.008547009f) * fVar3;
      if (*(int *)(iVar1 + 0x588) != 0) {
        fVar3 = fVar3 * bea_fcast<float10>(0.25f);
      }
      if (DAT_00672fd0 < *(float *)(iVar1 + 0x520) + 1.5f) {
        fVar3 = (bea_fcast<float10>(DAT_00672fd0) - bea_fcast<float10>(*(float *)(iVar1 + 0x520))) * bea_fcast<float10>(0.6666667f) *
                fVar3;
      }
      *(float *)(iVar1 + 0x280) = bea_fcast<float>((bea_fcast<float10>(*(float *)(iVar1 + 0x280)) - fVar3));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00410670, ap_00410670));

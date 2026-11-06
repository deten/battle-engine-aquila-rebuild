// auto-ported from 00411aa0_FUN_00411aa0.c (FUN_00411aa0, 196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static float10 BEA_THISCALL ap_00411aa0(void * this_)
{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  fVar1 = DAT_006fbdfc;
  fVar4 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(*(int *)((int)this_ + 0x18) + 0x1c)));
  if (fVar4 <= bea_fcast<float10>(fVar1)) {
    piVar3 = *(int **)((int)this_ + 0x18);
  }
  else {
    piVar3 = *(int **)((int)this_ + 0x18);
    fVar4 = bea_fcast<float10>(fVar1);
  }
  fVar1 = bea_fcast<float>((fVar4 - bea_fcast<float10>(bea_fcast<float>(piVar3[9]))));
  if (1.0f <= fVar1) {
    if (3.0f <= fVar1) {
      return bea_fcast<float10>(0.98f);
    }
    pfVar2 = (float *)bea_vcall<uint32_t>(piVar3, 0x6c, local_10);
    if (SQRT(*pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1] + pfVar2[2] * pfVar2[2]) < 1.5f) {
      return bea_fcast<float10>(1.0f) - bea_fcast<float10>(fVar1) * bea_fcast<float10>(0.01f);
    }
  }
  return bea_fcast<float10>(0.99f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00411aa0, ap_00411aa0));

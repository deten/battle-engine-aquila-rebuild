// auto-ported from 0041a630_vslot4.c (CMovieCamera::vslot4, 163 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMovieCamera;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static float10 BEA_THISCALL ap_0041a630(CMovieCamera * this_)
{
  int iVar1;
  float10 fVar2;
  undefined1 *puVar3;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_44)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x50 - 0x44);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x50 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x30);
  if (*(float *)(this_ + 0x50) == DAT_00672fd0) {
    return bea_fcast<float10>(*(float *)(this_ + 0x54));
  }
  *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(this_ + 0x54);
  iVar1 = *(int *)(this_ + 4);
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x30) != (int *)0x0) {
      puVar3 = local_40;
      bea_vcall<uint32_t>(*(int **)(iVar1 + 0x30), 0x44, local_30,puVar3,local_44,iVar1 + 8);
      fVar2 = bea_fcast<float10>(bea_fcast<float>(puVar3)) * bea_fcast<float10>(0.011111111f) * bea_fcast<float10>(0.5f);
      *(float *)(this_ + 0x54) = bea_fcast<float>(fVar2);
      *(float *)(this_ + 0x50) = DAT_00672fd0;
      return fVar2;
    }
    *(undefined4 *)(this_ + 0x54) = 0x3f800000;
    *(float *)(this_ + 0x50) = DAT_00672fd0;
    return bea_fcast<float10>(1.0f);
  }
  *(undefined4 *)(this_ + 0x54) = 0x3f800000;
  *(float *)(this_ + 0x50) = DAT_00672fd0;
  return bea_fcast<float10>(1.0f);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0041a630.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

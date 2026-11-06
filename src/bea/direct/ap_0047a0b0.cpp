// auto-ported from 0047a0b0_FUN_0047a0b0.c (FUN_0047a0b0, 174 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};

static float10 BEA_THISCALL ap_0047a0b0(void * this_)
{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  fVar2 = (float10)fcos((float10)*(float *)((int)this_ + 0x114));
  local_10 = (float)fVar2;
  fVar3 = (float10)fsin((float10)*(float *)((int)this_ + 0x114));
  fVar1 = (float)-fVar3;
  local_c = fVar1;
  FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_10), bea_arg((int)this_ + 0x1c));
  fVar3 = (float10)local_8 * (float10)(float)fVar2;
  fVar4 = (float10)local_c * (float10)fVar1 - (float10)(float)fVar2 * (float10)local_10;
  // the original's order (0x47a11f-0x47a12d): (fVar3^2 + fVar4^2) + the third square; under the
  // game's 24-bit precision control the order changes the result (523 cheat win, 2026-10-31)
  fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 +
               -((float10)local_8 * (float10)fVar1) * -((float10)local_8 * (float10)fVar1));
  if (fVar2 != (float10)0.0f) {
    return ((float10)1.0f / fVar2) * (float10)(float)fVar4;
  }
  return (float10)(float)fVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a0b0, ap_0047a0b0));

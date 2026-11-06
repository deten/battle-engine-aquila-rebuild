// auto-ported from 00422620_vslot66.c (CCarver::vslot66, 291 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CCarver;
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot66_t)(uint32_t);   // returns in EAX (ret_overrides.txt); was float10, popped an empty x87 stack
static const bea_guard<CAirUnit__vslot66_t> CAirUnit__vslot66 = {(CAirUnit__vslot66_t)0x00402fa0};

static uint32_t BEA_THISCALL ap_00422620(CCarver * this_)
{
  float fVar1;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  if (((byte)this_[0x2c] & 4) != 0) {
    fVar1 = *(float *)(this_ + 0x11c) + 0.8f;
    *(undefined4 *)(this_ + 0x134) = 0x3e4ccccd;
    if (3.1415927f < fVar1) {
      fVar1 = fVar1 - 6.2831855f;
    }
    *(float *)(this_ + 0x128) = fVar1;
    *(undefined4 *)(this_ + 0x124) = 0x3fc90fdb;
  }
  CAirUnit__vslot66(bea_arg((CAirUnit *)this_));
  if (*(float *)(this_ + 0x284) - 1.0f <= *(float *)(this_ + 0x280)) {
    if (*(float *)(this_ + 0x280) <= *(float *)(this_ + 0x284) + 1.0f) {
      *(undefined4 *)(this_ + 0x280) = *(undefined4 *)(this_ + 0x284);
    }
    else {
      *(float *)(this_ + 0x280) = *(float *)(this_ + 0x280) - 1.0f;
    }
  }
  else {
    *(float *)(this_ + 0x280) = *(float *)(this_ + 0x280) + 1.0f;
  }
  local_8 = SQRT(*(float *)(this_ + 0x7c) * *(float *)(this_ + 0x7c) +
                 *(float *)(this_ + 0x80) * *(float *)(this_ + 0x80) +
                 *(float *)(this_ + 0x84) * *(float *)(this_ + 0x84));
  local_10 = local_8 * *(float *)(this_ + 0x40);
  local_c = local_8 * *(float *)(this_ + 0x50);
  local_8 = local_8 * *(float *)(this_ + 0x60);
  return bea_vcall<uint32_t>(this_, 0x70, &local_10);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422620, ap_00422620));

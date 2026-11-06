// auto-ported from 00421c40_vslot66.c (CCarrier::vslot66, 104 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CCarrier;
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot66_t)(uint32_t);
static const bea_guard<CAirUnit__vslot66_t> CAirUnit__vslot66 = {(CAirUnit__vslot66_t)0x00402fa0};

static uint32_t BEA_THISCALL ap_00421c40(CCarrier * this_)
{
  undefined4 local_4 = 0;
  if (((byte)this_[0x2c] & 4) != 0) {
    *(undefined4 *)(this_ + 0x124) = 0x3e4ccccd;
    *(undefined4 *)(this_ + 0x14c) = 0;
    *(undefined4 *)(this_ + 0x150) = 0;
    *(undefined4 *)(this_ + 0x154) = 0;
    *(undefined4 *)(this_ + 0x158) = local_4;
  }
  *(float *)(this_ + 0x11c) = *(float *)(this_ + 0x11c) * 0.999f;
  return CAirUnit__vslot66(bea_arg((CAirUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421c40, ap_00421c40));

// auto-ported from 0049fba0_vslot60.c (CMech::vslot60, 107 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CMech;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot60_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot60_t> CComplexThing__vslot60 = {(CComplexThing__vslot60_t)0x004f44a0};

static uint32_t BEA_THISCALL ap_0049fba0(CMech * this_, int param_1, undefined4 param_2, undefined4 param_3)
{
  float *pfVar1;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  pfVar1 = (float *)bea_vcall<uint32_t>(this_, 0x6c, local_10);
  if ((param_1 == 1) || (param_1 == 3)) {
    if (SQRT(pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1) <= 0.02) {
      param_1 = 3;
    }
    else {
      param_1 = 1;
    }
  }
  return CComplexThing__vslot60(bea_arg((CComplexThing *)this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049fba0, ap_0049fba0));

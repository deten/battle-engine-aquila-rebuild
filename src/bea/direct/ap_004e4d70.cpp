// auto-ported from 004e4d70_vslot2.c (CSphere::vslot2, 134 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCylinder;
typedef char CSphere;
typedef int (BEA_THISCALL* CCylinder__vslot2_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CCylinder__vslot2_t> CCylinder__vslot2 = {(CCylinder__vslot2_t)0x0043fe20};

static uint32_t BEA_THISCALL ap_004e4d70(CSphere * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)

  undefined ** &local_2c = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x30 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x20);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  local_10 = *(undefined4 *)(this_ + 0x14);
  local_18 = *(float *)(this_ + 0x14);
  local_14 = local_18 * local_18;
  local_2c = ((void*)0x005d88cc);
  return CCylinder__vslot2(bea_arg((CCylinder *)&local_2c), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e4d70, ap_004e4d70));

// auto-ported from 004abe50_vslot2.c (CMeshCollisionVolume::vslot2, 157 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CMeshCollisionVolume;

static uint32_t BEA_THISCALL ap_004abe50(CMeshCollisionVolume * this_, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4)
{
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)

  undefined ** &local_28 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x30 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  local_14 = *(float *)(param_3 + 0x14);
  if (*(float *)(param_3 + 0x14) <= *(float *)(param_3 + 0x1c)) {
    local_14 = *(float *)(param_3 + 0x1c);
  }
  local_10 = local_14 * local_14;
  local_28 = ((void*)0x005d95e8);
  local_24 = *(undefined4 *)(param_3 + 4);
  local_20 = *(undefined4 *)(param_3 + 8);
  local_1c = *(undefined4 *)(param_3 + 0xc);
  local_18 = *(undefined4 *)(param_3 + 0x10);
  return bea_vcall<uint32_t>(this_, 0xc, param_1,param_2,&local_28,param_4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004abe50, ap_004abe50));

// auto-ported from 0044c0f0_vslot66.c (CExplosion::vslot66, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CExplosion;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static uint32_t BEA_THISCALL ap_0044c0f0(CExplosion * this_)
{
  float fVar1;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CExplosion * &local_4 = *reinterpret_cast<CExplosion * *>(bea_frame_ + 0x10 - 0x4);
  fVar1 = *(float *)(this_ + 0x80) / (float)*(int *)(*(int *)(this_ + 0x84) + 0x40) +
          *(float *)(this_ + 0x7c);
  *(float *)(this_ + 0x7c) = fVar1;
  if (*(float *)(this_ + 0x80) <= fVar1) {
    local_4 = this_;
    return bea_vcall<uint32_t>(this_, 0x38);
  }
  local_4 = (CExplosion *)0xbf800000;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c0f0, ap_0044c0f0));

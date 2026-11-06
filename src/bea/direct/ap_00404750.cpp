// auto-ported from 00404750_vslot0.c (CAnimation::vslot0, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAnimation;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_00404790_t)(uint32_t);
static const bea_guard<FUN_00404790_t> FUN_00404790 = {(FUN_00404790_t)0x00404790};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static uint32_t BEA_THISCALL ap_00404750(CAnimation * this_, undefined4 param_1)
{
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)

  CAnimation * &local_4 = *reinterpret_cast<CAnimation * *>(bea_frame_ + 0x10 - 0x4);
  local_4 = this_;
  FUN_00404790(bea_arg(this_));
  local_4 = (CAnimation *)0xbf800000;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404750, ap_00404750));

// auto-ported from 004dfc60_vslot68.c (CSimpleBuilding::vslot68, 72 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CSimpleBuilding;
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static const bea_guard<CActor__vslot68_t> CActor__vslot68 = {(CActor__vslot68_t)0x00402000};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static uint32_t BEA_THISCALL ap_004dfc60(CSimpleBuilding * this_)
{
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  CActor__vslot68(bea_arg((CActor *)this_));
  if (((byte)this_[0x2c] & 4) != 0) {
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  return bea_vcall<uint32_t>(this_, 0x70, &local_10);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dfc60, ap_004dfc60));

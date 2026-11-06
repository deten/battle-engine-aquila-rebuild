// auto-ported from 00408150_vslot69.c (CBattleEngine::vslot69, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CBattleEngine;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)
typedef uint32_t (BEA_THISCALL* CActor__vslot69_t)(uint32_t);
static const bea_guard<CActor__vslot69_t> CActor__vslot69 = {(CActor__vslot69_t)0x00402010};
typedef uint32_t (BEA_THISCALL* FUN_00406460_t)(uint32_t);
static const bea_guard<FUN_00406460_t> FUN_00406460 = {(FUN_00406460_t)0x00406460};
typedef uint32_t (BEA_THISCALL* FUN_0040dfb0_t)(uint32_t);
static const bea_guard<FUN_0040dfb0_t> FUN_0040dfb0 = {(FUN_0040dfb0_t)0x0040dfb0};

static uint32_t BEA_THISCALL ap_00408150(CBattleEngine * this_)
{
  FUN_00406460(bea_arg(this_));
  if (((byte)this_[0x2c] & 4) != 0) {
    FUN_0040dfb0(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
    return CActor__vslot69(bea_arg((CActor *)this_));
  }
  if ((-0.2f < *(float *)(this_ + 0x24) - DAT_006fbdfc) &&
     ((*(int *)(this_ + 0x15c) != 0 || (DAT_00662dd0 == 0)))) {
    bea_vcall<uint32_t>(this_, 0xc8);
  }
  return CActor__vslot69(bea_arg((CActor *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00408150, ap_00408150));

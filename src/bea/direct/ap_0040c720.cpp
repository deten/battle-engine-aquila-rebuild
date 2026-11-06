// auto-ported from 0040c720_vslot70.c (CBattleEngine::vslot70, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CBattleEngine;
typedef uint32_t (BEA_THISCALL* CActor__vslot70_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot70_t> CActor__vslot70 = {(CActor__vslot70_t)0x00402020};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00406460_t)(uint32_t);
static const bea_guard<FUN_00406460_t> FUN_00406460 = {(FUN_00406460_t)0x00406460};

static uint32_t BEA_THISCALL ap_0040c720(CBattleEngine * this_, undefined4 param_1)
{
  FUN_00406460(bea_arg(this_));
  FUN_00401000(bea_arg(this_ + 0x264), bea_arg(param_1));
  return CActor__vslot70(bea_arg((CActor *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c720, ap_0040c720));

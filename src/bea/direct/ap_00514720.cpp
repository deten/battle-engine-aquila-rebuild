// auto-ported from 00514720_vslot16.c (CPCController::vslot16, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPCController;
typedef uint32_t (BEA_THISCALL* FUN_00548a70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548a70_t> FUN_00548a70 = {(FUN_00548a70_t)0x00548a70};

static uint32_t BEA_THISCALL ap_00514720(CPCController * this_)
{
  CPCController *this_00;
  this_00 = this_ + 0x2c;
  FUN_00548a70(bea_arg(this_00), bea_arg(this_ + 0x14), bea_arg(4));
  FUN_00548a70(bea_arg(this_00), bea_arg(this_ + 0x18), bea_arg(4));
  return FUN_00548a70(bea_arg(this_00), bea_arg(this_ + 0x1c), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514720, ap_00514720));

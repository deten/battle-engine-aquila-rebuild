// auto-ported from 00447100_vslot2.c (CDropship::vslot2, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CDropship;
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot2_t)(uint32_t);
static const bea_guard<CAirUnit__vslot2_t> CAirUnit__vslot2 = {(CAirUnit__vslot2_t)0x00402d30};
typedef uint32_t (BEA_STDCALL* FUN_0050b020_t)(uint32_t);
static const bea_guard<FUN_0050b020_t> FUN_0050b020 = {(FUN_0050b020_t)0x0050b020};

static uint32_t BEA_THISCALL ap_00447100(CDropship * this_)
{
  FUN_0050b020(bea_arg(this_));
  return CAirUnit__vslot2(bea_arg((CAirUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447100, ap_00447100));

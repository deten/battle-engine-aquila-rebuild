// auto-ported from 00435b20_vslot3.c (CComponentAttackPriority::vslot3, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponentAttackPriority;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_THISCALL ap_00435b20(CComponentAttackPriority * this_, void *param_1)
{
  FUN_00548570(bea_arg(param_1), bea_arg(this_ + 8), bea_arg(4));
  return FUN_00548570(bea_arg(param_1), bea_arg(this_ + 0xc), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00435b20, ap_00435b20));

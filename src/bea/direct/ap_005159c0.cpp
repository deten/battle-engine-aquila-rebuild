// auto-ported from 005159c0_FUN_005159c0.c (FUN_005159c0, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_005135f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005135f0_t> FUN_005135f0 = {(FUN_005135f0_t)0x005135f0};

static uint32_t BEA_STDCALL ap_005159c0(undefined4 param_1)
{
  return FUN_005135f0(bea_arg(&DAT_00855bb0), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005159c0, ap_005159c0));

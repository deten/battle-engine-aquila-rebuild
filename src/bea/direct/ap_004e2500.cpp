// auto-ported from 004e2500_vslot2.c (CSoundManagerDebugMenu::vslot2, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_004e2360_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e2360_t> FUN_004e2360 = {(FUN_004e2360_t)0x004e2360};

static uint32_t BEA_STDCALL ap_004e2500(undefined4 param_1, undefined4 param_2)
{
  return FUN_004e2360(bea_arg(&DAT_00896988), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e2500, ap_004e2500));

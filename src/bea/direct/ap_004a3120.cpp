// auto-ported from 004a3120_FUN_004a3120.c (FUN_004a3120, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint (BEA_CDECL* FUN_00469400_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469400_t> FUN_00469400 = {(FUN_00469400_t)0x00469400};

static uint32_t BEA_CDECL ap_004a3120(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  return FUN_00469400(bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3120, ap_004a3120));

// auto-ported from 004a3100_FUN_004a3100.c (FUN_004a3100, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint (BEA_CDECL* FUN_004693d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004693d0_t> FUN_004693d0 = {(FUN_004693d0_t)0x004693d0};

static uint32_t BEA_CDECL ap_004a3100(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  return FUN_004693d0(bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3100, ap_004a3100));

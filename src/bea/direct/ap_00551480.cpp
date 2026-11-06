// auto-ported from 00551480_FUN_00551480.c (FUN_00551480, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_005138b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005138b0_t> FUN_005138b0 = {(FUN_005138b0_t)0x005138b0};

static uint32_t BEA_CDECL ap_00551480(undefined4 param_1)
{
  return FUN_005138b0(bea_arg(param_1), bea_arg(7), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551480, ap_00551480));

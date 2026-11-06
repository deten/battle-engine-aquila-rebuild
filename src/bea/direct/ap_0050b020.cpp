// auto-ported from 0050b020_FUN_0050b020.c (FUN_0050b020, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_004bc3e0_t)(uint32_t);
static const bea_guard<FUN_004bc3e0_t> FUN_004bc3e0 = {(FUN_004bc3e0_t)0x004bc3e0};

static uint32_t BEA_STDCALL ap_0050b020(undefined4 param_1)
{
  return FUN_004bc3e0(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050b020, ap_0050b020));

// auto-ported from 0050b010_FUN_0050b010.c (FUN_0050b010, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_004bc480_t)(uint32_t);
static const bea_guard<FUN_004bc480_t> FUN_004bc480 = {(FUN_004bc480_t)0x004bc480};

static uint32_t BEA_STDCALL ap_0050b010(undefined4 param_1)
{
  return FUN_004bc480(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050b010, ap_0050b010));

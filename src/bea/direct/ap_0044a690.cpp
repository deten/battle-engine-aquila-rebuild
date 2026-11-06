// auto-ported from 0044a690_FUN_0044a690.c (FUN_0044a690, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static uint32_t BEA_CDECL ap_0044a690(void)
{
  return FUN_00513bc0(bea_arg(0x89), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a690, ap_0044a690));

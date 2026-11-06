// auto-ported from 004681e0_FUN_004681e0.c (FUN_004681e0, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static uint32_t BEA_CDECL ap_004681e0(undefined4 param_1, undefined4 param_2)
{
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  return FUN_00513bc0(bea_arg(0x14), bea_arg(6));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004681e0, ap_004681e0));

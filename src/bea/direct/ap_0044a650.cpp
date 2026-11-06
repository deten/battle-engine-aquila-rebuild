// auto-ported from 0044a650_FUN_0044a650.c (FUN_0044a650, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static uint32_t BEA_CDECL ap_0044a650(void)
{
  FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  return FUN_00513bc0(bea_arg(0xe), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a650, ap_0044a650));

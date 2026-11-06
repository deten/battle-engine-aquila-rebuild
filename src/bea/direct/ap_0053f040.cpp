// auto-ported from 0053f040_FUN_0053f040.c (FUN_0053f040, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513b60_t)(uint32_t);
static const bea_guard<FUN_00513b60_t> FUN_00513b60 = {(FUN_00513b60_t)0x00513b60};

static uint32_t BEA_STDCALL ap_0053f040(undefined4 param_1)
{
  if ((char)param_1 != '\0') {
    return FUN_00513b60(bea_arg(0));
  }
  return FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053f040, ap_0053f040));

// auto-ported from 00551420_FUN_00551420.c (FUN_00551420, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_0082b474 GLOBAL_AT(int, 0x0082b474)
typedef uint32_t (BEA_STDCALL* FUN_005138b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005138b0_t> FUN_005138b0 = {(FUN_005138b0_t)0x005138b0};

static uint32_t BEA_CDECL ap_00551420(undefined4 param_1)
{
  if (DAT_0082b474 != 0) {
    return FUN_005138b0(bea_arg(param_1), bea_arg(7), bea_arg(1));
  }
  return FUN_005138b0(bea_arg(param_1), bea_arg(7), bea_arg(2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551420, ap_00551420));

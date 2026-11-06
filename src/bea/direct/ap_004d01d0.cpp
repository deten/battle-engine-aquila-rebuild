// auto-ported from 004d01d0_vslot14.c (CConfigName::vslot14, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_00453780_t)(int, ...);
static const bea_guard<FUN_00453780_t> FUN_00453780 = {(FUN_00453780_t)0x00453780};

static uint32_t BEA_STDCALL ap_004d01d0(undefined4 param_1)
{
  return FUN_00453780(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d01d0, ap_004d01d0));

// auto-ported from 004d01a0_vslot17.c (CVideoDetailLevel::vslot17, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static uint32_t BEA_STDCALL ap_004d01a0(int param_1)
{
  return FUN_00524830(param_1 + 0xe0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d01a0, ap_004d01a0));

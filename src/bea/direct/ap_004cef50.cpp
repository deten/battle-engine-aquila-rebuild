// auto-ported from 004cef50_vslot14.c (CTreeDetail::vslot14, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_004dd6b0_t)(uint32_t);
static const bea_guard<FUN_004dd6b0_t> FUN_004dd6b0 = {(FUN_004dd6b0_t)0x004dd6b0};

static uint32_t BEA_STDCALL ap_004cef50(undefined4 param_1)
{
  return FUN_004dd6b0(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cef50, ap_004cef50));

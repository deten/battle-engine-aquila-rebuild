// auto-ported from 00515370_vslot5.c (CPCMusic::vslot5, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_005285e0_t)(uint32_t);
static const bea_guard<FUN_005285e0_t> FUN_005285e0 = {(FUN_005285e0_t)0x005285e0};

static uint32_t BEA_STDCALL ap_00515370(int param_1)
{
  return FUN_005285e0(bea_arg((float)param_1 * 0.007874016f));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515370, ap_00515370));

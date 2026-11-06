// auto-ported from 00515350_vslot2.c (CPCMusic::vslot2, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_00528540_t)(uint32_t);
static const bea_guard<FUN_00528540_t> FUN_00528540 = {(FUN_00528540_t)0x00528540};

static uint32_t BEA_STDCALL ap_00515350(undefined4 param_1)
{
  return FUN_00528540(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515350, ap_00515350));

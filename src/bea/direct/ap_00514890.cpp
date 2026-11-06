// auto-ported from 00514890_vslot7.c (CPCController::vslot7, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef undefined1 (BEA_STDCALL* FUN_00515970_t)(uint32_t);
static const bea_guard<FUN_00515970_t> FUN_00515970 = {(FUN_00515970_t)0x00515970};

static uint32_t BEA_STDCALL ap_00514890(undefined4 param_1)
{
  return FUN_00515970(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514890, ap_00514890));

// auto-ported from 004c53b0_vslot7.c (CPDFoR::vslot7, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDFoR;
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};

static uint32_t BEA_THISCALL ap_004c53b0(CPDFoR * this_, undefined4 param_1)
{
  FUN_004f5d50(bea_arg(0x69), bea_arg(*(undefined4 *)(this_ + 0x5c)));
  FUN_004f5d50(bea_arg(0x6a), bea_arg(*(undefined4 *)(this_ + 0x60)));
  return FUN_004f5d50(bea_arg(0x28), bea_arg(*(undefined4 *)(this_ + 100)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c53b0, ap_004c53b0));

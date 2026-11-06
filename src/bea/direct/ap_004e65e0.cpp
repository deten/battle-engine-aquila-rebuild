// auto-ported from 004e65e0_vslot0.c (CSquad::vslot0, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot0_t> CComplexThing__vslot0 = {(CComplexThing__vslot0_t)0x004f4300};

static uint32_t BEA_THISCALL ap_004e65e0(CComplexThing * this_, int param_1)
{
  if (*(short *)(param_1 + 4) != 0xfa2) {
    return CComplexThing__vslot0(bea_arg(this_), bea_arg(param_1));
  }
  return bea_vcall<uint32_t>(this_, 0x108, param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e65e0, ap_004e65e0));

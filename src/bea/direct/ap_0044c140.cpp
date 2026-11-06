// auto-ported from 0044c140_vslot0.c (CAnimal::vslot0, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot0_t> CComplexThing__vslot0 = {(CComplexThing__vslot0_t)0x004f4300};

static uint32_t BEA_THISCALL ap_0044c140(CComplexThing * this_, int param_1)
{
  if (*(short *)(param_1 + 4) != 3000) {
    return CComplexThing__vslot0(bea_arg(this_), bea_arg(param_1));
  }
  return bea_vcall<uint32_t>(this_, 0x108);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c140, ap_0044c140));

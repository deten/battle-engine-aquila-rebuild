// auto-ported from 004900d0_vslot9.c (CLevelScriptThing::vslot9, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};

static uint32_t BEA_THISCALL ap_004900d0(CComplexThing * this_, int param_1)
{
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return CComplexThing__vslot9(bea_arg(this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004900d0, ap_004900d0));

// auto-ported from 004e5500_vslot9.c (CSphereTrigger::vslot9, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSphereTrigger;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};

static uint32_t BEA_THISCALL ap_004e5500(CSphereTrigger * this_, int param_1)
{
  *(undefined4 *)(this_ + 0x84) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(param_1 + 0x70) = 0x20;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(this_ + 0x88) = 0xbf800000;
  return CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5500, ap_004e5500));

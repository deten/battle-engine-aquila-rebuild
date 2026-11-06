// auto-ported from 0048c390_vslot9.c (CInfluenceNode::vslot9, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CInfluenceNode;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};

static uint32_t BEA_THISCALL ap_0048c390(CInfluenceNode * this_, int param_1)
{
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CInfluenceNode)((byte)this_[0x2c] & 0xfd);
  return CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048c390, ap_0048c390));

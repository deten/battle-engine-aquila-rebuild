// auto-ported from 004f46f0_vslot9.c (CThunderHead::vslot9, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMech;
typedef char CThunderHead;
typedef uint32_t (BEA_THISCALL* CMech__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CMech__vslot9_t> CMech__vslot9 = {(CMech__vslot9_t)0x0049f820};

static uint32_t BEA_THISCALL ap_004f46f0(CThunderHead * this_, int param_1)
{
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x8100000;
  CMech__vslot9(bea_arg((CMech *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0x26c) = 0;
  *(undefined4 *)(this_ + 0x270) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f46f0, ap_004f46f0));

// auto-ported from 004227e0_vslot39.c (CCarver::vslot39, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarver;
typedef char CDiveBomber;
typedef uint32_t (BEA_THISCALL* CDiveBomber__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CDiveBomber__vslot39_t> CDiveBomber__vslot39 = {(CDiveBomber__vslot39_t)0x00403ba0};

static uint32_t BEA_THISCALL ap_004227e0(CCarver * this_, int param_1, undefined4 param_2)
{
  if ((*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0) &&
     (((*(uint *)(param_1 + 0x34) & 0x10) != 0 || ((*(uint *)(param_1 + 0x34) & 0x2000000) != 0))))
  {
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return CDiveBomber__vslot39(bea_arg((CDiveBomber *)this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004227e0, ap_004227e0));

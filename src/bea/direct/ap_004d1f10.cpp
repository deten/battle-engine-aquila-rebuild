// auto-ported from 004d1f10_vslot39.c (CPlane::vslot39, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDiveBomber;
typedef char CPlane;
typedef uint32_t (BEA_THISCALL* CDiveBomber__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CDiveBomber__vslot39_t> CDiveBomber__vslot39 = {(CDiveBomber__vslot39_t)0x00403ba0};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static uint32_t BEA_THISCALL ap_004d1f10(CPlane * this_, int *param_1, undefined4 param_2)
{
  uint uVar1;
  if (((*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0) &&
      (((uVar1 = param_1[0xd], (uVar1 & 0x400) == 0 || ((uVar1 & 8) != 0)) ||
       (param_1[0x4e] != *(int *)(this_ + 0x138))))) &&
     (((uVar1 & 0x10) != 0 || ((uVar1 & 0x2100000) != 0)))) {
    if ((uVar1 & 0x10) != 0) {
      bea_vcall<uint32_t>(param_1, 0x194, this_);
    }
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return CDiveBomber__vslot39(bea_arg((CDiveBomber *)this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1f10, ap_004d1f10));

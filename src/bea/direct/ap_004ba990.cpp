// auto-ported from 004ba990_vslot39.c (CMine::vslot39, 63 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMine;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot39_t> CUnit__vslot39 = {(CUnit__vslot39_t)0x004fcc30};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};

static uint32_t BEA_THISCALL ap_004ba990(CMine * this_, int param_1, undefined4 param_2)
{
  int iVar1;
  if ((*(byte *)(param_1 + 0x34) & 0x10) != 0) {
    iVar1 = FUN_004fd3d0(bea_arg(this_), bea_arg(*(undefined4 *)(param_1 + 0x138)));
    if (iVar1 != 0) {
      return bea_vcall<uint32_t>(this_, 0xc8);
    }
  }
  return CUnit__vslot39(bea_arg((CUnit *)this_), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ba990, ap_004ba990));

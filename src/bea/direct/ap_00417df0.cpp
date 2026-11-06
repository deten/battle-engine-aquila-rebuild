// auto-ported from 00417df0_vslot0.c (CBuilding::vslot0, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot0_t> CUnit__vslot0 = {(CUnit__vslot0_t)0x004f9820};
typedef uint32_t (BEA_THISCALL* FUN_005337e0_t)(uint32_t);
static const bea_guard<FUN_005337e0_t> FUN_005337e0 = {(FUN_005337e0_t)0x005337e0};

static undefined4 BEA_THISCALL ap_00417df0(CBuilding * this_, int param_1)
{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 4) == 5000) && (*(void **)(this_ + 0x74) != (void *)0x0)) {
    uVar1 = FUN_005337e0(bea_arg(*(void **)(this_ + 0x74)));
    if (*(int **)(this_ + 0x74) != (int *)0x0) {
      uVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x74), 0x4, 1);
    }
    *(undefined4 *)(this_ + 0x74) = 0;
    return uVar1;
  }
  uVar1 = CUnit__vslot0(bea_arg((CUnit *)this_), bea_arg(param_1));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417df0, ap_00417df0));

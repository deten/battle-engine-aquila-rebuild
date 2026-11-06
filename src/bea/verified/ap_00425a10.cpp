// auto-ported from 00425a10_vslot8.c (CCollisionSeekingInfantryBloke::vslot8, 74 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCollisionSeekingInfantryBloke;
typedef char CCollisionSeekingThing;
typedef bool (BEA_THISCALL* CCollisionSeekingThing__vslot8_t)(CCollisionSeekingThing *, int);
static const bea_guard<CCollisionSeekingThing__vslot8_t> CCollisionSeekingThing__vslot8 = {(CCollisionSeekingThing__vslot8_t)0x00426900};
typedef undefined4 (BEA_THISCALL* FUN_004fd3d0_t)(void *, int);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};

static undefined4 BEA_THISCALL ap_00425a10(CCollisionSeekingInfantryBloke * this_, int param_1)
{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x34);
  if (((uVar1 & 0x20000) == 1) && ((uVar1 & 8) == 0)) {
    iVar2 = FUN_004fd3d0(*(void **)(this_ + 8),*(undefined4 *)(*(int *)(param_1 + 8) + 0x138));
    if (iVar2 == 1) {
      return 1;
    }
  }
  uVar3 = CCollisionSeekingThing__vslot8((CCollisionSeekingThing *)this_,param_1);
  return uVar3;
}

// @autoport-registration (verified: 4627 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00425a10, ap_00425a10));

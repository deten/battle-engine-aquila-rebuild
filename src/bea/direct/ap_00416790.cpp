// auto-ported from 00416790_vslot3.c (CBomberAI::vslot3, 236 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBomberAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fde70_t)(uint32_t);
static const bea_guard<FUN_004fde70_t> FUN_004fde70 = {(FUN_004fde70_t)0x004fde70};

static float10 BEA_THISCALL ap_00416790(CBomberAI * this_)
{
  int *piVar1;
  void *this_00;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar4 = uVar4 & 0x8000ffff;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
  }
  bea_vcall<uint32_t>(this_, 0x10);
  iVar5 = *(int *)(this_ + 0xc);
  if ((iVar5 == 0) ||
     (piVar1 = *(int **)(this_ + 8), fVar2 = *(float *)(iVar5 + 0x1c) - bea_fcast<float>(piVar1[7]),
     fVar3 = *(float *)(iVar5 + 0x20) - bea_fcast<float>(piVar1[8]),
     15.0f <= SQRT(fVar2 * fVar2 + fVar3 * fVar3))) {
    this_00 = *(void **)(this_ + 8);
    *(undefined4 *)((int)this_00 + 0x1ec) = 0;
    *(undefined4 *)((int)this_00 + 0x1e8) = 0;
    if (*(int *)(*(int *)((int)this_00 + 0x164) + 0x108) != 0) {
      FUN_004fde70(bea_arg(this_00));
    }
  }
  else {
    bea_vcall<uint32_t>(piVar1, 0x158);
    iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x150);
    if (iVar5 != 0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
      uVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar4 = uVar4 & 0x8000ffff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
      }
      return (float10)(int)uVar4 * (float10)3.0517578e-05f + (float10)2.0f;
    }
  }
  return (float10)((float)(int)uVar4 * 1.5258789e-05f + 0.5f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416790, ap_00416790));

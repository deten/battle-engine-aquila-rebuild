// auto-ported from 00446480_vslot3.c (CDiveBomberAI::vslot3, 720 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @autoport-repair: 1 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDiveBomberAI;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fb650_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb650_t> FUN_004fb650 = {(FUN_004fb650_t)0x004fb650};
typedef float10 (BEA_THISCALL* FUN_004fbc90_t)(uint32_t);
static const bea_guard<FUN_004fbc90_t> FUN_004fbc90 = {(FUN_004fbc90_t)0x004fbc90};
typedef uint32_t (BEA_THISCALL* FUN_004fde70_t)(uint32_t);
static const bea_guard<FUN_004fde70_t> FUN_004fde70 = {(FUN_004fde70_t)0x004fde70};

static float10 BEA_THISCALL ap_00446480(CDiveBomberAI * this_)
{
  void *pvVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  CDiveBomberAI *local_4;
  
  iVar5 = *(int *)(this_ + 0x60);
  if (iVar5 == 0) {
    bea_vcall<uint32_t>(this_, 0x10);
    iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x150);
    if (iVar5 != 0) {
      FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(this_ + 0x34));
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
      uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar6 = uVar6 & 0x8000ffff;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
      }
      return (float10)(int)uVar6 * (float10)1.5258789e-05f + (float10)0.5f;
    }
    if (*(int **)(this_ + 0xc) == (int *)0x0) {
      pvVar1 = *(void **)(this_ + 8);
      *(undefined4 *)((int)pvVar1 + 0x1ec) = 0;
      *(undefined4 *)((int)pvVar1 + 0x1e8) = 0;
      if (*(int *)(*(int *)((int)pvVar1 + 0x164) + 0x108) != 0) {
        FUN_004fde70(bea_arg(pvVar1));
      }
      uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar6 = uVar6 & 0x8000ffff;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
      }
      return (float10)(int)uVar6 * (float10)1.5258789e-05f + (float10)0.5f;
    }
    bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, this_ + 0x34);
    uVar8 = *(undefined4 *)(this_ + 0xc);
LAB_0044651d:
    FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(uVar8), bea_arg(this_ + 0x34));
    bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x158);
    fVar7 = (float10)FUN_004fbc90(bea_arg(*(void **)(this_ + 8)));
    return fVar7 + (float10)0.1f;
  }
  if (iVar5 == 1) {
    uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar6 = uVar6 & 0x8000ffff;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
    }
    iVar5 = *(int *)(this_ + 0xc);
    fVar7 = (float10)(int)uVar6 * (float10)1.5258789e-05f + (float10)0.5f;
    local_4 = (CDiveBomberAI *)(uintptr_t)bea_piece32((float)fVar7);
    if ((iVar5 == 0) ||
       (piVar2 = *(int **)(this_ + 8), fVar3 = *(float *)(iVar5 + 0x1c) - (float)piVar2[7],
       fVar4 = *(float *)(iVar5 + 0x20) - (float)piVar2[8],
       7.0f <= SQRT(fVar3 * fVar3 + fVar4 * fVar4))) {
      pvVar1 = *(void **)(this_ + 8);
      *(undefined4 *)((int)pvVar1 + 0x1ec) = 0;
      *(undefined4 *)((int)pvVar1 + 0x1e8) = 0;
      if (*(int *)(*(int *)((int)pvVar1 + 0x164) + 0x108) == 0) {
        return fVar7;
      }
      FUN_004fde70(bea_arg(pvVar1));
    }
    else {
      bea_vcall<uint32_t>(piVar2, 0x158);
      iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x150);
      if (iVar5 != 0) {
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
        uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar6 = uVar6 & 0x8000ffff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
        }
        return (float10)(int)uVar6 * (float10)3.0517578e-05f + (float10)2.0f;
      }
    }
  }
  else {
    local_4 = this_;
    if (iVar5 == 2) {
      bea_vcall<uint32_t>(this_, 0x10);
      iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x150);
      if (iVar5 != 0) {
        FUN_004fb650(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(this_ + 0x34));
        bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x128);
        uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar6 = uVar6 & 0x8000ffff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
        }
        return (float10)(int)uVar6 * (float10)1.5258789e-05f + (float10)0.5f;
      }
      if ((*(int *)(this_ + 0x18) == 0) || (*(int **)(this_ + 0xc) == (int *)0x0)) {
        pvVar1 = *(void **)(this_ + 8);
        *(undefined4 *)((int)pvVar1 + 0x1ec) = 0;
        *(undefined4 *)((int)pvVar1 + 0x1e8) = 0;
        if (*(int *)(*(int *)((int)pvVar1 + 0x164) + 0x108) != 0) {
          FUN_004fde70(bea_arg(pvVar1));
        }
        uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
        uVar6 = uVar6 & 0x8000ffff;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
        }
        return (float10)(int)uVar6 * (float10)1.5258789e-05f + (float10)0.5f;
      }
      bea_vcall<uint32_t>(*(int **)(this_ + 0xc), 0x168, this_ + 0x34);
      uVar8 = *(undefined4 *)(this_ + 0xc);
      goto LAB_0044651d;
    }
  }
  return (float10)__builtin_bit_cast(float, (uint32_t)(uintptr_t)(local_4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00446480, ap_00446480));

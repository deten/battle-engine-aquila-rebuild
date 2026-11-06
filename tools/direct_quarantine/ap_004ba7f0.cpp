// auto-ported from 004ba7f0_vslot117.c (CMine::vslot117, 405 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMine;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static FUN_00401fa0_t const FUN_00401fa0 = (FUN_00401fa0_t)0x00401fa0;
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_0044b370_t const FUN_0044b370 = (FUN_0044b370_t)0x0044b370;
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static FUN_0048dcf0_t const FUN_0048dcf0 = (FUN_0048dcf0_t)0x0048dcf0;
typedef uint32_t (BEA_THISCALL* FUN_004fcfa0_t)(uint32_t);
static FUN_004fcfa0_t const FUN_004fcfa0 = (FUN_004fcfa0_t)0x004fcfa0;
typedef uint32_t (BEA_THISCALL* FUN_004fcfe0_t)(uint32_t);
static FUN_004fcfe0_t const FUN_004fcfe0 = (FUN_004fcfe0_t)0x004fcfe0;
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static FUN_0050ff10_t const FUN_0050ff10 = (FUN_0050ff10_t)0x0050ff10;
typedef uint32_t (BEA_CDECL* FUN_005337e0_t)(void);
static FUN_005337e0_t const FUN_005337e0 = (FUN_005337e0_t)0x005337e0;

static uint32_t BEA_THISCALL ap_004ba7f0(CMine * this_)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fStack_3dc;
  undefined **ppuStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_338;
  int iStack_1c;
  uint uStack_18;
  CMine *pCStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  FUN_004fcfe0(bea_arg(this_));
  FUN_004fcfa0(bea_arg(this_));
  if (*(int *)(this_ + 0x74) != 0) {
    FUN_005337e0();
    if (*(int **)(this_ + 0x74) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x74), 0x4, 1);
    }
    *(undefined4 *)(this_ + 0x74) = 0;
  }
  if (*(int *)(this_ + 0x164) != 0) {
    piVar2 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xe8)));
    FUN_0048dcf0(bea_arg(&ppuStack_3d8));
    ppuStack_3d8 = ((void*)0x005d8c80);
    uStack_18 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_4 = 0;
    uStack_8 = 0;
    iVar3 = *(int *)(*(int *)(this_ + 0x164) + 0xe8);
    iVar4 = 0;
    piVar1 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = *piVar1;
    }
    while (BEA_LOOP_GUARD((iStack_1c != 0))) {
      if (iVar4 == iVar3) goto LAB_004ba8d3;
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = *piVar1;
      }
    }
    iStack_1c = 0;
LAB_004ba8d3:
    uStack_338 = *(undefined4 *)(this_ + 0x138);
    pCStack_14 = this_;
    iVar3 = bea_vcall<uint32_t>(this_, 0x10c);
    if (iVar3 == 0) {
      iVar3 = FUN_00401fa0(bea_arg(this_));
      uStack_18 = -(uint)(iVar3 != 0) & 2;
    }
    else {
      uStack_18 = 1;
    }
    if (piVar2 != (int *)0x0) {
      uStack_3d4 = *(undefined4 *)(this_ + 0x1c);
      uStack_3d0 = *(undefined4 *)(this_ + 0x20);
      uStack_3cc = *(undefined4 *)(this_ + 0x24);
      uStack_3c8 = *(undefined4 *)(this_ + 0x28);
      bea_vcall<uint32_t>(piVar2, 0x24, &ppuStack_3d8);
    }
  }
  fVar5 = (float10)bea_vcall<float10>(this_, 0x1c0);
  fStack_3dc = (float)(fVar5 + (float10)DAT_00672fd0);
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&fStack_3dc), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ba7f0, ap_004ba7f0));

// auto-ported from 004dfaa0_vslot66.c (CSimpleBuilding::vslot66, 433 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CSimpleBuilding;
typedef char CUnit;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static CUnit__vslot66_t const CUnit__vslot66 = (CUnit__vslot66_t)0x004fa8d0;
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static FUN_0047eb80_t const FUN_0047eb80 = (FUN_0047eb80_t)0x0047eb80;
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static FUN_0048dcf0_t const FUN_0048dcf0 = (FUN_0048dcf0_t)0x0048dcf0;
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static FUN_0050ff10_t const FUN_0050ff10 = (FUN_0050ff10_t)0x0050ff10;

static void BEA_THISCALL ap_004dfaa0(CSimpleBuilding * this_)
{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  undefined1 auStack_3e8 [8];
  undefined1 auStack_3e0 [4];
  undefined4 uStack_3dc;
  undefined **ppuStack_3d8;
  float fStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_340;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((byte)this_[0x2c] & 4) != 0) {
    fVar7 = (float10)bea_vcall<float10>(this_, 0xb4);
    *(float *)(this_ + 0x84) = (float)(fVar7 + (float10)*(float *)(this_ + 0x84));
    fVar7 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c));
    if (fVar7 + (float10)0.5f < (float10)*(float *)(this_ + 0x24)) {
      bea_vcall<uint32_t>(this_, 0x110);
    }
    FUN_0048dcf0(bea_arg(&ppuStack_3d8));
    ppuStack_3d8 = ((void*)0x005d8c80);
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_4 = 0;
    uStack_8 = 0;
    puVar4 = (undefined4 *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x20, auStack_3e8,0);
    uStack_3dc = *puVar4;
    ppuStack_3d8 = (undefined **)puVar4[1];
    fStack_3d4 = (float)puVar4[2];
    uStack_3d0 = puVar4[3];
    fVar7 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&uStack_3dc));
    fVar3 = DAT_006fbdfc;
    piVar5 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xec)));
    if (piVar5 != (int *)0x0) {
      uStack_340 = *(undefined4 *)(this_ + 0x138);
      iVar1 = *(int *)(*(int *)(this_ + 0x164) + 0xec);
      piVar2 = (int *)*DAT_008553f8;
      iVar6 = 0;
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iStack_24 = 0;
      }
      else {
        iStack_24 = *piVar2;
      }
      while (BEA_LOOP_GUARD((iStack_24 != 0))) {
        if (iVar6 == iVar1) goto LAB_004dfbf1;
        iVar6 = iVar6 + 1;
        piVar2 = *(int **)(DAT_008553f8[2] + 4);
        DAT_008553f8[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iStack_24 = 0;
        }
        else {
          iStack_24 = *piVar2;
        }
      }
      iStack_24 = 0;
LAB_004dfbf1:
      if (fStack_3d4 <= fVar3) {
        uStack_20 = 1;
        if (fStack_3d4 <= (float)fVar7) {
          uStack_20 = 0;
        }
      }
      else {
        uStack_20 = 2;
      }
      bea_vcall<uint32_t>(piVar5, 0x24, auStack_3e0);
    }
    CUnit__vslot66(bea_arg((CUnit *)this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dfaa0, ap_004dfaa0));

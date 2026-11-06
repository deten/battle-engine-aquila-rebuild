// auto-ported from 004ff710_vslot11.c (CUnitAI::vslot11, 1096 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CUnitAI;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static FUN_00401000_t const FUN_00401000 = (FUN_00401000_t)0x00401000;
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static FUN_004de8d0_t const FUN_004de8d0 = (FUN_004de8d0_t)0x004de8d0;
typedef undefined4 (BEA_THISCALL* FUN_004fb3d0_t)(uint32_t, uint32_t);
static FUN_004fb3d0_t const FUN_004fb3d0 = (FUN_004fb3d0_t)0x004fb3d0;
typedef uint (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static FUN_004fb500_t const FUN_004fb500 = (FUN_004fb500_t)0x004fb500;
typedef uint (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static FUN_004fb5a0_t const FUN_004fb5a0 = (FUN_004fb5a0_t)0x004fb5a0;
typedef float10 (BEA_THISCALL* FUN_004fb780_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004fb780_t const FUN_004fb780 = (FUN_004fb780_t)0x004fb780;
typedef float10 (BEA_THISCALL* FUN_004fb7e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_004fb7e0_t const FUN_004fb7e0 = (FUN_004fb7e0_t)0x004fb7e0;
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static FUN_004fb840_t const FUN_004fb840 = (FUN_004fb840_t)0x004fb840;
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static FUN_004fd3d0_t const FUN_004fd3d0 = (FUN_004fd3d0_t)0x004fd3d0;
typedef undefined4 (BEA_STDCALL* FUN_004fd5b0_t)(uint32_t);
static FUN_004fd5b0_t const FUN_004fd5b0 = (FUN_004fd5b0_t)0x004fd5b0;

static undefined4 BEA_THISCALL ap_004ff710(CUnitAI * this_)
{
  CUnitAI *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  float10 fVar9;
  float fStack_20;
  float fStack_14;
  int *piStack_10;
  undefined4 *puStack_8;
  
  this_00 = this_ + 0xc;
  if ((((*(int **)(this_ + 0xc) != (int *)0x0) &&
       (fVar9 = (float10)bea_vcall<float10>(*(int **)(this_ + 0xc), 0x16c), fVar9 == (float10)0.0f)) &&
      (*(int *)(this_ + 0x14) != 0)) && (iVar4 = FUN_004fd5b0(bea_arg(*(undefined4 *)this_00)), iVar4 != 0)) {
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
    iVar4 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
    *(int *)(this_ + 0x1c) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(this_ + 0x18) = 0;
      return *(undefined4 *)this_00;
    }
    uVar5 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00), bea_arg(0));
    *(undefined4 *)(this_ + 0x18) = uVar5;
    return *(undefined4 *)this_00;
  }
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  piVar8 = &DAT_00855090;
  if (*(int *)(*(int *)(this_ + 8) + 0x138) == 1) {
    piVar8 = &DAT_008550b0;
  }
  else if (*(int *)(*(int *)(this_ + 8) + 0x138) == 0) {
    piVar8 = &DAT_008550c0;
  }
  puStack_8 = (undefined4 *)*piVar8;
  piStack_10 = (int *)0x0;
  fStack_14 = 0.0f;
  fStack_20 = -999999.0;
  if (puStack_8 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)*puStack_8;
  }
  if (piVar8 != (int *)0x0) {
    do {
      if ((piVar8[0xd] & 0x20000000U) == 0) {
        piVar6 = piVar8;
        if ((piVar8[0xd] & 0x10U) != 0) goto LAB_004ff80e;
      }
      else {
        piVar6 = (int *)bea_vcall<uint32_t>(piVar8, 0x128);
LAB_004ff80e:
        if (((piVar6 != (int *)0x0) && (iVar4 = FUN_004fd5b0(bea_arg(piVar6)), iVar4 != 0)) &&
           ((iVar4 = FUN_004fd3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[0x4e])), iVar4 != 0 &&
            (iVar4 = FUN_004fb3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6)), iVar4 != 0)))) {
          iVar4 = *(int *)(this_ + 8);
          fVar2 = (float)piVar8[7] - *(float *)(iVar4 + 0x1c);
          fVar3 = (float)piVar8[8] - *(float *)(iVar4 + 0x20);
          fVar1 = (float)piVar8[9] - *(float *)(iVar4 + 0x24);
          iVar4 = *(int *)(iVar4 + 0x164);
          fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
          fVar9 = (float10)bea_vcall<float10>(piVar6, 0x16c);
          fVar9 = ((float10)1.0f - fVar9 * (float10)0.01f) * (float10)*(float *)(iVar4 + 0x158);
          if ((float10)fVar2 < fVar9 * fVar9) {
            if (*(int *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x128) == 0) {
              iVar4 = bea_vcall<uint32_t>(piVar6, 0x164);
              if ((iVar4 == 0) && (*(int *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x138) == 0)) {
                fVar1 = 0.0f;
              }
              else {
                uVar7 = piVar6[0xd];
                if ((uVar7 & 0x20000) == 0) {
                  if ((uVar7 & 0x4000) == 0) {
                    if ((uVar7 & 0x400) == 0) {
                      if ((uVar7 & 0x40000) == 0) {
                        if ((uVar7 & 0x100) == 0) {
                          if ((uVar7 & 0x8000) == 0) {
                            fVar1 = 0.0f;
                          }
                          else {
                            fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x170);
                          }
                        }
                        else {
                          fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x16c);
                        }
                      }
                      else {
                        fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x164);
                      }
                    }
                    else {
                      fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x178);
                    }
                  }
                  else {
                    fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x174);
                  }
                }
                else {
                  fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x168);
                }
                if (((uVar7 & 0x80000) != 0) &&
                   (fVar1 < *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x17c))) {
                  fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x17c);
                }
              }
            }
            else {
              uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
              uVar7 = uVar7 & 0x8000ffff;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
              }
              fVar1 = (float)(int)uVar7 * 0.00012207031f;
            }
            if (fVar1 <= fStack_20) {
              if (fVar1 != fStack_20) goto LAB_004ffab6;
            }
            else {
              fStack_14 = 0.0f;
              fStack_20 = fVar1;
            }
            fVar2 = SQRT(fVar2);
            fVar1 = 1000.0f - fVar2;
            FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6));
            fVar9 = (float10)FUN_004fb780(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[7]), bea_arg(piVar6[8]), bea_arg(piVar6[9]), bea_arg(piVar6[10]));
            if (fVar9 <= (float10)fVar2) {
              fVar9 = (float10)FUN_004fb7e0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[7]), bea_arg(piVar6[8]), bea_arg(piVar6[9]), bea_arg(piVar6[10]));
              if ((float10)fVar2 <= fVar9) {
                fVar1 = fVar1 + 1e+06;
              }
              else {
                fVar1 = fVar1 + 10000.0f;
              }
            }
            if (fStack_14 < fVar1) {
              fStack_14 = fVar1;
              piStack_10 = piVar6;
            }
          }
        }
      }
LAB_004ffab6:
      puStack_8 = (undefined4 *)puStack_8[1];
      if (puStack_8 == (undefined4 *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)*puStack_8;
      }
    } while (BEA_LOOP_GUARD((piVar8 != (int *)0x0)));
    if (piStack_10 != (int *)0x0) {
      FUN_00401000(bea_arg(this_00), bea_arg(piStack_10));
      FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(piStack_10));
      *(undefined4 *)(this_ + 0x10) = 0;
      FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
      iVar4 = FUN_004fd5b0(bea_arg(*(undefined4 *)this_00));
      if (iVar4 != 0) {
        iVar4 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
        *(int *)(this_ + 0x1c) = iVar4;
        if (iVar4 != 0) {
          uVar5 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00), bea_arg(0));
          *(undefined4 *)(this_ + 0x18) = uVar5;
          *(undefined4 *)(this_ + 0x10) = 0;
          return *(undefined4 *)this_00;
        }
      }
      goto LAB_004ffb4a;
    }
  }
  FUN_00401000(bea_arg(this_00), bea_arg(0));
LAB_004ffb4a:
  *(undefined4 *)(this_ + 0x10) = 0;
  return *(undefined4 *)this_00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ff710, ap_004ff710));

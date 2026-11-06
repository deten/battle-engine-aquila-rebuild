// auto-ported from 0047b100_vslot11.c (CGillMHeadAI::vslot11, 893 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGillMHeadAI;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 (BEA_THISCALL* FUN_004fb3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb3d0_t> FUN_004fb3d0 = {(FUN_004fb3d0_t)0x004fb3d0};
typedef float10 (BEA_THISCALL* FUN_004fb780_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb780_t> FUN_004fb780 = {(FUN_004fb780_t)0x004fb780};
typedef float10 (BEA_THISCALL* FUN_004fb7e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb7e0_t> FUN_004fb7e0 = {(FUN_004fb7e0_t)0x004fb7e0};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef uint32_t (BEA_THISCALL* FUN_004ffdd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ffdd0_t> FUN_004ffdd0 = {(FUN_004ffdd0_t)0x004ffdd0};

static undefined4 BEA_THISCALL ap_0047b100(CGillMHeadAI * this_)
{
  float *pfVar1;
  void *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  float fStack_14;
  float local_10;
  int *local_8;
  
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  piVar7 = &DAT_00855090;
  if (*(int *)(*(int *)(this_ + 8) + 0x138) == 1) {
    piVar7 = &DAT_008550b0;
  }
  else if (*(int *)(*(int *)(this_ + 8) + 0x138) == 0) {
    piVar7 = &DAT_008550c0;
  }
  puVar8 = (undefined4 *)*piVar7;
  local_8 = (int *)0x0;
  local_10 = -999999.0;
  if (puVar8 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)*puVar8;
  }
  if (piVar7 != (int *)0x0) {
    do {
      iVar5 = *(int *)(this_ + 8);
      fVar2 = bea_fcast<float>(piVar7[7]) - *(float *)(iVar5 + 0x1c);
      fVar4 = bea_fcast<float>(piVar7[8]) - *(float *)(iVar5 + 0x20);
      fVar3 = bea_fcast<float>(piVar7[9]) - *(float *)(iVar5 + 0x24);
      fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;   // class 19: the asm's order
      if ((piVar7[0xd] & 0x20000000U) == 0) {
        if ((piVar7[0xd] & 0x10U) != 0) goto LAB_0047b1a7;
      }
      else {
        piVar7 = (int *)bea_vcall<uint32_t>(piVar7, 0x128);
LAB_0047b1a7:
        if ((((piVar7 != (int *)0x0) &&
             (iVar5 = FUN_004fd3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7[0x4e])), iVar5 != 0)) &&
            (iVar5 = FUN_004fb3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7)), iVar5 != 0)) &&
           (iVar5 = *(int *)(*(int *)(this_ + 8) + 0x164),
           fVar9 = (float10)bea_vcall<float10>(piVar7, 0x16c),
           fVar9 = ((float10)1.0f - fVar9 * (float10)0.01f) * (float10)*(float *)(iVar5 + 0x158),
           (float10)fVar2 < fVar9 * fVar9)) {
          fStack_14 = 0.0f;
          iVar5 = *(int *)(*(int *)(this_ + 8) + 0x164);
          if (*(int *)(iVar5 + 0x128) == 0) {
            uVar6 = piVar7[0xd];
            if ((uVar6 & 0x20000) == 0) {
              if ((uVar6 & 0x4000) == 0) {
                if ((uVar6 & 0x400) == 0) {
                  if ((uVar6 & 0x80000) == 0) {
                    if ((uVar6 & 0x40000) == 0) {
                      if ((uVar6 & 0x100) == 0) {
                        if ((uVar6 & 0x8000) != 0) {
                          fStack_14 = *(float *)(iVar5 + 0x170);
                        }
                      }
                      else {
                        fStack_14 = *(float *)(iVar5 + 0x16c);
                      }
                    }
                    else {
                      fStack_14 = *(float *)(iVar5 + 0x164);
                    }
                  }
                  else {
                    fStack_14 = *(float *)(iVar5 + 0x17c);
                  }
                }
                else {
                  fStack_14 = *(float *)(iVar5 + 0x178);
                }
              }
              else {
                fStack_14 = *(float *)(iVar5 + 0x174);
              }
            }
            else {
              fStack_14 = *(float *)(iVar5 + 0x168);
            }
            iVar5 = bea_vcall<uint32_t>(piVar7, 0x164);
            if (iVar5 == 0) {
              fStack_14 = 0.0f;
            }
          }
          else {
            uVar6 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
            uVar6 = uVar6 & 0x8000ffff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffff0000) + 1;
            }
            fStack_14 = (float)(int)uVar6 * 0.00012207031f;
          }
          fVar3 = fStack_14;
          if ((local_10 < fStack_14) || (fVar3 = local_10, fStack_14 == local_10)) {
            local_10 = fVar3;
            this_00 = *(void **)(this_ + 8);
            pfVar1 = (float *)(piVar7 + 7);
            fVar10 = (float10)fpatan(bea_fcast<float10>(*pfVar1) - (float10)*(float *)((int)this_00 + 0x1c),
                                     (float10)bea_fcast<float>(piVar7[8]) -
                                     (float10)*(float *)((int)this_00 + 0x20));
            fVar10 = -fVar10;
            fVar9 = (float10)*(float *)(*(int *)((int)this_00 + 0x26c) + 0x114);
            if (((float10)-1.5707964f <= fVar10) || (fVar9 <= (float10)1.5707964f)) {
              if (((float10)1.5707964f < fVar10) && (fVar9 < (float10)-1.5707964f)) {
                fVar9 = fVar9 + (float10)6.2831855f;
              }
            }
            else {
              fVar9 = fVar9 - (float10)6.2831855f;
            }
            fVar10 = fVar10 - fVar9;
            if ((float10)-3.1415927f <= fVar10) {
              if ((float10)3.1415927f < fVar10) {
                fVar10 = fVar10 - (float10)6.2831855f;
              }
            }
            else {
              fVar10 = fVar10 + (float10)6.2831855f;
            }
            if (ABS(fVar10) < (float10)0.7853982f) {
              FUN_004fb840(bea_arg(this_00), bea_arg(piVar7));
              fVar2 = SQRT(fVar2);
              fVar9 = (float10)FUN_004fb780(bea_arg(*(void **)(this_ + 8)), bea_arg(*pfVar1), bea_arg(piVar7[8]), bea_arg(piVar7[9]), bea_arg(piVar7[10]));
              if ((fVar9 <= (float10)fVar2) &&
                 (fVar9 = (float10)FUN_004fb7e0(bea_arg(*(void **)(this_ + 8)), bea_arg(*pfVar1), bea_arg(piVar7[8]), bea_arg(piVar7[9]), bea_arg(piVar7[10])), (float10)fVar2 <= fVar9)) {
                local_8 = piVar7;
              }
            }
          }
        }
      }
      puVar8 = (undefined4 *)puVar8[1];
      if (puVar8 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)*puVar8;
      }
    } while (((piVar7 != (int *)0x0)));
    if (local_8 != (int *)0x0) {
      FUN_004ffdd0(bea_arg(this_), bea_arg(local_8), bea_arg(0));
      FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)));
      *(undefined4 *)(this_ + 0x10) = 0;
      return *(undefined4 *)(this_ + 0xc);
    }
  }
  FUN_00401000(bea_arg(this_ + 0xc), bea_arg(0));
  *(undefined4 *)(this_ + 0x10) = 0;
  return *(undefined4 *)(this_ + 0xc);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047b100, ap_0047b100));

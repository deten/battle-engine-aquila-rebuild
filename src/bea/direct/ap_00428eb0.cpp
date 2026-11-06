// auto-ported from 00428eb0_vslot11.c (CComponentBomberAI::vslot11, 720 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CComponentBomberAI;
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
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef undefined4 (BEA_STDCALL* FUN_004fd5b0_t)(uint32_t);
static const bea_guard<FUN_004fd5b0_t> FUN_004fd5b0 = {(FUN_004fd5b0_t)0x004fd5b0};
typedef uint32_t (BEA_THISCALL* FUN_004ffdd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ffdd0_t> FUN_004ffdd0 = {(FUN_004ffdd0_t)0x004ffdd0};

static undefined4 BEA_THISCALL ap_00428eb0(CComponentBomberAI * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float fStack_18;
  float local_14;
  float local_10;
  int *local_8;
  
  *(undefined4 *)(this_ + 0x1c) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  piVar6 = &DAT_00855090;
  if (*(int *)(*(int *)(this_ + 8) + 0x138) == 1) {
    piVar6 = &DAT_008550b0;
  }
  else if (*(int *)(*(int *)(this_ + 8) + 0x138) == 0) {
    piVar6 = &DAT_008550c0;
  }
  puVar7 = (undefined4 *)*piVar6;
  local_8 = (int *)0x0;
  local_10 = 0.0f;
  local_14 = -999999.0;
  if (puVar7 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*puVar7;
  }
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *(int *)(this_ + 8);
      fVar1 = bea_fcast<float>(piVar6[7]) - *(float *)(iVar4 + 0x1c);
      fVar2 = bea_fcast<float>(piVar6[8]) - *(float *)(iVar4 + 0x20);
      fVar3 = bea_fcast<float>(piVar6[9]) - *(float *)(iVar4 + 0x24);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);   // class 19: the asm's order
      if ((piVar6[0xd] & 0x20000000U) == 0) {
        if ((piVar6[0xd] & 0x10U) != 0) goto LAB_00428f67;
      }
      else {
        piVar6 = (int *)bea_vcall<uint32_t>(piVar6, 0x128);
LAB_00428f67:
        if ((((piVar6 != (int *)0x0) &&
             (iVar4 = FUN_004fd3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[0x4e])), iVar4 != 0)) &&
            (iVar4 = FUN_004fb3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6)), iVar4 != 0)) &&
           (iVar4 = *(int *)(*(int *)(this_ + 8) + 0x164),
           fVar8 = (float10)bea_vcall<float10>(piVar6, 0x16c),
           (float10)fVar1 <
           ((float10)1.0f - fVar8 * (float10)0.01f) * (float10)*(float *)(iVar4 + 0x158))) {
          fStack_18 = 0.0f;
          iVar4 = *(int *)(*(int *)(this_ + 8) + 0x164);
          if (*(int *)(iVar4 + 0x128) == 0) {
            uVar5 = piVar6[0xd];
            if ((uVar5 & 0x20000) == 0) {
              if ((uVar5 & 0x4000) == 0) {
                if ((uVar5 & 0x400) == 0) {
                  if ((uVar5 & 0x80000) == 0) {
                    if ((uVar5 & 0x40000) == 0) {
                      if ((uVar5 & 0x100) == 0) {
                        if ((uVar5 & 0x8000) != 0) {
                          fStack_18 = *(float *)(iVar4 + 0x170);
                        }
                      }
                      else {
                        fStack_18 = *(float *)(iVar4 + 0x16c);
                      }
                    }
                    else {
                      fStack_18 = *(float *)(iVar4 + 0x164);
                    }
                  }
                  else {
                    fStack_18 = *(float *)(iVar4 + 0x17c);
                  }
                }
                else {
                  fStack_18 = *(float *)(iVar4 + 0x178);
                }
              }
              else {
                fStack_18 = *(float *)(iVar4 + 0x174);
              }
            }
            else {
              fStack_18 = *(float *)(iVar4 + 0x168);
            }
            iVar4 = bea_vcall<uint32_t>(piVar6, 0x164);
            if (iVar4 == 0) {
              fStack_18 = 0.0f;
            }
          }
          else {
            uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
            uVar5 = uVar5 & 0x8000ffff;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
            }
            fStack_18 = (float)(int)uVar5 * 0.00012207031f;
          }
          if (fStack_18 <= local_14) {
            if (fStack_18 != local_14) goto LAB_004290e7;
          }
          else {
            local_10 = 0.0f;
            local_14 = fStack_18;
          }
          fVar1 = 1000.0f - fVar1;
          if (local_10 < fVar1) {
            local_10 = fVar1;
            local_8 = piVar6;
          }
        }
      }
LAB_004290e7:
      puVar7 = (undefined4 *)puVar7[1];
      if (puVar7 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar7;
      }
    } while (((piVar6 != (int *)0x0)));
    if (local_8 != (int *)0x0) {
      FUN_004ffdd0(bea_arg(this_), bea_arg(local_8), bea_arg(0));
      iVar4 = FUN_004fd5b0(bea_arg(*(undefined4 *)(this_ + 0xc)));
      if ((iVar4 != 0) &&
         (fVar1 = bea_fcast<float>(local_8[7]) - *(float *)(*(int *)(this_ + 8) + 0x1c),
         fVar2 = bea_fcast<float>(local_8[8]) - *(float *)(*(int *)(this_ + 8) + 0x20),
         SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 7.0f)) {
        *(undefined4 *)(this_ + 0x1c) = 1;
        *(undefined4 *)(this_ + 0x18) = 1;
      }
      *(undefined4 *)(this_ + 0x10) = 0;
      return *(undefined4 *)(this_ + 0xc);
    }
  }
  FUN_00401000(bea_arg(this_ + 0xc), bea_arg(0));
  *(undefined4 *)(this_ + 0x10) = 0;
  return *(undefined4 *)(this_ + 0xc);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428eb0, ap_00428eb0));

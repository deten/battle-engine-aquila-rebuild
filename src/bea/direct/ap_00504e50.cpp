// auto-ported from 00504e50_vslot11.c (CWarspiteDomeAI::vslot11, 949 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CWarspiteDomeAI;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef undefined4 (BEA_THISCALL* FUN_004fb3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb3d0_t> FUN_004fb3d0 = {(FUN_004fb3d0_t)0x004fb3d0};
typedef uint (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb500_t> FUN_004fb500 = {(FUN_004fb500_t)0x004fb500};
typedef uint (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb5a0_t> FUN_004fb5a0 = {(FUN_004fb5a0_t)0x004fb5a0};
typedef float10 (BEA_THISCALL* FUN_004fb780_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb780_t> FUN_004fb780 = {(FUN_004fb780_t)0x004fb780};
typedef float10 (BEA_THISCALL* FUN_004fb7e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb7e0_t> FUN_004fb7e0 = {(FUN_004fb7e0_t)0x004fb7e0};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef undefined4 (BEA_STDCALL* FUN_004fd5b0_t)(uint32_t);
static const bea_guard<FUN_004fd5b0_t> FUN_004fd5b0 = {(FUN_004fd5b0_t)0x004fd5b0};
typedef uint32_t (BEA_THISCALL* FUN_004ffdd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ffdd0_t> FUN_004ffdd0 = {(FUN_004ffdd0_t)0x004ffdd0};

static undefined4 BEA_THISCALL ap_00504e50(CWarspiteDomeAI * this_)
{
  CWarspiteDomeAI *this_00;
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  float local_1c;
  float local_14;
  int *local_c;
  undefined4 *local_8;
  
  this_00 = this_ + 0xc;
  if ((*(int *)(this_ + 0xc) != 0) && (iVar5 = FUN_004fd5b0(bea_arg(*(int *)(this_ + 0xc))), iVar5 != 0)) {
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
    iVar5 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
    *(int *)(this_ + 0x1c) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(this_ + 0x18) = 0;
      return *(undefined4 *)this_00;
    }
    uVar6 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00), bea_arg(0));
    *(undefined4 *)(this_ + 0x18) = uVar6;
    return *(undefined4 *)this_00;
  }
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  piVar7 = &DAT_00855090;
  if (*(int *)(*(int *)(this_ + 8) + 0x138) == 1) {
    piVar7 = &DAT_008550b0;
  }
  else if (*(int *)(*(int *)(this_ + 8) + 0x138) == 0) {
    piVar7 = &DAT_008550c0;
  }
  local_8 = (undefined4 *)*piVar7;
  local_c = (int *)0x0;
  local_14 = 0.0;
  local_1c = -999999.0;
  if (local_8 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)*local_8;
  }
  if (piVar7 != (int *)0x0) {
    do {
      iVar5 = *(int *)(this_ + 8);
      fVar3 = bea_fcast<float>(piVar7[7]) - *(float *)(iVar5 + 0x1c);
      fVar1 = bea_fcast<float>(piVar7[8]) - *(float *)(iVar5 + 0x20);
      fVar4 = bea_fcast<float>(piVar7[9]) - *(float *)(iVar5 + 0x24);
      fVar3 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
      if ((piVar7[0xd] & 0x20000000U) == 0) {
        if ((piVar7[0xd] & 0x10U) != 0) goto LAB_00504f6b;
      }
      else {
        piVar7 = (int *)bea_vcall<uint32_t>(piVar7, 0x128);
LAB_00504f6b:
        if ((((piVar7 != (int *)0x0) &&
             (iVar5 = FUN_004fd3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7[0x4e])), iVar5 != 0)) &&
            (iVar5 = FUN_004fb3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7)), iVar5 != 0)) &&
           (iVar5 = *(int *)(*(int *)(this_ + 8) + 0x164),
           fVar8 = bea_fcast<float10>(bea_vcall<float10>(piVar7, 0x16c)),
           bea_fcast<float10>(fVar3) <
           (bea_fcast<float10>(1.0f) - fVar8 * bea_fcast<float10>(0.01f)) * bea_fcast<float10>(*(float *)(iVar5 + 0x158)))) {
          iVar5 = bea_vcall<uint32_t>(piVar7, 0x164);
          if (iVar5 == 0) {
            fVar1 = 0.0;
          }
          else {
            uVar2 = piVar7[0xd];
            if ((uVar2 & 0x20000) == 0) {
              if ((uVar2 & 0x4000) == 0) {
                if ((uVar2 & 0x400) == 0) {
                  if ((uVar2 & 0x40000) == 0) {
                    if ((uVar2 & 0x100) == 0) {
                      if ((uVar2 & 0x8000) == 0) {
                        fVar1 = 0.0;
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
            if (((uVar2 & 0x80000) != 0) &&
               (fVar1 < *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x17c))) {
              fVar1 = *(float *)(*(int *)(*(int *)(this_ + 8) + 0x164) + 0x17c);
            }
          }
          if (fVar1 <= local_1c) {
            if (fVar1 != local_1c) goto LAB_00505172;
          }
          else {
            local_14 = 0.0;
            local_1c = fVar1;
          }
          fVar1 = 1000.0f - fVar3;
          FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7));
          fVar8 = bea_fcast<float10>(FUN_004fb780(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7[7]), bea_arg(piVar7[8]), bea_arg(piVar7[9]), bea_arg(piVar7[10])));
          if (fVar8 <= bea_fcast<float10>(fVar3)) {
            fVar8 = bea_fcast<float10>(FUN_004fb7e0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar7[7]), bea_arg(piVar7[8]), bea_arg(piVar7[9]), bea_arg(piVar7[10])));
            if (bea_fcast<float10>(fVar3) <= fVar8) {
              fVar1 = fVar1 + 1e+06;
            }
            else {
              fVar1 = fVar1 + 10000.0f;
            }
          }
          if (local_14 < fVar1) {
            local_14 = fVar1;
            local_c = piVar7;
          }
        }
      }
LAB_00505172:
      local_8 = (undefined4 *)local_8[1];
      if (local_8 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)*local_8;
      }
    } while (((piVar7 != (int *)0x0)));
    if (local_c != (int *)0x0) {
      FUN_004ffdd0(bea_arg(this_), bea_arg(local_c), bea_arg(0));
      FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
      iVar5 = FUN_004fd5b0(bea_arg(*(undefined4 *)this_00));
      if (iVar5 != 0) {
        iVar5 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00));
        *(int *)(this_ + 0x1c) = iVar5;
        if (iVar5 != 0) {
          uVar6 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)this_00), bea_arg(0));
          *(undefined4 *)(this_ + 0x18) = uVar6;
          *(undefined4 *)(this_ + 0x10) = 0;
          return *(undefined4 *)this_00;
        }
      }
      goto LAB_005051f7;
    }
  }
  FUN_00401000(bea_arg(this_00), bea_arg(0));
LAB_005051f7:
  *(undefined4 *)(this_ + 0x10) = 0;
  return *(undefined4 *)this_00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00504e50, ap_00504e50));

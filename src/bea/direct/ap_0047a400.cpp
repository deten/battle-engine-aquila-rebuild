// auto-ported from 0047a400_vslot11.c (CGillMAI::vslot11, 572 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CGillMAI;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
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

static undefined4 BEA_THISCALL ap_0047a400(CGillMAI * this_)
{
  CGillMAI *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float local_8;
  int *local_4;
  
  iVar5 = *(int *)(this_ + 0xc);
  if (((iVar5 != 0) && ((*(byte *)(iVar5 + 0x2c) & 4) == 0)) &&
     (iVar5 = FUN_004fd5b0(bea_arg(iVar5)), iVar5 != 0)) goto LAB_0047a632;
  piVar6 = &DAT_00855090;
  if (*(int *)(*(int *)(this_ + 8) + 0x138) == 1) {
    piVar6 = &DAT_008550b0;
  }
  else if (*(int *)(*(int *)(this_ + 8) + 0x138) == 0) {
    piVar6 = &DAT_008550c0;
  }
  puVar8 = (undefined4 *)*piVar6;
  local_4 = (int *)0x0;
  local_8 = 0.0;
  if (puVar8 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)*puVar8;
  }
  if (piVar6 == (int *)0x0) {
LAB_0047a61f:
    FUN_00401000(bea_arg(this_ + 0xc), bea_arg(0));
  }
  else {
    do {
      iVar5 = *(int *)(this_ + 8);
      fVar2 = bea_fcast<float>(piVar6[7]) - *(float *)(iVar5 + 0x1c);
      fVar3 = bea_fcast<float>(piVar6[8]) - *(float *)(iVar5 + 0x20);
      fVar4 = bea_fcast<float>(piVar6[9]) - *(float *)(iVar5 + 0x24);
      fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);   // class 19: the asm's order
      if ((piVar6[0xd] & 0x20000000U) == 0) {
        if ((piVar6[0xd] & 0x10U) != 0) goto LAB_0047a4cb;
      }
      else {
        piVar6 = (int *)bea_vcall<uint32_t>(piVar6, 0x128);
LAB_0047a4cb:
        if (((piVar6 != (int *)0x0) && ((*(byte *)(piVar6 + 0xb) & 4) == 0)) &&
           ((iVar5 = FUN_004fd3d0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[0x4e])), iVar5 != 0 &&
            ((piVar6[0xd] & 0x8100U) != 0)))) {
          fVar3 = 1000.0f - fVar2;
          FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6));
          fVar9 = bea_fcast<float10>(FUN_004fb780(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[7]), bea_arg(piVar6[8]), bea_arg(piVar6[9]), bea_arg(piVar6[10])));
          if (fVar9 <= bea_fcast<float10>(fVar2)) {
            fVar9 = bea_fcast<float10>(FUN_004fb7e0(bea_arg(*(void **)(this_ + 8)), bea_arg(piVar6[7]), bea_arg(piVar6[8]), bea_arg(piVar6[9]), bea_arg(piVar6[10])));
            if (bea_fcast<float10>(fVar2) <= fVar9) {
              fVar3 = fVar3 + 1e+06;
            }
            else {
              fVar3 = fVar3 + 10000.0f;
            }
          }
          if (local_8 < fVar3) {
            local_8 = fVar3;
            local_4 = piVar6;
          }
        }
      }
      puVar8 = (undefined4 *)puVar8[1];
      if (puVar8 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar8;
      }
    } while (((piVar6 != (int *)0x0)));
    if (local_4 == (int *)0x0) goto LAB_0047a61f;
    FUN_004ffdd0(bea_arg(this_), bea_arg(local_4), bea_arg(0));
    pCVar1 = this_ + 0xc;
    FUN_004fb840(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)(this_ + 0xc)));
    iVar5 = FUN_004fd5b0(bea_arg(*(undefined4 *)pCVar1));
    if (iVar5 != 0) {
      iVar5 = FUN_004fb5a0(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)pCVar1));
      *(int *)(this_ + 0x1c) = iVar5;
      if (iVar5 != 0) {
        uVar7 = FUN_004fb500(bea_arg(*(void **)(this_ + 8)), bea_arg(*(undefined4 *)pCVar1), bea_arg(0));
        *(undefined4 *)(this_ + 0x18) = uVar7;
        *(undefined4 *)(this_ + 0x10) = 0;
        return *(undefined4 *)pCVar1;
      }
    }
  }
  *(undefined4 *)(this_ + 0x10) = 0;
LAB_0047a632:
  return *(undefined4 *)(this_ + 0xc);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a400, ap_0047a400));

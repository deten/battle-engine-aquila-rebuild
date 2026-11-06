// auto-ported from 004fb3d0_FUN_004fb3d0.c (FUN_004fb3d0, 300 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdf4 GLOBAL_AT(int, 0x006fbdf4)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
typedef uint (BEA_FASTCALL* FUN_0047ea20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ea20_t> FUN_0047ea20 = {(FUN_0047ea20_t)0x0047ea20};
typedef undefined4 (BEA_THISCALL* FUN_004e4480_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e4480_t> FUN_004e4480 = {(FUN_004e4480_t)0x004e4480};
typedef uint (BEA_THISCALL* FUN_0050a0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050a0b0_t> FUN_0050a0b0 = {(FUN_0050a0b0_t)0x0050a0b0};

static undefined4 BEA_THISCALL ap_004fb3d0(void * this_, int *param_1)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 uStack_8;
  
  if ((param_1 != (int *)0x0) && (iVar6 = bea_vcall<uint32_t>(param_1, 0x1b0), iVar6 != 0)) {
    puVar1 = *(undefined4 **)((int)this_ + 0x18c);
    if (puVar1 == (undefined4 *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)*puVar1;
    }
    while (((pvVar7 != (void *)0x0))) {
      iVar6 = FUN_004e4480(bea_arg(pvVar7), bea_arg(param_1));
      if (iVar6 != 0) {
        return 1;
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)*puVar1;
      }
    }
    piVar8 = *(int **)((int)this_ + 0x17c);
    if (piVar8 == (int *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)*piVar8;
    }
    if (pvVar7 != (void *)0x0) {
      while (((iVar6 = FUN_0050a0b0(bea_arg(pvVar7), bea_arg(param_1)), fVar3 = bea_fcast<float>(DAT_006fbdf4), iVar6 == 0))) {
        piVar8 = (int *)piVar8[1];
        if (piVar8 == (int *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = (void *)*piVar8;
        }
        if (pvVar7 == (void *)0x0) {
          return 0;
        }
      }
      uStack_8 = (undefined4)(longlong)ROUND(bea_fcast<float>(param_1[8]));
      uVar4 = uStack_8;
      uStack_8 = (undefined4)(longlong)ROUND(bea_fcast<float>(param_1[7]));
      sVar5 = FUN_0047ea20(bea_arg(&DAT_006fadc8), bea_arg(uStack_8), bea_arg(uVar4));
      fVar2 = (float)(int)sVar5 * fVar3;
      if (DAT_006fbdfc < (float)(int)sVar5 * fVar3) {
        fVar2 = DAT_006fbdfc;
      }
      if ((*(float *)(*(int *)((int)pvVar7 + 0xa0) + 0x6c) <= fVar2 - bea_fcast<float>(param_1[9])) &&
         (fVar2 - bea_fcast<float>(param_1[9]) <= *(float *)(*(int *)((int)pvVar7 + 0xa0) + 0x70))) {
        return 1;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fb3d0, ap_004fb3d0));

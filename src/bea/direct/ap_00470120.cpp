// auto-ported from 00470120_FUN_00470120.c (FUN_00470120, 773 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_0085530c GLOBAL_AT(int, 0x0085530c)
#define DAT_00855110 GLOBAL_AT(undefined4*, 0x00855110)
#define DAT_00855100 GLOBAL_AT(undefined4*, 0x00855100)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef uint32_t (BEA_THISCALL* FUN_0046f360_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f360_t> FUN_0046f360 = {(FUN_0046f360_t)0x0046f360};
typedef uint32_t (BEA_THISCALL* FUN_0046f430_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0046f430_t> FUN_0046f430 = {(FUN_0046f430_t)0x0046f430};
typedef uint32_t (BEA_THISCALL* FUN_004d28c0_t)(uint32_t);
static const bea_guard<FUN_004d28c0_t> FUN_004d28c0 = {(FUN_004d28c0_t)0x004d28c0};
typedef undefined4 (BEA_THISCALL* FUN_004d3080_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d3080_t> FUN_004d3080 = {(FUN_004d3080_t)0x004d3080};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef int * (BEA_THISCALL* FUN_004e47e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e47e0_t> FUN_004e47e0 = {(FUN_004e47e0_t)0x004e47e0};
typedef undefined4 (BEA_THISCALL* FUN_004e49f0_t)(uint32_t);
static const bea_guard<FUN_004e49f0_t> FUN_004e49f0 = {(FUN_004e49f0_t)0x004e49f0};
typedef int (BEA_THISCALL* FUN_004eaf20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004eaf20_t> FUN_004eaf20 = {(FUN_004eaf20_t)0x004eaf20};
typedef undefined4 (BEA_THISCALL* FUN_004eb130_t)(uint32_t);
static const bea_guard<FUN_004eb130_t> FUN_004eb130 = {(FUN_004eb130_t)0x004eb130};
typedef uint32_t (BEA_THISCALL* FUN_00546b10_t)(uint32_t);
static const bea_guard<FUN_00546b10_t> FUN_00546b10 = {(FUN_00546b10_t)0x00546b10};

static void BEA_THISCALL ap_00470120(void * this_, int param_1)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int local_8;
  
  FUN_00546b10(bea_arg(DAT_0089c9b0));
  if (DAT_0085530c == 1) {
    if (param_1 == 0) {
      if (*(int *)((int)this_ + 0x290) == 0) {
        FUN_0046f430(bea_arg(this_), bea_arg(0x3f3a570), bea_arg(1));
        return;
      }
      goto LAB_004701ed;
    }
    if (param_1 != 1) goto LAB_004701e5;
    if (*(int *)((int)this_ + 0x294) == 0) {
      FUN_0046f430(bea_arg(this_), bea_arg(0x3fd8951), bea_arg(1));
      return;
    }
LAB_00470205:
    if (0 < *(int *)((int)this_ + 0x294)) {
      *(int *)((int)this_ + 0x294) = *(int *)((int)this_ + 0x294) + -1;
    }
  }
  else {
    if (DAT_0085530c == 2) {
      if (param_1 == 0) {
        if (*(int *)((int)this_ + 0x290) == 0) {
          FUN_0046f360(bea_arg(this_), bea_arg(2));
          return;
        }
        goto LAB_004701ed;
      }
      if (param_1 == 1) {
        if (*(int *)((int)this_ + 0x294) == 0) {
          FUN_0046f360(bea_arg(this_), bea_arg(1));
          return;
        }
        goto LAB_00470205;
      }
    }
LAB_004701e5:
    if (param_1 == 0) {
LAB_004701ed:
      if (0 < *(int *)((int)this_ + 0x290)) {
        *(int *)((int)this_ + 0x290) = *(int *)((int)this_ + 0x290) + -1;
      }
    }
    else if (param_1 == 1) goto LAB_00470205;
  }
  iVar6 = 0;
  if (DAT_00855110 == (int *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)*DAT_00855110;
  }
  if (pvVar5 != (void *)0x0) {
    iVar3 = param_1 + 1;
    piVar4 = DAT_00855110;
    do {
      if ((*(int *)((int)pvVar5 + 0x7c) == iVar3) && (iVar1 = FUN_004e49f0(bea_arg(pvVar5)), iVar1 != 0)) {
        iVar6 = iVar6 + 1;
      }
      piVar4 = (int *)piVar4[1];
      if (piVar4 == (int *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)*piVar4;
      }
    } while (BEA_LOOP_GUARD((pvVar5 != (void *)0x0)));
    if (iVar6 != 0) {
      uVar2 = FUN_004de8d0(bea_arg(*(void **)((int)this_ + 0x304)));
      uVar2 = uVar2 & 0x8000ffff;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
      }
      iVar3 = 1;
      local_8 = (int)(longlong)ROUND((float)(int)uVar2 * (float)(iVar6 + -1) * -1.5258789e-05f);
      piVar4 = DAT_00855110;
      if (DAT_00855110 == (int *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)*DAT_00855110;
      }
      while (BEA_LOOP_GUARD((pvVar5 != (void *)0x0))) {
        if ((*(int *)((int)pvVar5 + 0x7c) == param_1 + 1) &&
           (iVar6 = FUN_004e49f0(bea_arg(pvVar5)), iVar6 != 0)) {
          if ((iVar3 == 1 - local_8) &&
             (iVar1 = FUN_004e47e0(bea_arg(pvVar5), bea_arg(1)), iVar6 = param_1, iVar1 != 0)) {
            FUN_004d3080(bea_arg(*(void **)((int)this_ + param_1 * 4 + 0x2a4)), bea_arg(iVar1));
            FUN_004d28c0(bea_arg(*(void **)((int)this_ + iVar6 * 4 + 0x2a4)));
            return;
          }
          iVar3 = iVar3 + 1;
        }
        piVar4 = (int *)piVar4[1];
        if (piVar4 == (int *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = (void *)*piVar4;
        }
      }
      goto LAB_004702f9;
    }
  }
  if (DAT_00855100 == (int *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)*DAT_00855100;
  }
  if (pvVar5 != (void *)0x0) {
    iVar6 = param_1 + 1;
    piVar4 = DAT_00855100;
    do {
      if (((*(int *)((int)pvVar5 + 0x80) == iVar6) && (iVar3 = FUN_004eb130(bea_arg(pvVar5)), iVar3 != 0)) &&
         (iVar1 = FUN_004eaf20(bea_arg(pvVar5), bea_arg(1)), iVar3 = param_1, iVar1 != 0)) {
        FUN_004d3080(bea_arg(*(void **)((int)this_ + param_1 * 4 + 0x2a4)), bea_arg(iVar1));
        FUN_004d28c0(bea_arg(*(void **)((int)this_ + iVar3 * 4 + 0x2a4)));
        return;
      }
      piVar4 = (int *)piVar4[1];
      if (piVar4 == (int *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)*piVar4;
      }
    } while (BEA_LOOP_GUARD((pvVar5 != (void *)0x0)));
  }
LAB_004702f9:
  if (param_1 == 0) {
    *(int *)((int)this_ + 0x290) = *(int *)((int)this_ + 0x290) + 1;
    param_1 = 0x3f800000;
    FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&param_1), bea_arg(0x7d3), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
    return;
  }
  if (param_1 == 1) {
    *(int *)((int)this_ + 0x294) = *(int *)((int)this_ + 0x294) + 1;
    param_1 = 0x3f800000;
    FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&param_1), bea_arg(0x7d4), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00470120, ap_00470120));

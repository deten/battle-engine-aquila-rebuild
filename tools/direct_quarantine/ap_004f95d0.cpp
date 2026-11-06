// auto-ported from 004f95d0_vslot2.c (CUnit::vslot2, 580 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CUnit;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008550d0 GLOBAL_AT(int, 0x008550d0)
#define DAT_008551c0 GLOBAL_AT(int, 0x008551c0)
#define DAT_00855228 GLOBAL_AT(int, 0x00855228)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00444000_t)(uint32_t);
static const bea_guard<FUN_00444000_t> FUN_00444000 = {(FUN_00444000_t)0x00444000};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e1130_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1130_t> FUN_004e1130 = {(FUN_004e1130_t)0x004e1130};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004f95d0(CUnit * this_)
{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  FUN_004e1130(bea_arg(&DAT_00896988), bea_arg(this_));
  *(undefined4 *)(this_ + 0x140) = 0;
  while (BEA_LOOP_GUARD(((piVar1 = *(int **)(this_ + 0x17c), piVar1 != (int *)0x0 &&
         (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_ + 0x17c), bea_arg(piVar1));
    bea_vcall<uint32_t>(piVar1, 0x4, 1);
  }
  FUN_00401000(bea_arg(this_ + 0x144), bea_arg(0));
  while (BEA_LOOP_GUARD(((piVar1 = *(int **)(this_ + 0x18c), piVar1 != (int *)0x0 &&
         (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_ + 0x18c), bea_arg(piVar1));
    bea_vcall<uint32_t>(piVar1, 0x4, 1);
  }
  while (BEA_LOOP_GUARD(((puVar2 = *(undefined4 **)(this_ + 0x19c), puVar2 != (undefined4 *)0x0 &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0))))) {
    piVar3 = (int *)*piVar1;
    if (piVar3 != (int *)0x0) {
      if (((byte)this_[0x2c] & 4) == 0) {
        bea_vcall<uint32_t>(piVar3, 0x8);
      }
      else {
        bea_vcall<uint32_t>(piVar3, 0xc8);
      }
    }
    FUN_004e5bd0(bea_arg(this_ + 0x19c), bea_arg(piVar1));
    FUN_0044b1d0(bea_arg(piVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar1));
  }
  if (*(void **)(this_ + 0x1ac) != (void *)0x0) {
    FUN_004cb0b0(bea_arg(*(void **)(this_ + 0x1ac)), bea_arg(0));
    pvVar4 = *(void **)(this_ + 0x1ac);
    if (pvVar4 != (void *)0x0) {
      FUN_004cb050(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
    *(undefined4 *)(this_ + 0x1ac) = 0;
  }
  while (BEA_LOOP_GUARD(((puVar2 = *(undefined4 **)(this_ + 0x1d4), puVar2 != (undefined4 *)0x0 &&
         (pvVar4 = (void *)*puVar2, pvVar4 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_ + 0x1d4), bea_arg(pvVar4));
    FUN_004cb0b0(bea_arg(pvVar4), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
  }
  while (BEA_LOOP_GUARD(((puVar2 = *(undefined4 **)(this_ + 0x1b4), puVar2 != (undefined4 *)0x0 &&
         (pvVar4 = (void *)*puVar2, pvVar4 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_ + 0x1b4), bea_arg(pvVar4));
    FUN_004cb0b0(bea_arg(pvVar4), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
  }
  while (BEA_LOOP_GUARD(((puVar2 = *(undefined4 **)(this_ + 0x1c4), puVar2 != (undefined4 *)0x0 &&
         (pvVar4 = (void *)*puVar2, pvVar4 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_ + 0x1c4), bea_arg(pvVar4));
    FUN_004cb0b0(bea_arg(pvVar4), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
  }
  FUN_004e5bd0(bea_arg(&DAT_008550d0), bea_arg(this_));
  pvVar4 = *(void **)(this_ + 0x178);
  if (pvVar4 != (void *)0x0) {
    FUN_00444000(bea_arg(pvVar4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    *(undefined4 *)(this_ + 0x178) = 0;
  }
  if (*(int **)(this_ + 0x208) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x208), 0x4, 1);
    *(undefined4 *)(this_ + 0x208) = 0;
  }
  iVar5 = *(int *)(this_ + 0x164);
  if ((iVar5 != 0) && ((*(ushort *)(this_ + 0x2c) & 0x100) == 0)) {
    if (*(int *)(this_ + 0x138) == 0) {
      *(int *)(&DAT_008551c0 + *(int *)(iVar5 + 0xe0) * 4) =
           *(int *)(&DAT_008551c0 + *(int *)(iVar5 + 0xe0) * 4) + -1;
    }
    else {
      if (*(int *)(this_ + 0x138) != 1) goto LAB_004f97f3;
      *(int *)(&DAT_00855228 + *(int *)(iVar5 + 0xe0) * 4) =
           *(int *)(&DAT_00855228 + *(int *)(iVar5 + 0xe0) * 4) + -1;
    }
    *(ushort *)(this_ + 0x2c) = *(ushort *)(this_ + 0x2c) | 0x100;
  }
LAB_004f97f3:
  FUN_004e5bd0(bea_arg(&DAT_008550c0), bea_arg(this_));
  FUN_004e5bd0(bea_arg(&DAT_008550b0), bea_arg(this_));
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f95d0, ap_004f95d0));

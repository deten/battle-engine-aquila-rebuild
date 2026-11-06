// auto-ported from 00413cf0_FUN_00413cf0.c (FUN_00413cf0, 439 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0040f110_t)(uint32_t);
static const bea_guard<FUN_0040f110_t> FUN_0040f110 = {(FUN_0040f110_t)0x0040f110};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};
typedef uint32_t (BEA_THISCALL* FUN_005068f0_t)(uint32_t);
static const bea_guard<FUN_005068f0_t> FUN_005068f0 = {(FUN_005068f0_t)0x005068f0};
typedef undefined4 (BEA_THISCALL* FUN_0050a080_t)(uint32_t);
static const bea_guard<FUN_0050a080_t> FUN_0050a080 = {(FUN_0050a080_t)0x0050a080};

static void BEA_THISCALL ap_00413cf0(void * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int local_8;
  
  pvVar2 = (void *)FUN_00414030(bea_arg(this_));
  if (((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x9c) != 0)) &&
     (iVar3 = FUN_0050a080(bea_arg(pvVar2)), iVar3 != 0)) {
    iVar3 = *(int *)((int)pvVar2 + 0xa4);
    iVar4 = 1;
    piVar7 = (int *)(iVar3 + 0x10);
    piVar6 = piVar7;
    do {
      if (*piVar6 != -1) {
        iVar4 = *(int *)(iVar3 + 0x24);
        iVar1 = *(int *)((int)this_ + 0x20);
        if ((*(int *)(iVar1 + 0x55c + iVar4 * 4) == 0) &&
           (*(float *)(iVar1 + 0x52c + iVar4 * 4) <= 0.0f)) {
          return;
        }
        local_8 = 0;
        iVar5 = 0;
        piVar6 = (int *)(iVar3 + 0xc);
        do {
          if (*piVar6 != -1) {
            local_8 = iVar5;
          }
          iVar5 = iVar5 + 100;
          piVar6 = piVar6 + 1;
        } while (BEA_LOOP_GUARD((iVar5 < 500)));
        iVar5 = 1;
        while (BEA_LOOP_GUARD((*piVar7 == -1))) {
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 1;
          if (4 < iVar5) {
            return;
          }
        }
        if ((float)local_8 <= *(float *)((int)pvVar2 + 0x60)) {
          return;
        }
        if (*(int *)(iVar1 + 0x544 + iVar4 * 4) != 0) {
          return;
        }
        *(uint *)(iVar1 + 0x588) = (uint)(*(int *)(iVar3 + 0x2c) == 0);
        FUN_005068f0(bea_arg(pvVar2));
        iVar3 = *(int *)((int)this_ + 0x20);
        *(undefined4 *)((int)this_ + 0x14) = 0;
        if (*(int *)(iVar3 + 0x55c + iVar4 * 4) == 0) {
          return;
        }
        if ((*(float *)(iVar3 + 0x52c + iVar4 * 4) <
             *(float *)(*(int *)(iVar3 + 0x4b0) + 0x88 + iVar4 * 4)) &&
           (*(int *)(iVar3 + 0x544 + iVar4 * 4) == 0)) {
          *(float *)(iVar3 + 0x52c + iVar4 * 4) =
               *(float *)(*(int *)((int)pvVar2 + 0xa4) + 0x20) +
               *(float *)(iVar3 + 0x52c + iVar4 * 4);
          return;
        }
        *(undefined4 *)(iVar3 + 0x544 + iVar4 * 4) = 1;
        FUN_0040f110(bea_arg(*(void **)((int)this_ + 0x20)));
        *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x588) = 0;
        pvVar2 = (void *)FUN_00414030(bea_arg(this_));
        if (pvVar2 == (void *)0x0) {
          return;
        }
        if (*(int *)((int)pvVar2 + 0x9c) == 0) {
          return;
        }
        FUN_00506010(bea_arg(pvVar2));
        return;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (BEA_LOOP_GUARD((iVar4 < 5)));
    *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x588) = 0;
    pvVar2 = (void *)FUN_00414030(bea_arg(this_));
    if ((pvVar2 != (void *)0x0) && (*(int *)((int)pvVar2 + 0x9c) != 0)) {
      FUN_00506010(bea_arg(pvVar2));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00413cf0, ap_00413cf0));

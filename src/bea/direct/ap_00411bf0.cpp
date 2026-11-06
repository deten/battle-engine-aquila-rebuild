// auto-ported from 00411bf0_FUN_00411bf0.c (FUN_00411bf0, 632 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_0040f110_t)(uint32_t);
static const bea_guard<FUN_0040f110_t> FUN_0040f110 = {(FUN_0040f110_t)0x0040f110};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};
typedef uint32_t (BEA_THISCALL* FUN_005068f0_t)(uint32_t);
static const bea_guard<FUN_005068f0_t> FUN_005068f0 = {(FUN_005068f0_t)0x005068f0};
typedef undefined4 (BEA_THISCALL* FUN_0050a080_t)(uint32_t);
static const bea_guard<FUN_0050a080_t> FUN_0050a080 = {(FUN_0050a080_t)0x0050a080};

static void BEA_THISCALL ap_00411bf0(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_4;
  
  iVar6 = 0;
  piVar8 = *(int **)this_;
  *(int **)((int)this_ + 8) = piVar8;
  if (piVar8 == (int *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*piVar8;
  }
  if (pvVar3 != (void *)0x0) {
    while (BEA_LOOP_GUARD((iVar6 != *(int *)((int)this_ + 0x10)))) {
      iVar6 = iVar6 + 1;
      piVar8 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar8;
      if (piVar8 == (int *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)*piVar8;
      }
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
    if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x9c) != 0)) &&
       (iVar6 = FUN_0050a080(bea_arg(pvVar3)), iVar6 != 0)) {
      iVar6 = *(int *)((int)pvVar3 + 0xa4);
      iVar4 = 1;
      piVar8 = (int *)(iVar6 + 0x10);
      piVar7 = piVar8;
      do {
        if (*piVar7 != -1) {
          iVar4 = *(int *)(iVar6 + 0x24);
          iVar1 = *(int *)((int)this_ + 0x18);
          if ((*(int *)(iVar1 + 0x55c + iVar4 * 4) == 0) &&
             (*(float *)(iVar1 + 0x52c + iVar4 * 4) <= 0.0f)) {
            return;
          }
          local_4 = 0;
          iVar5 = 0;
          piVar7 = (int *)(iVar6 + 0xc);
          do {
            if (*piVar7 != -1) {
              local_4 = iVar5;
            }
            iVar5 = iVar5 + 100;
            piVar7 = piVar7 + 1;
          } while (BEA_LOOP_GUARD((iVar5 < 500)));
          iVar5 = 1;
          while (BEA_LOOP_GUARD((*piVar8 == -1))) {
            iVar5 = iVar5 + 1;
            piVar8 = piVar8 + 1;
            if (4 < iVar5) {
              return;
            }
          }
          if ((float)local_4 <= *(float *)((int)pvVar3 + 0x60)) {
            return;
          }
          if (*(int *)(iVar1 + 0x544 + iVar4 * 4) != 0) {
            return;
          }
          *(uint *)(iVar1 + 0x588) = (uint)(*(int *)(iVar6 + 0x2c) == 0);
          FUN_005068f0(bea_arg(pvVar3));
          iVar6 = *(int *)((int)this_ + 0x18);
          if (*(int *)(iVar6 + 0x55c + iVar4 * 4) == 0) {
            return;
          }
          if ((*(float *)(iVar6 + 0x52c + iVar4 * 4) <
               *(float *)(*(int *)(iVar6 + 0x4b0) + 0x88 + iVar4 * 4)) &&
             (*(int *)(iVar6 + 0x544 + iVar4 * 4) == 0)) {
            *(float *)(iVar6 + 0x52c + iVar4 * 4) =
                 *(float *)(*(int *)((int)pvVar3 + 0xa4) + 0x20) +
                 *(float *)(iVar6 + 0x52c + iVar4 * 4);
            return;
          }
          *(undefined4 *)(iVar6 + 0x544 + iVar4 * 4) = 1;
          FUN_0040f110(bea_arg(*(void **)((int)this_ + 0x18)));
          iVar6 = 0;
          *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x588) = 0;
          pvVar3 = (void *)FUN_00406d20(bea_arg(this_));
          if (pvVar3 == (void *)0x0) {
            return;
          }
          while (BEA_LOOP_GUARD((iVar6 != *(int *)((int)this_ + 0x10)))) {
            iVar6 = iVar6 + 1;
            puVar2 = *(undefined4 **)(*(int *)((int)this_ + 8) + 4);
            *(undefined4 **)((int)this_ + 8) = puVar2;
            if (puVar2 == (undefined4 *)0x0) {
              pvVar3 = (void *)0x0;
            }
            else {
              pvVar3 = (void *)*puVar2;
            }
            if (pvVar3 == (void *)0x0) {
              return;
            }
          }
          if (pvVar3 == (void *)0x0) {
            return;
          }
          if (*(int *)((int)pvVar3 + 0x9c) == 0) {
            return;
          }
          FUN_00506010(bea_arg(pvVar3));
          return;
        }
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < 5)));
      iVar6 = 0;
      *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x588) = 0;
      piVar8 = *(int **)this_;
      *(int **)((int)this_ + 8) = piVar8;
      if (piVar8 == (int *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)*piVar8;
      }
      if (pvVar3 != (void *)0x0) {
        while (BEA_LOOP_GUARD((iVar6 != *(int *)((int)this_ + 0x10)))) {
          iVar6 = iVar6 + 1;
          piVar8 = *(int **)(*(int *)((int)this_ + 8) + 4);
          *(int **)((int)this_ + 8) = piVar8;
          if (piVar8 == (int *)0x0) {
            pvVar3 = (void *)0x0;
          }
          else {
            pvVar3 = (void *)*piVar8;
          }
          if (pvVar3 == (void *)0x0) {
            return;
          }
        }
        if ((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x9c) != 0)) {
          FUN_00506010(bea_arg(pvVar3));
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00411bf0, ap_00411bf0));

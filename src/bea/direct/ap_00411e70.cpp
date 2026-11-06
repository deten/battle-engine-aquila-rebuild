// auto-ported from 00411e70_FUN_00411e70.c (FUN_00411e70, 385 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_00409e80_t)(uint32_t);
static const bea_guard<FUN_00409e80_t> FUN_00409e80 = {(FUN_00409e80_t)0x00409e80};

static void BEA_THISCALL ap_00411e70(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = 0;
  iVar2 = FUN_00406d20(bea_arg(this_));
  if (iVar2 != 0) {
    do {
      if (iVar4 == *(int *)((int)this_ + 0x10)) goto LAB_00411ea4;
      iVar4 = iVar4 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
  }
  iVar2 = 0;
LAB_00411ea4:
  piVar1 = *(int **)this_;
  iVar4 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x34);
  iVar2 = *(int *)((int)this_ + 0x10) + 1;
  local_8 = 0;
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    local_8 = 0;
    while (BEA_LOOP_GUARD((iVar3 != 0))) {
      local_8 = local_8 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) break;
      iVar3 = *piVar1;
    }
  }
  if (iVar2 == *(int *)((int)this_ + 0x10)) {
    return;
  }
  do {
    iVar5 = 0;
    iVar3 = FUN_00406d20(bea_arg(this_));
    while (BEA_LOOP_GUARD((iVar3 != 0))) {
      if (iVar5 == iVar2) {
        if (iVar3 != 0) {
          iVar5 = *(int *)(*(int *)(iVar3 + 0xa4) + 0x24);
          if ((*(int *)(iVar3 + 0x9c) != 0) &&
             ((*(int *)(*(int *)((int)this_ + 0x18) + 0x55c + iVar5 * 4) != 0 ||
              (*(float *)(*(int *)(iVar3 + 0xa4) + 0x20) <=
               *(float *)(*(int *)((int)this_ + 0x18) + 0x52c + iVar5 * 4))))) {
            *(int *)((int)this_ + 0x10) = iVar2;
            iVar2 = 0;
            *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x588) = 0;
            iVar3 = FUN_00406d20(bea_arg(this_));
            goto joined_r0x00411f7d;
          }
        }
        break;
      }
      iVar5 = iVar5 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
    }
    iVar2 = iVar2 + 1;
    if (local_8 <= iVar2) {
      iVar2 = 0;
    }
    if (iVar2 == *(int *)((int)this_ + 0x10)) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
joined_r0x00411f7d:
  if (iVar3 == 0) goto LAB_00411f9d;
  if (iVar2 == *(int *)((int)this_ + 0x10)) {
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x60) = 0;
    }
    goto LAB_00411f9d;
  }
  iVar2 = iVar2 + 1;
  iVar3 = FUN_00406d30(bea_arg(this_));
  goto joined_r0x00411f7d;
LAB_00411f9d:
  piVar1 = *(int **)this_;
  iVar2 = 0;
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if (iVar3 != 0) {
    do {
      if (iVar2 == *(int *)((int)this_ + 0x10)) goto LAB_00411fd3;
      iVar2 = iVar2 + 1;
      piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
      *(int **)((int)this_ + 8) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  iVar3 = 0;
LAB_00411fd3:
  if (iVar4 != *(int *)(*(int *)(iVar3 + 0xa4) + 0x34)) {
    FUN_00409e80(bea_arg(*(void **)((int)this_ + 0x18)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00411e70, ap_00411e70));

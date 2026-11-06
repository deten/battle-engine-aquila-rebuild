// auto-ported from 0044b640_FUN_0044b640.c (FUN_0044b640, 503 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__event_manager_overf_00628dd8 ((char*)0x00628dd8)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00424360_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00424360_t> FUN_00424360 = {(FUN_00424360_t)0x00424360};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void BEA_THISCALL ap_0044b640(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int local_8;
  
  iVar1 = *(int *)((int)this_ + 0x1c);
  iVar8 = *(int *)((int)this_ + 0xc);
  *(undefined4 *)((int)this_ + 0x24) = 0;
  local_8 = 3;
  piVar7 = (int *)(iVar1 * 0x30 + 0x38 + (int)this_);
  do {
    puVar2 = (undefined4 *)piVar7[-2];
    *piVar7 = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)*puVar2;
    }
    while (BEA_LOOP_GUARD((piVar5 != (int *)0x0))) {
      *(undefined2 *)(piVar5 + 2) = 0;
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(*piVar5, 0x0, piVar5);
      }
      *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) + 1;
      puVar2 = *(undefined4 **)(*piVar7 + 4);
      *piVar7 = (int)puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)*puVar2;
      }
    }
    piVar7 = piVar7 + 4;
    local_8 = local_8 + -1;
  } while (BEA_LOOP_GUARD((local_8 != 0)));
  iVar3 = *(int *)((int)this_ + 0x24);
  iVar4 = *(int *)(*(int *)((int)this_ + 0x25b0) + 8);
  while (BEA_LOOP_GUARD(((iVar3 < iVar4 &&
         (piVar7 = *(int **)(**(int **)((int)this_ + 0x25b0) + iVar3 * 4),
         bea_fcast<float>(piVar7[4]) < *(float *)((int)this_ + 8)))))) {
    puVar2 = (undefined4 *)*piVar7;
    *(undefined2 *)(piVar7 + 2) = 0;
    *(int *)((int)this_ + 0x24) = *(int *)((int)this_ + 0x24) + 1;
    if (puVar2 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar2, 0x0, piVar7);
    }
    iVar3 = *(int *)((int)this_ + 0x24);
    *(int *)((int)this_ + 0xc) = *(int *)((int)this_ + 0xc) + 1;
  }
  local_8 = 3;
  piVar7 = (int *)((iVar1 * 3 + 3) * 0x10 + (int)this_);
  do {
    puVar2 = (undefined4 *)*piVar7;
    piVar7[2] = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)*puVar2;
    }
    while (BEA_LOOP_GUARD((pvVar6 != (void *)0x0))) {
      if (*(short *)((int)pvVar6 + 8) == 0) {
        *(undefined4 *)((int)pvVar6 + 0x10) = *(undefined4 *)((int)this_ + 0x28);
        FUN_00401000(bea_arg((void *)((int)pvVar6 + 0xc)), bea_arg(0));
        FUN_00401000(bea_arg(pvVar6), bea_arg(0));
        *(void **)((int)this_ + 0x28) = pvVar6;
      }
      *(int *)((int)this_ + 0x18) = *(int *)((int)this_ + 0x18) + -1;
      puVar2 = *(undefined4 **)(piVar7[2] + 4);
      piVar7[2] = (int)puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)*puVar2;
      }
    }
    FUN_004e5c60(bea_arg(piVar7));
    piVar7 = piVar7 + 4;
    local_8 = local_8 + -1;
  } while (BEA_LOOP_GUARD((local_8 != 0)));
  iVar1 = *(int *)((int)this_ + 0x24);
  if (0 < iVar1) {
    while (BEA_LOOP_GUARD((iVar1 = iVar1 + -1, -1 < iVar1))) {
      pvVar6 = *(void **)(**(int **)((int)this_ + 0x25b0) + iVar1 * 4);
      if (*(short *)((int)pvVar6 + 8) == 0) {
        *(undefined4 *)((int)pvVar6 + 0x10) = *(undefined4 *)((int)this_ + 0x28);
        FUN_00401000(bea_arg((void *)((int)pvVar6 + 0xc)), bea_arg(0));
        FUN_00401000(bea_arg(pvVar6), bea_arg(0));
        *(void **)((int)this_ + 0x28) = pvVar6;
      }
      *(int *)((int)this_ + 0x18) = *(int *)((int)this_ + 0x18) + -1;
    }
    FUN_00424360(bea_arg(*(void **)((int)this_ + 0x25b0)), bea_arg(0), bea_arg(*(int *)((int)this_ + 0x24) + -1));
  }
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(int *)((int)this_ + 0x20) = *(int *)((int)this_ + 0xc) - iVar8;
  if (DAT_00662dd0 == 1) {
    iVar8 = 0;
    iVar1 = *(int *)(*(int *)((int)this_ + 0x25b0) + 8) + -1;
    if (0 < iVar1) {
      do {
        if (*(float *)(*(int *)(**(int **)((int)this_ + 0x25b0) + 4 + iVar8 * 4) + 0x10) <
            *(float *)(*(int *)(**(int **)((int)this_ + 0x25b0) + iVar8 * 4) + 0x10)) {
          FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__event_manager_overf_00628dd8);
        }
        iVar8 = iVar8 + 1;
      } while (BEA_LOOP_GUARD((iVar8 < iVar1)));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b640, ap_0044b640));

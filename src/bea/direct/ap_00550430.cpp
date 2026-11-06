// auto-ported from 00550430_FUN_00550430.c (FUN_00550430, 588 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c ((char*)0x0065211c)
typedef uint32_t (BEA_THISCALL* FUN_0048e360_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048e360_t> FUN_0048e360 = {(FUN_0048e360_t)0x0048e360};
typedef uint32_t (BEA_THISCALL* FUN_0048f1e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048f1e0_t> FUN_0048f1e0 = {(FUN_0048f1e0_t)0x0048f1e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void BEA_THISCALL ap_00550430(void * this_, int param_1, int param_2, int param_3)
{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1c), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c), bea_arg(0x54));
  piVar3 = (int *)0x0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *puVar1 = 3;
    piVar6 = puVar1 + 1;
  }
  *(int **)this_ = piVar6;
  piVar6[1] = param_1;
  piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 * 0x50 + 4), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c), bea_arg(0x11));
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    *piVar2 = param_1;
    FUN_0055dc20(bea_arg(piVar3), bea_arg(0x50), bea_arg(param_1), bea_arg(((void*)0x00550380)), bea_arg(((void*)0x004fff80)));
  }
  iVar8 = 0;
  *piVar6 = (int)piVar3;
  if (0 < piVar6[1]) {
    iVar4 = 0;
    do {
      FUN_0048f1e0(bea_arg((void *)(iVar4 + *piVar6)), bea_arg(2));
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 0x50;
    } while (BEA_LOOP_GUARD((iVar8 < piVar6[1])));
  }
  iVar8 = *(int *)this_;
  *(int *)(iVar8 + 0xc) = param_2;
  piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_2 * 0x50 + 4), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c), bea_arg(0x11));
  if (piVar3 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar3 + 1;
    *piVar3 = param_2;
    FUN_0055dc20(bea_arg(piVar6), bea_arg(0x50), bea_arg(param_2), bea_arg(((void*)0x00550380)), bea_arg(((void*)0x004fff80)));
  }
  iVar4 = 0;
  *(int *)(iVar8 + 8) = (int)piVar6;
  if (0 < *(int *)(iVar8 + 0xc)) {
    iVar5 = 0;
    do {
      FUN_0048f1e0(bea_arg((void *)(iVar5 + *(int *)(iVar8 + 8))), bea_arg(4));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (BEA_LOOP_GUARD((iVar4 < *(int *)(iVar8 + 0xc))));
  }
  iVar8 = *(int *)this_;
  *(int *)(iVar8 + 0x14) = param_3;
  piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_3 * 0x50 + 4), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c), bea_arg(0x11));
  if (piVar3 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar3 + 1;
    *piVar3 = param_3;
    FUN_0055dc20(bea_arg(piVar6), bea_arg(0x50), bea_arg(param_3), bea_arg(((void*)0x00550380)), bea_arg(((void*)0x004fff80)));
  }
  iVar4 = 0;
  *(int *)(iVar8 + 0x10) = (int)piVar6;
  if (0 < *(int *)(iVar8 + 0x14)) {
    iVar5 = 0;
    do {
      FUN_0048f1e0(bea_arg((void *)(*(int *)(iVar8 + 0x10) + iVar5)), bea_arg(8));
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (BEA_LOOP_GUARD((iVar4 < *(int *)(iVar8 + 0x14))));
  }
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x9c4), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXPatchManager_0065211c), bea_arg(0x5b));
  if (puVar1 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = puVar1 + 1;
    *puVar1 = 0x30;
    FUN_0055dc20(bea_arg(puVar7), bea_arg(0x34), bea_arg(0x30), bea_arg(((void*)0x0048e330)), bea_arg(((void*)0x00488290)));
  }
  iVar8 = 0;
  *(undefined4 **)((int)this_ + 4) = puVar7;
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      FUN_0048e360(bea_arg((void *)(*(int *)((int)this_ + 4) + iVar4)), bea_arg(iVar8), bea_arg(iVar5));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x34;
    } while (BEA_LOOP_GUARD((iVar5 < 0x10)));
    iVar8 = iVar8 + 1;
  } while (BEA_LOOP_GUARD((iVar4 < 0x9c0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550430, ap_00550430));

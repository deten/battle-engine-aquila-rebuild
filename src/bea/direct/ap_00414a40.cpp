// auto-ported from 00414a40_FUN_00414a40.c (FUN_00414a40, 232 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00413eb0_t)(uint32_t);
static const bea_guard<FUN_00413eb0_t> FUN_00413eb0 = {(FUN_00413eb0_t)0x00413eb0};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static void BEA_THISCALL ap_00414a40(void * this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  piVar2 = *(int **)this_;
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  while (BEA_LOOP_GUARD((iVar5 != 0))) {
    pbVar6 = (byte *)**(undefined4 **)(iVar5 + 0xa4);
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00414a8b:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00414a90;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00414a8b;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00414a90:
    if (iVar4 == 0) {
      *(undefined4 *)(iVar5 + 0x9c) = 0;
      iVar4 = FUN_00414030(bea_arg(this_));
      if (iVar4 == iVar5) {
        FUN_00413eb0(bea_arg(this_));
      }
    }
    piVar2 = (int *)piVar2[1];
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
  }
  pbVar6 = (byte *)**(undefined4 **)(*(int *)((int)this_ + 0x18) + 0xa4);
  do {
    bVar1 = *param_1;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00414afb:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00414b00;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00414afb;
    param_1 = param_1 + 2;
    pbVar6 = pbVar6 + 2;
  } while (BEA_LOOP_GUARD((bVar1 != 0)));
  iVar5 = 0;
LAB_00414b00:
  if (iVar5 == 0) {
    *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x9c) = 0;
  }
  iVar5 = FUN_00414030(bea_arg(this_));
  if (iVar5 == *(int *)((int)this_ + 0x18)) {
    FUN_00413eb0(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414a40, ap_00414a40));

// auto-ported from 0040dfb0_FUN_0040dfb0.c (FUN_0040dfb0, 505 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_0040dfb0(void * this_)
{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &local_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3d0);
  undefined4 &uStack_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x3c8);
  undefined4 &local_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  uint &local_18 = *reinterpret_cast<uint *>(bea_frame_ + 0x3e0 - 0x18);
  void * &local_14 = *reinterpret_cast<void * *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  pbVar2 = *(byte **)(*(int *)((int)this_ + 0x4b0) + 0x68);
  if (pbVar2 != (byte *)0x0) {
    iVar7 = 0;
    piVar6 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar6;
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      pbVar8 = *(byte **)(iVar5 + 0x30);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0040e011:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0040e016;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0040e011;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_0040e016:
      if (iVar5 == 0) goto LAB_0040e03f;
      iVar7 = iVar7 + 1;
      piVar6 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar6;
      if (piVar6 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar6;
      }
    }
  }
  iVar7 = -1;
LAB_0040e03f:
  piVar6 = (int *)FUN_0050ff10(bea_arg(iVar7));
  FUN_0048dcf0(bea_arg(&local_3d8));
  local_3d8 = ((void*)0x005d8c80);
  local_18 = 0;
  local_c = 0;
  local_4 = 0;
  local_8 = 0;
  pbVar2 = *(byte **)(*(int *)((int)this_ + 0x4b0) + 0x68);
  if (pbVar2 != (byte *)0x0) {
    piVar3 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = *piVar3;
    }
    while (BEA_LOOP_GUARD((local_1c != 0))) {
      pbVar8 = *(byte **)(local_1c + 0x30);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0040e0e7:
          iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0040e0ec;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0040e0e7;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar7 = 0;
LAB_0040e0ec:
      if (iVar7 == 0) goto LAB_0040e111;
      piVar3 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        local_1c = 0;
      }
      else {
        local_1c = *piVar3;
      }
    }
  }
  local_1c = 0;
LAB_0040e111:
  local_338 = *(undefined4 *)((int)this_ + 0x138);
  local_10 = 1;
  local_14 = this_;
  iVar7 = bea_vcall<uint32_t>(this_, 0x10c);
  if (iVar7 == 0) {
    iVar7 = FUN_00401fa0(bea_arg(this_));
    local_18 = -(uint)(iVar7 != 0) & 2;
  }
  else {
    local_18 = 1;
  }
  if (piVar6 != (int *)0x0) {
    uStack_3d4 = *(undefined4 *)((int)this_ + 0x1c);
    uStack_3d0 = *(undefined4 *)((int)this_ + 0x20);
    uStack_3cc = *(undefined4 *)((int)this_ + 0x24);
    uStack_3c8 = *(undefined4 *)((int)this_ + 0x28);
    bea_vcall<uint32_t>(piVar6, 0x24, &local_3d8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040dfb0, ap_0040dfb0));

// auto-ported from 00442b20_vslot8.c (CDestroyableSegment::vslot8, 534 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CDestroyableSegment;
typedef char iStack_34;
typedef uint32_t (BEA_THISCALL* FUN_004429a0_t)(uint32_t);
static const bea_guard<FUN_004429a0_t> FUN_004429a0 = {(FUN_004429a0_t)0x004429a0};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f9a60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f9a60_t> FUN_004f9a60 = {(FUN_004f9a60_t)0x004f9a60};
typedef int (BEA_CDECL* FUN_005115b0_t)(uint32_t);
static const bea_guard<FUN_005115b0_t> FUN_005115b0 = {(FUN_005115b0_t)0x005115b0};

static void BEA_THISCALL ap_00442b20(CDestroyableSegment * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  void *this_00;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  int &iStack_34 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x34);
  int * (&apiStack_1c)[2] = *reinterpret_cast<int * (*)[2]>(bea_frame_ + 0x40 - 0x1c);
  int * &piStack_14 = *reinterpret_cast<int * *>(bea_frame_ + 0x40 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  iVar9 = 0;
  *(undefined4 *)(this_ + 0x38) = 1;
  *(undefined4 *)(this_ + 0xc) = 0;
  **(undefined4 **)(this_ + 0x3c) = 1;
  piVar1 = *(int **)(*(int *)(*(int *)(this_ + 0x3c) + 0x10) + 0x30);
  if ((piVar1 != (int *)0x0) && (iVar6 = bea_vcall<uint32_t>(piVar1, 0x24), iVar6 != 0)) {
    iVar2 = *(int *)(*(int *)(iVar6 + 0x160) + *(int *)(this_ + 8) * 4);
    iVar3 = *(int *)(iVar2 + 0x90);
    if (0 < iVar3) {
      do {
        iVar7 = bea_vcall<uint32_t>(piVar1, 0x4c, *(undefined4 *)(*(int *)(iVar2 + 0x94) + iVar9 * 4));
        if ((iVar7 != -1) &&
           (this_00 = (void *)bea_vcall<uint32_t>(piVar1, 0x5c, iVar7), this_00 != (void *)0x0)) {
          FUN_004cb0b0(bea_arg(this_00), bea_arg(0));
        }
        iVar9 = iVar9 + 1;
      } while (BEA_LOOP_GUARD((iVar9 < iVar3)));
    }
    iVar9 = *(int *)(*(int *)(this_ + 0x3c) + 0x10);
    FUN_004e5840(bea_arg(apiStack_1c));
    piVar1 = *(int **)(iVar9 + 0x18c);
    if (piVar1 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar1;
    }
    while (BEA_LOOP_GUARD((iVar9 != 0))) {
      bVar5 = false;
      iStack_34 = 0;
      if (0 < iVar3) {
        do {
          iVar10 = 0;
          iVar7 = *(int *)(*(int *)(iVar2 + 0x94) + iStack_34 * 4);
          if (0 < *(int *)(iVar6 + 0x1c)) {
            iVar11 = 0;
            do {
              iVar8 = *(int *)(iVar6 + 0x20) + iVar11;
              if ((((!bVar5) && (iVar8 != 0)) && (*(int *)(iVar8 + 0x40) == iVar7)) &&
                 (iVar4 = *(int *)(iVar9 + 1000), iVar8 = FUN_005115b0(bea_arg(iVar8 + 0x4c)), iVar8 == iVar4
                 )) {
                FUN_004e5a80(bea_arg(apiStack_1c), bea_arg(iVar9));
                bVar5 = true;
              }
              iVar10 = iVar10 + 1;
              iVar11 = iVar11 + 0x150;
            } while (BEA_LOOP_GUARD((iVar10 < *(int *)(iVar6 + 0x1c))));
          }
          iStack_34 = iStack_34 + 1;
        } while (BEA_LOOP_GUARD((iStack_34 < iVar3)));
      }
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar1;
      }
    }
    piStack_14 = apiStack_1c[0];
    if (apiStack_1c[0] == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *apiStack_1c[0];
    }
    while (BEA_LOOP_GUARD((iVar9 != 0))) {
      FUN_004f9a60(bea_arg(*(void **)(*(int *)(this_ + 0x3c) + 0x10)), bea_arg(iVar9));
      piStack_14 = (int *)piStack_14[1];
      if (piStack_14 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piStack_14;
      }
    }
    FUN_004429a0(bea_arg(this_));
    FUN_004e5c60(bea_arg(apiStack_1c));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00442b20, ap_00442b20));

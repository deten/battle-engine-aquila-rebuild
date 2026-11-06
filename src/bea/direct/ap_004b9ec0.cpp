// auto-ported from 004b9ec0_vslot3.c (CMessageLog::vslot3, 409 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMessageLog;
#define DAT_008a9d8c GLOBAL_AT(int, 0x008a9d8c)
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined4 (BEA_THISCALL* FUN_004b9a80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b9a80_t> FUN_004b9a80 = {(FUN_004b9a80_t)0x004b9a80};
typedef uint32_t (BEA_THISCALL* FUN_004cdd70_t)(uint32_t);
static const bea_guard<FUN_004cdd70_t> FUN_004cdd70 = {(FUN_004cdd70_t)0x004cdd70};
typedef uint32_t (BEA_THISCALL* FUN_004d0ff0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d0ff0_t> FUN_004d0ff0 = {(FUN_004d0ff0_t)0x004d0ff0};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};

// Hand-fixed 2026-10-27: param_2 is a key code (the asm: sub eax,0x2a / dec /
// sub 3), not a float.  Ghidra typed it float (its stack slot is reused for the
// line-height sum) and compared it with denormal double literals (5.88545e-44 =
// 42 as float bits), which never equal it: every key was ignored, and in a
// level-523 replay the message log opened from the pause menu never closed.
static void BEA_THISCALL ap_004b9ec0(CMessageLog * this_, undefined4 param_1, int key, undefined4 param_3)
{
  float param_2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (key == 0x2a) {
    if (*(int *)(this_ + 0x3c) < 1) {
      return;
    }
    iVar5 = *(int *)(this_ + 0x38);
    iVar2 = *(int *)(this_ + 0x3c) + -1;
    *(int *)(this_ + 0x3c) = iVar2;
    if (iVar2 == iVar5) {
      *(undefined4 *)(this_ + 0x30) = 0;
      FUN_00468770(0);
      return;
    }
    bVar7 = SBORROW4(iVar5,iVar2);
    iVar1 = iVar5 - iVar2;
    bVar6 = iVar5 == iVar2;
    param_2 = 0.0f;
    if (!bVar6) {
      do {
        if (!bVar6 && bVar7 == iVar1 < 0) {
          iVar5 = iVar5 + -1;
        }
        uVar11 = 1;
        uVar10 = 0x437f0000;
        uVar9 = 0x43700000;
        uVar8 = 0x42c80000;
        uVar3 = FUN_004e5c90(bea_arg(this_ + 0x18), bea_arg(iVar5));
        iVar4 = FUN_004b9a80(bea_arg(this_), bea_arg(uVar3), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
        iVar2 = *(int *)(this_ + 0x3c);
        iVar1 = iVar5 - iVar2;
        param_2 = (float)(iVar4 + 8) + param_2;
        if (iVar5 < iVar2) {
          iVar5 = iVar5 + 1;
          iVar1 = iVar5 - iVar2;
        }
        bVar7 = SBORROW4(iVar5,iVar2);
        bVar6 = iVar5 == iVar2;
      } while (BEA_LOOP_GUARD((!bVar6)));
    }
    if (*(int *)(this_ + 0x38) < *(int *)(this_ + 0x3c)) goto LAB_004ba045;
  }
  else {
    if (key != 0x2b) {
      if (key != 0x2e) {
        return;
      }
      *(undefined4 *)(this_ + 0x28) = 0;
      FUN_004d0ff0(bea_arg(DAT_008a9d8c), bea_arg(0));
      FUN_004cdd70(bea_arg(this_));
      FUN_00468770(2);
      return;
    }
    if (*(int *)(this_ + 0x24) + -1 <= *(int *)(this_ + 0x3c)) {
      return;
    }
    if (*(int *)(this_ + 0x34) == 0) {
      return;
    }
    iVar5 = *(int *)(this_ + 0x38);
    iVar2 = *(int *)(this_ + 0x3c) + 1;
    *(int *)(this_ + 0x3c) = iVar2;
    if (iVar2 == iVar5) {
      *(undefined4 *)(this_ + 0x30) = 0;
      FUN_00468770(0);
      return;
    }
    bVar7 = SBORROW4(iVar5,iVar2);
    iVar1 = iVar5 - iVar2;
    bVar6 = iVar5 == iVar2;
    param_2 = 0.0f;
    if (!bVar6) {
      do {
        if (!bVar6 && bVar7 == iVar1 < 0) {
          iVar5 = iVar5 + -1;
        }
        uVar11 = 1;
        uVar10 = 0x437f0000;
        uVar9 = 0x43700000;
        uVar8 = 0x42c80000;
        uVar3 = FUN_004e5c90(bea_arg(this_ + 0x18), bea_arg(iVar5));
        iVar4 = FUN_004b9a80(bea_arg(this_), bea_arg(uVar3), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
        iVar2 = *(int *)(this_ + 0x3c);
        iVar1 = iVar5 - iVar2;
        param_2 = (float)(iVar4 + 8) + param_2;
        if (iVar5 < iVar2) {
          iVar5 = iVar5 + 1;
          iVar1 = iVar5 - iVar2;
        }
        bVar7 = SBORROW4(iVar5,iVar2);
        bVar6 = iVar5 == iVar2;
      } while (BEA_LOOP_GUARD((!bVar6)));
    }
    if (*(int *)(this_ + 0x38) < *(int *)(this_ + 0x3c)) goto LAB_004ba045;
  }
  param_2 = -param_2;
LAB_004ba045:
  *(float *)(this_ + 0x30) = param_2;
  FUN_00468770(0);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b9ec0, ap_004b9ec0));

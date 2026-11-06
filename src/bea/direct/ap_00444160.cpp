// auto-ported from 00444160_FUN_00444160.c (FUN_00444160, 367 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef float10 (BEA_THISCALL* FUN_00442890_t)(uint32_t);
static const bea_guard<FUN_00442890_t> FUN_00442890 = {(FUN_00442890_t)0x00442890};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef undefined4 (BEA_THISCALL* FUN_004e5c30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c30_t> FUN_004e5c30 = {(FUN_004e5c30_t)0x004e5c30};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void BEA_THISCALL ap_00444160(void * this_)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 * (&local_1c)[2] = *reinterpret_cast<undefined4 * (*)[2]>(bea_frame_ + 0x20 - 0x1c);
  undefined4 * &local_14 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  FUN_004e5840(bea_arg(local_1c));
  iVar4 = 0;
  if (0 < *(int *)((int)this_ + 8)) {
    do {
      if (((iVar4 != -1) && (iVar1 = *(int *)(*(int *)((int)this_ + 4) + iVar4 * 4), iVar1 != 0)) &&
         (iVar2 = FUN_004e5c30(bea_arg(local_1c), bea_arg(iVar1)), iVar2 == 0)) {
        FUN_004e5b20(bea_arg(local_1c), bea_arg(iVar1));
      }
      iVar4 = iVar4 + 1;
    } while (BEA_LOOP_GUARD((iVar4 < *(int *)((int)this_ + 8))));
  }
  local_14 = local_1c[0];
  if (local_1c[0] == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)*local_1c[0];
  }
  while (BEA_LOOP_GUARD((piVar5 != (int *)0x0))) {
    iVar4 = bea_vcall<uint32_t>(piVar5, 0x14);
    if (1 < iVar4) {
      uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      uVar3 = uVar3 & 0x80000001;
      bVar6 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar6) {
        bea_vcall<uint32_t>(piVar5, 0xc, 0x47c35000,*(undefined4 *)((int)this_ + 0x10));
      }
    }
    local_14 = (undefined4 *)local_14[1];
    if (local_14 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)*local_14;
    }
  }
  if (*(int *)((int)this_ + 0x2c) == 1) goto LAB_004442ac;
  iVar4 = *(int *)((int)this_ + 8);
  bVar6 = true;
  if (iVar4 < 1) {
LAB_00444258:
    fVar7 = bea_fcast<float10>(1.0f);
  }
  else {
    piVar5 = *(int **)((int)this_ + 4);
    do {
      if ((*piVar5 != 0) && (*(int *)(*piVar5 + 0x1c) == 1)) {
        bVar6 = false;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
    if (bVar6) goto LAB_00444258;
    fVar7 = bea_fcast<float10>(FUN_00442890(bea_arg(*(void **)((int)this_ + 0xc))));
  }
  iVar4 = *(int *)((int)this_ + 8);
  bVar6 = true;
  if (iVar4 < 1) {
LAB_0044428d:
    fVar8 = bea_fcast<float10>(1.0f);
  }
  else {
    piVar5 = *(int **)((int)this_ + 4);
    do {
      if ((*piVar5 != 0) && (*(int *)(*piVar5 + 0x1c) == 1)) {
        bVar6 = false;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
    if (bVar6) goto LAB_0044428d;
    fVar8 = bea_fcast<float10>(*(float *)((int)this_ + 0x18));
  }
  if (fVar7 < fVar8 * bea_fcast<float10>(0.5f)) {
    *(undefined4 *)((int)this_ + 0x2c) = 1;
  }
LAB_004442ac:
  FUN_004e5c60(bea_arg(local_1c));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444160, ap_00444160));

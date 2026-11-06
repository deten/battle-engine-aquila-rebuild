// auto-ported from 004fa8d0_vslot66.c (CUnit::vslot66, 2452 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_ST0_01: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-frame 0xb0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CUnit;
typedef char fStack_94;
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00854d80 GLOBAL_AT(int, 0x00854d80)
#define DAT_00854d84 GLOBAL_AT(int, 0x00854d84)
#define DAT_00854d88 GLOBAL_AT(int, 0x00854d88)
#define DAT_00854d8c GLOBAL_AT(int, 0x00854d8c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_undeploying_006239d8 ((char*)0x006239d8)
typedef uint32_t (BEA_THISCALL* CActor__vslot66_t)(uint32_t);
static const bea_guard<CActor__vslot66_t> CActor__vslot66 = {(CActor__vslot66_t)0x004015e0};
typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef undefined4 * (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004e0a00_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a00_t> FUN_004e0a00 = {(FUN_004e0a00_t)0x004e0a00};
typedef uint32_t (BEA_THISCALL* FUN_004e1190_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1190_t> FUN_004e1190 = {(FUN_004e1190_t)0x004e1190};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 (BEA_THISCALL* FUN_004e3c60_t)(uint32_t);
static const bea_guard<FUN_004e3c60_t> FUN_004e3c60 = {(FUN_004e3c60_t)0x004e3c60};
typedef bool (BEA_THISCALL* FUN_004e4420_t)(uint32_t);
static const bea_guard<FUN_004e4420_t> FUN_004e4420 = {(FUN_004e4420_t)0x004e4420};
typedef uint32_t (BEA_THISCALL* FUN_004f39b0_t)(uint32_t);
static const bea_guard<FUN_004f39b0_t> FUN_004f39b0 = {(FUN_004f39b0_t)0x004f39b0};
typedef uint32_t (BEA_THISCALL* FUN_004fa800_t)(uint32_t);
static const bea_guard<FUN_004fa800_t> FUN_004fa800 = {(FUN_004fa800_t)0x004fa800};

static uint32_t BEA_THISCALL ap_004fa8d0(CUnit * this_)
{
  float fVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar10;
  float10 extraout_ST0_01 = 0;
  float10 fVar11;
  float10 fVar12;
  alignas(16) uint8_t bea_frame_[0xb0] = {};   // the original stack frame (emulate_frame)
  int &iStack_a4 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0xa4);
  int &iStack_9c = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x9c);
  float &fStack_94 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x94);
  undefined4 &uStack_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x8c);
  undefined4 &uStack_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x88);
  undefined4 &uStack_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x84);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x80);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x70);
  undefined1 (&auStack_6c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xb0 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x68);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x64);
  undefined4 (&auStack_5c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xb0 - 0x5c);
  undefined4 (&auStack_2c)[11] = *reinterpret_cast<undefined4 (*)[11]>(bea_frame_ + 0xb0 - 0x2c);
  if ((*(int **)(this_ + 0x208) == (int *)0x0) ||
     ((*(int *)(this_ + 0x214) == 0 && (((byte)this_[0x2c] & 4) == 0)))) {
    bea_vcall<uint32_t>(this_, 0x100);
  }
  else {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x208), 0xc);
  }
  *(undefined4 *)(this_ + 0x248) = 0;
  FUN_004fa800(bea_arg(this_));
  CActor__vslot66(bea_arg((CActor *)this_));
  iVar4 = bea_vcall<uint32_t>(this_, 0x130);
  if (iVar4 != 0) {
    if (((*(float *)(this_ + 0x120) != *(float *)(this_ + 0x114)) ||
        (*(float *)(this_ + 0x124) != *(float *)(this_ + 0x118))) ||
       (*(float *)(this_ + 0x128) != *(float *)(this_ + 0x11c))) {
      bea_vcall<uint32_t>(this_, 0x134, this_ + 0x114,this_ + 0x120,this_ + 300,this_ + 0x3c);
    }
  }
  if (((byte)this_[0x2c] & 4) == 0) {
    fVar1 = *(float *)(this_ + 0x100);
    *(float *)(this_ + 0x100) = *(float *)(this_ + 0x108) + fVar1;
    if (*(float *)(this_ + 0x104) < *(float *)(this_ + 0x108) + fVar1) {
      *(undefined4 *)(this_ + 0x100) = *(undefined4 *)(this_ + 0x104);
    }
  }
  else if (*(int *)(*(int *)(this_ + 0x164) + 0x124) != 0) {
    extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(this_, 0x60));
    iStack_9c = (int)(longlong)ROUND(extraout_ST0);
    if (0 < iStack_9c) {
      do {
        bea_vcall<uint32_t>(this_, 0x17c);
        iStack_9c = iStack_9c + -1;
      } while (BEA_LOOP_GUARD((iStack_9c != 0)));
    }
  }
  if (*(float *)(this_ + 0x174) <= *(float *)(this_ + 0x170) + 0.1f) {
    if (*(float *)(this_ + 0x170) - 0.1f <= *(float *)(this_ + 0x174)) {
      *(undefined4 *)(this_ + 0x170) = *(undefined4 *)(this_ + 0x174);
    }
    else {
      *(float *)(this_ + 0x170) = *(float *)(this_ + 0x170) - 0.1f;
    }
  }
  else {
    *(float *)(this_ + 0x170) = *(float *)(this_ + 0x170) + 0.1f;
  }
  piVar2 = *(int **)(this_ + 0x1c4);
  iStack_a4 = 1;
  if (piVar2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  while (BEA_LOOP_GUARD((iVar4 != 0))) {
    if (*(int *)(iVar4 + 4) != 0) {
      bea_vcall<uint32_t>(this_, 0x160, 0x15,iStack_a4,&uStack_8c,auStack_5c);
      if (*(void **)(iVar4 + 4) != (void *)0x0) {
        FUN_004097a0(bea_arg(*(void **)(iVar4 + 4)), bea_arg(&uStack_8c));
      }
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 != 0) {
        puVar8 = auStack_5c;
        puVar9 = (undefined4 *)(iVar4 + 0x10);
        for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(iVar4 + 0xa0) = 1;
      }
    }
    piVar2 = (int *)piVar2[1];
    iStack_a4 = iStack_a4 + 1;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
  }
  if (((*(int *)(this_ + 0x168) == 1) && (*(int *)(*(int *)(this_ + 0x1ac) + 4) != 0)) &&
     (*(void **)(this_ + 0x140) != (void *)0x0)) {
    FUN_0044a850(bea_arg(*(void **)(this_ + 0x140)), bea_arg(auStack_6c));
    FUN_0044a930(bea_arg(*(void **)(this_ + 0x140)), bea_arg(auStack_2c));
    if (*(void **)(*(int *)(this_ + 0x1ac) + 4) != (void *)0x0) {
      FUN_004097a0(bea_arg(*(void **)(*(int *)(this_ + 0x1ac) + 4)), bea_arg(auStack_6c));
    }
    iVar4 = *(int *)(*(int *)(this_ + 0x1ac) + 4);
    if (iVar4 != 0) {
      puVar8 = auStack_2c;
      puVar9 = (undefined4 *)(iVar4 + 0x10);
      for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(iVar4 + 0xa0) = 1;
    }
  }
  if ((*(int *)(*(int *)(this_ + 0x164) + 0x10c) != 0) &&
     (iVar4 = bea_vcall<uint32_t>(this_, 0x10c), iVar4 != 0)) {
    piVar2 = *(int **)(this_ + 0x1b4);
    iStack_a4 = 1;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      if ((*(int *)(iVar4 + 4) != 0) ||
         (FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0x18)), bea_arg(iVar4), bea_arg(DAT_00854d80), bea_arg(DAT_00854d84), bea_arg(DAT_00854d88), bea_arg(DAT_00854d8c), bea_arg(0), bea_arg(0)),
         *(int *)(iVar4 + 4) != 0)) {
        bea_vcall<uint32_t>(this_, 0x160, 0x16,iStack_a4,&uStack_8c,auStack_5c);
        puVar8 = *(undefined4 **)(iVar4 + 4);
        if (puVar8 != (undefined4 *)0x0) {
          if (puVar8[0x12] == 0x461c4000) {
            puVar8[0x20] = uStack_8c;
            puVar8[0x21] = uStack_88;
            puVar8[0x22] = uStack_84;
            puVar8[0x23] = uStack_80;
            puVar8[0x10] = uStack_8c;
            puVar8[0x11] = uStack_88;
            puVar8[0x12] = uStack_84;
            puVar8[0x13] = uStack_80;
          }
          else {
            puVar8[0x10] = *puVar8;
            puVar8[0x11] = puVar8[1];
            puVar8[0x12] = puVar8[2];
            puVar8[0x13] = puVar8[3];
          }
          FUN_00403650(bea_arg(puVar8), bea_arg(&uStack_8c));
        }
        iVar4 = *(int *)(iVar4 + 4);
        if (iVar4 != 0) {
          puVar8 = auStack_5c;
          puVar9 = (undefined4 *)(iVar4 + 0x10);
          for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          *(undefined4 *)(iVar4 + 0xa0) = 1;
        }
      }
      piVar2 = (int *)piVar2[1];
      iStack_a4 = iStack_a4 + 1;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
    }
  }
  if (((((byte)this_[0x2c] & 4) == 0) && (0.0f <= *(float *)(this_ + 0xf8))) &&
     (*(int *)(this_ + 0x1f0) != 0)) {
    puVar8 = *(undefined4 **)(this_ + 0x18c);
    if (puVar8 == (undefined4 *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)*puVar8;
    }
    while (BEA_LOOP_GUARD((pvVar5 != (void *)0x0))) {
      FUN_004e3c60(bea_arg(pvVar5));
      puVar8 = (undefined4 *)puVar8[1];
      if (puVar8 == (undefined4 *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)*puVar8;
      }
    }
  }
  *(undefined4 *)(this_ + 0xe4) = *(undefined4 *)(this_ + 0xe0);
  *(undefined4 *)(this_ + 0xf0) = *(undefined4 *)(this_ + 0xe8);
  bea_vcall<uint32_t>(this_, 0x60);
  if (((*(int *)(this_ + 0x13c) == 0) || (((byte)this_[0x2c] & 4) != 0)) ||
     (iVar4 = bea_vcall<uint32_t>(this_, 0x1b4), iVar4 == 0)) goto LAB_004fb053;
  fVar10 = bea_fcast<float10>(*(float *)(this_ + 0xe0));
  if (*(int **)(*(int *)(this_ + 0x13c) + 0xc) == (int *)0x0) {
    if (DAT_00672fd0 <= *(float *)(this_ + 0x20c)) goto LAB_004fadfa;
    fVar10 = bea_fcast<float10>(0.0f);
  }
  else {
    bea_vcall<uint32_t>(*(int **)(*(int *)(this_ + 0x13c) + 0xc), 0x168, &fStack_68);
    fStack_74 = *(float *)(this_ + 0x4c) * *(float *)(this_ + 0x1f8) +
                *(float *)(this_ + 0x50) * *(float *)(this_ + 0x1fc) +
                *(float *)(this_ + 0x54) * *(float *)(this_ + 0x200) + *(float *)(this_ + 0x20);
    fpatan(bea_fcast<float10>(fStack_68) -
           (bea_fcast<float10>(*(float *)(this_ + 0x1f8)) * bea_fcast<float10>(*(float *)(this_ + 0x3c)) +
            bea_fcast<float10>(*(float *)(this_ + 0x40)) * bea_fcast<float10>(*(float *)(this_ + 0x1fc)) +
            bea_fcast<float10>(*(float *)(this_ + 0x44)) * bea_fcast<float10>(*(float *)(this_ + 0x200)) +
           bea_fcast<float10>(*(float *)(this_ + 0x1c))),bea_fcast<float10>(fStack_64) - bea_fcast<float10>(fStack_74));
    extraout_ST0_00 = bea_fcast<float10>(bea_vcall<float10>(this_, 0x170));
    fVar10 = bea_fcast<float10>(bea_fcast<float>(extraout_ST0_00)) - extraout_ST0_01;
    *(float *)(this_ + 0x20c) = DAT_00672fd0 + 10.0f;
LAB_004fadfa:
    if (fVar10 <= bea_fcast<float10>(3.1415927f)) {
      if (fVar10 < bea_fcast<float10>(-3.1415927f)) {
        fVar10 = fVar10 + bea_fcast<float10>(6.2831855f);
      }
    }
    else {
      fVar10 = fVar10 - bea_fcast<float10>(6.2831855f);
    }
  }
  iVar4 = *(int *)(this_ + 0x164);
  fVar1 = fStack_94 * *(float *)(iVar4 + 0xdc);
  if (fVar10 <= bea_fcast<float10>(fVar1)) {
    if (fVar10 < bea_fcast<float10>(-fVar1)) {
      fVar10 = bea_fcast<float10>(-fVar1);
    }
  }
  else {
    fVar10 = bea_fcast<float10>(fVar1);
  }
  fVar11 = bea_fcast<float10>(fStack_94) * bea_fcast<float10>(*(float *)(iVar4 + 0xbc));
  fVar3 = *(float *)(this_ + 0xe0);
  fVar1 = bea_fcast<float>(fVar11);
  if ((-1.5707964f <= fVar3) || (fVar10 <= bea_fcast<float10>(1.5707964f))) {
    fVar12 = fVar10;
    if ((1.5707964f < fVar3) && (fVar10 < bea_fcast<float10>(-1.5707964f))) {
      fVar12 = fVar10 + bea_fcast<float10>(6.2831855f);
    }
  }
  else {
    fVar12 = fVar10 - bea_fcast<float10>(6.2831855f);
  }
  if (ABS(bea_fcast<float10>(fVar3) - fVar12) <= fVar11) {
LAB_004faf9f:
    *(float *)(this_ + 0xe0) = bea_fcast<float>(fVar10);
  }
  else {
    if (fVar10 <= bea_fcast<float10>(*(float *)(this_ + 0xe0))) {
      if (bea_fcast<float10>(*(float *)(this_ + 0xe0)) - fVar10 <= bea_fcast<float10>(3.1415927f)) goto LAB_004faf55;
      fVar1 = fVar1 + *(float *)(this_ + 0xe0);
    }
    else if (bea_fcast<float10>(3.1415927f) < fVar10 - bea_fcast<float10>(*(float *)(this_ + 0xe0))) {
LAB_004faf55:
      fVar1 = *(float *)(this_ + 0xe0) - fVar1;
    }
    else {
      fVar1 = fVar1 + *(float *)(this_ + 0xe0);
    }
    *(float *)(this_ + 0xe0) = fVar1;
    if (3.1415927f < *(float *)(this_ + 0xe0)) {
      fVar10 = bea_fcast<float10>(*(float *)(this_ + 0xe0)) - bea_fcast<float10>(6.2831855f);
      goto LAB_004faf9f;
    }
    if (bea_fcast<float10>(*(float *)(this_ + 0xe0)) < bea_fcast<float10>(-3.1415927f)) {
      fVar10 = bea_fcast<float10>(*(float *)(this_ + 0xe0)) + bea_fcast<float10>(6.2831855f);
      goto LAB_004faf9f;
    }
  }
  if (*(float *)(this_ + 0xe0) <= *(float *)(iVar4 + 0xdc)) {
    if (*(float *)(this_ + 0xe0) < -*(float *)(iVar4 + 0xdc)) {
      *(float *)(this_ + 0xe0) = -*(float *)(iVar4 + 0xdc);
    }
  }
  else {
    *(undefined4 *)(this_ + 0xe0) = *(undefined4 *)(iVar4 + 0xdc);
  }
  if (*(int *)(this_ + 0x224) != 0) {
    fVar1 = fStack_94 * *(float *)(iVar4 + 0xbc);
    if (ABS(*(float *)(this_ + 0xe8) - *(float *)(this_ + 0xec)) <= fVar1) {
      *(undefined4 *)(this_ + 0xe8) = *(undefined4 *)(this_ + 0xec);
    }
    else if (*(float *)(this_ + 0xec) <= *(float *)(this_ + 0xe8)) {
      *(float *)(this_ + 0xe8) = *(float *)(this_ + 0xe8) - fVar1;
    }
    else {
      *(float *)(this_ + 0xe8) = fVar1 + *(float *)(this_ + 0xe8);
    }
  }
LAB_004fb053:
  iVar4 = *(int *)(this_ + 0x244);
  if (iVar4 == 1) {
    iVar4 = *(int *)(this_ + 0x208);
    if (iVar4 != 0) {
      fVar1 = *(float *)(this_ + 0x1c) - *(float *)(iVar4 + 8);
      uStack_8c = *(undefined4 *)(iVar4 + 0x10);
      fVar3 = *(float *)(this_ + 0x20) - *(float *)(iVar4 + 0xc);
      uStack_88 = *(undefined4 *)(iVar4 + 0x14);
      if (SQRT(fVar1 * fVar1 + fVar3 * fVar3) < 4.0f) {
        *(undefined4 *)(this_ + 0x244) = 2;
        fStack_70 = *(float *)(this_ + 0x50) * 300.0f;
        uStack_8c = *(undefined4 *)(this_ + 0x24);
        bea_vcall<uint32_t>(this_, 0xf4, *(float *)(this_ + 0x40) * 300.0f + *(float *)(this_ + 0x1c),
                   fStack_70 + *(float *)(this_ + 0x20),uStack_8c,uStack_88,0);
      }
    }
  }
  else if (iVar4 == 2) {
    bea_vcall<uint32_t>(this_, 0x1d0);
  }
  else if (((iVar4 == 4) && (iVar4 = bea_vcall<uint32_t>(this_, 0x144), iVar4 == 0)) &&
          (*(int *)(this_ + 0x244) == 4)) {
    iVar4 = *(int *)this_;
    *(undefined4 *)(this_ + 0x244) = 5;
    uVar6 = 0;
    pvVar5 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_undeploying_006239d8,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar5), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
  }
  if (*(int *)(*(int *)(this_ + 0x164) + 0x38) != 0) {
    puVar8 = *(undefined4 **)(this_ + 0x18c);
    if (puVar8 == (undefined4 *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)*puVar8;
    }
    while (BEA_LOOP_GUARD((pvVar5 != (void *)0x0))) {
      iVar4 = FUN_004e4420(bea_arg(pvVar5));
      if (iVar4 != 0) {
        if (*(int *)(this_ + 0x230) == 0) {
          FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0x38)), bea_arg(this_), bea_arg(0x3f333333), bea_arg(2), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
        }
        *(undefined4 *)(this_ + 0x230) = 1;
        return FUN_004f39b0(bea_arg(this_));
      }
      puVar8 = (undefined4 *)puVar8[1];
      if (puVar8 == (undefined4 *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = (void *)*puVar8;
      }
    }
    if (*(int *)(this_ + 0x230) != 0) {
      uVar6 = FUN_004e0a00(bea_arg(&DAT_00896988), bea_arg(*(int *)(*(int *)(this_ + 0x164) + 0x38) + 0x40), bea_arg(0), bea_arg(0));
      FUN_004e1190(bea_arg(&DAT_00896988), bea_arg(this_), bea_arg(uVar6));
    }
    *(undefined4 *)(this_ + 0x230) = 0;
  }
  return FUN_004f39b0(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fa8d0, ap_004fa8d0));

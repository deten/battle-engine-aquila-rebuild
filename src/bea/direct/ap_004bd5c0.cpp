// auto-ported from 004bd5c0_FUN_004bd5c0.c (FUN_004bd5c0, 1048 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_00855290 GLOBAL_AT(int, 0x00855290)
#define DAT_00855294 GLOBAL_AT(int, 0x00855294)
#define DAT_00855298 GLOBAL_AT(int, 0x00855298)
#define DAT_006fbdf4 GLOBAL_AT(int, 0x006fbdf4)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00809590 GLOBAL_AT(undefined4*, 0x00809590)
#define DAT_00809588 GLOBAL_AT(undefined4*, 0x00809588)
#define DAT_00809598 GLOBAL_AT(int, 0x00809598)
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint (BEA_FASTCALL* FUN_0047ea20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ea20_t> FUN_0047ea20 = {(FUN_0047ea20_t)0x0047ea20};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef uint32_t (BEA_THISCALL* FUN_004bd440_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bd440_t> FUN_004bd440 = {(FUN_004bd440_t)0x004bd440};
typedef uint32_t (BEA_CDECL* FUN_004bd9e0_t)(void *, ...);
static const bea_guard<FUN_004bd9e0_t> FUN_004bd9e0 = {(FUN_004bd9e0_t)0x004bd9e0};
typedef uint32_t (BEA_THISCALL* FUN_004bdf70_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bdf70_t> FUN_004bdf70 = {(FUN_004bdf70_t)0x004bdf70};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_CDECL ap_004bd5c0(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  float fVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  undefined1 (&local_10)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x30 - 0x10);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (0x1ff < param_3) {
    param_3 = 0x1ff;
  }
  iVar12 = param_2;
  fVar2 = DAT_006fbdfc;
  if (0x1ff < param_4) {
    param_4 = 0x1ff;
  }
  for (; ((DAT_006fbdfc = fVar2, iVar12 < param_4)); iVar12 = iVar12 + 1) {
    if (param_1 < param_3) {
      iVar11 = iVar12 >> 1;
      iVar10 = param_1;
      do {
        uVar6 = iVar10 >> 1;
        iVar7 = iVar10 >> 4;
        if ((((-1 < (int)uVar6) && ((int)uVar6 < 0x100)) && (-1 < iVar11)) && (iVar11 < 0x100)) {
          pbVar9 = (byte *)(iVar7 * 0x100 + iVar11 + (int)DAT_00855290);
          uVar8 = uVar6 & 0x80000007;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
          }
          *pbVar9 = *pbVar9 | '\x01' << ((byte)uVar8 & 0x1f);
        }
        if (-1 < (int)uVar6) {
          if ((((int)uVar6 < 0x100) && (-1 < iVar11)) && (iVar11 < 0x100)) {
            pbVar9 = (byte *)(iVar7 * 0x100 + iVar11 + (int)DAT_00855294);
            uVar8 = uVar6 & 0x80000007;
            if ((int)uVar8 < 0) {
              uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
            }
            *pbVar9 = *pbVar9 | '\x01' << ((byte)uVar8 & 0x1f);
          }
          if (((-1 < (int)uVar6) && ((int)uVar6 < 0x100)) && ((-1 < iVar11 && (iVar11 < 0x100)))) {
            pbVar9 = (byte *)((int)DAT_00855298 + iVar7 * 0x100 + iVar11);
            uVar6 = uVar6 & 0x80000007;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
            }
            *pbVar9 = *pbVar9 | '\x01' << ((byte)uVar6 & 0x1f);
          }
        }
        iVar10 = iVar10 + 1;
      } while (((iVar10 < param_3)));
    }
    fVar2 = DAT_006fbdfc;
  }
  for (; ((param_2 < param_4)); param_2 = param_2 + 1) {
    if (param_1 < param_3) {
      iVar12 = param_1;
      do {
        fVar1 = bea_fcast<float>(DAT_006fbdf4);
        local_18 = 0;
        local_20 = (float)iVar12 + 0.5f;
        local_28 = (undefined4)(longlong)ROUND((float)param_2 + 0.5f);
        uVar4 = local_28;
        local_28 = (undefined4)(longlong)ROUND(local_20);
        local_1c = (float)param_2 + 0.5f;
        sVar5 = FUN_0047ea20(bea_arg(&DAT_006fadc8), bea_arg(local_28), bea_arg(uVar4));
        pvVar3 = DAT_00855290;
        if ((float)(int)sVar5 * fVar1 <= fVar2) {
          FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(local_10), bea_arg(&local_20));
          fVar13 = (float10)FUN_004026b0(bea_arg(local_10));
          if (fVar13 <= (float10)0.0f) {
            fVar13 = (float10)0.0f;
          }
          else {
            fVar13 = _CIasin((float10)local_8 / (float10)(float)fVar13);
          }
          pvVar3 = DAT_00855290;
          fVar1 = (float)(fVar13 + (float10)1.5707964f);
          if ((float10)*(float *)((int)DAT_00855290 + 0x2000) < fVar13 + (float10)1.5707964f) {
            FUN_004bdf70(bea_arg(DAT_00855290), bea_arg(iVar12 + -1), bea_arg(param_2), bea_arg(0));
            FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + -1), bea_arg(0));
            FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2), bea_arg(0));
            FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12 + 1), bea_arg(param_2), bea_arg(0));
            FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + 1), bea_arg(0));
          }
          if (*(float *)((int)DAT_00855294 + 0x2000) < fVar1) {
            FUN_004bd440(bea_arg(DAT_00855294), bea_arg(iVar12), bea_arg(param_2));
          }
          if (*(float *)((int)DAT_00855298 + 0x2000) < fVar1) {
            FUN_004bd440(bea_arg(DAT_00855298), bea_arg(iVar12), bea_arg(param_2));
          }
        }
        else {
          iVar10 = iVar12 + 1;
          FUN_004bdf70(bea_arg(DAT_00855290), bea_arg(iVar12 + -1), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + -1), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar10), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + 1), bea_arg(0));
          pvVar3 = DAT_00855294;
          FUN_004bdf70(bea_arg(DAT_00855294), bea_arg(iVar12 + -1), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + -1), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar10), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + 1), bea_arg(0));
          pvVar3 = DAT_00855298;
          FUN_004bdf70(bea_arg(DAT_00855298), bea_arg(iVar12 + -1), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + -1), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar10), bea_arg(param_2), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar3), bea_arg(iVar12), bea_arg(param_2 + 1), bea_arg(0));
        }
        iVar12 = iVar12 + 1;
      } while (((iVar12 < param_3)));
    }
  }
  if (param_5 == 0) {
    DAT_00809590 = DAT_00809588;
    if (DAT_00809588 == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *DAT_00809588;
    }
    while (((iVar12 != 0))) {
      FUN_004bd9e0(iVar12);
      DAT_00809590 = (int *)DAT_00809590[1];
      if (DAT_00809590 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *DAT_00809590;
      }
    }
  }
  DAT_00809598 = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bd5c0, ap_004bd5c0));

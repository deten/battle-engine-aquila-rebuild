// auto-ported from 004bc8d0_FUN_004bc8d0.c (FUN_004bc8d0, 794 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fbdf4 GLOBAL_AT(int, 0x006fbdf4)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00855290 GLOBAL_AT(int, 0x00855290)
#define DAT_00855294 GLOBAL_AT(int, 0x00855294)
#define DAT_00855298 GLOBAL_AT(int, 0x00855298)
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint (BEA_FASTCALL* FUN_0047ea20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ea20_t> FUN_0047ea20 = {(FUN_0047ea20_t)0x0047ea20};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef uint32_t (BEA_THISCALL* FUN_004bdf70_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bdf70_t> FUN_004bdf70 = {(FUN_004bdf70_t)0x004bdf70};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_CDECL ap_004bc8d0(void)
{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  int &local_2c = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x2c);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x18);
  undefined1 (&local_10)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x40 - 0x10);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  fVar3 = DAT_006fbdfc;
  local_2c = 0;
  do {
    iVar9 = 0;
    do {
      fVar2 = bea_fcast<float>(DAT_006fbdf4);
      local_20 = (float)iVar9 + 0.5f;
      local_18 = 0;
      local_34 = (undefined4)(longlong)ROUND((float)local_2c + 0.5f);
      uVar4 = local_34;
      local_34 = (undefined4)(longlong)ROUND(local_20);
      local_1c = (float)local_2c + 0.5f;
      sVar5 = FUN_0047ea20(bea_arg(&DAT_006fadc8), bea_arg(local_34), bea_arg(uVar4));
      pvVar8 = DAT_00855290;
      if ((float)(int)sVar5 * fVar2 <= fVar3) {
        FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(local_10), bea_arg(&local_20));
        fVar10 = (float10)FUN_004026b0(bea_arg(local_10));
        if (fVar10 <= (float10)0.0f) {
          fVar10 = (float10)0.0f;
        }
        else {
          fVar10 = _CIasin((float10)local_8 / (float10)(float)fVar10);
        }
        pvVar8 = DAT_00855290;
        fVar2 = (float)(fVar10 + (float10)1.5707964f);
        if ((float10)*(float *)((int)DAT_00855290 + 0x2000) < fVar10 + (float10)1.5707964f) {
          FUN_004bdf70(bea_arg(DAT_00855290), bea_arg(iVar9 + -1), bea_arg(local_2c), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + -1), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9 + 1), bea_arg(local_2c), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + 1), bea_arg(0));
        }
        pvVar8 = DAT_00855294;
        if (*(float *)((int)DAT_00855294 + 0x2000) < fVar2) {
          FUN_004bdf70(bea_arg(DAT_00855294), bea_arg(iVar9 + -1), bea_arg(local_2c), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + -1), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9 + 1), bea_arg(local_2c), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + 1), bea_arg(0));
        }
        pvVar8 = DAT_00855298;
        if (*(float *)((int)DAT_00855298 + 0x2000) < fVar2) {
          uVar7 = iVar9 + -1 >> 1;
          iVar6 = local_2c >> 1;
          if ((((-1 < (int)uVar7) && ((int)uVar7 < 0x100)) && (-1 < iVar6)) && (iVar6 < 0x100)) {
            uVar7 = uVar7 & 0x80000007;
            pbVar1 = (byte *)((iVar9 + -1 >> 4) * 0x100 + iVar6 + (int)DAT_00855298);
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            *pbVar1 = *pbVar1 & -('\x01' << ((byte)uVar7 & 0x1f)) - 1U;
          }
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + -1), bea_arg(0));
          FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c), bea_arg(0));
          goto LAB_004bcbab;
        }
      }
      else {
        FUN_004bdf70(bea_arg(DAT_00855290), bea_arg(iVar9 + -1), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + -1), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9 + 1), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + 1), bea_arg(0));
        pvVar8 = DAT_00855294;
        FUN_004bdf70(bea_arg(DAT_00855294), bea_arg(iVar9 + -1), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + -1), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9 + 1), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + 1), bea_arg(0));
        pvVar8 = DAT_00855298;
        FUN_004bdf70(bea_arg(DAT_00855298), bea_arg(iVar9 + -1), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + -1), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c), bea_arg(0));
LAB_004bcbab:
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9 + 1), bea_arg(local_2c), bea_arg(0));
        FUN_004bdf70(bea_arg(pvVar8), bea_arg(iVar9), bea_arg(local_2c + 1), bea_arg(0));
      }
      iVar9 = iVar9 + 1;
    } while (((iVar9 < 0x1ff)));
    local_2c = local_2c + 1;
    if (0x1fe < local_2c) {
      return;
    }
  } while((( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc8d0, ap_004bc8d0));

// auto-ported from 00540010_FUN_00540010.c (FUN_00540010, 1581 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 check_fild: packed colour fVar8 = (float)(int bits) -> bea_fcast<float> (original builds it with integer ops into ecx at 0x540405..0x54040d, no x87)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char iStack_10;
typedef char iStack_8;
#define DAT_00897a98 GLOBAL_AT(int, 0x00897a98)
#define _DAT_0089d750 GLOBAL_AT(float, 0x0089d750)
#define _DAT_0089d754 GLOBAL_AT(float, 0x0089d754)
#define DAT_008554fc GLOBAL_AT(int, 0x008554fc)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef undefined1 (BEA_CDECL* FUN_00465f00_t)(void);
static const bea_guard<FUN_00465f00_t> FUN_00465f00 = {(FUN_00465f00_t)0x00465f00};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef int (BEA_THISCALL* FUN_0051a270_t)(uint32_t);
static const bea_guard<FUN_0051a270_t> FUN_0051a270 = {(FUN_0051a270_t)0x0051a270};
typedef ushort (BEA_THISCALL* FUN_0051a380_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0051a380_t> FUN_0051a380 = {(FUN_0051a380_t)0x0051a380};
typedef undefined4 (BEA_THISCALL* FUN_0051a510_t)(uint32_t);
static const bea_guard<FUN_0051a510_t> FUN_0051a510 = {(FUN_0051a510_t)0x0051a510};
typedef uint32_t (BEA_THISCALL* FUN_0053f880_t)(uint32_t);
static const bea_guard<FUN_0053f880_t> FUN_0053f880 = {(FUN_0053f880_t)0x0053f880};
typedef uint32_t (BEA_THISCALL* FUN_0053fb00_t)(uint32_t);
static const bea_guard<FUN_0053fb00_t> FUN_0053fb00 = {(FUN_0053fb00_t)0x0053fb00};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_00540010(void * this_, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, short *param_7, uint param_8, float *param_9)
{
  char cVar1;
  short sVar2;
  int iVar3;
  void *this_00;
  uint uVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float * &local_8c = *reinterpret_cast<float * *>(bea_frame_ + 0x90 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x6c);
  short * &local_68 = *reinterpret_cast<short * *>(bea_frame_ + 0x90 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x58);
  float &fStack_54 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x50);
  undefined4 &uStack_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x3c);
  uint &local_38 = *reinterpret_cast<uint *>(bea_frame_ + 0x90 - 0x38);
  float &fStack_34 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x34);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x2c);
  undefined4 &uStack_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x24);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x14);
  int &iStack_10 = *reinterpret_cast<int *>(bea_frame_ + 0x90 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0xc);
  int &iStack_8 = *reinterpret_cast<int *>(bea_frame_ + 0x90 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4);
  iVar10 = 0;
  psVar6 = param_7;
  if (*param_7 != 0) {
    do {
      psVar7 = psVar6 + 1;
      if ((*psVar6 != 0xd) && (*psVar6 != 10)) {
        iVar10 = iVar10 + 1;
      }
      psVar6 = psVar7;
    } while (BEA_LOOP_GUARD((*psVar7 != 0)));
    if (iVar10 != 0) {
      FUN_0051a270(bea_arg(&DAT_00897a98));
      cVar1 = FUN_00465f00();
      if (cVar1 != '\0') {
        iVar3 = FUN_00515940();
        param_1 = (float)iVar3 * param_1 * 0.0015625f;
        iVar3 = FUN_00515b00();
        param_2 = (float)iVar3 * param_2 * 0.0020833334f;
        iVar3 = FUN_00515940();
        param_4 = (float)iVar3 * param_4 * 0.0015625f;
        iVar3 = FUN_00515b00();
        param_5 = (float)iVar3 * param_5 * 0.0020833334f;
      }
      if (*(int *)((int)this_ + 0x170) == 0) {
        if (*(char *)((int)this_ + 0x15c) == '\0') {
          FUN_0053f880(bea_arg(this_));
        }
        else {
          FUN_0053fb00(bea_arg(this_));
        }
        this_00 = (void *)FUN_00501280(*(undefined4 *)((int)this_ + 0x170),0);
        *(void **)((int)this_ + 0x174) = this_00;
        FUN_00500540(bea_arg(this_00), bea_arg(0x144), bea_arg(0x208), bea_arg(0x1c), bea_arg(4), bea_arg(0));
        FUN_00500590(bea_arg(*(void **)((int)this_ + 0x174)), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
      }
      local_38 = param_8 & 8;
      if (local_38 == 0) {
        FUN_00513bc0(bea_arg(7), bea_arg(0));
      }
      if ((param_8 & 0x10) == 0) {
        fVar12 = (float10)FUN_0055dfe7((double)param_2);
        param_2 = (float)fVar12;
      }
      fVar12 = (float10)FUN_0055dfe7((double)param_1);
      local_68 = *(short **)((int)this_ + 0x164);
      local_88 = (float)fVar12;
      local_24 = (float)fVar12;
      local_64 = 0;
      local_60 = (*(float *)((int)this_ + 0x18c) - *(float *)((int)this_ + 0x184)) *
                 (float)(int)local_68;
      local_80 = param_2;
      if (iVar10 < 0x9c5) {
        sVar2 = FUN_0051a380(bea_arg(&DAT_00897a98), bea_arg(&local_8c), bea_arg(iVar10 * 4));
        if (sVar2 != -1) {
          sVar2 = *param_7;
          while (BEA_LOOP_GUARD((sVar2 != 0))) {
            sVar2 = *param_7;
            iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),sVar2);
            local_68 = param_7 + 1;
            if (sVar2 == 10) {
              local_80 = local_60 * param_5 + local_80;
              local_88 = local_24;
            }
            else if (sVar2 != 0xd) {
              iVar3 = bea_vcall<uint32_t>(this_, 0x0, iVar10);
              fStack_7c = _DAT_0089d750 + *(float *)((iVar3 + 0x18) * 0x10 + (int)this_);
              iVar3 = bea_vcall<uint32_t>(this_, 0x0, iVar10);
              fStack_84 = _DAT_0089d754 + *(float *)(iVar3 * 0x10 + 0x184 + (int)this_);
              iVar3 = bea_vcall<uint32_t>(this_, 0x0, iVar10);
              fStack_74 = *(float *)(iVar3 * 0x10 + 0x188 + (int)this_) - _DAT_0089d750;
              iVar10 = bea_vcall<uint32_t>(this_, 0x0, iVar10);
              iStack_10 = *(int *)((int)this_ + 0x164);
              fStack_78 = *(float *)(iVar10 * 0x10 + 0x18c + (int)this_) - _DAT_0089d754;
              iStack_8 = *(int *)((int)this_ + 0x160);
              uStack_4 = 0;
              uStack_c = 0;
              if (param_9 == (float *)0x0) {
                fVar8 = param_6;
                if (DAT_008554fc == 0) {
                  uVar4 = bea_piece32(param_6) >> 0xf & 0x1fe;
                  uVar11 = bea_piece32(param_6) >> 7 & 0x1fe;
                  uVar9 = (bea_piece32(param_6) & 0xff) * 2;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  if (0xff < uVar11) {
                    uVar11 = 0xff;
                  }
                  if (0xff < uVar9) {
                    uVar9 = 0xff;
                  }
                  iVar10 = uVar4 * 0x100 + uVar11;
                  goto LAB_00540405;
                }
              }
              else {
                fVar8 = *param_9;
                param_9 = param_9 + 1;
                if (DAT_008554fc == 0) {
                  uVar4 = bea_piece32(fVar8) >> 0xf & 0x1fe;
                  uVar11 = bea_piece32(fVar8) >> 7 & 0x1fe;
                  uVar9 = (bea_piece32(fVar8) & 0xff) * 2;
                  if (0xff < uVar4) {
                    uVar4 = 0xff;
                  }
                  if (0xff < uVar11) {
                    uVar11 = 0xff;
                  }
                  if (0xff < uVar9) {
                    uVar9 = 0xff;
                  }
                  iVar10 = uVar4 * 0x100 + uVar11;
LAB_00540405:
                  fVar8 = bea_fcast<float>((bea_piece32(fVar8) & 0xff000000) + uVar9 + iVar10 * 0x100);
                }
              }
              fStack_44 = local_80 - 0.5f;
              fStack_40 = param_3;
              fStack_54 = ((fStack_78 - fStack_84) * (float)iStack_10 * param_5 + local_80) - 0.5f;
              uStack_3c = 0x3f800000;
              local_8c[4] = fVar8;
              uStack_28 = 0x3f800000;
              uStack_14 = 0x3f800000;
              fStack_5c = local_88 - 0.5f;
              local_88 = (fStack_74 - fStack_7c) * (float)iStack_8 * param_4 + local_88;
              fStack_6c = local_88 - 0.5f;
              *local_8c = fStack_5c;
              local_8c[1] = fStack_44;
              local_8c[2] = param_3;
              local_8c[6] = fStack_84;
              local_8c[3] = 1.0;
              local_8c[5] = fStack_7c;
              fStack_2c = param_3;
              local_8c[7] = fStack_6c;
              local_8c[0xb] = fVar8;
              local_8c[8] = fStack_44;
              local_8c[9] = param_3;
              local_8c[10] = 1.0;
              local_8c[0xc] = fStack_74;
              local_8c[0xd] = fStack_84;
              fStack_18 = param_3;
              local_8c[0xe] = fStack_6c;
              local_8c[0x12] = fVar8;
              local_8c[0xf] = fStack_54;
              local_8c[0x10] = param_3;
              local_8c[0x11] = 1.0;
              local_8c[0x13] = fStack_74;
              uStack_4c = 0x3f800000;
              local_8c[0x14] = fStack_78;
              fStack_50 = param_3;
              local_8c[0x19] = fVar8;
              local_8c[0x15] = fStack_5c;
              local_8c[0x1a] = fStack_7c;
              local_8c[0x16] = fStack_54;
              local_8c[0x17] = param_3;
              iVar10 = 0x3f800000;
              local_8c[0x18] = 1.0;
              local_8c[0x1b] = fStack_78;
              if (*(char *)((int)this_ + 0x15c) == '\0') {
                local_88 = local_88 + param_4;
              }
              local_8c = local_8c + 0x1c;
              fStack_70 = fStack_78;
              fStack_58 = fStack_5c;
              fStack_48 = fStack_5c;
              fStack_34 = fStack_6c;
              fStack_30 = fStack_44;
              fStack_20 = fStack_6c;
              fStack_1c = fStack_54;
            }
            param_7 = local_68;
            sVar2 = *local_68;
          }
          uVar5 = FUN_00558690(bea_arg(*(void **)((int)this_ + 0x170)));
          FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar5));
          FUN_0051a510(bea_arg(&DAT_00897a98));
        }
        if (local_38 == 0) {
          FUN_00513bc0(bea_arg(7), bea_arg(1));
        }
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540010, ap_00540010));

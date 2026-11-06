// auto-ported from 00459ee0_vslot5.c (CFEPE3LevelSelect::vslot5, 2365 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPE3LevelSelect;
typedef char _DAT_008a9570;
typedef char pCVar5;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0089d808 GLOBAL_AT(int, 0x0089d808)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d814 GLOBAL_AT(int, 0x0089d814)
#define DAT_0089d818 GLOBAL_AT(int, 0x0089d818)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0089d804 GLOBAL_AT(int, 0x0089d804)
#define DAT_0089d800 GLOBAL_AT(int, 0x0089d800)
#define DAT_0089d810 GLOBAL_AT(int, 0x0089d810)
#define DAT_0089d80c GLOBAL_AT(int, 0x0089d80c)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define s_E3_2002_Build___Beta_work_in_pro_006292b8 ((char*)0x006292b8)
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00452fd0_t)(uint32_t);
static const bea_guard<FUN_00452fd0_t> FUN_00452fd0 = {(FUN_00452fd0_t)0x00452fd0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_STDCALL* FUN_00466de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466de0_t> FUN_00466de0 = {(FUN_00466de0_t)0x00466de0};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef uint32_t (BEA_CDECL* FUN_004681c0_t)(void);
static const bea_guard<FUN_004681c0_t> FUN_004681c0 = {(FUN_004681c0_t)0x004681c0};
typedef uint32_t (BEA_CDECL* FUN_004681e0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004681e0_t> FUN_004681e0 = {(FUN_004681e0_t)0x004681e0};
typedef undefined4 (BEA_CDECL* FUN_00469550_t)(uint32_t);
static const bea_guard<FUN_00469550_t> FUN_00469550 = {(FUN_00469550_t)0x00469550};
typedef undefined4 (BEA_CDECL* FUN_00469c20_t)(uint32_t);
static const bea_guard<FUN_00469c20_t> FUN_00469c20 = {(FUN_00469c20_t)0x00469c20};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static uint32_t BEA_THISCALL ap_00459ee0(CFEPE3LevelSelect * this_, float param_1, int param_2)
{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  void *this_00;
  uint uVar4;
  CFEPE3LevelSelect *pCVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x60);
  CFEPE3LevelSelect * &local_5c = *reinterpret_cast<CFEPE3LevelSelect * *>(bea_frame_ + 0x60 - 0x5c);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  int &local_48 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x48);
  CFEPE3LevelSelect * &local_44 = *reinterpret_cast<CFEPE3LevelSelect * *>(bea_frame_ + 0x60 - 0x44);
  int &local_40 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x40);
  CFEPE3LevelSelect * &local_3c = *reinterpret_cast<CFEPE3LevelSelect * *>(bea_frame_ + 0x60 - 0x3c);
  int &local_38 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x38);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x30);
  CFEPE3LevelSelect * &local_2c = *reinterpret_cast<CFEPE3LevelSelect * *>(bea_frame_ + 0x60 - 0x2c);
  CFEPE3LevelSelect * &local_28 = *reinterpret_cast<CFEPE3LevelSelect * *>(bea_frame_ + 0x60 - 0x28);
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x20);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x10);
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x60 - 0x8);
  if ((param_2 == 5) || (param_2 == 6)) {
    local_50 = 1.0f;
  }
  else {
    local_50 = (param_1 - 0.75f) * 4.0f;
    if (0.0f <= local_50) {
      if (1.0f < local_50) {
        local_50 = 1.0f;
      }
    }
    else {
      local_50 = 0.0f;
    }
  }
  FUN_00452fd0(bea_arg(local_50));
  FUN_004681c0();
  iVar1 = *(int *)(this_ + 0x345c);
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (BEA_LOOP_GUARD((iVar1 != 0)));
  }
  FUN_004681e0(0,0);
  local_60 = 148.0f - *(float *)(this_ + 0x3460);
  local_50 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= local_50) {
    fVar13 = local_50;
    if (1.0f < local_50) {
      fVar13 = 1.0f;
    }
  }
  else {
    fVar13 = 0.0f;
  }
  local_48 = 0;
  local_10 = (int)(longlong)ROUND(fVar13 * 255.0f);
  iVar1 = local_10;
  if (0 < *(int *)(this_ + 0x345c)) {
    local_28 = this_ + 0xee0;
    local_2c = this_ + 0x57c;
    local_30 = 0;
    local_44 = this_;
    do {
      local_44 = local_44 + 4;
      local_40 = 0;
      local_54 = (float)(*(int *)local_44 + -1) * 60.0f * 0.5f + 300.0f;
      if (0 < *(int *)local_44) {
        local_38 = 0;
        local_3c = local_28;
        uVar2 = iVar1 * 0xff0000;
        local_5c = local_2c;
        do {
          FUN_00513bc0(bea_arg(0x13), bea_arg(1));
          FUN_00513bc0(bea_arg(0x14), bea_arg(2));
          FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
          FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
          FUN_005563d0(local_60,local_54,0x3e1eb852,DAT_0089d808,uVar2 | 0xffffff,0x3f800000,
                       0x3f800000,4,0,0x3f800000);
          FUN_00513bc0(bea_arg(0x13), bea_arg(5));
          FUN_00513bc0(bea_arg(0x14), bea_arg(6));
          FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
          FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
          fVar13 = _DAT_008a9570 * 0.02f + ((float)local_38 + (float)local_30) * 0.114f;
          FUN_005563d0(local_60,local_54,0x3e23d70b,DAT_0089d814,uVar2 | 0xffffff,0x3f800000,
                       0x3f800000,4,4,fVar13);
          if (0.0f < *(float *)local_5c) {
            fVar8 = *(float *)local_5c + *(float *)local_5c;
            if (0.0f <= fVar8) {
              if (1.0f < fVar8) {
                fVar8 = 1.0f;
              }
            }
            else {
              fVar8 = 0.0f;
            }
            local_10 = (int)(longlong)ROUND(fVar8 * 255.0f);
            FUN_005563d0(local_60,local_54,0x3e23d70b,DAT_0089d818,
                         ((local_10 * iVar1) / 0xff) * 0xff0000 | 0xffffff,0x3f800000,0x3f800000,4,4
                         ,fVar13);
          }
          DAT_009c68ac = 0;
          DAT_009c690d = 1;
          if ((((param_1 == 1.0f) || (*(int *)(this_ + 0x3468) != local_48)) ||
              (*(int *)(this_ + 0x346c) != local_40)) || ((param_2 != 5 && (param_2 != 6)))) {
            if (0 < iVar1) {
              uVar4 = ~uVar2 & 0xffffff ^ uVar2;
              fVar13 = *(float *)local_5c * 0.25f + 1.0f;
              FUN_005563d0(local_60,local_54,0x3e19999a,DAT_0089d804,uVar4,0x3f800000,0x3f800000,4,0
                           ,0x3f800000);
              FUN_005563d0(local_60,local_54,0x3e19999a,DAT_0089d800,uVar4,fVar13,fVar13,4,0,
                           0x3f800000);
            }
          }
          else if (0.0f < param_1) {
            fVar13 = 1.0f - param_1;
            fVar7 = fVar13 * 1.5f + 0.1f;
            fVar8 = (285.0f - local_60) * fVar13 + local_60;
            fVar13 = (225.0f - local_54) * fVar13 + local_54;
            FUN_005563d0(fVar8,fVar13,0x3e19999a,DAT_0089d810,0xffffffff,fVar7,fVar7,4,0,0x3f800000)
            ;
            FUN_005563d0(fVar8,fVar13,0x3e19999a,DAT_0089d80c,0xffffffff,fVar7 * 1.75f,fVar7 * 1.75f,4
                         ,0,0x3f800000);
          }
          local_20 = 0;
          pCVar5 = local_3c;
          if (0 < (int)*(float *)(local_5c + 0x4b0)) {
            do {
              if (0 < iVar1) {
                FUN_00466de0(bea_arg(local_60), bea_arg(local_54), bea_arg((float)(*(int *)(pCVar5 + -4) - local_48) * 100.0f + local_60), bea_arg(((float)(*(int *)(this_ + *(int *)(pCVar5 + -4) * 4 + 4) + -1) * 60.0f *
                              0.5f + 300.0f) - (float)*(int *)pCVar5 * 60.0f), bea_arg((iVar1 * 0xaf & 0xff00U) << 0x10 ^ 0xffffff), bea_arg(0x41200000), bea_arg(0x3e1cac09), bea_arg(0x3ecccccd));
              }
              local_20 = local_20 + 1;
              pCVar5 = pCVar5 + 8;
            } while (BEA_LOOP_GUARD((local_20 < (int)*(float *)(local_5c + 0x4b0))));
          }
          local_54 = local_54 - 60.0f;
          local_5c = local_5c + 4;
          local_40 = local_40 + 1;
          local_3c = local_3c + 0x20;
          local_38 = local_38 + 7;
        } while (BEA_LOOP_GUARD((local_40 < *(int *)local_44)));
      }
      local_60 = local_60 + 100.0f;
      local_30 = local_30 + 0xb;
      local_2c = local_2c + 0x18;
      local_48 = local_48 + 1;
      local_28 = local_28 + 0xc0;
    } while (BEA_LOOP_GUARD((local_48 < *(int *)(this_ + 0x345c))));
  }
  if ((param_2 == 5) || (param_2 == 6)) {
    local_50 = 1.0f;
  }
  else if (0.0f <= local_50) {
    if (1.0f < local_50) {
      local_50 = 1.0f;
    }
  }
  else {
    local_50 = 0.0f;
  }
  FUN_00452df0(bea_arg(local_50));
  local_10 = (int)(longlong)ROUND((param_1 * 4.0f - 2.0f) * 255.0f);
  if (local_10 < 0) {
    local_10 = 0;
  }
  else if (0xff < local_10) {
    local_10 = 0xff;
  }
  fVar13 = (1.0f - param_1) - 0.25f;
  if (fVar13 < 0.0f) {
    fVar13 = 0.0f;
  }
  uVar15 = 0;
  fVar8 = 125.0f - fVar13 * fVar13 * 3000.0f;
  uVar14 = 0;
  uVar4 = local_10 << 0x18 | 0x7f7f7f;
  fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  fVar13 = (float)(fVar6 - (float10)*(float *)(this_ + 0x3474));
  uVar3 = FUN_00469550(bea_arg(*(undefined4 *)
                        (this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc)))
  ;
  uVar12 = 0x3f800000;
  uVar11 = 0x3f333333;
  uVar10 = 0x3e19999a;
  uVar9 = 0x43200000;
  fVar7 = fVar8;
  uVar2 = uVar4;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar7), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar2), bea_arg(uVar3), bea_arg(fVar13), bea_arg(uVar14), bea_arg(uVar15));
  uVar15 = 0;
  uVar14 = 0;
  fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  fVar13 = (float)(fVar6 - (float10)*(float *)(this_ + 0x3470));
  uVar3 = FUN_00469c20(bea_arg(*(int *)(this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 +
                                       0xcc) / 100));
  uVar12 = 0x3f800000;
  uVar11 = 0x3f333333;
  uVar10 = 0x3e19999a;
  uVar9 = 0x43020000;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar4), bea_arg(uVar3), bea_arg(fVar13), bea_arg(uVar14), bea_arg(uVar15));
  uVar9 = FUN_004f7bf0(bea_arg(s_E3_2002_Build___Beta_work_in_pro_006292b8));
  piVar16 = local_8;
  uVar3 = uVar9;
  this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(this_00), bea_arg(uVar3), bea_arg(piVar16));
  uVar15 = 0;
  uVar14 = 0;
  fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  uVar2 = local_10 << 0x18 | 0x7f7f3f;
  fVar13 = (float)(fVar6 - (float10)*(float *)(this_ + 0x3478));
  uVar12 = 0x3f800000;
  uVar11 = 0x3f800000;
  uVar10 = 0x3e19999a;
  uVar3 = 0x43af0000;
  fVar8 = 320.0f - (float)local_8[0] * 0.5f;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar8), bea_arg(uVar3), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar2), bea_arg(uVar9), bea_arg(fVar13), bea_arg(uVar14), bea_arg(uVar15));
  FUN_00453140(bea_arg(5), bea_arg(param_1));
  FUN_00453140(bea_arg(1), bea_arg(param_1));
  uVar3 = FUN_0046a2a0(10,0);
  return FUN_00467bd0(bea_arg(uVar3), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00459ee0, ap_00459ee0));

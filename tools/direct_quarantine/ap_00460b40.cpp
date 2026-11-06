// auto-ported from 00460b40_vslot5.c (CFEPLevelSelect::vslot5, 3802 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPLevelSelect;
typedef char _DAT_008a9570;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0089d888 GLOBAL_AT(int, 0x0089d888)
#define DAT_006245cc GLOBAL_AT(int, 0x006245cc)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_00629390 GLOBAL_AT(float, 0x00629390)
#define _DAT_00629394 GLOBAL_AT(float, 0x00629394)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0089d808 GLOBAL_AT(int, 0x0089d808)
#define DAT_00624624 GLOBAL_AT(undefined1, 0x00624624)
#define DAT_006293b8 GLOBAL_AT(undefined1, 0x006293b8)
#define DAT_0089d81c GLOBAL_AT(int, 0x0089d81c)
#define DAT_0089d820 GLOBAL_AT(int, 0x0089d820)
#define DAT_0089d824 GLOBAL_AT(int, 0x0089d824)
#define DAT_0089d828 GLOBAL_AT(int, 0x0089d828)
#define DAT_0089d82c GLOBAL_AT(int, 0x0089d82c)
#define DAT_0089d830 GLOBAL_AT(int, 0x0089d830)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d814 GLOBAL_AT(int, 0x0089d814)
#define DAT_0089d818 GLOBAL_AT(int, 0x0089d818)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0089d804 GLOBAL_AT(int, 0x0089d804)
#define DAT_0089d800 GLOBAL_AT(int, 0x0089d800)
#define DAT_0089d810 GLOBAL_AT(int, 0x0089d810)
#define DAT_0089d80c GLOBAL_AT(int, 0x0089d80c)
typedef int (BEA_THISCALL* FUN_0041b8f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b8f0_t> FUN_0041b8f0 = {(FUN_0041b8f0_t)0x0041b8f0};
typedef undefined2 (BEA_STDCALL* FUN_00421470_t)(uint32_t);
static const bea_guard<FUN_00421470_t> FUN_00421470 = {(FUN_00421470_t)0x00421470};
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef undefined4 (BEA_STDCALL* FUN_00461a50_t)(uint32_t);
static const bea_guard<FUN_00461a50_t> FUN_00461a50 = {(FUN_00461a50_t)0x00461a50};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_STDCALL* FUN_00466de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466de0_t> FUN_00466de0 = {(FUN_00466de0_t)0x00466de0};
typedef uint32_t (BEA_THISCALL* FUN_00467200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467200_t> FUN_00467200 = {(FUN_00467200_t)0x00467200};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef uint32_t (BEA_CDECL* FUN_004681c0_t)(void);
static const bea_guard<FUN_004681c0_t> FUN_004681c0 = {(FUN_004681c0_t)0x004681c0};
typedef uint32_t (BEA_CDECL* FUN_004681e0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004681e0_t> FUN_004681e0 = {(FUN_004681e0_t)0x004681e0};
typedef uint (BEA_CDECL* FUN_004693d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004693d0_t> FUN_004693d0 = {(FUN_004693d0_t)0x004693d0};
typedef uint (BEA_CDECL* FUN_00469400_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469400_t> FUN_00469400 = {(FUN_00469400_t)0x00469400};
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
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_00460b40(CFEPLevelSelect * this_, float param_1, int param_2)
{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  void *this_00;
  uint uVar12;
  int iVar13;
  CFEPLevelSelect *pCVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  int *piVar27;
  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x78);
  CFEPLevelSelect * &local_70 = *reinterpret_cast<CFEPLevelSelect * *>(bea_frame_ + 0x80 - 0x70);
  int &local_6c = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x6c);
  uint &local_68 = *reinterpret_cast<uint *>(bea_frame_ + 0x80 - 0x68);
  int &local_60 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x60);
  CFEPLevelSelect * &local_5c = *reinterpret_cast<CFEPLevelSelect * *>(bea_frame_ + 0x80 - 0x5c);
  int &local_54 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x4c);
  int &local_44 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x44);
  int (&aiStack_3c)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x80 - 0x3c);
  undefined1 (&local_34)[52] = *reinterpret_cast<undefined1 (*)[52]>(bea_frame_ + 0x80 - 0x34);
  FUN_00467200(bea_arg(&DAT_0089d758), bea_arg(param_1), bea_arg(param_2));
  local_7c = 148.0f - *(float *)(this_ + 0x3460);
  local_44 = (int)(longlong)ROUND((param_1 * 4.0f - 3.0f) * 255.0f);
  if (local_44 < 0) {
    local_44 = 0;
  }
  local_6c = *(int *)(this_ + 0x346c);
  if (local_6c < *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4)) {
    if (local_6c < 0) {
      local_6c = 0;
    }
  }
  else {
    local_6c = *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4) + -1;
  }
  local_5c = (CFEPLevelSelect *)0x0;
  if (0 < *(int *)(this_ + 0x345c)) {
    local_70 = this_ + 0xcc;
    do {
      if (610.0f <= local_7c) break;
      if ((0.0f <= local_7c) && (*(int *)local_70 % 100 == 0)) {
        uVar12 = (-(uint)(*(int *)(this_ + (local_6c + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc) / 100
                         != *(int *)local_70 / 100) & 0xff9f9fa0) - 0x707071;
        FUN_004681c0();
        FUN_005563d0(bea_arg(local_7c - 10.0f), bea_arg(0x43a10000), bea_arg(0x3f747ae1), bea_arg(DAT_0089d888), bea_arg((((uVar12 >> 0x10 & 0xff) * local_44 & 0xffffff00) +
                     ((uVar12 >> 8 & 0xff) * local_44 >> 8)) * 0x100 +
                     ((uVar12 & 0xff) * local_44 >> 8) + (uVar12 & 0xff000000)), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
        FUN_004681e0(0,0);
        FUN_0055de9b(local_34,&DAT_006245cc,*(int *)local_70 / 100);
        local_68 = 0xff1f4f7f;
        if (*(int *)(this_ + (local_6c + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc) / 100 !=
            *(int *)local_70 / 100) {
          local_68 = 0x3e1f4f7f;
        }
        uVar25 = 8;
        uVar24 = 0;
        uVar23 = 0x447a0000;
        uVar6 = FUN_004f7bf0(bea_arg(local_34));
        fVar16 = local_7c + 15.0f;
        uVar12 = ((local_68 >> 8 & 0xffff0000) * local_44 ^ local_68) & 0xffffff ^
                 (local_68 >> 8 & 0xff0000) * local_44;
        uVar22 = 0x3f800000;
        uVar21 = 0x3f800000;
        uVar20 = 0x3eb0a3d7;
        uVar19 = 0x43330000;
        FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
        FUN_00465710(bea_arg(fVar16), bea_arg(uVar19), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar12), bea_arg(uVar6), bea_arg(uVar23), bea_arg(uVar24), bea_arg(uVar25));
      }
      local_7c = local_7c + 60.0f;
      local_5c = (CFEPLevelSelect *)((int)local_5c + 1);
      local_70 = local_70 + 0x18;
    } while (BEA_LOOP_GUARD(((int)local_5c < *(int *)(this_ + 0x345c))));
  }
  FUN_004681e0(0,0);
  local_7c = 148.0f - *(float *)(this_ + 0x3460);
  local_50 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= local_50) {
    fVar16 = local_50;
    if (1.0f < local_50) {
      fVar16 = 1.0f;
    }
  }
  else {
    fVar16 = 0.0f;
  }
  iVar13 = 0;
  local_44 = (int)(longlong)ROUND(fVar16 * 255.0f);
  iVar11 = local_44;
  if (0 < *(int *)(this_ + 0x345c)) {
    do {
      if ((local_7c < _DAT_00629390) || (bVar3 = true, _DAT_00629394 < local_7c)) {
        bVar3 = false;
      }
      if ((_DAT_00629390 <= local_7c) || (iVar13 < *(int *)(this_ + 0x3468))) {
        if ((_DAT_00629394 < local_7c) && (iVar13 <= *(int *)(this_ + 0x3468))) {
          *(undefined4 *)(this_ + 0x346c) = 0;
          *(int *)(this_ + 0x3468) = iVar13 + -1;
          iVar7 = *(int *)(this_ + (iVar13 + -1) * 4 + 4);
          goto joined_r0x00460f27;
        }
      }
      else {
        *(undefined4 *)(this_ + 0x346c) = 0;
        *(int *)(this_ + 0x3468) = iVar13 + 1;
        iVar7 = *(int *)(this_ + (iVar13 + 1) * 4 + 4);
joined_r0x00460f27:
        local_6c = 0;
        if (iVar7 < 1) {
          local_6c = iVar7 + -1;
        }
      }
      if (610.0f <= local_7c) break;
      if (0.0f <= local_7c) {
        local_68 = 0;
        local_78 = (float)(*(int *)(this_ + iVar13 * 4 + 4) + -1) * 60.0f * 0.5f + 320.0f;
        if (0 < *(int *)(this_ + iVar13 * 4 + 4)) {
          local_70 = this_ + iVar13 * 0x18 + 0xcc;
          local_60 = 0;
          local_5c = this_ + iVar13 * 0xc0 + 0xee0;
          do {
            iVar7 = FUN_00461a50(bea_arg(*(undefined4 *)local_70));
            if (iVar7 != 0) {
              if (((bVar3) && (param_1 == 1.0f)) &&
                 (cVar4 = FUN_00469400(bea_arg(local_7c - 20.0f), bea_arg(local_78 - 20.0f), bea_arg(local_7c + 20.0f), bea_arg(local_78 + 20.0f)), cVar4 != '\0')) {
                *(int *)(this_ + 0x3468) = iVar13;
                *(uint *)(this_ + 0x346c) = local_68;
                if ((int)local_68 < *(int *)(this_ + iVar13 * 4 + 4)) {
                  local_6c = local_68;
                  if (local_60 < 0) {
                    local_6c = 0;
                  }
                }
                else {
                  local_6c = *(int *)(this_ + iVar13 * 4 + 4) + -1;
                }
                bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
              }
              FUN_00513bc0(bea_arg(0x13), bea_arg(1));
              FUN_00513bc0(bea_arg(0x14), bea_arg(2));
              FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
              FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
              FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
              uVar6 = *(undefined4 *)local_70;
              iVar7 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(uVar6));
              uVar19 = DAT_0089d808;
              if (((iVar7 != 0) && (iVar8 = FUN_00461a50(bea_arg(uVar6)), uVar19 = DAT_0089d808, iVar8 == 1))
                 && (*(float *)(iVar7 + 0x3c) != -1.0f)) {
                uVar6 = *(undefined4 *)local_70;
                iVar7 = FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(uVar6));
                if ((iVar7 == 0) || (iVar8 = FUN_00461a50(bea_arg(uVar6)), iVar8 != 1)) {
                  puVar26 = &DAT_00624624;
LAB_00461148:
                  puVar9 = (undefined2 *)FUN_004f7bf0(bea_arg(puVar26));
                  uVar5 = (undefined1)*puVar9;
                }
                else {
                  if (*(float *)(iVar7 + 0x3c) == -1.0f) {
                    puVar26 = &DAT_006293b8;
                    goto LAB_00461148;
                  }
                  uVar5 = FUN_00421470(bea_arg(*(float *)(iVar7 + 0x3c)));
                }
                switch(uVar5) {
                case 0x41:
                  uVar19 = DAT_0089d81c;
                  break;
                case 0x42:
                  uVar19 = DAT_0089d820;
                  break;
                case 0x43:
                  uVar19 = DAT_0089d824;
                  break;
                case 0x44:
                  uVar19 = DAT_0089d828;
                  break;
                default:
                  uVar19 = DAT_0089d82c;
                  break;
                case 0x53:
                  uVar19 = DAT_0089d830;
                }
              }
              uVar12 = iVar11 * 0xff0000 | 0xffffff;
              FUN_005563d0(bea_arg(local_7c), bea_arg(local_78), bea_arg(0x3e9eb852), bea_arg(uVar19), bea_arg(uVar12), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
              FUN_00513bc0(bea_arg(0x13), bea_arg(5));
              FUN_00513bc0(bea_arg(0x14), bea_arg(6));
              FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
              FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
              FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
              fVar16 = _DAT_008a9570 * 0.02f + ((float)(iVar13 * 0xb) + (float)local_60) * 0.114f;
              FUN_005563d0(bea_arg(local_7c), bea_arg(local_78), bea_arg(0x3eab851f), bea_arg(DAT_0089d814), bea_arg(uVar12), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(4), bea_arg(fVar16), bea_arg(0));
              iVar7 = local_68 + iVar13 * 6;
              if (0.0f < *(float *)(this_ + iVar7 * 4 + 0x57c)) {
                fVar18 = *(float *)(this_ + iVar7 * 4 + 0x57c) + *(float *)(this_ + iVar7 * 4 + 0x57c)
                ;
                if (0.0f <= fVar18) {
                  if (1.0f < fVar18) {
                    fVar18 = 1.0f;
                  }
                }
                else {
                  fVar18 = 0.0f;
                }
                local_44 = (int)(longlong)ROUND(fVar18 * 255.0f);
                FUN_005563d0(bea_arg(local_7c), bea_arg(local_78), bea_arg(0x3eab851f), bea_arg(DAT_0089d818), bea_arg(((local_44 * iVar11) / 0xff) * 0xff0000 | 0xffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(4), bea_arg(fVar16), bea_arg(0));
              }
            }
            DAT_009c68ac = 0;
            DAT_009c690d = 1;
            iVar7 = FUN_00461a50(bea_arg(*(undefined4 *)local_70));
            uVar12 = (-(uint)(iVar7 != 0) & 0xe0000000) + 0x1fffffff;
            if (((bVar3) &&
                (cVar4 = FUN_004693d0(bea_arg(local_7c - 20.0f), bea_arg(local_78 - 20.0f), bea_arg(local_7c + 20.0f), bea_arg(local_78 + 20.0f)), cVar4 != '\0')) && (iVar7 != 0)) {
              *(int *)(this_ + 0x3468) = iVar13;
              *(uint *)(this_ + 0x346c) = local_68;
              if ((int)local_68 < *(int *)(this_ + iVar13 * 4 + 4)) {
                local_6c = local_68;
                if (local_60 < 0) {
                  local_6c = 0;
                }
              }
              else {
                local_6c = *(int *)(this_ + iVar13 * 4 + 4) + -1;
              }
            }
            if (((param_1 == 1.0f) || (*(int *)(this_ + 0x3468) != iVar13)) ||
               ((local_6c != local_68 || ((param_2 != 5 && (param_2 != 6)))))) {
              if (0 < iVar11) {
                uVar12 = ((uVar12 >> 8 & 0xffff0000) * iVar11 ^ uVar12) & 0xffffff ^
                         (uVar12 >> 8 & 0xff0000) * iVar11;
                iVar8 = local_68 + iVar13 * 6;
                fVar16 = *(float *)(this_ + iVar8 * 4 + 0x57c);
                fVar18 = *(float *)(this_ + iVar8 * 4 + 0x57c) * 0.25f + 1.0f;
                FUN_005563d0(bea_arg(local_7c), bea_arg(local_78), bea_arg(0x3e9c28f6), bea_arg(DAT_0089d804), bea_arg(uVar12), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(fVar16 * 0.7853982f));
                FUN_005563d0(bea_arg(local_7c), bea_arg(local_78), bea_arg(0x3e9c28f6), bea_arg(DAT_0089d800), bea_arg(uVar12), bea_arg(fVar18), bea_arg(fVar18), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(-(fVar16 * 0.7853982f)));
              }
            }
            else if (0.0f < param_1) {
              fVar16 = 1.0f - param_1;
              fVar17 = fVar16 * 1.5f + 0.1f;
              fVar18 = (285.0f - local_7c) * fVar16 + local_7c;
              fVar16 = (225.0f - local_78) * fVar16 + local_78;
              FUN_005563d0(bea_arg(fVar18), bea_arg(fVar16), bea_arg(0x3e9c28f6), bea_arg(DAT_0089d810), bea_arg(uVar12), bea_arg(fVar17), bea_arg(fVar17), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(-(param_1 * 2.1048672f)));
              FUN_005563d0(bea_arg(fVar18), bea_arg(fVar16), bea_arg(0x3e9c28f6), bea_arg(DAT_0089d80c), bea_arg(uVar12), bea_arg(fVar17 * 1.75f), bea_arg(fVar17 * 1.75f), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(param_1 * 2.1048672f));
            }
            local_54 = 0;
            pCVar14 = local_5c;
            if (0 < *(int *)(local_70 + 0x960)) {
              do {
                iVar8 = *(int *)(pCVar14 + -4);
                iVar1 = *(int *)pCVar14;
                iVar2 = *(int *)(this_ + iVar8 * 4 + 4);
                iVar10 = FUN_00461a50(bea_arg(*(undefined4 *)(this_ + (iVar1 + iVar8 * 6) * 4 + 0xcc)));
                if ((iVar7 == 0) || (uVar12 = 0xafffffff, iVar10 == 0)) {
                  uVar12 = 0x1fffffff;
                }
                if (0 < iVar11) {
                  FUN_00466de0(bea_arg(local_7c), bea_arg(local_78), bea_arg((float)(iVar8 - iVar13) * 60.0f + local_7c), bea_arg(((float)(iVar2 + -1) * 60.0f * 0.5f + 320.0f) - (float)iVar1 * 60.0f), bea_arg(((uVar12 >> 8 & 0xffff0000) * iVar11 ^ uVar12) & 0xffffff ^
                               (uVar12 >> 8 & 0xff0000) * iVar11), bea_arg(0x41200000), bea_arg(0x3e9db22d), bea_arg(0x3ecccccd));
                }
                local_54 = local_54 + 1;
                pCVar14 = pCVar14 + 8;
              } while (BEA_LOOP_GUARD((local_54 < *(int *)(local_70 + 0x960))));
            }
            local_78 = local_78 - 60.0f;
            local_68 = local_68 + 1;
            local_5c = local_5c + 0x20;
            local_60 = local_60 + 7;
            local_70 = local_70 + 4;
          } while (BEA_LOOP_GUARD(((int)local_68 < *(int *)(this_ + iVar13 * 4 + 4))));
        }
      }
      local_7c = local_7c + 60.0f;
      iVar13 = iVar13 + 1;
    } while (BEA_LOOP_GUARD((iVar13 < *(int *)(this_ + 0x345c))));
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
  local_44 = (int)(longlong)ROUND((param_1 * 4.0f - 2.0f) * 255.0f);
  if (local_44 < 0) {
    local_44 = 0;
  }
  else if (0xff < local_44) {
    local_44 = 0xff;
  }
  fVar16 = (1.0f - param_1) - 0.25f;
  if (fVar16 < 0.0f) {
    fVar16 = 0.0f;
  }
  iVar11 = FUN_00461a50(bea_arg(*(undefined4 *)(this_ + (local_6c + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc)))
  ;
  if (iVar11 == 0) {
    uVar6 = FUN_0046a2a0(0x5b,0);
  }
  else {
    uVar6 = FUN_00469550(bea_arg(*(undefined4 *)(this_ + (local_6c + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc)));
  }
  piVar27 = aiStack_3c;
  uVar19 = uVar6;
  this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(this_00), bea_arg(uVar19), bea_arg(piVar27));
  local_4c = 0x3f800000;
  if (450.0f < (float)aiStack_3c[0]) {
    local_4c = 0x3f4ccccd;
  }
  fVar18 = 130.0f - fVar16 * fVar16 * 3000.0f;
  uVar23 = 0;
  uVar22 = 0;
  fVar15 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  uVar12 = local_44 << 0x18 | 0x7f6f3f;
  fVar16 = (float)(fVar15 - (float10)*(float *)(this_ + 0x3474));
  uVar21 = 0x3f800000;
  uVar20 = 0x3e9c28f6;
  uVar19 = 0x43190000;
  fVar17 = fVar18;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar17), bea_arg(uVar19), bea_arg(uVar20), bea_arg(local_4c), bea_arg(uVar21), bea_arg(uVar12), bea_arg(uVar6), bea_arg(fVar16), bea_arg(uVar22), bea_arg(uVar23));
  uVar24 = 0;
  uVar23 = 0;
  fVar15 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  fVar16 = (float)(fVar15 - (float10)*(float *)(this_ + 0x3470));
  uVar6 = FUN_00469c20(bea_arg(*(int *)(this_ + (local_6c + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc) / 100));
  uVar12 = local_44 << 0x18 | 0x7f7f7f;
  uVar22 = 0x3f800000;
  uVar21 = 0x3f800000;
  uVar20 = 0x3e9c28f6;
  uVar19 = 0x42fa0000;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00465710(bea_arg(fVar18), bea_arg(uVar19), bea_arg(uVar20), bea_arg(uVar21), bea_arg(uVar22), bea_arg(uVar12), bea_arg(uVar6), bea_arg(fVar16), bea_arg(uVar23), bea_arg(uVar24));
  FUN_00453140(bea_arg(5), bea_arg(param_1));
  FUN_00453140(bea_arg(1), bea_arg(param_1));
  uVar6 = FUN_0046a2a0(10,0);
  return FUN_00467bd0(bea_arg(uVar6), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00460b40, ap_00460b40));

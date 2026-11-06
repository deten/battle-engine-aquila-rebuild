// auto-ported from 00462d40_vslot5.c (CFEPMain::vslot5, 5983 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPMain;
typedef char _DAT_008a9570;
typedef char fStack_70;
typedef char fStack_7c;
typedef char fStack_8c;
typedef char lStack_78;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d7f0 GLOBAL_AT(int, 0x0089d7f0)
#define DAT_0083d990 GLOBAL_AT(int, 0x0083d990)
#define DAT_0089d854 GLOBAL_AT(int, 0x0089d854)
#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
#define DAT_0089d840 GLOBAL_AT(int, 0x0089d840)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0089d89c GLOBAL_AT(int, 0x0089d89c)
#define DAT_0089d894 GLOBAL_AT(int, 0x0089d894)
#define DAT_0089d898 GLOBAL_AT(int, 0x0089d898)
#define DAT_0089d8a0 GLOBAL_AT(int, 0x0089d8a0)
#define DAT_0089d8a4 GLOBAL_AT(int, 0x0089d8a4)
#define DAT_0089d7a8 GLOBAL_AT(int, 0x0089d7a8)
#define DAT_00629410 GLOBAL_AT(int, 0x00629410)
#define DAT_00679980 GLOBAL_AT(int, 0x00679980)
#define DAT_00679b40 GLOBAL_AT(char, 0x00679b40)
#define DAT_0089d88c GLOBAL_AT(int, 0x0089d88c)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0089d7fc GLOBAL_AT(int, 0x0089d7fc)
#define DAT_0089d834 GLOBAL_AT(int, 0x0089d834)
#define s_V_1d__02d_00629454 ((char*)0x00629454)
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_CDECL* FUN_004681c0_t)(void);
static const bea_guard<FUN_004681c0_t> FUN_004681c0 = {(FUN_004681c0_t)0x004681c0};
typedef uint32_t (BEA_CDECL* FUN_004681e0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004681e0_t> FUN_004681e0 = {(FUN_004681e0_t)0x004681e0};
typedef float10 (BEA_CDECL* FUN_00468730_t)(void);
static const bea_guard<FUN_00468730_t> FUN_00468730 = {(FUN_00468730_t)0x00468730};
typedef float10 (BEA_CDECL* FUN_00468750_t)(void);
static const bea_guard<FUN_00468750_t> FUN_00468750 = {(FUN_00468750_t)0x00468750};
typedef uint (BEA_CDECL* FUN_004693d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004693d0_t> FUN_004693d0 = {(FUN_004693d0_t)0x004693d0};
typedef uint (BEA_CDECL* FUN_00469400_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00469400_t> FUN_00469400 = {(FUN_00469400_t)0x00469400};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static void BEA_THISCALL ap_00462d40(CFEPMain * this_, float param_1, int param_2)
{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  void *this_00;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float *pfVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x90);
  float &fStack_8c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x8c);
  undefined8 &local_88 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x90 - 0x88);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  longlong &lStack_78 = *reinterpret_cast<longlong *>(bea_frame_ + 0x90 - 0x78);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x70);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x68);
  undefined1 (&auStack_64)[96] = *reinterpret_cast<undefined1 (*)[96]>(bea_frame_ + 0x90 - 0x64);
  float &fStack_4 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4);
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  fVar9 = _CIfmod((float10)350.0f,(float10)_DAT_008a9570 * (float10)0.3f);
  fVar10 = (float)((float10)175.0f - fVar9);
  local_68 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= local_68) {
    fVar11 = local_68;
    if (1.0f < local_68) {
      fVar11 = 1.0f;
    }
  }
  else {
    fVar11 = 0.0f;
  }
  local_88 = (longlong)ROUND(fVar11 * 255.0f);
  uVar7 = (int)local_88 * 0x3f0000 | 0xffffff;
  FUN_005563d0(0x43e50000,fVar10,0x3f666666,DAT_0089d7f0,uVar7,0x3f800000,0x3f800000,4,0,0x3f800000)
  ;
  FUN_005563d0(0x43e50000,fVar10 + 350.0f,0x3f666666,DAT_0089d7f0,uVar7,0x3f800000,0x3f800000,4,0,
               0x3f800000);
  FUN_005563d0(0x43e50000,fVar10 + 700.0f,0x3f666666,DAT_0089d7f0,uVar7,0x3f800000,0x3f800000,4,0,
               0x3f800000);
  local_90 = 268.0;
  if (0.0f <= local_68) {
    fVar10 = local_68;
    if (1.0f < local_68) {
      fVar10 = 1.0f;
    }
  }
  else {
    fVar10 = 0.0f;
  }
  local_88 = (longlong)ROUND(fVar10 * 255.0f);
  if ((int)local_88 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (int)local_88;
    if (0xff < (int)local_88) {
      iVar8 = 0xff;
    }
  }
  iVar6 = -1;
  if (DAT_0083d990 != 0) {
    iVar6 = 0;
    local_90 = 304.0;
  }
  local_80 = (float)iVar6;
  iVar3 = bea_vcall<uint32_t>(this_, 0x28);
  if (iVar6 < iVar3) {
    do {
      fVar10 = local_80;
      if (local_80 == -NAN) {
        uVar7 = 0xff7f7f7f;
        if (*(int *)(this_ + 8) == -1) {
          fVar9 = (float10)fsin((float10)_DAT_008a9570 * (float10)3.14f * (float10)0.033333335f);
          lStack_78 = (longlong)ROUND(fVar9 * (float10)-32.0f);
          uVar7 = (uint)lStack_78 * -0x10101 - 0x202021;
        }
        uVar7 = ((uVar7 >> 8 & 0xffff0000) * iVar8 ^ uVar7) & 0xffffff ^
                (uVar7 >> 8 & 0xff0000) * iVar8;
        uVar5 = uVar7 >> 8;
        if (((0.9f < param_1) && (iVar6 = bea_vcall<uint32_t>(this_, 0x24, 0xffffffff), iVar6 != 0)
            ) && (cVar2 = FUN_004693d0(bea_arg(0x42ee0000), bea_arg(local_90 - 20.0f), bea_arg(0x439f8000), bea_arg(local_90 + 20.0f)),
                 cVar2 != '\0')) {
          *(undefined4 *)(this_ + 8) = 0xffffffff;
        }
        fVar10 = local_90 + 20.0f;
        lStack_78 = CONCAT44((*(uint32_t*)((char*)&lStack_78 + 4)),fVar10);
        fStack_70 = local_90 - 20.0f;
        cVar2 = FUN_00469400(bea_arg(0x42ee0000), bea_arg(fStack_70), bea_arg(0x43470000), bea_arg(fVar10));
        if (cVar2 != '\0') {
          *(undefined4 *)(this_ + 8) = 0xffffffff;
          bea_vcall<uint32_t>(this_, 0xc, 0x36,0x3f800000);
        }
        cVar2 = FUN_00469400(bea_arg(0x436f0000), bea_arg(fStack_70), bea_arg(0x439f8000), bea_arg(fVar10));
        if (cVar2 != '\0') {
          *(undefined4 *)(this_ + 8) = 0xffffffff;
          bea_vcall<uint32_t>(this_, 0xc, 0x37,0x3f800000);
        }
        FUN_005563d0(0x435b0000,local_90,0x3ea3d70a,
                     *(undefined4 *)(((char *)&DAT_0089d854) + DAT_0083d97c * 4),
                     ((uVar5 & 0xffff0000) * 0xff ^ uVar7) & 0xffffff ^ (uVar5 & 0xff0000) * 0xff,
                     0x3f266666,0x3e800000,4,0,0x3f800000);
        lStack_78 = (longlong)ROUND(_DAT_008a9570);
        uVar7 = (uint)lStack_78 & 0x8000003f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
        }
        if (((int)uVar7 < 0x32) || (0.0f < *(float *)(this_ + 0x1c))) {
          uVar7 = ~(iVar8 * 0xff0000) & 0xffffffU ^ iVar8 * 0xff0000;
          if (*(int *)(this_ + 8) != -1) {
            uVar7 = ((uVar7 >> 8 & 0xffff0000) << 6 ^ uVar7) & 0xffffff ^
                    (uVar7 >> 8 & 0xff0000) << 6;
          }
          FUN_005563d0(0x431a0000,local_90,0x3ea3d70a,DAT_0089d840,
                       ((uVar7 >> 8 & 0xffff0000) * 0xff ^ uVar7) & 0xffffff ^
                       (uVar7 >> 8 & 0xff0000) * 0xff,0x3f4ccccd,0x3f4ccccd,4,0,0x3f800000);
          lStack_78 = (longlong)ROUND(*(float *)(this_ + 0x1c) * 255.0f);
          uVar5 = ~((uint)lStack_78 * 0xff0000) & 0xffffff ^ (uint)lStack_78 * 0xff0000;
          uVar7 = uVar5 >> 8;
          fStack_8c = ((1.0f - *(float *)(this_ + 0x1c)) + 1.0f) * 0.8f;
          uVar7 = ((uVar7 & 0xffff0000) * iVar8 ^ uVar5) & 0xffffff ^ (uVar7 & 0xff0000) * iVar8;
          uVar5 = uVar7 >> 8;
          FUN_005563d0(0x431a0000,local_90,0x3ea3d70a,DAT_0089d840,
                       ((uVar5 & 0xffff0000) * 0xff ^ uVar7) & 0xffffff ^ (uVar5 & 0xff0000) * 0xff,
                       fStack_8c,fStack_8c,4,0,0x3f800000);
        }
        lStack_78 = (longlong)ROUND(_DAT_008a9570);
        uVar7 = (uint)lStack_78 & 0x8000003f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
        }
        if (((int)uVar7 < 0x32) || (0.0f < *(float *)(this_ + 0x20))) {
          uVar7 = ~(iVar8 * 0xff0000) & 0xffffffU ^ iVar8 * 0xff0000;
          if (*(int *)(this_ + 8) != -1) {
            uVar7 = ((uVar7 >> 8 & 0xffff0000) << 6 ^ uVar7) & 0xffffff ^
                    (uVar7 >> 8 & 0xff0000) << 6;
          }
          FUN_005563d0(0x438e0000,local_90,0x3ea3d70a,DAT_0089d840,
                       ((uVar7 >> 8 & 0xffff0000) * 0xff ^ uVar7) & 0xffffff ^
                       (uVar7 >> 8 & 0xff0000) * 0xff,0x3f4ccccd,0x3f4ccccd,4,0,0x3f800000);
          lStack_78 = (longlong)ROUND(*(float *)(this_ + 0x20) * 255.0f);
          uVar5 = ~((uint)lStack_78 * 0xff0000) & 0xffffff ^ (uint)lStack_78 * 0xff0000;
          uVar7 = uVar5 >> 8;
          fStack_8c = ((1.0f - *(float *)(this_ + 0x20)) + 1.0f) * 0.8f;
          uVar7 = ((uVar7 & 0xffff0000) * iVar8 ^ uVar5) & 0xffffff ^ (uVar7 & 0xff0000) * iVar8;
          uVar5 = uVar7 >> 8;
          FUN_005563d0(0x438e0000,local_90,0x3ea3d70a,DAT_0089d840,
                       ((uVar5 & 0xffff0000) * 0xff ^ uVar7) & 0xffffff ^ (uVar5 & 0xff0000) * 0xff,
                       fStack_8c,fStack_8c,4,0,0x3f800000);
        }
        local_90 = local_90 + 36.0f;
      }
      else {
        uVar4 = bea_vcall<uint32_t>(this_, 0x30, local_80);
        pfVar17 = &fStack_8c;
        fStack_7c = (float)uVar4;
        this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_00540680(bea_arg(this_00), bea_arg(uVar4), bea_arg(pfVar17));
        bea_vcall<uint32_t>(this_, 0x24, fVar10);
        if (fVar10 == (float)*(int *)(this_ + 8)) {
          fVar11 = (fStack_4 - 0.8f) * 5.0000005f;
          if (0.0f <= fVar11) {
            if (1.0f < fVar11) {
              fVar11 = 1.0f;
            }
          }
          else {
            fVar11 = 0.0f;
          }
          lStack_78 = (longlong)ROUND(fVar11 * 255.0f);
          if ((int)(uint)lStack_78 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (uint)lStack_78;
            if (0xff < (int)(uint)lStack_78) {
              iVar8 = 0xff;
            }
          }
          FUN_005563d0(0x435b0000,0,0x3ea8f5c3,DAT_0089d89c,(iVar8 * 0x7f & 0xff00U) << 0x10
                       ,((float)(int)local_90 + 30.0f) * 0.00390625f,0x3f800000,4,0,0x3f800000);
        }
        uVar7 = 0xff4f4f4f;
        iVar6 = bea_vcall<uint32_t>(this_, 0x24, fVar10);
        if (iVar6 == 0) {
          uVar7 = 0x7f1f1f1f;
        }
        if (fVar10 == (float)*(int *)(this_ + 8)) {
          uVar7 = 0xffff6f3f;
        }
        fVar10 = 219.0f - (float)(int)local_88 * 0.5f;
        uVar7 = ((uVar7 >> 8 & 0xffff0000) * iVar8 ^ uVar7) & 0xffffff ^
                (uVar7 >> 8 & 0xff0000) * iVar8;
        uVar5 = uVar7 >> 8;
        uVar7 = ((uVar5 & 0xffff0000) * 0xff ^ uVar7) & 0xffffff ^ (uVar5 & 0xff0000) * 0xff;
        fStack_7c = local_90 - (float)((*(uint32_t*)((char*)&local_88 + 4)) / 2);
        fStack_70 = fVar10;
        if ((0.9f < param_1) && (iVar6 = bea_vcall<uint32_t>(this_, 0x24, local_80), iVar6 != 0)) {
          cVar2 = FUN_004693d0(bea_arg(fVar10), bea_arg(fStack_7c), bea_arg((float)(int)local_88 + fStack_70), bea_arg((float)(*(uint32_t*)((char*)&local_88 + 4)) + fStack_7c));
          if (cVar2 != '\0') {
            *(float *)(this_ + 8) = local_80;
          }
          cVar2 = FUN_00469400(bea_arg(fVar10), bea_arg(fStack_7c), bea_arg((float)(int)local_88 + fStack_70), bea_arg((float)(*(uint32_t*)((char*)&local_88 + 4)) + fStack_7c));
          if (cVar2 != '\0') {
            *(float *)(this_ + 8) = local_80;
            bea_vcall<uint32_t>(this_, 0xc, 0x2c,0x3f800000);
          }
        }
        uVar19 = 0;
        uVar18 = 0;
        uVar16 = 0x447a0000;
        uVar14 = 0x3f800000;
        uVar13 = 0x3f800000;
        uVar12 = 0x3ea3d70a;
        fVar11 = fStack_7c;
        uVar4 = (uint)lStack_78;
        FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_00465710(bea_arg(fVar10), bea_arg(fVar11), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar7), bea_arg(uVar4), bea_arg(uVar16), bea_arg(uVar18), bea_arg(uVar19));
        local_90 = local_90 + 20.0f;
        DAT_009c68ac = 0;
        DAT_009c690d = 1;
      }
      iVar3 = (int)local_80 + 1;
      local_80 = (float)iVar3;
      iVar6 = bea_vcall<uint32_t>(this_, 0x28);
    } while (BEA_LOOP_GUARD((iVar3 < iVar6)));
  }
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  iVar8 = 0xff;
  fStack_8c = 1.25f;
  if (param_1 < 1.0f) {
    if (param_2 == 0xc) {
      if (0.2f <= param_1) {
        if (0.4f <= param_1) {
          if (param_1 < 0.6f) {
            fVar10 = (param_1 - 0.4f) * 4.9999995f;
            if (0.0f <= fVar10) {
              if (1.0f < fVar10) {
                fVar10 = 1.0f;
              }
            }
            else {
              fVar10 = 0.0f;
            }
            fStack_8c = fVar10 * 0.25f + 1.0f;
          }
        }
        else {
          fStack_8c = 1.0f;
        }
      }
      else {
        fStack_8c = param_1 * 5.0f;
        if (0.0f <= fStack_8c) {
          if (1.0f < fStack_8c) {
            fStack_8c = 1.0f;
          }
        }
        else {
          fStack_8c = 0.0f;
        }
        local_88 = (longlong)ROUND(fStack_8c * 255.0f);
        if ((int)local_88 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)local_88;
          if (0xff < (int)local_88) {
            iVar8 = 0xff;
          }
        }
      }
    }
    else {
      fVar10 = (param_1 - 0.5f) + (param_1 - 0.5f);
      if (0.0f <= fVar10) {
        if (1.0f < fVar10) {
          fVar10 = 1.0f;
        }
      }
      else {
        fVar10 = 0.0f;
      }
      lVar1 = (longlong)ROUND((1.0f - (1.0f - fVar10)) * 255.0f);
      (*(uint32_t*)((char*)&local_88 + 0)) = (int)lVar1;
      if ((int)local_88 < 0) {
        (*(uint32_t*)((char*)&local_88 + 0)) = 0;
      }
      else if (0xff < (int)local_88) {
        (*(uint32_t*)((char*)&local_88 + 0)) = 0xff;
      }
      fStack_8c = (1.0f - fVar10) * 10.0f + 1.25f;
      iVar8 = (int)local_88;
      local_88 = lVar1;
    }
  }
  fVar11 = fStack_8c * 1.05f;
  uVar16 = 0x3f800000;
  uVar14 = 0;
  uVar13 = 4;
  iVar6 = (iVar8 * 0x3f & 0xff00U) << 0x10;
  uVar12 = 0x3eb33333;
  uVar4 = DAT_0089d894;
  fVar15 = fVar11;
  local_80 = fVar11;
  fVar9 = (float10)FUN_00468730();
  fVar10 = (float)(fVar9 + (float10)349.0f);
  fVar9 = (float10)FUN_00468730();
  FUN_005563d0((float)(fVar9 + (float10)224.0f),fVar10,uVar12,uVar4,iVar6,fVar11,fVar15,uVar13,uVar14
               ,uVar16);
  FUN_005563d0(0x435b0000,0x43ac0000,0x3e99999a,DAT_0089d894,
               ~(iVar8 * 0xff0000) & 0xffffffU ^ iVar8 * 0xff0000,fStack_8c,fStack_8c,4,0,0x3f800000
              );
  if ((param_1 < 1.0f) && (param_2 == 0xc)) {
    if (0.2f <= param_1) {
      if (0.6f <= param_1) {
        if (0.8f <= param_1) goto LAB_00463b17;
        fStack_8c = (param_1 - 0.6f) * 5.0000005f;
        if (0.0f <= fStack_8c) {
          if (1.0f < fStack_8c) {
            fStack_8c = 1.0f;
          }
        }
        else {
          fStack_8c = 0.0f;
        }
        fStack_8c = 1.0f - fStack_8c;
        local_88 = (longlong)ROUND(fStack_8c * 255.0f);
        if ((int)local_88 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)local_88;
          if (0xff < (int)local_88) {
            iVar8 = 0xff;
          }
        }
      }
      else {
        fStack_8c = 1.0f;
        iVar8 = 0xff;
      }
    }
    else {
      fStack_8c = param_1 * 5.0f;
      if (0.0f <= fStack_8c) {
        if (1.0f < fStack_8c) {
          fStack_8c = 1.0f;
        }
      }
      else {
        fStack_8c = 0.0f;
      }
      local_88 = (longlong)ROUND(fStack_8c * 255.0f);
      if ((int)local_88 < 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)local_88;
        if (0xff < (int)local_88) {
          iVar8 = 0xff;
        }
      }
    }
    fVar11 = fStack_8c * 1.05f;
    uVar16 = 0x3f800000;
    uVar14 = 0;
    uVar13 = 4;
    iVar6 = (iVar8 * 0x3f & 0xff00U) << 0x10;
    uVar12 = 0x3eb33333;
    uVar4 = DAT_0089d898;
    fVar15 = fVar11;
    local_80 = fVar11;
    fVar9 = (float10)FUN_00468730();
    fVar10 = (float)(fVar9 + (float10)349.0f);
    fVar9 = (float10)FUN_00468730();
    FUN_005563d0((float)(fVar9 + (float10)224.0f),fVar10,uVar12,uVar4,iVar6,fVar11,fVar15,uVar13,
                 uVar14,uVar16);
    FUN_005563d0(0x435b0000,0x43ac0000,0x3e99999a,DAT_0089d898,
                 ~(iVar8 * 0xff0000) & 0xffffffU ^ iVar8 * 0xff0000,fStack_8c,fStack_8c,4,0,
                 0x3f800000);
  }
LAB_00463b17:
  iVar8 = 0xff;
  fStack_8c = 1.25f;
  if (param_1 < 1.0f) {
    if (param_2 == 0xc) {
      if (0.1f <= param_1) {
        if (param_1 < 0.3f) {
          fStack_8c = (param_1 - 0.1f) * 4.9999995f;
          if (0.0f <= fStack_8c) {
            if (1.0f < fStack_8c) {
              fStack_8c = 1.0f;
            }
          }
          else {
            fStack_8c = 0.0f;
          }
          local_88 = (longlong)ROUND(fStack_8c * 255.0f);
          if ((int)local_88 < 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (int)local_88;
            if (0xff < (int)local_88) {
              iVar8 = 0xff;
            }
          }
        }
        else if (0.5f <= param_1) {
          if (param_1 < 0.7f) {
            fVar10 = (param_1 - 0.5f) * 5.0000005f;
            if (0.0f <= fVar10) {
              if (1.0f < fVar10) {
                fVar10 = 1.0f;
              }
            }
            else {
              fVar10 = 0.0f;
            }
            fStack_8c = fVar10 * 0.25f + 1.0f;
          }
        }
        else {
          fStack_8c = 1.0f;
        }
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      if (0.0f <= local_68) {
        fVar10 = local_68;
        if (1.0f < local_68) {
          fVar10 = 1.0f;
        }
      }
      else {
        fVar10 = 0.0f;
      }
      lVar1 = (longlong)ROUND((1.0f - (1.0f - fVar10)) * 255.0f);
      (*(uint32_t*)((char*)&local_88 + 0)) = (int)lVar1;
      if ((int)local_88 < 0) {
        (*(uint32_t*)((char*)&local_88 + 0)) = 0;
      }
      else if (0xff < (int)local_88) {
        (*(uint32_t*)((char*)&local_88 + 0)) = 0xff;
      }
      fStack_8c = (1.0f - fVar10) * 1.4f + 1.25f;
      iVar8 = (int)local_88;
      local_88 = lVar1;
    }
  }
  fVar11 = fStack_8c * 1.05f;
  uVar16 = 0x3f800000;
  uVar14 = 0;
  uVar13 = 4;
  iVar6 = (iVar8 * 0x3f & 0xff00U) << 0x10;
  uVar12 = 0x3eb33333;
  uVar4 = DAT_0089d8a0;
  fVar15 = fVar11;
  local_80 = fVar11;
  fVar9 = (float10)FUN_00468750();
  fVar10 = (float)(fVar9 + (float10)365.0f);
  fVar9 = (float10)FUN_00468730();
  FUN_005563d0((float)(fVar9 + (float10)462.0f),fVar10,uVar12,uVar4,iVar6,fVar11,fVar15,uVar13,uVar14
               ,uVar16);
  FUN_005563d0(0x43e48000,0x43b18000,0x3e99999a,DAT_0089d8a0,
               ~(iVar8 * 0xff0000) & 0xffffffU ^ iVar8 * 0xff0000,fStack_8c,fStack_8c,4,0,0x3f800000
              );
  iVar8 = 0xff;
  if (((param_1 < 1.0f) && (param_2 == 0xc)) && (0.1f <= param_1)) {
    if (0.3f <= param_1) {
      if (0.7f <= param_1) {
        if (0.9f <= param_1) goto LAB_00463fc7;
        fStack_8c = (param_1 - 0.7f) * 5.0000005f;
        if (0.0f <= fStack_8c) {
          if (1.0f < fStack_8c) {
            fStack_8c = 1.0f;
          }
        }
        else {
          fStack_8c = 0.0f;
        }
        fStack_8c = 1.0f - fStack_8c;
        local_88 = (longlong)ROUND(fStack_8c * 255.0f);
        iVar8 = (int)local_88;
        if (-1 < (int)local_88) goto joined_r0x00463f01;
        iVar8 = 0;
      }
      else {
        fStack_8c = 1.0f;
      }
    }
    else {
      fStack_8c = (param_1 - 0.1f) * 4.9999995f;
      if (0.0f <= fStack_8c) {
        if (1.0f < fStack_8c) {
          fStack_8c = 1.0f;
        }
      }
      else {
        fStack_8c = 0.0f;
      }
      local_88 = (longlong)ROUND(fStack_8c * 255.0f);
      iVar8 = (int)local_88;
      if ((int)local_88 < 0) {
        iVar8 = 0;
      }
      else {
joined_r0x00463f01:
        if (0xff < iVar8) {
          iVar8 = 0xff;
        }
      }
    }
    fVar11 = fStack_8c * 1.05f;
    uVar16 = 0x3f800000;
    uVar14 = 0;
    uVar13 = 4;
    iVar6 = (iVar8 * 0x3f & 0xff00U) << 0x10;
    uVar12 = 0x3eb33333;
    uVar4 = DAT_0089d8a4;
    fVar15 = fVar11;
    local_80 = fVar11;
    fVar9 = (float10)FUN_00468750();
    fVar10 = (float)(fVar9 + (float10)365.0f);
    fVar9 = (float10)FUN_00468730();
    FUN_005563d0((float)(fVar9 + (float10)462.0f),fVar10,uVar12,uVar4,iVar6,fVar11,fVar15,uVar13,
                 uVar14,uVar16);
    FUN_005563d0(0x43e48000,0x43b18000,0x3e99999a,DAT_0089d8a4,
                 ~(iVar8 * 0xff0000) & 0xffffffU ^ iVar8 * 0xff0000,fStack_8c,fStack_8c,4,0,
                 0x3f800000);
  }
LAB_00463fc7:
  switch(*(undefined4 *)(this_ + 8)) {
  case 0:
    iVar8 = 0x40;
    break;
  case 1:
    iVar8 = 0x41;
    break;
  case 2:
    iVar8 = 0x43;
    break;
  case 3:
    iVar8 = 0x44;
    break;
  case 4:
    iVar8 = 0x45;
    break;
  case 5:
    iVar8 = 0x46;
    break;
  case 6:
    iVar8 = 0x48;
    break;
  default:
    goto switchD_00463fd6_caseD_7;
  case 8:
    iVar8 = 0x42;
    break;
  case 0xffffffff:
    iVar8 = 0x47;
  }
  fVar10 = (param_1 - 0.8f) * 5.0000005f;
  if (0.0f <= fVar10) {
    if (1.0f < fVar10) {
      fVar10 = 1.0f;
    }
  }
  else {
    fVar10 = 0.0f;
  }
  local_88 = (longlong)ROUND(fVar10 * 255.0f);
  if ((int)local_88 < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)local_88;
    if (0xff < (int)local_88) {
      iVar6 = 0xff;
    }
  }
  uVar4 = (&DAT_0089d7a8)[iVar8];
  uVar19 = 0x3f800000;
  uVar18 = 0;
  uVar16 = 4;
  uVar14 = 0x3f866666;
  iVar3 = (iVar6 * 0x3f & 0xff00U) << 0x10;
  uVar13 = 0x3f866666;
  uVar12 = 0x3eae147b;
  fVar9 = (float10)FUN_00468750();
  fVar10 = (float)(fVar9 + (float10)365.0f);
  fVar9 = (float10)FUN_00468730();
  FUN_005563d0((float)(fVar9 + (float10)462.0f),fVar10,uVar12,uVar4,iVar3,uVar13,uVar14,uVar16,uVar18
               ,uVar19);
  FUN_005563d0(0x43e48000,0x43b18000,0x3dcccccd,(&DAT_0089d7a8)[iVar8],iVar6 * 0xff0000 | 0xffffff,
               0x3f800000,0x3f800000,4,0,0x3f800000);
switchD_00463fd6_caseD_7:
  fStack_7c = local_68;
  if (0.0f <= local_68) {
    if (1.0f < local_68) {
      fStack_7c = 1.0f;
    }
  }
  else {
    fStack_7c = 0.0f;
  }
  FUN_0055de9b(auStack_64,s_V_1d__02d_00629454,DAT_00629410,DAT_00679980);
  DAT_00679b40 = 0;
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0x447a0000;
  uVar4 = FUN_004f7bf0(bea_arg(auStack_64));
  local_88 = (longlong)ROUND(fStack_7c * 255.0f);
  uVar7 = (int)local_88 << 0x18 | 0x102025;
  uVar16 = 0x3f800000;
  uVar14 = 0x3f800000;
  uVar13 = 0x3c23d70a;
  iVar8 = FUN_00515b00();
  fVar10 = (float)(iVar8 + -0x10);
  uVar12 = 0;
  (*(uint32_t*)((char*)&lStack_78 + 0)) = iVar8 + -0x10;
  FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00465710(bea_arg(uVar12), bea_arg(fVar10), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar16), bea_arg(uVar7), bea_arg(uVar4), bea_arg(uVar18), bea_arg(uVar19), bea_arg(uVar20));
  DAT_00679b40 = 1;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  if (0.0f <= local_68) {
    fVar10 = local_68;
    if (1.0f < local_68) {
      fVar10 = 1.0f;
    }
  }
  else {
    fVar10 = 0.0f;
  }
  local_88 = (longlong)ROUND(fVar10 * 255.0f);
  iVar8 = (int)local_88;
  if (param_2 == 0xc) {
    iVar8 = 0xff;
  }
  uVar19 = 0x3f800000;
  uVar18 = 0;
  uVar16 = 4;
  uVar14 = 0x3f866666;
  iVar6 = (iVar8 * 0x3f & 0xff00U) << 0x10;
  uVar13 = 0x3f866666;
  uVar12 = 0x3dcccccd;
  uVar4 = DAT_0089d88c;
  fVar9 = (float10)FUN_00468750();
  fVar10 = (float)(fVar9 + (float10)140.0f);
  fVar9 = (float10)FUN_00468730();
  FUN_005563d0((float)(fVar9 + (float10)325.0f),fVar10,uVar12,uVar4,iVar6,uVar13,uVar14,uVar16,uVar18
               ,uVar19);
  FUN_00513bc0(bea_arg(0x17), bea_arg(8));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  FUN_005563d0(0x43a00000,0x43020000,0x3f7fbe77,DAT_0089d88c,
               (iVar8 * 0xff & 0xffafU) << 0x10 | 0xafcfff,0x3f800000,0x3f800000,4,0,0x3f800000);
  FUN_00513bc0(bea_arg(0x17), bea_arg(4));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  fVar9 = _CIfmod((float10)512.0f,(float10)_DAT_008a9570 * (float10)0.6f);
  fStack_70 = (float)(((float10)256.0f - fVar9) + (float10)65.0f);
  FUN_004681c0();
  iVar8 = ((uint)(iVar8 * 0x7f) >> 8) * 0x10101 + -0x1000000;
  FUN_005563d0(fStack_70,0x42f00000,0x3f7f7cee,DAT_0089d7fc,iVar8,0x3f800000,0x40000000,4,0,
               0x3f800000);
  FUN_005563d0(fStack_70 + 512.0f,0x42f00000,0x3f7f7cee,DAT_0089d7fc,iVar8,0x3f800000,0x40000000,4,0,
               0x3f800000);
  FUN_004681e0(0,0);
  fStack_70 = ABS(param_1 - 0.75f);
  if ((fStack_70 < 0.15f) && (param_2 != 0xc)) {
    iVar8 = FUN_00515940();
    lStack_78 = CONCAT44((*(uint32_t*)((char*)&lStack_78 + 4)),iVar8);
    fStack_8c = (float)iVar8 * 0.03125f;
    local_88 = (longlong)ROUND((1.0f - fStack_70 * 6.6666665f) * 128.0f);
    FUN_005563d0(0,0,0x3a83126f,DAT_0089d834,(int)local_88 * 0xff0000 | 0xffffff,fStack_8c,fStack_8c
                 ,0,0,0x3f800000);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00462d40, ap_00462d40));

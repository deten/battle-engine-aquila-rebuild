// auto-ported from 0054d530_FUN_0054d530.c (FUN_0054d530, 2939 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xb0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089ce90 GLOBAL_AT(int, 0x0089ce90)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define _DAT_009c73d4 GLOBAL_AT(int, 0x009c73d4)
#define DAT_009c741c GLOBAL_AT(char, 0x009c741c)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
#define DAT_00704e48 GLOBAL_AT(int, 0x00704e48)
#define DAT_00630130 GLOBAL_AT(int, 0x00630130)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c63a4 GLOBAL_AT(char, 0x009c63a4)
#define DAT_006601ac GLOBAL_AT(undefined4*, 0x006601ac)
#define DAT_009c6390 GLOBAL_AT(int, 0x009c6390)
#define DAT_00855578 GLOBAL_AT(int, 0x00855578)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c6910 GLOBAL_AT(char, 0x009c6910)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_0089c9c4 GLOBAL_AT(undefined4*, 0x0089c9c4)
#define DAT_009c63b0 GLOBAL_AT(char, 0x009c63b0)
#define DAT_00704e64 GLOBAL_AT(int, 0x00704e64)
#define DAT_0089c9c0 GLOBAL_AT(undefined4*, 0x0089c9c0)
#define s_Mesh_layer__d_disabled_006512d8 ((char*)0x006512d8)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef float10 (BEA_CDECL* FUN_0044a0c0_t)(void);
static const bea_guard<FUN_0044a0c0_t> FUN_0044a0c0 = {(FUN_0044a0c0_t)0x0044a0c0};
typedef uint32_t (BEA_THISCALL* FUN_00501cd0_t)(uint32_t);
static const bea_guard<FUN_00501cd0_t> FUN_00501cd0 = {(FUN_00501cd0_t)0x00501cd0};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513870_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513870_t> FUN_00513870 = {(FUN_00513870_t)0x00513870};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00513c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513c70_t> FUN_00513c70 = {(FUN_00513c70_t)0x00513c70};
typedef undefined4 (BEA_THISCALL* FUN_00513ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ca0_t> FUN_00513ca0 = {(FUN_00513ca0_t)0x00513ca0};
typedef uint32_t (BEA_THISCALL* FUN_00513e00_t)(uint32_t);
static const bea_guard<FUN_00513e00_t> FUN_00513e00 = {(FUN_00513e00_t)0x00513e00};
typedef uint32_t (BEA_THISCALL* FUN_00513e20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513e20_t> FUN_00513e20 = {(FUN_00513e20_t)0x00513e20};
typedef undefined4 (BEA_THISCALL* FUN_00527cc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00527cc0_t> FUN_00527cc0 = {(FUN_00527cc0_t)0x00527cc0};
typedef undefined4 (BEA_THISCALL* FUN_00527d20_t)(uint32_t);
static const bea_guard<FUN_00527d20_t> FUN_00527d20 = {(FUN_00527d20_t)0x00527d20};
typedef uint32_t (BEA_THISCALL* FUN_00527da0_t)(uint32_t);
static const bea_guard<FUN_00527da0_t> FUN_00527da0 = {(FUN_00527da0_t)0x00527da0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};
typedef undefined4 (BEA_THISCALL* FUN_005588f0_t)(uint32_t);
static const bea_guard<FUN_005588f0_t> FUN_005588f0 = {(FUN_005588f0_t)0x005588f0};
typedef uint32_t (BEA_THISCALL* FUN_00558fb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00558fb0_t> FUN_00558fb0 = {(FUN_00558fb0_t)0x00558fb0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_0054d530(void * this_, int *param_1, uint param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  void *this_00;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;

  alignas(16) uint8_t bea_frame_[0xb0] = {};   // the original stack frame (emulate_frame)
  int &iStack_a4 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0xa4);
  int &local_a0 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0xa0);
  int &iStack_90 = *reinterpret_cast<int *>(bea_frame_ + 0xb0 - 0x90);
  uint &uStack_88 = *reinterpret_cast<uint *>(bea_frame_ + 0xb0 - 0x88);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x80);
  undefined4 &uStack_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x7c);
  undefined4 &uStack_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x78);
  undefined4 &uStack_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x74);
  undefined4 &uStack_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x70);
  undefined4 &uStack_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x6c);
  undefined4 &uStack_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x68);
  undefined4 &uStack_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x64);
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x60);
  undefined4 &uStack_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x58);
  undefined4 &uStack_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x4c);
  undefined4 &uStack_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x48);
  undefined4 &uStack_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x44);
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x34);
  undefined4 &uStack_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x30);
  undefined4 &uStack_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x2c);
  undefined4 &uStack_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x28);
  undefined4 &uStack_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x24);
  undefined4 &uStack_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x20);
  undefined4 &uStack_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x14);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x4);
  if (0 < *(int *)((int)this_ + 0x108)) {
    local_a0 = 0;
    if ((param_1 != (int *)0x0) && (iVar5 = bea_vcall<uint32_t>(param_1, 0x1c), -1 < iVar5)) {
      fVar13 = (float10)bea_vcall<float10>(param_1, 0x18);
      iVar12 = *(int *)(*(int *)(*(int *)((int)this_ + 0x10c) + 0x128) + 0x18);
      fVar13 = (float10)FUN_0055dfe7((double)(fVar13 * (float10)*(int *)(iVar12 + 0x1c +
                                                                        iVar5 * 0x24) +
                                             (float10)*(int *)(iVar12 + iVar5 * 0x24 + 0x14)));
      iStack_90 = (int)(longlong)ROUND(fVar13);
      local_a0 = iStack_90 % *(int *)(*(int *)((int)this_ + 0x10c) + 0xb8);
    }
    if ((*(int *)((int)this_ + 0x110) != 0) || (DAT_0089ce90 != (void *)0x0)) {
      if (DAT_00854e6c != '\0') {
        FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(1));
      }
      this_00 = *(void **)((int)this_ + 0x110);
      if ((*(void **)((int)this_ + 0x110) != (void *)0x0) ||
         (this_00 = DAT_0089ce90, DAT_0089ce90 != (void *)0x0)) {
        FUN_00501cd0(bea_arg(this_00));
      }
    }
    if (*(int *)((int)this_ + 0x110) == 0) {
      if (DAT_0089ce90 == (void *)0x0) {
        _DAT_009c73d4 = *(undefined4 *)((int)this_ + 0x118);
        DAT_009c741c = 1;
      }
      else {
        FUN_00513e20(bea_arg(&DAT_00855bb0), bea_arg(DAT_0089ce90));
      }
    }
    else {
      FUN_00513e20(bea_arg(&DAT_00855bb0), bea_arg(*(int *)((int)this_ + 0x110)));
    }
    if ((*(int *)((int)this_ + 0x110) == 0) && (DAT_0089ce90 == (void *)0x0)) {
      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(1), bea_arg(0));
    }
    uVar2 = DAT_0063012c;
    iVar12 = 0;
    iVar5 = *(int *)((int)this_ + 0x108);
    if (0 < iVar5) {
      uVar7 = param_2 & 0x10;
      do {
        iVar10 = 6;
        iStack_a4 = 6;
        if (uVar7 == 0x10) {
          iVar10 = 1;
          iStack_a4 = 1;
        }
        if ((DAT_00704e48 == 8) || (DAT_00704e48 == 4)) {
          iVar10 = 1;
          iStack_a4 = 1;
        }
        if (DAT_00630130 == 0) {
          iVar10 = 1;
          iStack_a4 = 1;
        }
        if ((param_2 & 0x40) != 0) {
          iVar10 = 0;
          iStack_a4 = 0;
        }
        iVar11 = *(int *)((int)this_ + iVar12 * 4 + 8);
        if (*(int *)(iVar11 + 0x1c) == 0) {
          iVar10 = 0;
          iStack_a4 = 0;
        }
        bea_vcall<uint32_t>(DAT_00888a50, 0x1a0, DAT_00888a50,*(undefined4 *)(iVar11 + 4));
        bea_vcall<uint32_t>(DAT_00888a50, 0x190, DAT_00888a50,0,**(undefined4 **)((int)this_ + iVar12 * 4 + 8),0,
                   *(undefined4 *)((int)this_ + 0x114));
        iVar11 = 0;
        if (iVar10 != 0) {
          do {
            if ((&DAT_009c63a4)[iVar11] != '\x02') {
              iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
              iVar1 = *(int *)(iVar10 + 0x20 + iVar11 * 4);
              if (iVar1 != 0) {
                if (DAT_00704e48 == 8) {
                  switch(*(undefined4 *)((int)this_ + 0x11c)) {
                  default:
                    uVar6 = 1;
                    break;
                  case 1:
                    uVar6 = 2;
                    break;
                  case 2:
                    uVar6 = 3;
                    break;
                  case 3:
                    uVar6 = 4;
                    break;
                  case 4:
                    uVar6 = 5;
                    break;
                  case 5:
                    uVar6 = 6;
                  }
                  FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar6), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
                }
                else {
                  uStack_88 = (uint)(longlong)
                                    ROUND((float)(int)uVar2 *
                                          *(float *)(*(int *)(iVar1 + 0xc) +
                                                    (local_a0 % *(int *)(iVar1 + 8)) * 4));
                  if (iVar11 != 0) {
                    uStack_88 = (DAT_00630130 * uStack_88) / 100;
                  }
                  if (10 < (int)uStack_88) {
                    DAT_0063012c = uStack_88;
                    if (uVar7 == 0x10) {
                      DAT_006601ac[0x22] = 5;
                      cVar4 = FUN_005588f0(bea_arg(DAT_006601ac));
                      bea_vcall<uint32_t>(DAT_006601ac, 0x20);
                      FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(1), bea_arg(0));
                    }
                    else {
                      *(int *)(**(int **)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 + iVar11 * 4)
                              + 0x88) = iVar11;
                      piVar9 = *(int **)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 + iVar11 * 4);
                      *(undefined4 *)(*piVar9 + 0x8c) =
                           *(undefined4 *)(piVar9[4] + (local_a0 % piVar9[2]) * 4);
                      piVar9 = *(int **)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 + iVar11 * 4);
                      *(undefined4 *)(*piVar9 + 0x90) =
                           *(undefined4 *)(piVar9[5] + (local_a0 % piVar9[2]) * 4);
                      piVar9 = *(int **)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 + iVar11 * 4);
                      *(undefined4 *)(*piVar9 + 0x94) =
                           *(undefined4 *)(piVar9[6] + (local_a0 % piVar9[2]) * 4);
                      piVar9 = *(int **)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 + iVar11 * 4);
                      *(undefined4 *)(*piVar9 + 0x98) =
                           *(undefined4 *)(piVar9[7] + (local_a0 % piVar9[2]) * 4);
                      cVar4 = FUN_005588f0(bea_arg((void *)**(undefined4 **)
                                                     (*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 +
                                                     iVar11 * 4)));
                      bea_vcall<uint32_t>(**(undefined4 **)
                                             (*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 +
                                             iVar11 * 4), 0x20);
                    }
                    if (cVar4 != '\0') {
                      if (((iVar11 == 0) || ((&DAT_009c63a4)[iVar11] != '\0')) ||
                         (iVar10 = FUN_00513e00(bea_arg(&DAT_00855bb0)), -1 < iVar10)) {
                        (&DAT_009c63a4)[iVar11] = 1;
                        iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
                        if (((*(int *)(**(int **)(iVar10 + 0x20 + iVar11 * 4) + 0xb4) == 0) ||
                            (iVar11 != 0)) || (DAT_00704e48 == 4)) {
                          switch(*(undefined4 *)((int)this_ + 0x11c)) {
                          default:
                            uVar6 = 1;
                            break;
                          case 1:
                            uVar6 = 2;
                            break;
                          case 2:
                            uVar6 = 3;
                            break;
                          case 3:
                            uVar6 = 4;
                            break;
                          case 4:
                            uVar6 = 5;
                            break;
                          case 5:
                            uVar6 = 6;
                          }
                          FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar6), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
                        }
                        else {
                          cVar4 = FUN_00527cc0(bea_arg(&DAT_009c6390), bea_arg(1));
                          if (cVar4 == '\0') {
                            FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
                            FUN_00513bc0(bea_arg(0xf), bea_arg(0));
                            FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
                            switch(*(undefined4 *)((int)this_ + 0x11c)) {
                            default:
                              uVar6 = 1;
                              break;
                            case 1:
                              uVar6 = 2;
                              break;
                            case 2:
                              uVar6 = 3;
                              break;
                            case 3:
                              uVar6 = 4;
                              break;
                            case 4:
                              uVar6 = 5;
                              break;
                            case 5:
                              uVar6 = 6;
                            }
                            iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
                            FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar6), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
                            uVar6 = DAT_00855578;
                            FUN_00513bc0(bea_arg(0xe), bea_arg(0));
                            FUN_00513bc0(bea_arg(0x1b), bea_arg(1));
                            FUN_00513bc0(bea_arg(0xf), bea_arg(1));
                            cVar4 = DAT_009c68ad;
                            DAT_009c68ad = 0;
                            DAT_009c6910 = 1;
                            FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
                            switch(*(undefined4 *)((int)this_ + 0x11c)) {
                            default:
                              uVar8 = 1;
                              break;
                            case 1:
                              uVar8 = 2;
                              break;
                            case 2:
                              uVar8 = 3;
                              break;
                            case 3:
                              uVar8 = 4;
                              break;
                            case 4:
                              uVar8 = 5;
                              break;
                            case 5:
                              uVar8 = 6;
                            }
                            iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
                            FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar8), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
                            FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
                            DAT_009c68ad = cVar4 != '\0';
                            DAT_009c6910 = 1;
                            FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
                            FUN_00513bc0(bea_arg(0xe), bea_arg(uVar6));
                          }
                          else {
                            FUN_00513bc0(bea_arg(0x1b), bea_arg(0));
                            FUN_00513bc0(bea_arg(0xf), bea_arg(0));
                            FUN_00513820(bea_arg(1), bea_arg(1), bea_arg(0xd));
                            FUN_00513820(bea_arg(1), bea_arg(2), bea_arg(2));
                            FUN_00513820(bea_arg(1), bea_arg(3), bea_arg(1));
                            FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(0));
                            uVar6 = FUN_00558690(bea_arg((void *)**(undefined4 **)
                                                           (*(int *)((int)this_ + iVar12 * 4 + 8) +
                                                           0x20)));
                            FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(1), bea_arg(uVar6));
                            cVar4 = FUN_00527d20(bea_arg(&DAT_009c6390));
                            if (cVar4 != '\0') {
                              switch(*(undefined4 *)((int)this_ + 0x11c)) {
                              default:
                                uVar6 = 1;
                                break;
                              case 1:
                                uVar6 = 2;
                                break;
                              case 2:
                                uVar6 = 3;
                                break;
                              case 3:
                                uVar6 = 4;
                                break;
                              case 4:
                                uVar6 = 5;
                                break;
                              case 5:
                                uVar6 = 6;
                              }
                              iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
                              FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar6), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
                              FUN_00527da0(bea_arg(&DAT_009c6390));
                            }
                            FUN_00513870(bea_arg(1), bea_arg(1), bea_arg(1));
                            FUN_00513bc0(bea_arg(0xf), bea_arg(1));
                          }
                        }
                      }
                      else {
                        FUN_00441740(&DAT_0066eb90,s_Mesh_layer__d_disabled_006512d8,iVar11);
                        (&DAT_009c63a4)[iVar11] = 2;
                      }
                    }
                    piVar9 = DAT_006601ac;
                    if (uVar7 != 0x10) {
                      piVar9 = (int *)**(undefined4 **)
                                        (*(int *)((int)this_ + iVar12 * 4 + 8) + 0x20 + iVar11 * 4);
                    }
                    FUN_00558fb0(bea_arg(piVar9), bea_arg(1));
                  }
                }
              }
            }
            iVar11 = iVar11 + 1;
          } while (BEA_LOOP_GUARD((iVar11 < iStack_a4)));
        }
        if ((((param_2 & 0x40) != 0) && (DAT_00704e48 != 4)) &&
           (*(int *)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x1c) != 0)) {
          DAT_0089c9c4[0x22] = 2;
          FUN_005588f0(bea_arg(DAT_0089c9c4));
          bea_vcall<uint32_t>(DAT_0089c9c4, 0x20);
          FUN_00513bc0(bea_arg(0x89), bea_arg(0));
          fVar13 = (float10)FUN_0044a0c0();
          uStack_80 = 0x3f000000;
          uStack_7c = 0;
          uStack_78 = 0;
          uStack_74 = 0;
          fStack_50 = (float)(fVar13 * (float10)0.1f);
          uStack_70 = 0;
          uStack_6c = 0xbf000000;
          uStack_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          fStack_4c = (float)(fVar13 * (float10)0.1f * (float10)0.5f);
          uStack_58 = 0x3f800000;
          uStack_54 = 0;
          uStack_48 = 0;
          uStack_44 = 0x3f800000;
          bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&uStack_80);
          FUN_00513bc0(bea_arg(0x13), bea_arg(5));
          FUN_00513bc0(bea_arg(0x14), bea_arg(2));
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(1), bea_arg(0));
          switch(*(undefined4 *)((int)this_ + 0x11c)) {
          default:
            uVar6 = 1;
            break;
          case 1:
            uVar6 = 2;
            break;
          case 2:
            uVar6 = 3;
            break;
          case 3:
            uVar6 = 4;
            break;
          case 4:
            uVar6 = 5;
            break;
          case 5:
            uVar6 = 6;
          }
          iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
          FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar6), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
          FUN_00558fb0(bea_arg(DAT_0089c9c4), bea_arg(1));
          DAT_0089c9c4[0x22] = 0;
          FUN_00513bc0(bea_arg(0x89), bea_arg(1));
          FUN_00513bc0(bea_arg(0x13), bea_arg(5));
          FUN_00513bc0(bea_arg(0x14), bea_arg(6));
        }
        if (((((param_2 & 0x20) != 0) && (DAT_00704e48 != 4)) &&
            (*(int *)(*(int *)((int)this_ + iVar12 * 4 + 8) + 0x1c) != 0)) &&
           (cVar4 = FUN_00527cc0(bea_arg(&DAT_009c63b0), bea_arg(1)), uVar3 = DAT_0063012c, cVar4 != '\0')) {
          DAT_0063012c = (int)(DAT_0063012c * DAT_00704e64) / 100;
          DAT_0089c9c0[0x22] = 2;
          FUN_005588f0(bea_arg(DAT_0089c9c0));
          bea_vcall<uint32_t>(DAT_0089c9c0, 0x20);
          FUN_00513bc0(bea_arg(0x89), bea_arg(0));
          fVar13 = (float10)FUN_0044a0c0();
          uStack_40 = 0x3f000000;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          fStack_10 = (float)(fVar13 * (float10)0.2f);
          uStack_30 = 0;
          uStack_2c = 0xbf000000;
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          fStack_c = (float)(fVar13 * (float10)0.2f * (float10)0.5f);
          uStack_18 = 0x3f800000;
          uStack_14 = 0;
          uStack_8 = 0;
          uStack_4 = 0x3f800000;
          bea_vcall<uint32_t>(DAT_00888a50, 0xb0, DAT_00888a50,0x10,&uStack_40);
          FUN_00513bc0(bea_arg(0x13), bea_arg(5));
          FUN_00513bc0(bea_arg(0x14), bea_arg(2));
          FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(1), bea_arg(1));
          cVar4 = FUN_00527d20(bea_arg(&DAT_009c63b0));
          if (cVar4 != '\0') {
            FUN_00527da0(bea_arg(&DAT_009c63b0));
            switch(*(undefined4 *)((int)this_ + 0x11c)) {
            default:
              uVar6 = 1;
              break;
            case 1:
              uVar6 = 2;
              break;
            case 2:
              uVar6 = 3;
              break;
            case 3:
              uVar6 = 4;
              break;
            case 4:
              uVar6 = 5;
              break;
            case 5:
              uVar6 = 6;
            }
            iVar10 = *(int *)((int)this_ + iVar12 * 4 + 8);
            FUN_00513c70(bea_arg(&DAT_00855bb0), bea_arg(uVar6), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x14)), bea_arg(0), bea_arg(*(undefined4 *)(iVar10 + 0x18)));
          }
          FUN_00558fb0(bea_arg(DAT_0089c9c0), bea_arg(1));
          DAT_0089c9c0[0x22] = 0;
          DAT_0063012c = uVar3;
          FUN_00513bc0(bea_arg(0x89), bea_arg(1));
          FUN_00513bc0(bea_arg(0x13), bea_arg(5));
          FUN_00513bc0(bea_arg(0x14), bea_arg(6));
        }
        iVar12 = iVar12 + 1;
      } while (BEA_LOOP_GUARD((iVar12 < iVar5)));
    }
    DAT_0063012c = uVar2;
    if ((*(int *)((int)this_ + 0x110) != 0) && (DAT_00854e6c != '\0')) {
      FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(0));
    }
    FUN_00513820(bea_arg(1), bea_arg(0xb), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054d530, ap_0054d530));

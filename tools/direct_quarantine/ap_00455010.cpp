// auto-ported from 00455010_FUN_00455010.c (FUN_00455010, 3467 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x720: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char iStack_70c;
typedef char uStack_6e8;
typedef char uStack_6f0;
typedef char uStack_6f8;
#define DAT_00677d78 GLOBAL_AT(short, 0x00677d78)
#define DAT_00662ac4 GLOBAL_AT(int, 0x00662ac4)
#define DAT_00662abc GLOBAL_AT(int, 0x00662abc)
#define DAT_0067786c GLOBAL_AT(int, 0x0067786c)
#define DAT_00677868 GLOBAL_AT(int, 0x00677868)
#define DAT_006290b4 GLOBAL_AT(char, 0x006290b4)
#define DAT_0067787c GLOBAL_AT(int, 0x0067787c)
#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_00629110 GLOBAL_AT(int, 0x00629110)
#define DAT_00629120 GLOBAL_AT(int, 0x00629120)
#define DAT_00677880 GLOBAL_AT(undefined, 0x00677880)
#define DAT_00629118 GLOBAL_AT(int, 0x00629118)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00640054 GLOBAL_AT(char, 0x00640054)
#define u________00629124 ((short*)0x00629124)
typedef undefined1 * (BEA_CDECL* FUN_0042db10_t)(int, ...);
static const bea_guard<FUN_0042db10_t> FUN_0042db10 = {(FUN_0042db10_t)0x0042db10};
typedef uint32_t (BEA_CDECL* FUN_00453f50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00453f50_t> FUN_00453f50 = {(FUN_00453f50_t)0x00453f50};
typedef uint32_t (BEA_THISCALL* FUN_00456080_t)(uint32_t);
static const bea_guard<FUN_00456080_t> FUN_00456080 = {(FUN_00456080_t)0x00456080};
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_CDECL* FUN_00523b50_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00523b50_t> FUN_00523b50 = {(FUN_00523b50_t)0x00523b50};
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef int (BEA_CDECL* FUN_0055e598_t)(void *, void *, ...);
static const bea_guard<FUN_0055e598_t> FUN_0055e598 = {(FUN_0055e598_t)0x0055e598};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055e624_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e624_t> FUN_0055e624 = {(FUN_0055e624_t)0x0055e624};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static uint32_t BEA_THISCALL ap_00455010(void * this_, int param_1, undefined4 param_2, float param_3, int param_4)
{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  void *this_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int *piVar20;
  undefined4 uVar21;
  alignas(16) uint8_t bea_frame_[0x720] = {};   // the original stack frame (emulate_frame)
  float &local_71c = *reinterpret_cast<float *>(bea_frame_ + 0x720 - 0x71c);
  float &local_718 = *reinterpret_cast<float *>(bea_frame_ + 0x720 - 0x718);
  int &iStack_70c = *reinterpret_cast<int *>(bea_frame_ + 0x720 - 0x70c);
  int &local_704 = *reinterpret_cast<int *>(bea_frame_ + 0x720 - 0x704);
  int &local_700 = *reinterpret_cast<int *>(bea_frame_ + 0x720 - 0x700);
  float &local_6fc = *reinterpret_cast<float *>(bea_frame_ + 0x720 - 0x6fc);
  uint &uStack_6f8 = *reinterpret_cast<uint *>(bea_frame_ + 0x720 - 0x6f8);
  undefined4 &local_6f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x6f4);
  uint &uStack_6f0 = *reinterpret_cast<uint *>(bea_frame_ + 0x720 - 0x6f0);
  undefined4 &uStack_6ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x6ec);
  uint &uStack_6e8 = *reinterpret_cast<uint *>(bea_frame_ + 0x720 - 0x6e8);
  undefined4 &local_6e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x6e4);
  uint &local_6e0 = *reinterpret_cast<uint *>(bea_frame_ + 0x720 - 0x6e0);
  undefined4 &uStack_6dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x6dc);
  CHAR (&local_6d8)[40] = *reinterpret_cast<CHAR (*)[40]>(bea_frame_ + 0x720 - 0x6d8);
  undefined2 &local_6b0 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x720 - 0x6b0);
  undefined4 (&local_6ae)[149] = *reinterpret_cast<undefined4 (*)[149]>(bea_frame_ + 0x720 - 0x6ae);
  undefined1 (&local_458)[40] = *reinterpret_cast<undefined1 (*)[40]>(bea_frame_ + 0x720 - 0x458);
  undefined4 &local_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x430);
  undefined4 &local_42c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x42c);
  undefined4 &local_428 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x428);
  undefined4 &local_424 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x424);
  undefined4 &local_218 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x218);
  undefined4 &local_214 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x214);
  undefined4 &local_210 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x210);
  undefined4 &local_20c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x720 - 0x20c);
  local_718 = param_3;
  FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(1));
  iVar9 = *(int *)((int)this_ + 0x20);
  if (iVar9 < 0x16) {
    local_6fc = param_3 + 225.0f;
    do {
      if (local_6fc <= local_718) break;
      local_6b0 = DAT_00677d78;
      puVar10 = local_6ae;
      for (iVar7 = 0x95; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      uVar8 = 0xff7f7f7f;
      *(undefined2 *)puVar10 = 0;
      bVar2 = false;
      iVar7 = iVar9 + 0x37;
      switch(iVar9) {
      case -0x36:
      case 0:
      case 3:
      case 8:
      case 0xd:
      case 0x10:
switchD_004550c4_caseD_ffffffca:
        if (iVar7 == 0x37) {
          if (param_1 == 0) {
            iVar7 = 0x33;
          }
          else if (param_1 == 2) {
            iVar7 = 0x34;
          }
LAB_00455a51:
          uVar4 = FUN_00524830(iVar7);
LAB_00455a5f:
          FUN_0055e64e(bea_arg(&local_6b0), bea_arg(uVar4));
          goto switchD_004551e0_caseD_3;
        }
        if (param_1 == 1) goto LAB_00455a51;
        break;
      default:
        if (param_1 == 1) goto switchD_004550c4_caseD_ffffffca;
        if (iVar7 == 0x38) {
          if (*(int *)(&DAT_00662ac4 + (param_1 / 2) * 4) != 0) {
            uVar4 = FUN_00524830(0x36);
            goto LAB_00455a5f;
          }
          iVar7 = 0x35;
          goto LAB_00455a51;
        }
        if (iVar7 == 0x39) {
          if (*(int *)(&DAT_00662abc + (param_1 / 2) * 4) == 0) {
            uVar4 = FUN_00524830(0x35);
          }
          else {
            uVar4 = FUN_00524830(0x36);
          }
          goto LAB_00455a5f;
        }
        if (((DAT_0067786c == iVar7) && (param_1 / 2 == DAT_00677868)) && (DAT_006290b4 == '\0')) {
          bVar2 = true;
          FUN_0055e64e(bea_arg(&local_6b0), bea_arg(u________00629124));
          goto switchD_004551e0_caseD_3;
        }
        FUN_00453f50(bea_arg(iVar7), bea_arg(0), bea_arg(((void*)0x00456060)));
        iVar7 = FUN_0042db10(DAT_0067787c);
        piVar20 = (int *)(iVar7 + 8 + (param_1 / 2) * 0xc);
        if ((piVar20 == (int *)0x0) || (iVar7 = *piVar20, iVar7 == -1)) {
          uVar4 = 0x78;
LAB_00455a13:
          uVar4 = FUN_00524830(uVar4);
          FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
        }
        else {
          iVar5 = piVar20[1];
          switch(iVar5) {
          case 0:
          case 1:
          case 2:
            if ((iVar7 < 0) || (DAT_00888ff8 <= iVar7)) {
              uVar4 = FUN_00524830(0x57);
            }
            else {
              local_430 = 0x218;
              local_42c = 0x10;
              local_428 = 0;
              local_424 = 0;
              uVar4 = FUN_00524830(iVar7 + 0x58);
            }
            FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
            FUN_0055e598(local_458,&DAT_00629110,(int)(short)piVar20[2]);
            FUN_0055e624(bea_arg(&local_6b0), bea_arg(local_458));
            break;
          case 4:
          case 5:
          case 6:
          case 7:
            if (iVar5 == 6) {
              iVar5 = 4;
            }
            else if (iVar5 == 7) {
              iVar5 = 5;
            }
            if ((iVar7 < 0) || (DAT_00888ff8 <= iVar7)) {
              uVar4 = FUN_00524830(0x5d);
            }
            else {
              local_218 = 0x218;
              local_214 = 0x10;
              local_210 = 0;
              local_20c = 0;
              uVar4 = FUN_00524830(iVar7 + 0x5e);
            }
            FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
            FUN_0055e624(bea_arg(&local_6b0), bea_arg(&DAT_00629120));
            if (iVar5 == 4) {
              sVar1 = (short)piVar20[2];
              if (sVar1 == -1) {
                uVar4 = 0x66;
                goto LAB_00455a13;
              }
              if (sVar1 == -2) {
                uVar4 = FUN_00524830(0x68);
                FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              }
              else if (sVar1 == -3) {
                uVar4 = FUN_00524830(0x6a);
                FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              }
              else {
                if (sVar1 == -4) {
                  uVar4 = 0x6c;
                  goto LAB_00455a13;
                }
                if (sVar1 == -5) {
                  uVar4 = FUN_00524830(0x6e);
                  FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
                }
                else if (sVar1 == -6) {
                  uVar4 = FUN_00524830(0x70);
                  FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
                }
              }
            }
            else if (iVar5 == 5) {
              sVar1 = (short)piVar20[2];
              if (sVar1 == -1) {
                uVar4 = FUN_00524830(0x67);
                FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              }
              else {
                if (sVar1 == -2) {
                  uVar4 = 0x69;
                  goto LAB_00455a13;
                }
                if (sVar1 == -3) {
                  uVar4 = FUN_00524830(0x6b);
                  FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
                }
                else if (sVar1 == -4) {
                  uVar4 = FUN_00524830(0x6d);
                  FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
                }
                else {
                  if (sVar1 == -5) {
                    uVar4 = 0x6f;
                    goto LAB_00455a13;
                  }
                  if (sVar1 == -6) {
                    uVar4 = FUN_00524830(0x71);
                    FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
                  }
                }
              }
            }
            break;
          case 8:
          case 9:
          case 10:
            sVar1 = *(short *)((int)piVar20 + 10);
            iVar7 = piVar20[2];
            iVar5 = GetKeyNameTextA((int)(short)iVar7 << 0x10,local_6d8,0x28);
            if (iVar5 == 0) {
              switch((int)(short)iVar7) {
              case 1:
                puVar6 = (undefined *)FUN_00524830(0x7d);
                break;
              default:
                uVar4 = FUN_00524830(0x51);
                FUN_0055e64e(bea_arg(&DAT_00677880), bea_arg(uVar4));
                FUN_0055e624(bea_arg(&DAT_00677880), bea_arg(&DAT_00629118));
                if (sVar1 == 0) {
                  iVar7 = FUN_0055e607(bea_arg(&DAT_00677880));
                  *(undefined2 *)((int)&DAT_0067787c + iVar7 * 2 + 2) = 0x3f;
                }
                else {
                  iVar7 = FUN_0055e607(bea_arg(&DAT_00677880));
                  *(short *)((int)&DAT_0067787c + iVar7 * 2 + 2) = sVar1;
                }
                goto LAB_004556f2;
              case 0xe:
                puVar6 = (undefined *)FUN_00524830(0x7e);
                break;
              case 0xf:
                puVar6 = (undefined *)FUN_00524830(0x7f);
                break;
              case 0x1c:
                puVar6 = (undefined *)FUN_00524830(0x80);
                break;
              case 0x1d:
                puVar6 = (undefined *)FUN_00524830(0x81);
                break;
              case 0x27:
                puVar6 = (undefined *)FUN_00524830(0x83);
                break;
              case 0x28:
                puVar6 = (undefined *)FUN_00524830(0x84);
                break;
              case 0x29:
                puVar6 = (undefined *)FUN_00524830(0x85);
                break;
              case 0x2a:
                puVar6 = (undefined *)FUN_00524830(0x86);
                break;
              case 0x36:
                puVar6 = (undefined *)FUN_00524830(0x87);
                break;
              case 0x37:
                puVar6 = (undefined *)FUN_00524830(0xa6);
                break;
              case 0x38:
                puVar6 = (undefined *)FUN_00524830(0x88);
                break;
              case 0x39:
                puVar6 = (undefined *)FUN_00524830(0x89);
                break;
              case 0x3a:
                puVar6 = (undefined *)FUN_00524830(0x82);
                break;
              case 0x3b:
                puVar6 = (undefined *)FUN_00524830(0x8c);
                break;
              case 0x3c:
                puVar6 = (undefined *)FUN_00524830(0x8d);
                break;
              case 0x3d:
                puVar6 = (undefined *)FUN_00524830(0x8e);
                break;
              case 0x3e:
                puVar6 = (undefined *)FUN_00524830(0x8f);
                break;
              case 0x3f:
                puVar6 = (undefined *)FUN_00524830(0x90);
                break;
              case 0x40:
                puVar6 = (undefined *)FUN_00524830(0x91);
                break;
              case 0x41:
                puVar6 = (undefined *)FUN_00524830(0x92);
                break;
              case 0x42:
                puVar6 = (undefined *)FUN_00524830(0x93);
                break;
              case 0x43:
                puVar6 = (undefined *)FUN_00524830(0x94);
                break;
              case 0x44:
                puVar6 = (undefined *)FUN_00524830(0x95);
                break;
              case 0x45:
                puVar6 = (undefined *)FUN_00524830(0x7c);
                break;
              case 0x46:
                puVar6 = (undefined *)FUN_00524830(0x99);
                break;
              case 0x47:
                puVar6 = (undefined *)FUN_00524830(0xa8);
                break;
              case 0x48:
                puVar6 = (undefined *)FUN_00524830(0xa9);
                break;
              case 0x49:
                puVar6 = (undefined *)FUN_00524830(0xaa);
                break;
              case 0x4a:
                puVar6 = (undefined *)FUN_00524830(0xa7);
                break;
              case 0x4b:
                puVar6 = (undefined *)FUN_00524830(0xac);
                break;
              case 0x4c:
                puVar6 = (undefined *)FUN_00524830(0xad);
                break;
              case 0x4d:
                puVar6 = (undefined *)FUN_00524830(0xae);
                break;
              case 0x4e:
                puVar6 = (undefined *)FUN_00524830(0xab);
                break;
              case 0x4f:
                puVar6 = (undefined *)FUN_00524830(0xaf);
                break;
              case 0x50:
                puVar6 = (undefined *)FUN_00524830(0xb0);
                break;
              case 0x51:
                puVar6 = (undefined *)FUN_00524830(0xb1);
                break;
              case 0x52:
                puVar6 = (undefined *)FUN_00524830(0xb3);
                break;
              case 0x53:
                puVar6 = (undefined *)FUN_00524830(0xb4);
                break;
              case 0x57:
                puVar6 = (undefined *)FUN_00524830(0x96);
                break;
              case 0x58:
                puVar6 = (undefined *)FUN_00524830(0x97);
                break;
              case 0x9c:
                puVar6 = (undefined *)FUN_00524830(0xb2);
                break;
              case 0x9d:
                puVar6 = (undefined *)FUN_00524830(0x8b);
                break;
              case 0xb5:
                puVar6 = (undefined *)FUN_00524830(0xa5);
                break;
              case 0xb7:
                puVar6 = (undefined *)FUN_00524830(0x98);
                break;
              case 0xb8:
                puVar6 = (undefined *)FUN_00524830(0x8a);
                break;
              case 0xc5:
                puVar6 = (undefined *)FUN_00524830(0xa4);
                break;
              case 199:
                puVar6 = (undefined *)FUN_00524830(0x9b);
                break;
              case 200:
                puVar6 = (undefined *)FUN_00524830(0xa1);
                break;
              case 0xc9:
                puVar6 = (undefined *)FUN_00524830(0x9c);
                break;
              case 0xcb:
                puVar6 = (undefined *)FUN_00524830(0xa0);
                break;
              case 0xcd:
                puVar6 = (undefined *)FUN_00524830(0xa2);
                break;
              case 0xcf:
                puVar6 = (undefined *)FUN_00524830(0x9e);
                break;
              case 0xd0:
                puVar6 = (undefined *)FUN_00524830(0xa3);
                break;
              case 0xd1:
                puVar6 = (undefined *)FUN_00524830(0x9f);
                break;
              case 0xd2:
                puVar6 = (undefined *)FUN_00524830(0x9a);
                break;
              case 0xd3:
                puVar6 = (undefined *)FUN_00524830(0x9d);
                break;
              case 0xdb:
                puVar6 = (undefined *)FUN_00524830(0x7b);
                break;
              case 0xdc:
                puVar6 = (undefined *)FUN_00524830(0x7a);
                break;
              case 0xdd:
                puVar6 = (undefined *)FUN_00524830(0x79);
              }
            }
            else {
              iVar7 = -1;
              pcVar11 = local_6d8;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                cVar3 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (BEA_LOOP_GUARD((cVar3 != '\0')));
              if (iVar7 == -3) {
                uVar4 = FUN_00524830(0x51);
                FUN_0055e64e(bea_arg(&DAT_00677880), bea_arg(uVar4));
                FUN_0055e624(bea_arg(&DAT_00677880), bea_arg(&DAT_00629120));
                uVar4 = FUN_004f7bf0(bea_arg(local_6d8));
                FUN_0055e624(bea_arg(&DAT_00677880), bea_arg(uVar4));
LAB_004556f2:
                puVar6 = &DAT_00677880;
              }
              else {
                puVar6 = (undefined *)FUN_004f7bf0(bea_arg(local_6d8));
              }
            }
            FUN_0055e624(bea_arg(&local_6b0), bea_arg(puVar6));
            break;
          case 0xb:
          case 0xc:
            uVar4 = FUN_00524830(0x52);
            FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
            break;
          case 0xd:
          case 0xe:
            uVar4 = 0x53;
            goto LAB_00455a13;
          case 0xf:
          case 0x10:
          case 0x11:
            switch((short)piVar20[2]) {
            case 0:
              uVar4 = FUN_00524830(0x54);
              FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              break;
            case 1:
              uVar4 = FUN_00524830(0x55);
              FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              break;
            case 2:
              uVar4 = FUN_00524830(0x56);
              FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              break;
            case 3:
              uVar4 = FUN_00524830(0x73);
              FUN_0055e624(bea_arg(&local_6b0), bea_arg(uVar4));
              break;
            case 4:
              uVar4 = 0x72;
              goto LAB_00455a13;
            }
          }
        }
switchD_004551e0_caseD_3:
        piVar20 = &local_704;
        puVar17 = &local_6b0;
        this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
        FUN_00540680(bea_arg(this_00), bea_arg(puVar17), bea_arg(piVar20));
        if (param_1 == 0) {
          local_71c = 50.0;
        }
        else if (param_1 == 1) {
          local_71c = 320.0f - (float)local_704 * 0.5f;
        }
        else if (param_1 == 2) {
          local_71c = 590.0f - (float)local_704;
        }
        switch(iVar9) {
        case -0x36:
        case 0:
        case 3:
        case 8:
        case 0xd:
        case 0x10:
switchD_00455ada_caseD_ffffffca:
          uVar8 = 0xff3f7f2f;
          break;
        default:
          if (param_1 == 1) goto switchD_00455ada_caseD_ffffffca;
          if (param_4 != 0) {
            if ((DAT_006290b4 != '\0') &&
               (cVar3 = FUN_00523b50(bea_arg(local_71c), bea_arg(local_718), bea_arg((float)local_704 + local_71c), bea_arg((float)local_700 + local_718)), cVar3 != '\0')) {
              *(int *)((int)this_ + 0x28) = iVar9;
              *(int *)((int)this_ + 0x24) = param_1 / 2;
            }
            if ((DAT_006290b4 != '\0') &&
               (cVar3 = FUN_00523cc0(local_71c,local_718,(float)local_704 + local_71c,
                                     (float)local_700 + local_718), cVar3 != '\0')) {
              *(int *)((int)this_ + 0x24) = param_1 / 2;
              *(int *)((int)this_ + 0x28) = iVar9;
              FUN_00456080(bea_arg(this_));
            }
          }
          if (((iVar9 == *(int *)((int)this_ + 0x28)) && (param_1 / 2 == *(int *)((int)this_ + 0x24)))
             && (param_4 != 0)) {
            uVar8 = 0xff7f6f2f;
          }
        }
        if (bVar2) {
          fVar12 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
          fVar12 = _CIfmod((float10)2.0,fVar12);
          (*(uint8_t*)((char*)&DAT_00640054 + 0)) = 0;
          fVar12 = (float10)fcos(fVar12 * (float10)6.2831855f);
          iStack_70c = (int)(longlong)ROUND((fVar12 + (float10)1.0f) * (float10)0.5f * (float10)255.0f)
          ;
          uVar8 = ((uVar8 >> 8 & 0xffff0000) * iStack_70c ^ uVar8) & 0xffffff ^
                  (uVar8 >> 8 & 0xff0000) * iStack_70c;
        }
        else {
          uVar8 = ((uVar8 >> 8 & 0xffff0000) * 0xff ^ uVar8) & 0xffffff ^
                  (uVar8 >> 8 & 0xff0000) * 0xff;
        }
        if ((DAT_006290b4 == '\0') && (!bVar2)) {
          local_6e0 = uVar8 >> 0x18;
          uStack_6dc = 0;
          local_6f4 = 0;
          uStack_6f8 = uVar8 >> 0x10 & 0xff;
          local_6e4 = 0;
          uStack_6ec = 0;
          iStack_70c = (int)(longlong)ROUND((float)local_6e0 * -0.5f);
          iVar7 = iStack_70c * 0x100;
          iStack_70c = (int)(longlong)ROUND((float)uStack_6f8 * -0.5f);
          iVar7 = iVar7 + iStack_70c;
          uStack_6e8 = uVar8 >> 8 & 0xff;
          uStack_6f0 = uVar8 & 0xff;
          iStack_70c = (int)(longlong)ROUND((float)uStack_6e8 * -0.5f);
          iVar7 = iVar7 * 0x100 + iStack_70c;
          iStack_70c = (int)(longlong)ROUND((float)uStack_6f0 * 0.5f);
          uVar8 = iStack_70c + iVar7 * -0x100;
        }
        uVar21 = 0;
        uVar19 = 0;
        puVar17 = &local_6b0;
        uVar18 = 0x447a0000;
        uVar16 = 0x3f800000;
        uVar15 = 0x3f800000;
        uVar4 = 0x3ea3d70a;
        fVar13 = local_71c;
        fVar14 = local_718;
        FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(2));
        FUN_00465710(bea_arg(fVar13), bea_arg(fVar14), bea_arg(uVar4), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar8), bea_arg(puVar17), bea_arg(uVar18), bea_arg(uVar19), bea_arg(uVar21));
      }
      local_718 = local_718 + 10.0f;
      iVar9 = iVar9 + 1;
    } while (BEA_LOOP_GUARD((iVar9 < 0x16)));
  }
  FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(2));
  return FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00455010, ap_00455010));

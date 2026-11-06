// auto-ported from 0042db40_vslot15.c (CController::vslot15, 2046 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CController;
typedef char iStack_10;
typedef char iStack_14;
#define DAT_006254f8 GLOBAL_AT(int, 0x006254f8)
#define DAT_008892dc GLOBAL_AT(int, 0x008892dc)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9ac4 GLOBAL_AT(int, 0x008a9ac4)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define DAT_008892e0 GLOBAL_AT(undefined4, 0x008892e0)
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_006254f4 GLOBAL_AT(float, 0x006254f4)
#define DAT_0066e950 GLOBAL_AT(int, 0x0066e950)
#define DAT_0066e8c8 GLOBAL_AT(char, 0x0066e8c8)
#define DAT_0066e94d GLOBAL_AT(char, 0x0066e94d)
#define DAT_0066e8cc GLOBAL_AT(int, 0x0066e8cc)
#define DAT_0089bdf5 GLOBAL_AT(char, 0x0089bdf5)
#define DAT_0089bdf6 GLOBAL_AT(char, 0x0089bdf6)
#define DAT_0089bdf7 GLOBAL_AT(char, 0x0089bdf7)
#define DAT_0089bdfc GLOBAL_AT(int, 0x0089bdfc)
#define DAT_0089be14 GLOBAL_AT(int, 0x0089be14)
#define DAT_0089be2c GLOBAL_AT(int, 0x0089be2c)
#define DAT_0089be48 GLOBAL_AT(int, 0x0089be48)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define s_FATAL_ERROR__Uknown__push_type__i_006255c8 ((char*)0x006255c8)
#define s_Controller__Number_of_mappings_f_0062559c ((char*)0x0062559c)
typedef float10 (BEA_THISCALL* FUN_0042e3d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e3d0_t> FUN_0042e3d0 = {(FUN_0042e3d0_t)0x0042e3d0};
typedef uint32_t (BEA_THISCALL* FUN_0042e4d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e4d0_t> FUN_0042e4d0 = {(FUN_0042e4d0_t)0x0042e4d0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined1 (BEA_STDCALL* FUN_00515970_t)(uint32_t);
static const bea_guard<FUN_00515970_t> FUN_00515970 = {(FUN_00515970_t)0x00515970};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

int bea_mp_controller_check(int is_mp);

static void BEA_THISCALL ap_0042db40(CController * this_)
{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float fStack_20;
  int iStack_14;
  int iStack_10;
  
  iVar11 = *(int *)(this_ + 0x16c);
  if (DAT_006254f8 == -1) {
    DAT_006254f8 = 0;
    for (piVar7 = &DAT_008892dc; BEA_LOOP_GUARD((*piVar7 != -1)); piVar7 = piVar7 + 8) {
      DAT_006254f8 = DAT_006254f8 + 1;
    }
    FUN_00441740(&DAT_0066f580,s_Controller__Number_of_mappings_f_0062559c,DAT_006254f8);
  }
  if (this_[0x161] != (CController)0x0) {
    bea_vcall<uint32_t>(this_, 0x44);
  }
  fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  fVar18 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  bVar15 = (float10)*(float *)(this_ + 0x168) < fVar18 - (float10)*(float *)(this_ + 0x164);
  if (bVar15) {
    *(float *)(this_ + 0x164) = (float)fVar17;
  }
  iStack_10 = 0;
  *(undefined4 *)(this_ + 0x170) = DAT_008a9ac4;
  iStack_14 = iVar11;
  if (0 < DAT_006254f8) {
LAB_0042dc12:
    do {
      iVar10 = DAT_0089bda8;
      iVar5 = DAT_0089bda4;
      iVar9 = (&DAT_008892e0)[iStack_10 * 8 + iStack_14 * 3];
      puVar1 = &DAT_008892e0 + iStack_10 * 8 + iStack_14 * 3;
      if ((iVar9 == -1) || (DAT_00662df4 != 0)) goto switchD_0042e171_default;
      if (this_[0x161] != (CController)0x0) goto LAB_0042e218;
      iVar3 = (&DAT_008892dc)[iStack_10 * 8];
      bVar13 = (byte)iVar3;
      if (iVar3 < 0x40) {
        if (iVar3 < 0x20) {
          uVar8 = 1 << (bVar13 & 0x1f);
          uVar14 = *(uint *)(this_ + 0x14);
        }
        else {
          uVar8 = 1 << (bVar13 - 0x20 & 0x1f);
          uVar14 = *(uint *)(this_ + 0x18);
        }
      }
      else {
        uVar8 = 1 << (bVar13 - 0x40 & 0x1f);
        uVar14 = *(uint *)(this_ + 0x1c);
      }
      if ((uVar8 & uVar14) != 0) goto switchD_0042e171_default;
      switch(puVar1[1]) {
      case 0:
        iVar10 = bea_vcall<uint32_t>(this_, 0x10, iVar9,(int)*(short *)(puVar1 + 2));
        if (iVar10 == 1) {
          uVar4 = (&DAT_008892dc)[iStack_10 * 8];
          switch(uVar4) {
          case 0x19:
          case 0x1a:
          case 0x1d:
          case 0x1f:
          case 0x23:
          case 0x24:
          case 0x26:
          case 0x28:
            FUN_0042e4d0(bea_arg(this_), bea_arg(uVar4), bea_arg(0xbf800000));
            break;
          case 0x1b:
          case 0x1c:
          case 0x1e:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x25:
          case 0x27:
          default:
            FUN_0042e4d0(bea_arg(this_), bea_arg(uVar4), bea_arg(0x3f800000));
          }
        }
        break;
      case 1:
        iVar10 = bea_vcall<uint32_t>(this_, 0xc, iVar9,(int)*(short *)(puVar1 + 2));
        goto LAB_0042dca6;
      case 2:
        iVar10 = bea_vcall<uint32_t>(this_, 0x14, iVar9,(int)*(short *)(puVar1 + 2));
        goto LAB_0042dca6;
      case 3:
        iVar10 = bea_vcall<uint32_t>(this_, 0x10, iVar9,(int)*(short *)(puVar1 + 2));
        if (iVar10 != 1) break;
        iVar10 = (&DAT_008892dc)[iStack_10 * 8];
        bVar13 = (byte)iVar10;
        if (iVar10 < 0x20) {
          uVar14 = *(uint *)(this_ + 0x20);
          bVar12 = bVar13;
        }
        else {
          uVar14 = *(uint *)(this_ + 0x24);
          bVar12 = bVar13 - 0x20;
        }
        if ((1 << (bVar12 & 0x1f) & uVar14) == 0) {
          *(undefined4 *)(this_ + 0x168) = 0x3f000000;
          fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
          *(float *)(this_ + 0x164) = (float)fVar17;
        }
        else {
          if (!bVar15) {
            if (iVar10 < 0x40) {
              if (iVar10 < 0x20) {
LAB_0042df92:
                *(uint *)(this_ + 0x14) = *(uint *)(this_ + 0x14) | 1 << ((byte)iVar10 & 0x1f);
              }
              else {
                *(uint *)(this_ + 0x18) = *(uint *)(this_ + 0x18) | 1 << (bVar13 - 0x20 & 0x1f);
              }
            }
            else {
              *(uint *)(this_ + 0x1c) = *(uint *)(this_ + 0x1c) | 1 << (bVar13 - 0x40 & 0x1f);
            }
            break;
          }
          *(undefined4 *)(this_ + 0x168) = 0x3df5c28f;
        }
        goto LAB_0042dcaf;
      case 4:
        fVar17 = (float10)FUN_0042e3d0(bea_arg(this_), bea_arg(iVar9), bea_arg((int)*(short *)(puVar1 + 2)));
        if ((float10)0.0f < fVar17) {
          FUN_0042e4d0(bea_arg(this_), bea_arg((&DAT_008892dc)[iStack_10 * 8]), bea_arg((float)fVar17));
        }
        break;
      case 5:
        fVar17 = (float10)FUN_0042e3d0(bea_arg(this_), bea_arg(iVar9), bea_arg((int)*(short *)(puVar1 + 2)));
        if (fVar17 < (float10)0.0f) {
          FUN_0042e4d0(bea_arg(this_), bea_arg((&DAT_008892dc)[iStack_10 * 8]), bea_arg((float)fVar17));
        }
        break;
      case 6:
        fVar17 = (float10)FUN_0042e3d0(bea_arg(this_), bea_arg(iVar9), bea_arg((int)*(short *)(puVar1 + 2)));
        if ((float10)0.9f < fVar17) {
          iVar10 = (&DAT_008892dc)[iStack_10 * 8];
          bVar13 = (byte)iVar10;
          if (iVar10 < 0x20) {
            uVar14 = *(uint *)(this_ + 0x20);
          }
          else {
            bVar13 = bVar13 - 0x20;
            uVar14 = *(uint *)(this_ + 0x24);
          }
          if ((1 << (bVar13 & 0x1f) & uVar14) == 0) {
            *(undefined4 *)(this_ + 0x168) = 0x3f000000;
            fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
            *(float *)(this_ + 0x164) = (float)fVar17;
          }
          else {
            if (!bVar15) {
              if (0x3f < iVar10) goto LAB_0042df64;
LAB_0042df76:
              if (iVar10 < 0x20) goto LAB_0042df92;
              *(uint *)(this_ + 0x18) = *(uint *)(this_ + 0x18) | 1 << ((char)iVar10 - 0x20U & 0x1f);
              break;
            }
            *(undefined4 *)(this_ + 0x168) = 0x3df5c28f;
          }
          goto LAB_0042dcaf;
        }
        break;
      case 7:
        fVar17 = (float10)FUN_0042e3d0(bea_arg(this_), bea_arg(iVar9), bea_arg((int)*(short *)(puVar1 + 2)));
        if (fVar17 < (float10)-0.9f) {
          iVar10 = (&DAT_008892dc)[iStack_10 * 8];
          bVar13 = (byte)iVar10;
          if (iVar10 < 0x20) {
            uVar14 = *(uint *)(this_ + 0x20);
          }
          else {
            bVar13 = bVar13 - 0x20;
            uVar14 = *(uint *)(this_ + 0x24);
          }
          if ((1 << (bVar13 & 0x1f) & uVar14) == 0) {
            *(undefined4 *)(this_ + 0x168) = 0x3f000000;
            fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
            *(float *)(this_ + 0x164) = (float)fVar17;
          }
          else {
            if (!bVar15) {
              if (iVar10 < 0x40) goto LAB_0042df76;
LAB_0042df64:
              *(uint *)(this_ + 0x1c) = *(uint *)(this_ + 0x1c) | 1 << ((char)iVar10 - 0x40U & 0x1f);
              break;
            }
            *(undefined4 *)(this_ + 0x168) = 0x3df5c28f;
          }
          goto LAB_0042dcaf;
        }
        break;
      case 8:
        iVar10 = bea_vcall<uint32_t>(this_, 0x18, (int)*(short *)(puVar1 + 2));
LAB_0042dca6:
        if (iVar10 == 1) {
LAB_0042dcaf:
          FUN_0042e4d0(bea_arg(this_), bea_arg((&DAT_008892dc)[iStack_10 * 8]), bea_arg(0x3f800000));
        }
        break;
      case 9:
        iVar10 = bea_vcall<uint32_t>(this_, 0x1c, (int)*(short *)(puVar1 + 2));
        if (iVar10 == 1) {
          uVar4 = (&DAT_008892dc)[iStack_10 * 8];
          switch(uVar4) {
          case 0x19:
          case 0x1a:
          case 0x1d:
          case 0x1f:
          case 0x23:
          case 0x24:
          case 0x26:
          case 0x28:
            FUN_0042e4d0(bea_arg(this_), bea_arg(uVar4), bea_arg(0xbf800000));
            break;
          case 0x1b:
          case 0x1c:
          case 0x1e:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x25:
          case 0x27:
          default:
            FUN_0042e4d0(bea_arg(this_), bea_arg(uVar4), bea_arg(0x3f800000));
          }
        }
        break;
      case 10:
        iVar10 = bea_vcall<uint32_t>(this_, 0x20, (int)*(short *)(puVar1 + 2));
        if (iVar10 != 0) goto LAB_0042dcaf;
        break;
      case 0xb:
      case 0xc:
switchD_0042dc92_caseD_b:
        if (*(short *)(puVar1 + 2) == 0) {
          iVar9 = FUN_00515940();
          iVar10 = iVar10 - (iVar9 >> 1);
        }
        else {
          iVar10 = FUN_00515b00();
          iVar10 = iVar5 - (iVar10 >> 1);
        }
        // the original's order: fild delta; fmul [0x5d97c8]; fld sens; fmul st(1) - the
        // delta is scaled first, then by the sensitivity.  Ghidra printed the product
        // as sens * delta * c, which rounds differently; my level-500 playthrough
        // ended differently through the mouse look (2026-10-27, replay bisect)
        fStack_20 = DAT_006254f4 * ((float)iVar10 * 0.004333333f);
        if (-1.0f <= fStack_20) {
          if (1.0f < fStack_20) {
            fStack_20 = 1.0f;
          }
        }
        else {
          fStack_20 = -1.0f;
        }
        iVar10 = puVar1[1];
        if (((iVar10 == 0xb) || (iVar10 == 0xd)) && (fStack_20 < 0.0f)) {
          fStack_20 = 0.0f;
        }
        if (((iVar10 == 0xc) || (iVar10 == 0xe)) && (0.0f < fStack_20)) {
          fStack_20 = 0.0f;
        }
        if (DAT_0066e950 != 0) {
          if (fStack_20 == 0.0f) {
            DAT_0066e8c8 = 1;
          }
          FUN_0042e4d0(bea_arg(this_), bea_arg((&DAT_008892dc)[iStack_10 * 8]), bea_arg(fStack_20));
          DAT_0066e8c8 = 0;
        }
        DAT_0066e94d = 1;
        break;
      case 0xd:
      case 0xe:
        if ((&DAT_0066e8cc)[iVar11] == 0) goto switchD_0042dc92_caseD_b;
        break;
      case 0xf:
        sVar2 = *(short *)(puVar1 + 2);
        cVar6 = DAT_0089bdf5;
        if (((sVar2 == 0) || (cVar6 = DAT_0089bdf6, sVar2 == 1)) ||
           (cVar6 = DAT_0089bdf7, sVar2 == 2)) {
          bVar16 = cVar6 == '\0';
          goto LAB_0042e1e0;
        }
        break;
      case 0x10:
      case 0x11:
        switch(*(undefined2 *)(puVar1 + 2)) {
        case 0:
          bVar16 = DAT_0089bdfc == 0;
          goto LAB_0042e1e0;
        case 1:
          bVar16 = DAT_0089be14 == 0;
          goto LAB_0042e1e0;
        case 2:
          bVar16 = DAT_0089be2c == 0;
LAB_0042e1e0:
          if (!bVar16) {
            FUN_0042e4d0(bea_arg(this_), bea_arg(iVar3), bea_arg(0x3f800000));
          }
          break;
        case 3:
          if (0 < DAT_0089be48) {
            FUN_0042e4d0(bea_arg(this_), bea_arg(iVar3), bea_arg(0x3f800000));
          }
          break;
        case 4:
          if (DAT_0089be48 < 0) {
            FUN_0042e4d0(bea_arg(this_), bea_arg(iVar3), bea_arg(0x3f800000));
          }
        }
        break;
      default:
        FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Uknown__push_type__i_006255c8);
      }
switchD_0042e171_default:
      if (this_[0x161] != (CController)0x0) {
LAB_0042e218:
        iVar10 = (&DAT_008892dc)[iStack_10 * 8];
        bVar13 = (byte)iVar10;
        if (iVar10 < 0x40) {
          if (iVar10 < 0x20) {
            uVar8 = 1 << (bVar13 & 0x1f);
            uVar14 = *(uint *)(this_ + 0x14);
          }
          else {
            uVar8 = 1 << (bVar13 - 0x20 & 0x1f);
            uVar14 = *(uint *)(this_ + 0x18);
          }
        }
        else {
          uVar8 = 1 << (bVar13 - 0x40 & 0x1f);
          uVar14 = *(uint *)(this_ + 0x1c);
        }
        if ((uVar8 & uVar14) != 0) {
          fVar17 = (float10)FUN_0042e3d0(bea_arg(this_), bea_arg(*puVar1), bea_arg((int)*(short *)(puVar1 + 2)));
          FUN_0042e4d0(bea_arg(this_), bea_arg((&DAT_008892dc)[iStack_10 * 8]), bea_arg((float)fVar17));
          iVar10 = (&DAT_008892dc)[iStack_10 * 8];
          bVar13 = (byte)iVar10;
          if (iVar10 < 0x40) {
            if (iVar10 < 0x20) {
              *(uint *)(this_ + 0x14) = *(uint *)(this_ + 0x14) & ~(1 << (bVar13 & 0x1f));
            }
            else {
              *(uint *)(this_ + 0x18) = *(uint *)(this_ + 0x18) & ~(1 << (bVar13 - 0x20 & 0x1f));
            }
          }
          else {
            *(uint *)(this_ + 0x1c) = *(uint *)(this_ + 0x1c) & ~(1 << (bVar13 - 0x40 & 0x1f));
          }
        }
      }
      iVar10 = bea_mp_controller_check(FUN_004725d0(bea_arg(&DAT_008a9a98)));   // BEA_MP_ONEPLAYER (test_harness.cpp)
      if ((iVar10 == 0) && (iStack_14 == 0)) {
        iStack_14 = 1;
        goto LAB_0042dc12;
      }
      iStack_10 = iStack_10 + 1;
      iStack_14 = iVar11;
    } while (BEA_LOOP_GUARD((iStack_10 < DAT_006254f8)));
  }
  iVar11 = FUN_00515970(bea_arg(0x2a));
  if ((iVar11 != 0) && (iVar11 = FUN_00515970(bea_arg(0x36)), iVar11 != 0)) {
    FUN_0042e4d0(bea_arg(this_), bea_arg(0x2d), bea_arg(0));
  }
  if (this_[0x160] != (CController)0x0) {
    bea_vcall<uint32_t>(this_, 0x40);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042db40, ap_0042db40));

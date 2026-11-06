// auto-ported from 004f86d0_vslot9.c (CUnit::vslot9, 2850 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (10 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00633b64 GLOBAL_AT(undefined, 0x00633b64)
#define DAT_00633b5c GLOBAL_AT(undefined, 0x00633b5c)
#define DAT_00633b54 GLOBAL_AT(undefined, 0x00633b54)
#define DAT_00633b4c GLOBAL_AT(undefined, 0x00633b4c)
#define DAT_00633b44 GLOBAL_AT(undefined, 0x00633b44)
#define DAT_00633b3c GLOBAL_AT(undefined, 0x00633b3c)
#define DAT_00633b34 GLOBAL_AT(undefined, 0x00633b34)
#define DAT_00633b2c GLOBAL_AT(undefined, 0x00633b2c)
#define DAT_00633b24 GLOBAL_AT(undefined, 0x00633b24)
#define DAT_0062dd20 GLOBAL_AT(byte, 0x0062dd20)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
#define DAT_00633b04 GLOBAL_AT(int, 0x00633b04)
#define DAT_00633afc GLOBAL_AT(int, 0x00633afc)
#define DAT_008550d0 GLOBAL_AT(int, 0x008550d0)
#define DAT_008551c0 GLOBAL_AT(int, 0x008551c0)
#define DAT_00855228 GLOBAL_AT(int, 0x00855228)
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_weakpoint_00633ae8 ((char*)0x00633ae8)
#define s_X1_Turret_00633b18 ((char*)0x00633b18)
#define s_nexus_00633af4 ((char*)0x00633af4)
#define s_X1_Barrel_00633b0c ((char*)0x00633b0c)
#define s_barrel_0062dd18 ((char*)0x0062dd18)
#define s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c ((char*)0x00633b6c)
typedef int (BEA_THISCALL* CActor__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot9_t> CActor__vslot9 = {(CActor__vslot9_t)0x004011e0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00428b50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00428b50_t> FUN_00428b50 = {(FUN_00428b50_t)0x00428b50};
typedef uint32_t (BEA_THISCALL* FUN_00444660_t)(uint32_t);
static const bea_guard<FUN_00444660_t> FUN_00444660 = {(FUN_00444660_t)0x00444660};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 (BEA_THISCALL* FUN_004aa820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa820_t> FUN_004aa820 = {(FUN_004aa820_t)0x004aa820};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004fb280_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb280_t> FUN_004fb280 = {(FUN_004fb280_t)0x004fb280};
typedef uint32_t (BEA_CDECL* FUN_0050dc20_t)(uint32_t);
static const bea_guard<FUN_0050dc20_t> FUN_0050dc20 = {(FUN_0050dc20_t)0x0050dc20};
typedef undefined4 (BEA_CDECL* FUN_0050f6d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050f6d0_t> FUN_0050f6d0 = {(FUN_0050f6d0_t)0x0050f6d0};
typedef undefined4 (BEA_CDECL* FUN_0050f970_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050f970_t> FUN_0050f970 = {(FUN_0050f970_t)0x0050f970};
typedef undefined4 * (BEA_CDECL* FUN_0050fa40_t)(uint32_t);
static const bea_guard<FUN_0050fa40_t> FUN_0050fa40 = {(FUN_0050fa40_t)0x0050fa40};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};
typedef int (BEA_CDECL* _strncmp_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncmp_t> _strncmp = {(_strncmp_t)0x0055e560};

static void BEA_THISCALL ap_004f86d0(CUnit * this_, void *param_1)
{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  CUnit *pCVar6;
  int *piVar7;
  void *pvVar8;
  void *pvVar9;
  int *this_00;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  char *pcVar19;
  bool bVar20;
  undefined *puVar21;
  CUnit *pCStack_64;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x60);
  undefined4 &uStack_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x58);
  undefined4 &uStack_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &uStack_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x44);
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x40);
  undefined1 (&auStack_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x60 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x60 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4);
  iVar5 = *(int *)((int)param_1 + 0x3bc);
  *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x3b4);
  *(int *)(this_ + 0x164) = iVar5;
  *(undefined4 *)(this_ + 0x224) = 0;
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0xe0) != 7) {
      iVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x428), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0xc0));
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        FUN_0055dc20(bea_arg(iVar5 + 8), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
        *(undefined4 *)(iVar5 + 0x424) = 1;
      }
      if (this_ == (CUnit *)0x0) {
        pCVar6 = (CUnit *)0x0;
      }
      else {
        pCVar6 = this_ + 8;
      }
      *(CUnit **)(iVar5 + 0x408) = pCVar6;
      *(undefined4 *)(iVar5 + 4) = 1;
      if (*(char **)(*(int *)(this_ + 0x164) + 0x2c) != (char *)0x0) {
        uVar13 = 0xffffffff;
        pcVar17 = *(char **)(*(int *)(this_ + 0x164) + 0x2c);
        do {
          pcVar19 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar19 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar19;
        } while (((cVar1 != '\0')));
        uVar13 = ~uVar13;
        pcVar17 = pcVar19 + -uVar13;
        pcVar19 = (char *)(iVar5 + 8);
        for (uVar14 = uVar13 >> 2; ((uVar14 != 0)); uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar13 = uVar13 & 3; ((uVar13 != 0)); uVar13 = uVar13 - 1) {
          *pcVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar19 = pcVar19 + 1;
        }
      }
      piVar7 = (int *)FUN_00516580(*(undefined4 *)(iVar5 + 4));
      *(int **)(this_ + 0x30) = piVar7;
      if (piVar7 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar7, 0x4, iVar5 + 8);
      }
      if (iVar5 != 0) {
        FUN_0055db0a(bea_arg(iVar5 + 8), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar5));
      }
    }
    puVar10 = *(undefined4 **)(*(int *)(this_ + 0x164) + 0x3c);
    pvVar9 = param_1;
    if (puVar10 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)*puVar10;
    }
    while (((puVar11 != (undefined4 *)0x0))) {
      piVar7 = (int *)FUN_0050f6d0(bea_arg(*puVar11), bea_arg(puVar11[1]));
      if (piVar7 != (int *)0x0) {
        uStack_5c = puVar11[2];
        uStack_60 = 1;
        pCStack_64 = this_;
        bea_vcall<uint32_t>(piVar7, 0xc, &pCStack_64);
        piVar7[0x2b] = puVar11[2];
        if (((*(int **)(this_ + 0x30) != (int *)0x0) &&
            (pvVar8 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24), pvVar8 != (void *)0x0
            )) && (0.0f < *(float *)(*(int *)(this_ + 0x164) + 0xbc))) {
          switch(puVar11[2]) {
          case 1:
            puVar21 = &DAT_00633b64;
            break;
          case 2:
            puVar21 = &DAT_00633b5c;
            break;
          case 3:
            puVar21 = &DAT_00633b54;
            break;
          case 4:
            puVar21 = &DAT_00633b4c;
            break;
          case 5:
            puVar21 = &DAT_00633b44;
            break;
          case 6:
            puVar21 = &DAT_00633b3c;
            break;
          case 7:
            puVar21 = &DAT_00633b34;
            break;
          case 8:
            puVar21 = &DAT_00633b2c;
            break;
          case 9:
            puVar21 = &DAT_00633b24;
            break;
          default:
            goto switchD_004f88c2_default;
          }
          pvVar9 = (void *)FUN_004aa820(bea_arg(pvVar8), bea_arg(puVar21), bea_arg(1));
switchD_004f88c2_default:
          for (; ((pvVar9 != (void *)0x0)); pvVar9 = *(void **)((int)pvVar9 + 0x98)) {
            pbVar16 = (byte *)((int)pvVar9 + 0xdc);
            pbVar18 = &DAT_0062dd20;
            do {
              bVar2 = *pbVar16;
              bVar20 = bVar2 < *pbVar18;
              if (bVar2 != *pbVar18) {
LAB_004f895a:
                iVar5 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                goto LAB_004f895f;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar16[1];
              bVar20 = bVar2 < pbVar18[1];
              if (bVar2 != pbVar18[1]) goto LAB_004f895a;
              pbVar16 = pbVar16 + 2;
              pbVar18 = pbVar18 + 2;
            } while (((bVar2 != 0)));
            iVar5 = 0;
LAB_004f895f:
            if ((iVar5 == 0) ||
               (iVar5 = FUN_0056e170(bea_arg((int)pvVar9 + 0xdc), bea_arg(s_X1_Turret_00633b18), bea_arg(9)), iVar5 == 0)) {
              piVar7[0x25] = 1;
            }
            else {
              iVar5 = _strncmp(bea_arg((char *)((int)pvVar9 + 0xdc)), bea_arg(s_barrel_0062dd18), bea_arg(6));
              if ((iVar5 == 0) ||
                 (iVar5 = FUN_0056e170(bea_arg((char *)((int)pvVar9 + 0xdc)), bea_arg(s_X1_Barrel_00633b0c), bea_arg(9)),
                 iVar5 == 0)) {
                *(undefined4 *)(this_ + 0x224) = 1;
                piVar7[0x26] = 1;
                iVar5 = FUN_0044adb0(bea_arg(&uStack_58), bea_arg(pvVar9));
                uVar3 = *(undefined4 *)(iVar5 + 4);
                *(void **)(this_ + 0x220) = pvVar9;
                *(undefined4 *)(this_ + 0xf4) = uVar3;
              }
            }
          }
        }
        FUN_004e5b20(bea_arg(this_ + 0x17c), bea_arg(piVar7));
      }
      puVar10 = (undefined4 *)puVar10[1];
      if (puVar10 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar11 = (undefined4 *)*puVar10;
      }
    }
    puVar10 = *(undefined4 **)(*(int *)(this_ + 0x164) + 0x4c);
    if (puVar10 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11 = (undefined4 *)*puVar10;
    }
    while (((puVar11 != (undefined4 *)0x0))) {
      iVar5 = FUN_0050f970(bea_arg(*puVar11), bea_arg(puVar11[1]));
      if (iVar5 != 0) {
        bea_vcall<uint32_t>((iVar5 + 0x10), 0x0, param_1);
        uVar13 = 0xffffffff;
        *(undefined4 *)(iVar5 + 0xb4) = 0;
        *(undefined4 *)(iVar5 + 0x70) = 0;
        *(undefined4 *)(iVar5 + 0x5c) = 0;
        *(undefined4 *)(iVar5 + 0x3bc) = 1;
        pcVar17 = &DAT_00662b2c;
        do {
          pcVar19 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar19 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar19;
        } while (((cVar1 != '\0')));
        uVar13 = ~uVar13;
        pcVar17 = pcVar19 + -uVar13;
        pcVar19 = (char *)(iVar5 + 0xbc);
        for (uVar14 = uVar13 >> 2; ((uVar14 != 0)); uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar13 = uVar13 & 3; ((uVar13 != 0)); uVar13 = uVar13 - 1) {
          *pcVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar17 = &DAT_00662b2c;
        do {
          pcVar19 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar19 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar19;
        } while (((cVar1 != '\0')));
        uVar13 = ~uVar13;
        pcVar17 = pcVar19 + -uVar13;
        pcVar19 = (char *)(iVar5 + 0x1bc);
        for (uVar14 = uVar13 >> 2; ((uVar14 != 0)); uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar13 = uVar13 & 3; ((uVar13 != 0)); uVar13 = uVar13 - 1) {
          *pcVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar3 = puVar11[2];
        *(CUnit **)(iVar5 + 0x3d4) = this_;
        *(undefined4 *)(iVar5 + 1000) = uVar3;
        FUN_004e5b20(bea_arg(this_ + 0x18c), bea_arg(iVar5));
      }
      puVar10 = (undefined4 *)puVar10[1];
      if (puVar10 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar11 = (undefined4 *)*puVar10;
      }
    }
    *(undefined4 *)(this_ + 0xf8) = *(undefined4 *)(*(int *)(this_ + 0x164) + 0xc0);
  }
  pvVar9 = param_1;
  CActor__vslot9(bea_arg((CActor *)this_), bea_arg(param_1));
  if (*(int *)((int)pvVar9 + 0x60) == 0) {
    pCStack_64 = *(CUnit **)((int)pvVar9 + 0x44);
    uStack_60 = *(undefined4 *)((int)pvVar9 + 0x48);
    uStack_5c = *(undefined4 *)((int)pvVar9 + 0x4c);
    *(CUnit **)(this_ + 0x114) = pCStack_64;
    *(undefined4 *)(this_ + 0x118) = uStack_60;
    *(undefined4 *)(this_ + 0x11c) = uStack_5c;
    *(CUnit **)(this_ + 0x120) = pCStack_64;
    *(undefined4 *)(this_ + 0x124) = uStack_60;
    *(undefined4 *)(this_ + 0x128) = uStack_5c;
  }
  if (*(int *)(this_ + 0x164) != 0) {
    pCVar6 = *(CUnit **)(*(int *)(this_ + 0x164) + 0x5c);
    if (pCVar6 == (CUnit *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)pCVar6;
    }
    while (((pCStack_64 = pCVar6, piVar7 != (int *)0x0))) {
      this_00 = (int *)FUN_0050fa40(bea_arg(*piVar7));
      if (this_00 != (int *)0x0) {
        puVar10 = (undefined4 *)
                  FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x59), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0x135));
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          *puVar10 = 0;
        }
        FUN_00401000(bea_arg(puVar10), bea_arg(this_00));
        puVar11 = (undefined4 *)
                  FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c0), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0x139))
        ;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          FUN_0048dcf0(bea_arg(puVar11));
          *puVar11 = ((void*)0x005dc1c0);
          puVar11[0xef] = 0;
        }
        bea_vcall<uint32_t>(this_, 0x160, 0x14,piVar7[1],&fStack_4c,auStack_3c);
        pvVar9 = param_1;
        puVar11[1] = bea_piece32(fStack_4c);
        puVar11[2] = bea_piece32(fStack_48);
        puVar11[3] = bea_piece32(fStack_44);
        puVar11[4] = uStack_40;
        if (*(int *)((int)param_1 + 0x60) == 0) {
          puVar11[0x18] = 0;
          FUN_0044adb0(bea_arg(&uStack_58), bea_arg(auStack_3c));
          puVar11[0x11] = uStack_58;
          puVar11[0x12] = uStack_54;
          puVar11[0x13] = uStack_50;
        }
        puVar11[0x28] = *(undefined4 *)((int)pvVar9 + 0xa0);
        iVar5 = *piVar7;
        iVar15 = 0;
        piVar4 = (int *)*DAT_00855400;
        DAT_00855400[2] = (int)piVar4;
        if (piVar4 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar4;
        }
        while (((iVar12 != 0))) {
          if (iVar15 == iVar5) goto LAB_004f8d17;
          iVar15 = iVar15 + 1;
          piVar4 = *(int **)(DAT_00855400[2] + 4);
          DAT_00855400[2] = (int)piVar4;
          if (piVar4 == (int *)0x0) {
            iVar12 = 0;
          }
          else {
            iVar12 = *piVar4;
          }
        }
        iVar12 = 0;
LAB_004f8d17:
        puVar11[0xef] = iVar12;
        puVar11[0xeb] = *(undefined4 *)((int)param_1 + 0x3ac);
        uVar13 = 0xffffffff;
        puVar11[0xec] = *(undefined4 *)((int)param_1 + 0x3b0);
        pcVar17 = (char *)((int)param_1 + 0x2ac);
        do {
          pcVar19 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar19 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar19;
        } while (((cVar1 != '\0')));
        uVar13 = ~uVar13;
        pcVar17 = pcVar19 + -uVar13;
        pcVar19 = (char *)(puVar11 + 0xab);
        for (uVar14 = uVar13 >> 2; ((uVar14 != 0)); uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar13 = uVar13 & 3; ((uVar13 != 0)); uVar13 = uVar13 - 1) {
          *pcVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar19 = pcVar19 + 1;
        }
        bea_vcall<uint32_t>(this_00, 0x24, puVar11);
        FUN_00428b50(bea_arg(this_00), bea_arg(this_), bea_arg(piVar7[1]));
        FUN_004e5b20(bea_arg(this_ + 0x19c), bea_arg(puVar10));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar11));
        pCVar6 = pCStack_64;
        pvVar9 = param_1;
      }
      pCVar6 = *(CUnit **)(pCVar6 + 4);
      if (pCVar6 == (CUnit *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *(int **)pCVar6;
      }
    }
    pvVar8 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0x15b));
    param_1 = pvVar8;
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar8 + 4) = 0;
      FUN_004cb040(bea_arg(pvVar8));
    }
    *(void **)(this_ + 0x1ac) = pvVar8;
    *(undefined4 *)((int)pvVar8 + 4) = 0;
    iVar5 = 1;
    if (*(int *)(*(int *)(this_ + 0x164) + 0x18) != 0) {
      while (((((bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633b04,iVar5,&fStack_4c,auStack_3c,1,0), fStack_4c != 0.0f ||
              (fStack_48 != 0.0f)) || (fStack_44 != 0.0f))))) {
        pvVar8 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0x164));
        param_1 = pvVar8;
        if (pvVar8 == (void *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          *(undefined4 *)((int)pvVar8 + 4) = 0;
          FUN_004cb040(bea_arg(pvVar8));
        }
        FUN_004e5b20(bea_arg(this_ + 0x1b4), bea_arg(pvVar8));
        iVar5 = iVar5 + 1;
      }
    }
    iVar5 = 1;
    if (*(int *)(*(int *)(this_ + 0x164) + 0x1c) != 0) {
      while (((((bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x1c, &DAT_00633afc,iVar5,&fStack_4c,auStack_3c,1,0), fStack_4c != 0.0f ||
              (fStack_48 != 0.0f)) || (fStack_44 != 0.0f))))) {
        pvVar8 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0x16f));
        param_1 = pvVar8;
        if (pvVar8 == (void *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          *(undefined4 *)((int)pvVar8 + 4) = 0;
          FUN_004cb040(bea_arg(pvVar8));
        }
        FUN_004e5b20(bea_arg(this_ + 0x1c4), bea_arg(pvVar8));
        iVar5 = iVar5 + 1;
      }
    }
  }
  FUN_004e5a80(bea_arg(&DAT_008550d0), bea_arg(this_));
  *(undefined4 *)(this_ + 0x138) = *(undefined4 *)((int)pvVar9 + 0xa0);
  for (iVar5 = 0; ((iVar15 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24),
      iVar5 < *(int *)(iVar15 + 0x15c))); iVar5 = iVar5 + 1) {
    iVar15 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    pbVar18 = &DAT_0062dd20;
    pbVar16 = (byte *)(*(int *)(*(int *)(iVar15 + 0x160) + iVar5 * 4) + 0xdc);
    do {
      bVar2 = *pbVar18;
      bVar20 = bVar2 < *pbVar16;
      if (bVar2 != *pbVar16) {
LAB_004f901a:
        iVar15 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_004f901f;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar18[1];
      bVar20 = bVar2 < pbVar16[1];
      if (bVar2 != pbVar16[1]) goto LAB_004f901a;
      pbVar18 = pbVar18 + 2;
      pbVar16 = pbVar16 + 2;
    } while (((bVar2 != 0)));
    iVar15 = 0;
LAB_004f901f:
    if (iVar15 == 0) {
      iVar15 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      iVar15 = *(int *)(*(int *)(iVar15 + 0x160) + 8);
      *(undefined4 *)(this_ + 0x1f8) = *(undefined4 *)(iVar15 + 0x60);
      *(undefined4 *)(this_ + 0x1fc) = *(undefined4 *)(iVar15 + 100);
      *(undefined4 *)(this_ + 0x200) = *(undefined4 *)(iVar15 + 0x68);
      *(undefined4 *)(this_ + 0x204) = *(undefined4 *)(iVar15 + 0x6c);
    }
  }
  if (*(int **)(this_ + 0x148) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)(this_ + 0x148), 0x110, this_);
  }
  if (*(void **)(this_ + 0x178) != (void *)0x0) {
    FUN_00444660(bea_arg(*(void **)(this_ + 0x178)));
  }
  if (*(int *)(this_ + 0x164) != 0) {
    FUN_0050dc20(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xb0)));
    if (*(int *)(this_ + 0x138) == 0) {
      *(int *)(&DAT_008551c0 + *(int *)(*(int *)(this_ + 0x164) + 0xe0) * 4) =
           *(int *)(&DAT_008551c0 + *(int *)(*(int *)(this_ + 0x164) + 0xe0) * 4) + 1;
    }
    else if (*(int *)(this_ + 0x138) == 1) {
      *(int *)(&DAT_00855228 + *(int *)(*(int *)(this_ + 0x164) + 0xe0) * 4) =
           *(int *)(&DAT_00855228 + *(int *)(*(int *)(this_ + 0x164) + 0xe0) * 4) + 1;
    }
  }
  FUN_004fb280(bea_arg(this_), bea_arg(0));
  *(undefined4 *)(this_ + 0x228) = 0;
  *(undefined4 *)(this_ + 0x22c) = 0;
  iVar5 = 0;
  do {
    while((( true ))) {
      iVar15 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      if (*(int *)(iVar15 + 0x15c) <= iVar5) {
        *(undefined4 *)(this_ + 0x230) = 0;
        *(undefined4 *)(this_ + 0x244) = 0;
        *(undefined4 *)(this_ + 0x23c) = 0;
        *(undefined4 *)(this_ + 0x238) = 0;
        *(undefined4 *)(this_ + 0x234) = 0;
        *(undefined4 *)(this_ + 0x240) = 0;
        *(undefined4 *)(this_ + 0x248) = 0;
        if (*(int *)(this_ + 0x148) == 0) {
          if ((*(int *)(this_ + 0x138) == 1) || (*(int *)(this_ + 0x138) == 6)) {
            FUN_004e5b20(bea_arg(&DAT_008550c0), bea_arg(this_));
          }
          if ((*(int *)(this_ + 0x138) == 0) || (*(int *)(this_ + 0x138) == 6)) {
            FUN_004e5b20(bea_arg(&DAT_008550b0), bea_arg(this_));
          }
        }
        param_1 = (void *)0xbf800000;
        FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa3), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
        return;
      }
      iVar15 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      iVar15 = *(int *)(*(int *)(iVar15 + 0x160) + iVar5 * 4);
      if (iVar15 != 0) break;
LAB_004f9149:
      iVar5 = iVar5 + 1;
    }
    iVar15 = iVar15 + 0xdc;
    iVar12 = FUN_00568390(bea_arg(iVar15), bea_arg(s_nexus_00633af4));
    if (iVar12 != 0) {
      iVar15 = FUN_00568390(bea_arg(iVar15), bea_arg(s_weakpoint_00633ae8));
      if (iVar15 == 0) {
        *(undefined4 *)(this_ + 0x22c) = 1;
      }
      goto LAB_004f9149;
    }
    iVar5 = iVar5 + 1;
    *(undefined4 *)(this_ + 0x228) = 1;
  } while((( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f86d0, ap_004f86d0));

// auto-ported from 005286e0_FUN_005286e0.c (FUN_005286e0, 958 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1b0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_0064bdcc GLOBAL_AT(int, 0x0064bdcc)
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)
#define DAT_00855fe0 GLOBAL_AT(int, 0x00855fe0)
#define DAT_00855fdc GLOBAL_AT(int, 0x00855fdc)
#define DAT_00855fd8 GLOBAL_AT(int, 0x00855fd8)
#define DAT_00855fd4 GLOBAL_AT(int, 0x00855fd4)
#define DAT_0064bd60 GLOBAL_AT(char, 0x0064bd60)
#define DAT_0089c018 GLOBAL_AT(int, 0x0089c018)
#define s__s__f_0064bd58 ((char*)0x0064bd58)
#define s_Version__0064bd9c ((char*)0x0064bd9c)
#define s_CardID_version___s_0064bd88 ((char*)0x0064bd88)
#define s_Setting_tweak__s_to__f_0064bd40 ((char*)0x0064bd40)
#define s_Device_in_CardID___s_0064bda8 ((char*)0x0064bda8)
#define s_Device__0064bdc4 ((char*)0x0064bdc4)
#define s_Couldn_t_open_CardID_file__0064bd24 ((char*)0x0064bd24)
#define s_Vendor__0064bd80 ((char*)0x0064bd80)
#define s_Driver__x__x____x__x_0064bd68 ((char*)0x0064bd68)
#define PTR_DAT_0064bdc0 GLOBAL_AT(void*, 0x0064bdc0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_CDECL* FUN_0055e14f_t)(void *, void *, ...);
static const bea_guard<FUN_0055e14f_t> FUN_0055e14f = {(FUN_0055e14f_t)0x0055e14f};
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef char * (BEA_CDECL* FUN_0055fc5d_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055fc5d_t> FUN_0055fc5d = {(FUN_0055fc5d_t)0x0055fc5d};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static void BEA_CDECL ap_005286e0(undefined4 param_1)
{
  int iVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  bool bVar12;

  alignas(16) uint8_t bea_frame_[0x1b0] = {};   // the original stack frame (emulate_frame)
  int &local_1a8 = *reinterpret_cast<int *>(bea_frame_ + 0x1b0 - 0x1a8);
  float &local_1a4 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x1a4);
  uint &local_1a0 = *reinterpret_cast<uint *>(bea_frame_ + 0x1b0 - 0x1a0);
  int &local_19c = *reinterpret_cast<int *>(bea_frame_ + 0x1b0 - 0x19c);
  uint &local_198 = *reinterpret_cast<uint *>(bea_frame_ + 0x1b0 - 0x198);
  undefined4 &local_194 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1b0 - 0x194);
  char &local_190 = *reinterpret_cast<char *>(bea_frame_ + 0x1b0 - 0x190);
  char (&local_18f)[2] = *reinterpret_cast<char (*)[2]>(bea_frame_ + 0x1b0 - 0x18f);
  char (&acStack_18d)[197] = *reinterpret_cast<char (*)[197]>(bea_frame_ + 0x1b0 - 0x18d);
  char (&local_c8)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0x1b0 - 0xc8);
  iVar1 = DAT_008889f0 * 0x516c;
  iVar7 = FUN_0055e490(bea_arg(param_1), bea_arg(&DAT_0064bdcc));
  if (iVar7 == 0) {
    FUN_00441740(&DAT_0066eb90,s_Couldn_t_open_CardID_file__0064bd24);
    return;
  }
  bVar3 = *(byte *)(iVar7 + 0xc);
  bVar12 = false;
  bVar11 = false;
  bVar4 = true;
  bVar5 = false;
  do {
    if ((bVar3 & 0x10) != 0) {
      FUN_0055e4a3(bea_arg(iVar7));
      return;
    }
    pcVar10 = local_18f;
    for (iVar8 = 0x31; BEA_LOOP_GUARD((iVar8 != 0)); iVar8 = iVar8 + -1) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10 = pcVar10 + 4;
    }
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    local_190 = DAT_00662b2c;
    FUN_0055fc5d(bea_arg(&local_190), bea_arg(199), bea_arg(iVar7));
    if (local_190 == '/') {
      if (local_18f[0] != '/') {
LAB_0052879e:
        if (bVar12) {
          uVar9 = 0xffffffff;
          pcVar10 = s_Device__0064bdc4;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (BEA_LOOP_GUARD((cVar2 != '\0')));
          iVar8 = FUN_0056e170(bea_arg(&local_190), bea_arg(s_Device__0064bdc4), bea_arg(~uVar9 - 1));
          if (iVar8 != 0) goto LAB_00528848;
          uVar9 = 0xffffffff;
          pcVar10 = s_Device__0064bdc4;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (BEA_LOOP_GUARD((cVar2 != '\0')));
          iVar8 = FUN_0055e14f((int)&local_194 + ~uVar9 + 3,&PTR_DAT_0064bdc0,&local_1a8);
          if (iVar8 != 1) goto LAB_00528848;
          if (((!bVar5) || (!bVar11)) &&
             (bVar11 = local_1a8 == *(int *)(&DAT_00855fe0 + iVar1), bVar11)) {
            FUN_00441740(&DAT_0066eb90,s_Device_in_CardID___s_0064bda8,&local_190);
          }
          bVar5 = true;
LAB_00528841:
          bVar4 = true;
        }
        else {
LAB_00528848:
          uVar9 = 0xffffffff;
          bVar5 = false;
          pcVar10 = s_Version__0064bd9c;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (BEA_LOOP_GUARD((cVar2 != '\0')));
          iVar8 = FUN_0056e170(bea_arg(&local_190), bea_arg(s_Version__0064bd9c), bea_arg(~uVar9 - 1));
          if (iVar8 == 0) {
            uVar9 = 0xffffffff;
            pcVar10 = s_Version__0064bd9c;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (BEA_LOOP_GUARD((cVar2 != '\0')));
            FUN_00441740(&DAT_0066eb90,s_CardID_version___s_0064bd88,
                         (char *)((int)&local_194 + ~uVar9 + 3));
          }
          else {
            uVar9 = 0xffffffff;
            pcVar10 = s_Vendor__0064bd80;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (BEA_LOOP_GUARD((cVar2 != '\0')));
            iVar8 = FUN_0056e170(bea_arg(&local_190), bea_arg(s_Vendor__0064bd80), bea_arg(~uVar9 - 1));
            if (iVar8 == 0) {
              uVar9 = 0xffffffff;
              pcVar10 = s_Vendor__0064bd80;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (BEA_LOOP_GUARD((cVar2 != '\0')));
              iVar8 = FUN_0055e14f((int)&local_194 + ~uVar9 + 3,&PTR_DAT_0064bdc0,&local_1a8);
              if (iVar8 == 1) {
                bVar12 = local_1a8 == *(int *)(&DAT_00855fdc + iVar1);
                bVar4 = true;
                goto LAB_00528a65;
              }
            }
            if ((bVar12) && (bVar11)) {
              iVar8 = FUN_0055e14f(&local_190,s_Driver__x__x____x__x_0064bd68,&local_19c,&local_1a0,
                                   &local_194,&local_198);
              if (iVar8 == 4) {
                iVar8 = *(int *)(&DAT_00855fd8 + iVar1);
                if (((local_19c < iVar8) ||
                    ((local_19c == iVar8 && (local_1a0 <= *(uint *)(&DAT_00855fd4 + iVar1))))) &&
                   ((iVar8 < local_194 ||
                    ((local_194 == iVar8 && (*(uint *)(&DAT_00855fd4 + iVar1) <= local_198))))))
                goto LAB_00528841;
                bVar4 = false;
              }
              else if (bVar4) {
                uVar9 = 0xffffffff;
                pcVar10 = &DAT_0064bd60;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (BEA_LOOP_GUARD((cVar2 != '\0')));
                iVar8 = FUN_0056e170(bea_arg(&local_190), bea_arg(&DAT_0064bd60), bea_arg(~uVar9 - 1));
                if (iVar8 == 0) {
                  uVar9 = 0xffffffff;
                  pcVar10 = &DAT_0064bd60;
                  do {
                    if (uVar9 == 0) break;
                    uVar9 = uVar9 - 1;
                    cVar2 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (BEA_LOOP_GUARD((cVar2 != '\0')));
                  iVar8 = FUN_0055e14f((int)&local_194 + ~uVar9 + 3,s__s__f_0064bd58,local_c8,
                                       &local_1a4);
                  puVar6 = DAT_0089c018;
                  if (iVar8 == 2) {
                    for (; BEA_LOOP_GUARD((puVar6 != (undefined4 *)0x0)); puVar6 = (undefined4 *)puVar6[1]) {
                      iVar8 = FUN_00568390(bea_arg(local_c8), bea_arg(puVar6[2]));
                      if (iVar8 == 0) {
                        if (puVar6 != (undefined4 *)0x0) {
                          FUN_00441740(&DAT_0066eb90,s_Setting_tweak__s_to__f_0064bd40,local_c8,
                                       bea_fcast<double>(CONCAT44(0,
                                                        (int)((ulonglong)bea_fcast<double>(local_1a4) >> 0x20)))
                                      );
                          bea_vcall<uint32_t>(puVar6, 0x0, local_1a4);
                        }
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (((local_190 != '\0') && (local_190 != '\r')) && (local_190 != '\n')) goto LAB_0052879e;
LAB_00528a65:
    bVar3 = *(byte *)(iVar7 + 0xc);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005286e0, ap_005286e0));

// auto-ported from 004fe030_vslot101.c (CUnit::vslot101, 630 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c ((char*)0x00633b6c)
#define s_Billy_Fighter_00633b88 ((char*)0x00633b88)
#define s_Tara_Fighter_00633b98 ((char*)0x00633b98)
typedef void * (BEA_THISCALL* FUN_004b6e50_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6e50_t> FUN_004b6e50 = {(FUN_004b6e50_t)0x004b6e50};
typedef uint32_t (BEA_THISCALL* FUN_004b7ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ca0_t> FUN_004b7ca0 = {(FUN_004b7ca0_t)0x004b7ca0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004fe030(CUnit * this_, int param_1)
{
  byte bVar1;
  void *this_00;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  void *this_01;
  char *pcVar8;
  bool bVar9;
  undefined1 *puStack_8;
  undefined4 local_4;
  iVar2 = FUN_004fd3d0(bea_arg(this_), bea_arg(*(undefined4 *)(param_1 + 0x138)));
  if (iVar2 != 0) {
    param_1 = 0;
    if (((*(int *)(this_ + 0x164) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x120) != 0)) &&
       (*(float *)(this_ + 0x240) < DAT_00672fd0)) {
      *(float *)(this_ + 0x240) = DAT_00672fd0 + 40.0f;
      iVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      iVar2 = iVar2 % 3;
      pcVar8 = s_Tara_Fighter_00633b98;
      pbVar6 = *(byte **)(*(int *)(this_ + 0x164) + 0xb0);
      pbVar3 = pbVar6;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_004fe107:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004fe10c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_004fe107;
        pbVar3 = pbVar3 + 2;
        pcVar8 = pcVar8 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar4 = 0;
LAB_004fe10c:
      if (iVar4 == 0) {
        uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3c345));
        if (iVar2 == 0) {
          param_1 = 0x4175f6f7;
        }
        else if (iVar2 == 1) {
          param_1 = 0x41f4807a;
        }
        else if (iVar2 == 2) {
          param_1 = 0x427309fd;
        }
      }
      else {
        pcVar8 = s_Billy_Fighter_00633b88;
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_004fe193:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004fe198;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_004fe193;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_004fe198:
        if (iVar4 == 0) {
          uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcb1fd));
          if (iVar2 == 0) {
            param_1 = 0x881c798e;
          }
          else if (iVar2 == 1) {
            param_1 = 0x89198af1;
          }
          else if (iVar2 == 2) {
            param_1 = 0x8a169c54;
          }
        }
        else {
          uVar5 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x19f8cf));
          if (iVar2 == 0) {
            param_1 = 0x8612e253;
          }
          else if (iVar2 == 1) {
            param_1 = 0x870ff464;
          }
          else if (iVar2 == 2) {
            param_1 = 0x880d0675;
          }
        }
      }
      uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(param_1));
      this_00 = DAT_008a9d84;
      if (DAT_008a9d84 != (void *)0x0) {
        this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0xc1b));
        if (this_01 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004b6e50(bea_arg(this_01), bea_arg(uVar5), bea_arg(uVar7), bea_arg(param_1), bea_arg(0), bea_arg(this_), bea_arg(0), bea_arg(10));
        }
        FUN_004b7ca0(bea_arg(this_00), bea_arg(uVar5));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe030, ap_004fe030));

// auto-ported from 00538960_FUN_00538960.c (FUN_00538960, 516 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fe98 ((char*)0x0064fe98)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c ((char*)0x0064fa6c)
typedef uint32_t (BEA_THISCALL* FUN_00401040_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401040_t> FUN_00401040 = {(FUN_00401040_t)0x00401040};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_00538960(void * this_, undefined4 *param_1, void *param_2)
{
  byte bVar1;
  int *piVar2;
  undefined3 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *this_00;
  undefined4 *this_01;
  bool bVar9;
  undefined4 *local_14;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_14 = (undefined4 *)0x0;
  puVar8 = (undefined4 *)**(int **)((int)this_ + 8);
  (*(int **)((int)this_ + 8))[2] = (int)puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)*puVar8;
  }
  if (puVar8 != (undefined4 *)0x0) {
    do {
      piVar2 = (int *)*param_1;
      pbVar4 = (byte *)bea_vcall<uint32_t>(*puVar8, 0x38);
      pbVar5 = (byte *)bea_vcall<uint32_t>(piVar2, 0x38);
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_005389db:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005389e0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_005389db;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar6 = 0;
LAB_005389e0:
      if (iVar6 == 0) {
        local_14 = puVar8;
      }
      puVar8 = *(undefined4 **)(*(int *)(*(int *)((int)this_ + 8) + 8) + 4);
      *(undefined4 **)(*(int *)((int)this_ + 8) + 8) = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)*puVar8;
      }
    } while (BEA_LOOP_GUARD((puVar8 != (undefined4 *)0x0)));
    if (local_14 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fe98), bea_arg(0x19));
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
        uVar3 = ((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu);
        (*(uint8_t*)((char*)&uStack_4 + 0)) = 5;
        *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
        *puVar8 = param_2;
        if (param_2 != (void *)0x0) {
          if (*(int *)((int)param_2 + 4) == 0) {
            this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c), bea_arg(0x18));
            (*(uint8_t*)((char*)&uStack_4 + 0)) = 6;
            if (this_00 == (void *)0x0) {
              this_00 = (void *)0x0;
            }
            else {
              FUN_004e5840(bea_arg(this_00));
            }
            *(void **)((int)param_2 + 4) = this_00;
            uVar3 = ((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu);
          }
          *(uint32_t*)((char*)&uStack_4) = (*(uint32_t*)((char*)&uStack_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar3) & 0xffffffu) << 8);
          (*(uint8_t*)((char*)&uStack_4 + 0)) = 5;
          FUN_004e5a80(bea_arg(*(void **)((int)param_2 + 4)), bea_arg(puVar8));
        }
      }
      this_01 = local_14 + 1;
      goto LAB_00538b48;
    }
  }
  local_14 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x18), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fe98), bea_arg(0x68));
  uStack_4 = 0;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    piVar2 = (int *)*param_1;
    FUN_004e5840(bea_arg(local_14 + 1));
    (*(uint8_t*)((char*)&uStack_4 + 0)) = 1;
    uVar7 = bea_vcall<uint32_t>(piVar2, 0x48);
    *local_14 = uVar7;
    puVar8 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fe98), bea_arg(0x11));
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      (*(uint8_t*)((char*)&uStack_4 + 0)) = 3;
      *puVar8 = param_2;
      if (param_2 != (void *)0x0) {
        FUN_00401040(bea_arg(param_2), bea_arg(puVar8));
      }
    }
    uStack_4 = CONCAT31(((*(uint32_t*)((char*)&uStack_4) >> 8) & 0xffffffu),1);
    FUN_004e5b20(bea_arg(local_14 + 1), bea_arg(puVar8));
    *(undefined1 *)(local_14 + 5) = 0;
  }
  this_01 = *(undefined4 **)((int)this_ + 8);
  puVar8 = local_14;
LAB_00538b48:
  uStack_4 = 0xffffffff;
  FUN_004e5b20(bea_arg(this_01), bea_arg(puVar8));
  return (undefined4 *)(local_14);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538960, ap_00538960));

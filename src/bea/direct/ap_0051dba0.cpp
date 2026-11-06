// auto-ported from 0051dba0_vslot0.c (CFEPMultiplayerStart::vslot0, 487 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPMultiplayerStart;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089bbf0 GLOBAL_AT(undefined4, 0x0089bbf0)
#define DAT_0089d900 GLOBAL_AT(int, 0x0089d900)
#define DAT_0089d904 GLOBAL_AT(int, 0x0089d904)
#define s_Unknown_Mesh_00628f9c ((char*)0x00628f9c)
#define s_transform_00628f90 ((char*)0x00628f90)
#define s_C__dev_ONSLAUGHT2_FEPMultiplayer_0063fc24 ((char*)0x0063fc24)
typedef uint32_t (BEA_THISCALL* FUN_0046b950_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046b950_t> FUN_0046b950 = {(FUN_0046b950_t)0x0046b950};
typedef uint32_t (BEA_THISCALL* FUN_0046bab0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046bab0_t> FUN_0046bab0 = {(FUN_0046bab0_t)0x0046bab0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_0051dba0(CFEPMultiplayerStart * this_)
{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x108);
  undefined4 &local_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x104);
  undefined4 &local_100 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x100);
  undefined4 (&local_f8)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x110 - 0xf8);
  char (&local_c8)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0x110 - 0xc8);
  this_[4] = (CFEPMultiplayerStart)0x0;
  this_[5] = (CFEPMultiplayerStart)0x1;
  *(undefined4 *)(this_ + 0x30) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  *(undefined4 *)(this_ + 0x20) = 0;
  *(undefined4 *)(this_ + 0x24) = 0;
  *(undefined4 *)(this_ + 0x28) = 0;
  *(undefined4 *)(this_ + 0x2c) = 0;
  if (DAT_0083d448 == 0) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPMultiplayer_0063fc24), bea_arg(0x38));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = ((void*)0x005db2c4);
    }
    *(undefined4 **)(this_ + 0x10) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      local_104 = 0;
      local_108 = 0;
      local_100 = 0;
      local_c8[0] = '\0';
      puVar6 = &DAT_0089bbf0;
      puVar8 = local_f8;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      pcVar7 = (char *)(DAT_0089d900 + 0x24);
      if (DAT_0089d900 == 0) {
        pcVar7 = s_Unknown_Mesh_00628f9c;
      }
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar4 = ~uVar4;
      pcVar7 = pcVar9 + -uVar4;
      pcVar9 = local_c8;
      for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_0046b950(bea_arg(puVar2), bea_arg(&local_108));
      FUN_0046bab0(bea_arg(*(void **)(this_ + 0x10)), bea_arg(s_transform_00628f90));
    }
    if (DAT_0083d448 == 0) {
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPMultiplayer_0063fc24), bea_arg(0x49));
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = ((void*)0x005db2c4);
      }
      *(undefined4 **)(this_ + 0x14) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        local_104 = 0;
        local_108 = 0;
        local_100 = 0;
        local_c8[0] = '\0';
        puVar6 = &DAT_0089bbf0;
        puVar8 = local_f8;
        for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        pcVar7 = (char *)(DAT_0089d904 + 0x24);
        if (DAT_0089d904 == 0) {
          pcVar7 = s_Unknown_Mesh_00628f9c;
        }
        uVar4 = 0xffffffff;
        do {
          pcVar9 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar9;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        uVar4 = ~uVar4;
        pcVar7 = pcVar9 + -uVar4;
        pcVar9 = local_c8;
        for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_0046b950(bea_arg(puVar2), bea_arg(&local_108));
        FUN_0046bab0(bea_arg(*(void **)(this_ + 0x14)), bea_arg(s_transform_00628f90));
      }
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051dba0, ap_0051dba0));

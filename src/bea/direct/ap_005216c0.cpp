// auto-ported from 005216c0_vslot0.c (CFEPWingmen::vslot0, 922 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x420: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPWingmen;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089bd40 GLOBAL_AT(undefined4, 0x0089bd40)
#define DAT_0089d908 GLOBAL_AT(int, 0x0089d908)
#define DAT_0089d90c GLOBAL_AT(int, 0x0089d90c)
#define DAT_0089d910 GLOBAL_AT(int, 0x0089d910)
#define s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c ((char*)0x0063fd4c)
#define s_Unknown_Mesh_00628f9c ((char*)0x00628f9c)
#define s_data_WorldHeaders_dat_00628f78 ((char*)0x00628f78)
typedef uint32_t (BEA_THISCALL* FUN_0046b950_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046b950_t> FUN_0046b950 = {(FUN_0046b950_t)0x0046b950};
typedef void* (BEA_THISCALL* FUN_00547d70_t)(uint32_t);
static const bea_guard<FUN_00547d70_t> FUN_00547d70 = {(FUN_00547d70_t)0x00547d70};
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static undefined4 BEA_THISCALL ap_005216c0(CFEPWingmen * this_)
{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;

  alignas(16) uint8_t bea_frame_[0x420] = {};   // the original stack frame (emulate_frame)
  int &local_420 = *reinterpret_cast<int *>(bea_frame_ + 0x420 - 0x420);
  undefined1 (&local_41c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x420 - 0x41c);
  undefined4 &local_418 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x418);
  undefined4 &local_414 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x414);
  undefined4 &local_410 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x410);
  undefined4 (&local_408)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x420 - 0x408);
  char (&local_3d8)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0x420 - 0x3d8);
  undefined4 &local_310 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x310);
  undefined4 &local_30c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x30c);
  undefined4 &local_308 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x308);
  undefined4 (&local_300)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x420 - 0x300);
  char (&local_2d0)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0x420 - 0x2d0);
  undefined1 (&local_208)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x420 - 0x208);
  undefined1 (&local_d4)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0x420 - 0xd4);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x420 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x420 - 0x4);
  *(undefined4 *)(this_ + 0x14) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  *(undefined4 *)(this_ + 0x20) = 0;
  *(undefined4 *)(this_ + 0x24) = 0xc47a0000;
  if (DAT_0083d448 == 0) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c), bea_arg(0x80));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = ((void*)0x005db2c4);
    }
    *(undefined4 **)(this_ + 8) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      local_418 = 0;
      local_3d8[0] = '\0';
      puVar7 = &DAT_0089bd40;
      puVar9 = local_408;
      for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      pcVar8 = (char *)(DAT_0089d908 + 0x24);
      if (DAT_0089d908 == 0) {
        pcVar8 = s_Unknown_Mesh_00628f9c;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar5 = ~uVar5;
      pcVar8 = pcVar10 + -uVar5;
      pcVar10 = local_3d8;
      for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_0046b950(bea_arg(puVar2), bea_arg(&local_418));
    }
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c), bea_arg(0x8b));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = ((void*)0x005db2c4);
    }
    *(undefined4 **)(this_ + 0xc) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      local_418 = 0;
      local_3d8[0] = '\0';
      puVar7 = &DAT_0089bd40;
      puVar9 = local_408;
      for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      pcVar8 = (char *)(DAT_0089d90c + 0x24);
      if (DAT_0089d90c == 0) {
        pcVar8 = s_Unknown_Mesh_00628f9c;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar5 = ~uVar5;
      pcVar8 = pcVar10 + -uVar5;
      pcVar10 = local_3d8;
      for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_0046b950(bea_arg(puVar2), bea_arg(&local_418));
    }
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c), bea_arg(0x96));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = ((void*)0x005db2c4);
    }
    *(undefined4 **)(this_ + 0x10) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      local_310 = 0;
      local_2d0[0] = '\0';
      puVar7 = &DAT_0089bd40;
      puVar9 = local_300;
      for (iVar4 = 0xc; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      pcVar8 = (char *)(DAT_0089d910 + 0x24);
      if (DAT_0089d910 == 0) {
        pcVar8 = s_Unknown_Mesh_00628f9c;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar5 = ~uVar5;
      pcVar8 = pcVar10 + -uVar5;
      pcVar10 = local_2d0;
      for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_0046b950(bea_arg(puVar2), bea_arg(&local_310));
    }
  }
  FUN_00547d70(bea_arg(local_208));
  FUN_0055de9b(local_d4,s_data_WorldHeaders_dat_00628f78);
  iVar4 = FUN_00547ec0(bea_arg(local_208), bea_arg(local_d4), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar4 == 0) {
    FUN_00548c00(bea_arg(local_208));
    FUN_00547d90(bea_arg(local_208));
    uVar3 = 0;
  }
  else {
    FUN_00548570(bea_arg(local_208), bea_arg(local_41c), bea_arg(4));
    FUN_00548570(bea_arg(local_208), bea_arg(&local_420), bea_arg(4));
    iVar4 = 0;
    if (0 < local_420) {
      do {
        bea_vcall<uint32_t>(this_, 0x24, local_208);
        iVar4 = iVar4 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < local_420)));
    }
    FUN_00548c00(bea_arg(local_208));
    FUN_00547d90(bea_arg(local_208));
    uVar3 = 1;
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005216c0, ap_005216c0));

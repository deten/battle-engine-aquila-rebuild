// auto-ported from 0044fa90_vslot0.c (CFEPBEConfig::vslot0, 633 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x330: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPBEConfig;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00677738 GLOBAL_AT(undefined4, 0x00677738)
#define DAT_0089d900 GLOBAL_AT(int, 0x0089d900)
#define s_beconf__init___3_00628f64 ((char*)0x00628f64)
#define s_beconf__init___1_00628f50 ((char*)0x00628f50)
#define s_header__d_00628f04 ((char*)0x00628f04)
#define s_beconf__init___0_00628fd0 ((char*)0x00628fd0)
#define s_beconf__init___4_00628f10 ((char*)0x00628f10)
#define s_data_WorldHeaders_dat_00628f78 ((char*)0x00628f78)
#define s_Unknown_Mesh_00628f9c ((char*)0x00628f9c)
#define s_C__dev_ONSLAUGHT2_FEPBEConfig_cp_00628fac ((char*)0x00628fac)
#define s_transform_00628f90 ((char*)0x00628f90)
#define s_beconf__init___5_00628ef0 ((char*)0x00628ef0)
#define s_data_worldheaders_dat_00628f38 ((char*)0x00628f38)
#define s_beconf__init___2_00628f24 ((char*)0x00628f24)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef uint32_t (BEA_THISCALL* FUN_0046b950_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046b950_t> FUN_0046b950 = {(FUN_0046b950_t)0x0046b950};
typedef uint32_t (BEA_THISCALL* FUN_0046bab0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046bab0_t> FUN_0046bab0 = {(FUN_0046bab0_t)0x0046bab0};
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

static undefined4 BEA_THISCALL ap_0044fa90(CFEPBEConfig * this_)
{
  char cVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x330] = {};   // the original stack frame (emulate_frame)
  int &local_32c = *reinterpret_cast<int *>(bea_frame_ + 0x330 - 0x32c);
  char * &local_328 = *reinterpret_cast<char * *>(bea_frame_ + 0x330 - 0x328);
  undefined4 &local_324 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x324);
  undefined4 &local_320 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x320);
  undefined4 &local_31c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x31c);
  undefined4 &local_318 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x318);
  undefined1 (&local_314)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x330 - 0x314);
  undefined4 &local_310 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x310);
  undefined4 &local_30c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x30c);
  undefined4 &local_308 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x308);
  undefined4 &local_304 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x304);
  undefined4 (&local_300)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x330 - 0x300);
  char (&local_2d0)[200] = *reinterpret_cast<char (*)[200]>(bea_frame_ + 0x330 - 0x2d0);
  undefined1 (&local_208)[308] = *reinterpret_cast<undefined1 (*)[308]>(bea_frame_ + 0x330 - 0x208);
  undefined1 (&local_d4)[200] = *reinterpret_cast<undefined1 (*)[200]>(bea_frame_ + 0x330 - 0xd4);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x330 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x330 - 0x4);
  CRenderThing__vslot3(s_beconf__init___0_00628fd0);
  *(undefined4 *)(this_ + 0x1c) = 0xc47a0000;
  *(undefined4 *)(this_ + 0xc) = 0;
  *(undefined4 *)(this_ + 0x10) = 0;
  *(undefined4 *)(this_ + 0x14) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  if (DAT_0083d448 == 0) {
    this_00 = (undefined4 *)
              FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x5c), bea_arg(0x37), bea_arg(s_C__dev_ONSLAUGHT2_FEPBEConfig_cp_00628fac), bea_arg(0x140));
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      *this_00 = ((void*)0x005db2c4);
    }
    *(undefined4 **)(this_ + 8) = this_00;
    if (this_00 != (undefined4 *)0x0) {
      local_310 = 0;
      local_304 = local_318;
      local_2d0[0] = '\0';
      puVar6 = &DAT_00677738;
      puVar7 = local_300;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      pcVar8 = (char *)(DAT_0089d900 + 0x24);
      if (DAT_0089d900 == 0) {
        pcVar8 = s_Unknown_Mesh_00628f9c;
      }
      uVar4 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      uVar4 = ~uVar4;
      local_328 = local_2d0;
      pcVar8 = pcVar9 + -uVar4;
      pcVar9 = local_328;
      for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_0046b950(bea_arg(this_00), bea_arg(&local_310));
      FUN_0046bab0(bea_arg(*(void **)(this_ + 8)), bea_arg(s_transform_00628f90));
    }
  }
  FUN_00547d70(bea_arg(local_208));
  FUN_0055de9b(local_d4,s_data_WorldHeaders_dat_00628f78);
  CRenderThing__vslot3(s_beconf__init___3_00628f64);
  iVar3 = FUN_00547ec0(bea_arg(local_208), bea_arg(local_d4), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar3 == 0) {
    CRenderThing__vslot3(s_beconf__init___1_00628f50);
    FUN_0042c750(bea_arg(s_data_worldheaders_dat_00628f38), bea_arg(0xffffffff));
    FUN_00548c00(bea_arg(local_208));
    FUN_00547d90(bea_arg(local_208));
    uVar2 = 0;
  }
  else {
    CRenderThing__vslot3(s_beconf__init___2_00628f24);
    FUN_00548570(bea_arg(local_208), bea_arg(local_314), bea_arg(4));
    FUN_00548570(bea_arg(local_208), bea_arg(&local_32c), bea_arg(4));
    CRenderThing__vslot3(s_beconf__init___4_00628f10);
    iVar3 = 0;
    if (0 < local_32c) {
      do {
        CRenderThing__vslot3(s_header__d_00628f04);
        bea_vcall<uint32_t>(this_, 0x24, local_208);
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 < local_32c)));
    }
    FUN_00548c00(bea_arg(local_208));
    CRenderThing__vslot3(s_beconf__init___5_00628ef0);
    FUN_00547d90(bea_arg(local_208));
    uVar2 = 1;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044fa90, ap_0044fa90));

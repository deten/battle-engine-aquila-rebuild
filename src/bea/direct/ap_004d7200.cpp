// auto-ported from 004d7200_FUN_004d7200.c (FUN_004d7200, 2071 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x5d0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define DAT_0083cb08 GLOBAL_AT(char, 0x0083cb08)
#define DAT_006317cc GLOBAL_AT(int, 0x006317cc)
#define DAT_00631b77 GLOBAL_AT(char, 0x00631b77)
#define DAT_00631b76 GLOBAL_AT(char, 0x00631b76)
#define DAT_00631b75 GLOBAL_AT(char, 0x00631b75)
#define DAT_00631b74 GLOBAL_AT(char, 0x00631b74)
#define DAT_00631b6f GLOBAL_AT(char, 0x00631b6f)
#define DAT_00631b6e GLOBAL_AT(char, 0x00631b6e)
#define DAT_00631b6d GLOBAL_AT(char, 0x00631b6d)
#define DAT_00631b6c GLOBAL_AT(char, 0x00631b6c)
#define DAT_00631b67 GLOBAL_AT(char, 0x00631b67)
#define DAT_00631b66 GLOBAL_AT(char, 0x00631b66)
#define DAT_00631b65 GLOBAL_AT(char, 0x00631b65)
#define DAT_00631b64 GLOBAL_AT(char, 0x00631b64)
#define DAT_006317dc GLOBAL_AT(int, 0x006317dc)
#define DAT_006317e0 GLOBAL_AT(int, 0x006317e0)
#define DAT_006317e4 GLOBAL_AT(int, 0x006317e4)
#define DAT_006317e8 GLOBAL_AT(int, 0x006317e8)
#define DAT_006317ec GLOBAL_AT(int, 0x006317ec)
#define DAT_0062fad7 GLOBAL_AT(char, 0x0062fad7)
#define DAT_0062fad6 GLOBAL_AT(char, 0x0062fad6)
#define DAT_0062fad5 GLOBAL_AT(char, 0x0062fad5)
#define DAT_0062fad4 GLOBAL_AT(char, 0x0062fad4)
#define DAT_0063198f GLOBAL_AT(char, 0x0063198f)
#define DAT_0063198e GLOBAL_AT(char, 0x0063198e)
#define DAT_0063198d GLOBAL_AT(char, 0x0063198d)
#define DAT_0063198c GLOBAL_AT(char, 0x0063198c)
#define DAT_00631987 GLOBAL_AT(char, 0x00631987)
#define DAT_00631986 GLOBAL_AT(char, 0x00631986)
#define DAT_00631985 GLOBAL_AT(char, 0x00631985)
#define DAT_00631984 GLOBAL_AT(char, 0x00631984)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_0063197f GLOBAL_AT(char, 0x0063197f)
#define DAT_0063197e GLOBAL_AT(char, 0x0063197e)
#define DAT_0063197d GLOBAL_AT(char, 0x0063197d)
#define DAT_0063197c GLOBAL_AT(char, 0x0063197c)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_00631977 GLOBAL_AT(char, 0x00631977)
#define DAT_00631976 GLOBAL_AT(char, 0x00631976)
#define DAT_00631975 GLOBAL_AT(char, 0x00631975)
#define DAT_00631974 GLOBAL_AT(char, 0x00631974)
#define DAT_0063196f GLOBAL_AT(char, 0x0063196f)
#define DAT_0063196e GLOBAL_AT(char, 0x0063196e)
#define DAT_0063196d GLOBAL_AT(char, 0x0063196d)
#define DAT_0063196c GLOBAL_AT(char, 0x0063196c)
#define DAT_00631967 GLOBAL_AT(char, 0x00631967)
#define DAT_00631966 GLOBAL_AT(char, 0x00631966)
#define DAT_00631965 GLOBAL_AT(char, 0x00631965)
#define DAT_00631964 GLOBAL_AT(char, 0x00631964)
#define DAT_0063195f GLOBAL_AT(char, 0x0063195f)
#define DAT_0063195e GLOBAL_AT(char, 0x0063195e)
#define DAT_0063195d GLOBAL_AT(char, 0x0063195d)
#define DAT_0063195c GLOBAL_AT(char, 0x0063195c)
#define DAT_00631957 GLOBAL_AT(char, 0x00631957)
#define DAT_00631956 GLOBAL_AT(char, 0x00631956)
#define DAT_00631955 GLOBAL_AT(char, 0x00631955)
#define DAT_00631954 GLOBAL_AT(char, 0x00631954)
#define DAT_0083d3d0 GLOBAL_AT(int, 0x0083d3d0)
#define DAT_0063194f GLOBAL_AT(char, 0x0063194f)
#define DAT_0063194e GLOBAL_AT(char, 0x0063194e)
#define DAT_0063194d GLOBAL_AT(char, 0x0063194d)
#define DAT_0063194c GLOBAL_AT(char, 0x0063194c)
#define DAT_00631947 GLOBAL_AT(char, 0x00631947)
#define DAT_00631946 GLOBAL_AT(char, 0x00631946)
#define DAT_00631945 GLOBAL_AT(char, 0x00631945)
#define DAT_00631944 GLOBAL_AT(char, 0x00631944)
#define DAT_009c64d8 GLOBAL_AT(int, 0x009c64d8)
#define DAT_0063193f GLOBAL_AT(char, 0x0063193f)
#define DAT_0063193e GLOBAL_AT(char, 0x0063193e)
#define DAT_0063193d GLOBAL_AT(char, 0x0063193d)
#define DAT_0063193c GLOBAL_AT(char, 0x0063193c)
#define DAT_008aa9f0 GLOBAL_AT(int, 0x008aa9f0)
#define DAT_00631937 GLOBAL_AT(char, 0x00631937)
#define DAT_00631936 GLOBAL_AT(char, 0x00631936)
#define DAT_00631935 GLOBAL_AT(char, 0x00631935)
#define DAT_00631934 GLOBAL_AT(char, 0x00631934)
#define DAT_008a0f34 GLOBAL_AT(int, 0x008a0f34)
#define s_Loading_level_resources_00631be0 ((char*)0x00631be0)
#define s_Unknown_chunk_ID__s_in_resource_f_0063190c ((char*)0x0063190c)
#define s_Loading_goodie_resources_00631bc4 ((char*)0x00631bc4)
#define s_Resource_file_does_not_match_cod_00631a54 ((char*)0x00631a54)
#define s_Loading_Frontend_resources_00631c68 ((char*)0x00631c68)
#define s_Loading_Frontend_resources_00631c4c ((char*)0x00631c4c)
#define s_Loading_loading_resources_00631c30 ((char*)0x00631c30)
#define s_Loading_level_resources_00631bfc ((char*)0x00631bfc)
#define s_C__dev_ONSLAUGHT2_ResourceAccumu_00631b7c ((char*)0x00631b7c)
#define s_Resource_file_does_not_match_cod_00631ab0 ((char*)0x00631ab0)
#define s_Resource_file_does_not_match_cod_00631b08 ((char*)0x00631b08)
#define s_Resource_file_does_not_match_cod_00631994 ((char*)0x00631994)
#define s_Loading_base_resources_00631c84 ((char*)0x00631c84)
#define s_Resource_file_does_not_match_cod_006319f4 ((char*)0x006319f4)
#define s_Loading_loading_resources_00631c14 ((char*)0x00631c14)
#define s_Loading_base_resources_00631c9c ((char*)0x00631c9c)
#define s_CResourceAccumulator__ReadResour_006318d4 ((char*)0x006318d4)
#define s_Loading_goodie_resources_00631ba8 ((char*)0x00631ba8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef void * (BEA_THISCALL* FUN_004237d0_t)(uint32_t);
static const bea_guard<FUN_004237d0_t> FUN_004237d0 = {(FUN_004237d0_t)0x004237d0};
typedef uint32_t (BEA_THISCALL* FUN_00423840_t)(uint32_t);
static const bea_guard<FUN_00423840_t> FUN_00423840 = {(FUN_00423840_t)0x00423840};
typedef uint32_t (BEA_THISCALL* FUN_00423870_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00423870_t> FUN_00423870 = {(FUN_00423870_t)0x00423870};
typedef undefined4 (BEA_THISCALL* FUN_004238c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004238c0_t> FUN_004238c0 = {(FUN_004238c0_t)0x004238c0};
typedef int (BEA_THISCALL* FUN_00423900_t)(uint32_t);
static const bea_guard<FUN_00423900_t> FUN_00423900 = {(FUN_00423900_t)0x00423900};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00423990_t)(uint32_t);
static const bea_guard<FUN_00423990_t> FUN_00423990 = {(FUN_00423990_t)0x00423990};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef uint32_t (BEA_THISCALL* FUN_00441000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00441000_t> FUN_00441000 = {(FUN_00441000_t)0x00441000};
typedef uint32_t (BEA_THISCALL* FUN_0044a6e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a6e0_t> FUN_0044a6e0 = {(FUN_0044a6e0_t)0x0044a6e0};
typedef uint32_t (BEA_THISCALL* FUN_0045c870_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0045c870_t> FUN_0045c870 = {(FUN_0045c870_t)0x0045c870};
typedef int * (BEA_CDECL* FUN_004aab90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aab90_t> FUN_004aab90 = {(FUN_004aab90_t)0x004aab90};
typedef undefined4 (BEA_CDECL* FUN_004d6f70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d6f70_t> FUN_004d6f70 = {(FUN_004d6f70_t)0x004d6f70};
typedef uint32_t (BEA_STDCALL* FUN_004ee8a0_t)(uint32_t);
static const bea_guard<FUN_004ee8a0_t> FUN_004ee8a0 = {(FUN_004ee8a0_t)0x004ee8a0};
typedef uint32_t (BEA_CDECL* FUN_005042f0_t)(uint32_t);
static const bea_guard<FUN_005042f0_t> FUN_005042f0 = {(FUN_005042f0_t)0x005042f0};
typedef uint32_t (BEA_THISCALL* FUN_0050b780_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050b780_t> FUN_0050b780 = {(FUN_0050b780_t)0x0050b780};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515b10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515b10_t> FUN_00515b10 = {(FUN_00515b10_t)0x00515b10};
typedef uint32_t (BEA_CDECL* FUN_00543d90_t)(uint32_t);
static const bea_guard<FUN_00543d90_t> FUN_00543d90 = {(FUN_00543d90_t)0x00543d90};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_00550750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00550750_t> FUN_00550750 = {(FUN_00550750_t)0x00550750};
typedef uint32_t (BEA_THISCALL* FUN_00556490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00556490_t> FUN_00556490 = {(FUN_00556490_t)0x00556490};
typedef undefined4 * (BEA_CDECL* FUN_00559be0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00559be0_t> FUN_00559be0 = {(FUN_00559be0_t)0x00559be0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_CDECL ap_004d7200(int param_1, int param_2, int param_3)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x5d0] = {};   // the original stack frame (emulate_frame)
  char * &local_5cc = *reinterpret_cast<char * *>(bea_frame_ + 0x5d0 - 0x5cc);
  char &local_5c5 = *reinterpret_cast<char *>(bea_frame_ + 0x5d0 - 0x5c5);
  char &local_5c4 = *reinterpret_cast<char *>(bea_frame_ + 0x5d0 - 0x5c4);
  undefined1 &local_5c3 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x5d0 - 0x5c3);
  undefined1 &local_5c2 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x5d0 - 0x5c2);
  undefined1 &local_5c1 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x5d0 - 0x5c1);
  undefined1 &local_5c0 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x5d0 - 0x5c0);
  float &local_5bc = *reinterpret_cast<float *>(bea_frame_ + 0x5d0 - 0x5bc);
  undefined1 (&local_5b8)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x5d0 - 0x5b8);
  undefined1 (&local_5b4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x5d0 - 0x5b4);
  undefined1 (&local_5b0)[64] = *reinterpret_cast<undefined1 (*)[64]>(bea_frame_ + 0x5d0 - 0x5b0);
  undefined1 (&local_570)[100] = *reinterpret_cast<undefined1 (*)[100]>(bea_frame_ + 0x5d0 - 0x570);
  undefined1 (&local_50c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x5d0 - 0x50c);
  undefined1 (&local_40c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x5d0 - 0x40c);
  undefined1 (&local_30c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x5d0 - 0x30c);
  undefined1 (&local_20c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x5d0 - 0x20c);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x5d0 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x5d0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x5d0 - 0x4);
  local_5c5 = param_2 != 0;
  fVar8 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  local_5bc = (float)fVar8;
  if (param_1 == -1) {
    FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_base_resources_00631c9c));
    pcVar2 = s_Loading_base_resources_00631c84;
  }
  else if (param_1 == -2) {
    FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_Frontend_resources_00631c68));
    pcVar2 = s_Loading_Frontend_resources_00631c4c;
  }
  else {
    if (param_1 == -3) {
      FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_loading_resources_00631c30));
      CRenderThing__vslot3(s_Loading_loading_resources_00631c14);
      return;
    }
    if (param_1 < 0) {
      FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_goodie_resources_00631bc4));
      pcVar2 = s_Loading_goodie_resources_00631ba8;
    }
    else {
      FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Loading_level_resources_00631bfc));
      pcVar2 = s_Loading_level_resources_00631be0;
    }
  }
  CRenderThing__vslot3(pcVar2);
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x100), bea_arg(0x61), bea_arg(s_C__dev_ONSLAUGHT2_ResourceAccumu_00631b7c), bea_arg(0x300));
  local_5cc = pcVar2;
  FUN_004d6f70(bea_arg(pcVar2), bea_arg(param_1), bea_arg(1));
  if (-1 < param_1) {
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar7 = &DAT_0083cb08;
    for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((pcVar2 = local_5cc, uVar4 != 0)); uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  local_5cc = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_ResourceAccumu_00631b7c), bea_arg(0x330));
  pcVar6 = (char *)0x0;
  if (local_5cc != (char *)0x0) {
    pcVar6 = (char *)FUN_004237d0(bea_arg(local_5cc));
  }
  if (param_2 == 0) {
    iVar3 = FUN_004238c0(bea_arg(pcVar6), bea_arg(pcVar2));
    if (iVar3 == 0) {
      if (param_1 == -1) {
        pcVar7 = s_Loading_base_resources_00631c9c;
      }
      else if (param_1 == -2) {
        pcVar7 = s_Loading_Frontend_resources_00631c68;
      }
      else if (param_1 == -3) {
        pcVar7 = s_Loading_loading_resources_00631c30;
      }
      else if (param_1 < 0) {
        pcVar7 = s_Loading_goodie_resources_00631bc4;
      }
      else {
        pcVar7 = s_Loading_level_resources_00631bfc;
      }
      FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(pcVar7), bea_arg(0));
      if (pcVar6 != (char *)0x0) {
        FUN_00423840(bea_arg(pcVar6));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pcVar6));
      }
      goto LAB_004d79f4;
    }
  }
  else {
    FUN_00423870(bea_arg(pcVar6), bea_arg(param_2));
  }
  if (-1 < param_1) {
    DAT_006317cc = param_1;
  }
  iVar3 = FUN_00423910(bea_arg(pcVar6));
  while (BEA_LOOP_GUARD((iVar3 != 0))) {
    if (iVar3 == ((DAT_00631b77 * 0x100 + (int)DAT_00631b76) * 0x100 + (int)DAT_00631b75) * 0x100 +
                 (int)DAT_00631b74) {
      FUN_00423960(bea_arg(pcVar6), bea_arg(local_5b4), bea_arg(4), bea_arg(1));
LAB_004d7940:
      FUN_00423990(bea_arg(pcVar6));
    }
    else if (iVar3 == ((DAT_00631b6f * 0x100 + (int)DAT_00631b6e) * 0x100 + (int)DAT_00631b6d) *
                      0x100 + (int)DAT_00631b6c) {
      FUN_00423960(bea_arg(pcVar6), bea_arg(local_5b8), bea_arg(4), bea_arg(1));
    }
    else {
      if (iVar3 == ((DAT_00631b67 * 0x100 + (int)DAT_00631b66) * 0x100 + (int)DAT_00631b65) * 0x100
                   + (int)DAT_00631b64) {
        FUN_00423960(bea_arg(pcVar6), bea_arg(&local_5cc), bea_arg(4), bea_arg(1));
        if (local_5cc != DAT_006317dc) {
          FUN_0055de9b(local_20c,s_Resource_file_does_not_match_cod_00631b08,(int)DAT_006317dc,
                       (int)local_5cc);
        }
        FUN_00423960(bea_arg(pcVar6), bea_arg(&local_5cc), bea_arg(4), bea_arg(1));
        if (local_5cc != DAT_006317e0) {
          FUN_0055de9b(local_50c,s_Resource_file_does_not_match_cod_00631ab0,(int)DAT_006317e0,
                       (int)local_5cc);
        }
        FUN_00423960(bea_arg(pcVar6), bea_arg(&local_5cc), bea_arg(4), bea_arg(1));
        if (local_5cc != DAT_006317e4) {
          FUN_0055de9b(local_40c,s_Resource_file_does_not_match_cod_00631a54,(int)DAT_006317e4,
                       (int)local_5cc);
        }
        FUN_00423960(bea_arg(pcVar6), bea_arg(&local_5cc), bea_arg(4), bea_arg(1));
        if (local_5cc != DAT_006317e8) {
          FUN_0055de9b(local_30c,s_Resource_file_does_not_match_cod_006319f4,(int)DAT_006317e8,
                       (int)local_5cc);
        }
        FUN_00423960(bea_arg(pcVar6), bea_arg(&local_5cc), bea_arg(4), bea_arg(1));
        if (local_5cc != DAT_006317ec) {
          FUN_0055de9b(local_10c,s_Resource_file_does_not_match_cod_00631994,(int)DAT_006317ec,
                       (int)local_5cc);
        }
        goto LAB_004d7940;
      }
      if (iVar3 == ((DAT_0062fad7 * 0x100 + (int)DAT_0062fad6) * 0x100 + (int)DAT_0062fad5) * 0x100
                   + (int)DAT_0062fad4) {
        FUN_004aab90(bea_arg(pcVar6), bea_arg(0));
      }
      else {
        if (param_3 != 0) goto LAB_004d7940;
        if (iVar3 == ((DAT_0063198f * 0x100 + (int)DAT_0063198e) * 0x100 + (int)DAT_0063198d) *
                     0x100 + (int)DAT_0063198c) {
          FUN_00559be0(bea_arg(0), bea_arg(pcVar6));
        }
        else if (iVar3 == ((DAT_00631987 * 0x100 + (int)DAT_00631986) * 0x100 + (int)DAT_00631985) *
                          0x100 + (int)DAT_00631984) {
          FUN_0044a6e0(bea_arg(&DAT_0089c9a0), bea_arg(pcVar6));
        }
        else if (iVar3 == ((DAT_0063197f * 0x100 + (int)DAT_0063197e) * 0x100 + (int)DAT_0063197d) *
                          0x100 + (int)DAT_0063197c) {
          FUN_0050b780(bea_arg(&DAT_00855090), bea_arg(pcVar6));
        }
        else if (iVar3 == ((DAT_00631977 * 0x100 + (int)DAT_00631976) * 0x100 + (int)DAT_00631975) *
                          0x100 + (int)DAT_00631974) {
          FUN_00543d90(bea_arg(pcVar6));
        }
        else {
          if (iVar3 == ((DAT_0063196f * 0x100 + (int)DAT_0063196e) * 0x100 + (int)DAT_0063196d) *
                       0x100 + (int)DAT_0063196c) goto LAB_004d7940;
          if (iVar3 == ((DAT_00631967 * 0x100 + (int)DAT_00631966) * 0x100 + (int)DAT_00631965) *
                       0x100 + (int)DAT_00631964) {
            FUN_005042f0(bea_arg(pcVar6));
          }
          else if (iVar3 == ((DAT_0063195f * 0x100 + (int)DAT_0063195e) * 0x100 + (int)DAT_0063195d)
                            * 0x100 + (int)DAT_0063195c) {
            FUN_00515b10(bea_arg(&DAT_0088a0a8), bea_arg(pcVar6));
          }
          else if (iVar3 == ((DAT_00631957 * 0x100 + (int)DAT_00631956) * 0x100 + (int)DAT_00631955)
                            * 0x100 + (int)DAT_00631954) {
            FUN_00556490(bea_arg(&DAT_0083d3d0), bea_arg(pcVar6));
          }
          else if (iVar3 == ((DAT_0063194f * 0x100 + (int)DAT_0063194e) * 0x100 + (int)DAT_0063194d)
                            * 0x100 + (int)DAT_0063194c) {
            FUN_004ee8a0(bea_arg(pcVar6));
          }
          else if (iVar3 == ((DAT_00631947 * 0x100 + (int)DAT_00631946) * 0x100 + (int)DAT_00631945)
                            * 0x100 + (int)DAT_00631944) {
            FUN_00550750(bea_arg(&DAT_009c64d8), bea_arg(pcVar6));
          }
          else if (iVar3 == ((DAT_0063193f * 0x100 + (int)DAT_0063193e) * 0x100 + (int)DAT_0063193d)
                            * 0x100 + (int)DAT_0063193c) {
            FUN_00441000(bea_arg(&DAT_008aa9f0), bea_arg(pcVar6));
          }
          else {
            if (iVar3 != ((DAT_00631937 * 0x100 + (int)DAT_00631936) * 0x100 + (int)DAT_00631935) *
                         0x100 + (int)DAT_00631934) {
              local_5c4 = (char)iVar3;
              local_5c0 = 0;
              local_5c1 = (undefined1)((uint)iVar3 >> 0x18);
              local_5c3 = (undefined1)((uint)iVar3 >> 8);
              local_5c2 = (undefined1)((uint)iVar3 >> 0x10);
              FUN_0055de9b(local_5b0,s_Unknown_chunk_ID__s_in_resource_f_0063190c,&local_5c4);
              CRenderThing__vslot3(local_5b0);
              goto LAB_004d7940;
            }
            FUN_0045c870(bea_arg(&DAT_008a0f34), bea_arg(pcVar6));
          }
        }
      }
    }
    if (local_5c5 == '\0') {
      FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0));
    }
    iVar3 = FUN_00423910(bea_arg(pcVar6));
  }
  FUN_00423900(bea_arg(pcVar6));
  if (param_1 == -1) {
    pcVar7 = s_Loading_base_resources_00631c9c;
  }
  else if (param_1 == -2) {
    pcVar7 = s_Loading_Frontend_resources_00631c68;
  }
  else if (param_1 == -3) {
    pcVar7 = s_Loading_loading_resources_00631c30;
  }
  else {
    pcVar7 = s_Loading_level_resources_00631bfc;
  }
  FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(pcVar7), bea_arg(1));
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pcVar2));
  fVar8 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  FUN_0055de9b(local_570,s_CResourceAccumulator__ReadResour_006318d4,
               (double)(fVar8 - (float10)local_5bc));
  CRenderThing__vslot3(local_570);
  if (pcVar6 == (char *)0x0) {
    return;
  }
  FUN_00423840(bea_arg(pcVar6));
  pcVar2 = pcVar6;
LAB_004d79f4:
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pcVar2));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d7200, ap_004d7200));

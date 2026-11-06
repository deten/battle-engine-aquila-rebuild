// auto-ported from 0046c430_FUN_0046c430.c (FUN_0046c430, 1375 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_0066ffb0 GLOBAL_AT(int, 0x0066ffb0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
#define DAT_009c63f4 GLOBAL_AT(int, 0x009c63f4)
#define DAT_009c63f0 GLOBAL_AT(int, 0x009c63f0)
#define _DAT_009c6404 GLOBAL_AT(int, 0x009c6404)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_00679fa8 GLOBAL_AT(int, 0x00679fa8)
#define DAT_009c7490 GLOBAL_AT(int, 0x009c7490)
#define DAT_0089c590 GLOBAL_AT(int, 0x0089c590)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0062be6c GLOBAL_AT(int, 0x0062be6c)
#define DAT_009c405c GLOBAL_AT(undefined4, 0x009c405c)
#define DAT_008a9e58 GLOBAL_AT(undefined4, 0x008a9e58)
#define s_RemoteCameraOff_0062be98 ((char*)0x0062be98)
#define s_Resets_the_baseline_for_the_memo_0062bda8 ((char*)0x0062bda8)
#define s_Dumps_all_the_dynamic_textures_t_0062be34 ((char*)0x0062be34)
#define s_Is_split_screen_mode_interleaved_0062bd2c ((char*)0x0062bd2c)
#define s_cg_interleavedsplitscreen_0062bd10 ((char*)0x0062bd10)
#define s_Turn_the_navigation_map_off_0062bde0 ((char*)0x0062bde0)
#define s_cg_horizontalsplitscreen_0062bd50 ((char*)0x0062bd50)
#define s_DumpTextures_0062be24 ((char*)0x0062be24)
#define s_Turn_the_navigation_map_on_0062be08 ((char*)0x0062be08)
#define s_Change_map_0062be60 ((char*)0x0062be60)
#define s_Is_split_screen_mode_horizontal_o_0062bd6c ((char*)0x0062bd6c)
#define s_RemoteCameraOn_0062bec4 ((char*)0x0062bec4)
#define s_ResetMemSizes_0062bd98 ((char*)0x0062bd98)
#define s_Show_only_player_1_fullscreen_0062bcf0 ((char*)0x0062bcf0)
#define s_Set_a_remote_camera_on_the_thing_0062bed4 ((char*)0x0062bed4)
#define s_Win_this_level_0062be88 ((char*)0x0062be88)
#define s_NavMapOn_0062bdfc ((char*)0x0062bdfc)
#define s_Lose_this_level_0062be74 ((char*)0x0062be74)
#define s_NavMapOff_0062bdd4 ((char*)0x0062bdd4)
#define s_g_framelength_0062bca0 ((char*)0x0062bca0)
#define s_C__dev_ONSLAUGHT2_game_cpp_0062bba4 ((char*)0x0062bba4)
#define s_cg_fullscreenmultiplayer_0062bcd4 ((char*)0x0062bcd4)
#define s_Turn_off_the_remote_camera_0062bea8 ((char*)0x0062bea8)
#define s_Game_frame_tick_length__seconds__0062bcb0 ((char*)0x0062bcb0)
#define PTR_DAT_0062be84 GLOBAL_AT(void*, 0x0062be84)
#define PTR_DAT_0062be5c GLOBAL_AT(void*, 0x0062be5c)
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef int (BEA_CDECL* FUN_0042d310_t)(void);
static const bea_guard<FUN_0042d310_t> FUN_0042d310 = {(FUN_0042d310_t)0x0042d310};
typedef uint32_t (BEA_CDECL* FUN_0042da00_t)(uint32_t);
static const bea_guard<FUN_0042da00_t> FUN_0042da00 = {(FUN_0042da00_t)0x0042da00};
typedef uint32_t (BEA_THISCALL* FUN_00441e40_t)(uint32_t);
static const bea_guard<FUN_00441e40_t> FUN_00441e40 = {(FUN_00441e40_t)0x00441e40};
typedef uint32_t (BEA_THISCALL* FUN_0044b060_t)(uint32_t);
static const bea_guard<FUN_0044b060_t> FUN_0044b060 = {(FUN_0044b060_t)0x0044b060};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef void * (BEA_THISCALL* FUN_0044c3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044c3d0_t> FUN_0044c3d0 = {(FUN_0044c3d0_t)0x0044c3d0};
typedef uint32_t (BEA_THISCALL* FUN_004729e0_t)(uint32_t);
static const bea_guard<FUN_004729e0_t> FUN_004729e0 = {(FUN_004729e0_t)0x004729e0};
typedef uint32_t (BEA_THISCALL* FUN_0047fab0_t)(uint32_t);
static const bea_guard<FUN_0047fab0_t> FUN_0047fab0 = {(FUN_0047fab0_t)0x0047fab0};
typedef uint32_t (BEA_THISCALL* FUN_004815c0_t)(uint32_t);
static const bea_guard<FUN_004815c0_t> FUN_004815c0 = {(FUN_004815c0_t)0x004815c0};
typedef void * (BEA_THISCALL* FUN_0048f540_t)(uint32_t);
static const bea_guard<FUN_0048f540_t> FUN_0048f540 = {(FUN_0048f540_t)0x0048f540};
typedef uint32_t (BEA_THISCALL* FUN_004919b0_t)(uint32_t);
static const bea_guard<FUN_004919b0_t> FUN_004919b0 = {(FUN_004919b0_t)0x004919b0};
typedef void * (BEA_THISCALL* FUN_004b71e0_t)(uint32_t);
static const bea_guard<FUN_004b71e0_t> FUN_004b71e0 = {(FUN_004b71e0_t)0x004b71e0};
typedef void * (BEA_THISCALL* FUN_004b8dd0_t)(uint32_t);
static const bea_guard<FUN_004b8dd0_t> FUN_004b8dd0 = {(FUN_004b8dd0_t)0x004b8dd0};
typedef void * (BEA_THISCALL* FUN_004cde60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cde60_t> FUN_004cde60 = {(FUN_004cde60_t)0x004cde60};
typedef uint32_t (BEA_THISCALL* FUN_004de8c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004de8c0_t> FUN_004de8c0 = {(FUN_004de8c0_t)0x004de8c0};
typedef uint32_t (BEA_THISCALL* FUN_00538860_t)(uint32_t);
static const bea_guard<FUN_00538860_t> FUN_00538860 = {(FUN_00538860_t)0x00538860};
typedef uint32_t (BEA_THISCALL* FUN_00546b10_t)(uint32_t);
static const bea_guard<FUN_00546b10_t> FUN_00546b10 = {(FUN_00546b10_t)0x00546b10};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_005515a0_t)(uint32_t);
static const bea_guard<FUN_005515a0_t> FUN_005515a0 = {(FUN_005515a0_t)0x005515a0};

static undefined4 BEA_THISCALL ap_0046c430(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_0042d310();
  FUN_00546b10(bea_arg(DAT_0089c9b0));
  FUN_004815c0(bea_arg(&DAT_008aa4e8));
  *(undefined4 *)((int)this_ + 0x3a8) = 0x3d4ccccd;
  *(undefined4 *)((int)this_ + 0xf4) = 0;
  *(undefined4 *)((int)this_ + 0xec) = 0x40400000;
  *(undefined4 *)((int)this_ + 0xc) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x48) = 0xbf800000;
  *(undefined1 *)((int)this_ + 0x38) = 1;
  *(undefined4 *)((int)this_ + 0xf0) = 0x40400000;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x100) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x298) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x20) = 1;
  *(undefined4 *)((int)this_ + 0x394) = 0;
  *(undefined4 *)((int)this_ + 0x2e4) = 0;
  *(undefined4 *)((int)this_ + 0x2e8) = 0;
  puVar2 = (undefined4 *)((int)this_ + 0x308);
  iVar1 = 0x2408;
  do {
    puVar5 = (undefined4 *)((int)&DAT_00660620 + iVar1);
    iVar1 = iVar1 + 4;
    *puVar2 = *puVar5;
    puVar2 = puVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 0x2488)));
  puVar2 = (undefined4 *)((int)this_ + 0x2a4);
  iVar1 = 4;
  do {
    puVar2[8] = 0;
    *puVar2 = 0;
    puVar2[0x1cb] = 0;
    puVar2[4] = 0;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x3b8) = 0;
  *(undefined4 *)((int)this_ + 0x3bc) = 0;
  *(undefined4 *)((int)this_ + 0x304) = 0;
  *(undefined4 *)((int)this_ + 0x114) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this_ + 0x4c);
  puVar5 = (undefined4 *)((int)this_ + 0x54);
  for (iVar1 = 0x12; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xa0) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this_ + 0x9c);
  puVar5 = (undefined4 *)((int)this_ + 0xa4);
  for (iVar1 = 0x12; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this_ + 0x34) = 0;
  FUN_00441e40(bea_arg(&DAT_0066ffb0));
  FUN_0044b060(bea_arg(&DAT_00672fc8));
  DAT_009c6400 = 0;
  DAT_009c63f4 = 0;
  DAT_009c63f0 = 0;
  _DAT_009c6404 = 0;
  FUN_004919b0(bea_arg(&DAT_00704200));
  FUN_004729e0(bea_arg(&DAT_00679fa8));
  FUN_005515a0(bea_arg(&DAT_009c7490));
  FUN_00538860(bea_arg(&DAT_0089c590));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 1;
  FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg((int)this_ + 0xec), bea_arg(0x7d1), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
  *(undefined4 *)((int)this_ + 0x9cc) = 0;
  *(undefined4 *)((int)this_ + 0x9fc) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xa00) = 0xffffffff;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x800c), bea_arg(0x2b), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x1f9));
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044c3d0(bea_arg(pvVar3), bea_arg(0));
  }
  *(undefined4 *)((int)this_ + 0x2e4) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x800c), bea_arg(0x2b), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x1fa));
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044c3d0(bea_arg(pvVar3), bea_arg(1));
  }
  *(undefined4 *)((int)this_ + 0x2e8) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c8), bea_arg(0x29), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x1fb));
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004b71e0(bea_arg(pvVar3));
  }
  *(undefined4 *)((int)this_ + 0x2ec) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x40), bea_arg(0x2a), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x1fc))
  ;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004b8dd0(bea_arg(pvVar3));
  }
  *(undefined4 *)((int)this_ + 0x2f0) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c), bea_arg(0x2a), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x1fd))
  ;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004cde60(bea_arg(pvVar3), bea_arg(0));
  }
  *(undefined4 *)((int)this_ + 0x2f4) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1c), bea_arg(0x78), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x1ff))
  ;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0047fab0(bea_arg(pvVar3));
  }
  *(undefined4 *)((int)this_ + 0x2f8) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x2a), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x200))
  ;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0048f540(bea_arg(pvVar3));
  }
  *(undefined4 *)((int)this_ + 0x2fc) = uVar4;
  pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_game_cpp_0062bba4), bea_arg(0x201));
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004de8c0(bea_arg(pvVar3), bea_arg(0x1e240));
  }
  *(undefined4 *)((int)this_ + 0x304) = uVar4;
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_RemoteCameraOn_0062bec4), bea_arg(s_Set_a_remote_camera_on_the_thing_0062bed4), bea_arg(((void*)0x0046bef0)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_RemoteCameraOff_0062be98), bea_arg(s_Turn_off_the_remote_camera_0062bea8), bea_arg(((void*)0x0046c0b0)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(&PTR_DAT_0062be84), bea_arg(s_Win_this_level_0062be88), bea_arg(((void*)0x0046c180)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(&DAT_0062be6c), bea_arg(s_Lose_this_level_0062be74), bea_arg(((void*)0x0046c200)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(&PTR_DAT_0062be5c), bea_arg(s_Change_map_0062be60), bea_arg(((void*)0x0046be10)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_DumpTextures_0062be24), bea_arg(s_Dumps_all_the_dynamic_textures_t_0062be34), bea_arg(((void*)0x0046bea0)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_NavMapOn_0062bdfc), bea_arg(s_Turn_the_navigation_map_on_0062be08), bea_arg(((void*)0x0046c120)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_NavMapOff_0062bdd4), bea_arg(s_Turn_the_navigation_map_off_0062bde0), bea_arg(((void*)0x0046c150)), bea_arg(0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_ResetMemSizes_0062bd98), bea_arg(s_Resets_the_baseline_for_the_memo_0062bda8), bea_arg(((void*)0x0046be80)), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_horizontalsplitscreen_0062bd50), bea_arg(s_Is_split_screen_mode_horizontal_o_0062bd6c), bea_arg(3), bea_arg((undefined1 *)((int)this_ + 0x38)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_interleavedsplitscreen_0062bd10), bea_arg(s_Is_split_screen_mode_interleaved_0062bd2c), bea_arg(3), bea_arg((undefined4 *)((int)this_ + 0x3c)), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_fullscreenmultiplayer_0062bcd4), bea_arg(s_Show_only_player_1_fullscreen_0062bcf0), bea_arg(3), bea_arg((int)this_ + 0x40), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_g_framelength_0062bca0), bea_arg(s_Game_frame_tick_length__seconds__0062bcb0), bea_arg(4), bea_arg((undefined4 *)((int)this_ + 0x3a8)), bea_arg(0), bea_arg(0));
  puVar2 = &DAT_009c405c;
  puVar5 = &DAT_008a9e58;
  for (iVar1 = 0x81; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0042da00(bea_arg(1));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046c430, ap_0046c430));

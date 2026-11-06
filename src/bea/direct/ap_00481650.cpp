// auto-ported from 00481650_FUN_00481650.c (FUN_00481650, 1179 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s_hud_ForsetiIcon_tga_0062ceb0 ((char*)0x0062ceb0)
#define s_hud_v2_GunsFront_tga_0062d0f4 ((char*)0x0062d0f4)
#define s_hud_v2_RadarOutline_tga_0062d1d8 ((char*)0x0062d1d8)
#define s_hud_Crosshair_Friend_tga_0062d2b4 ((char*)0x0062d2b4)
#define s_hud_v2_GunsOutline_tga_0062d120 ((char*)0x0062d120)
#define s_hud_Menu_Background_tga_0062d098 ((char*)0x0062d098)
#define s_hud_v3_hud_crosshair_primary_tga_0062cfc8 ((char*)0x0062cfc8)
#define s_hud_v2_CircleDarkener_tga_0062d19c ((char*)0x0062d19c)
#define s_hud_v3_hud_crosshair_dot_tga_0062cf84 ((char*)0x0062cf84)
#define s_hud_ScannerBlobLarge_tga_0062d230 ((char*)0x0062d230)
#define s_hud_v3_hud_lock_on_piece2_tga_0062cee4 ((char*)0x0062cee4)
#define s_hud_v3_hud_crosshair_secondary_t_0062cfa4 ((char*)0x0062cfa4)
#define s_hud_Crosshair_Outline_tga_0062d2e8 ((char*)0x0062d2e8)
#define s_hud_v2_ObjectiveInnerCentre_tga_0062d020 ((char*)0x0062d020)
#define s_hud_v2_RadioView_tga_0062d0b0 ((char*)0x0062d0b0)
#define s_hud_v2_ObjectiveRight_tga_0062d060 ((char*)0x0062d060)
#define s_hud_Crosshair_Enemy_tga_0062d2d0 ((char*)0x0062d2d0)
#define s_hud_v3_hud_lock_on_pieces_all_tg_0062cf48 ((char*)0x0062cf48)
#define s_hud_Crosshair_Predictor_tga_0062d298 ((char*)0x0062d298)
#define s_hud_speaker_1d_tga_0062d284 ((char*)0x0062d284)
#define s_hud_ScannerBlobMedium_tga_0062d24c ((char*)0x0062d24c)
#define s_hud_v2_GunsSide_tga_0062d0e0 ((char*)0x0062d0e0)
#define s_hud_v2_GunsTop_tga_0062d10c ((char*)0x0062d10c)
#define s_hud_v3_ScreenMarker_tga_0062cf6c ((char*)0x0062cf6c)
#define s_hud_v3_offscreenarrow_tga_0062ce94 ((char*)0x0062ce94)
#define s_hud_v2_WeaponOutline_tga_0062d180 ((char*)0x0062d180)
#define s_hud_ScannerBlobRepairPad_tga_0062d210 ((char*)0x0062d210)
#define s_hud_v2_WeaponFill_tga_0062d168 ((char*)0x0062d168)
#define s_hud_v3_hud_lock_on_piece3_tga_0062cec4 ((char*)0x0062cec4)
#define s_hud_ScannerBlobSmall_tga_0062d268 ((char*)0x0062d268)
#define s_hud_v2_ObjectiveInnerRight_tga_0062d000 ((char*)0x0062d000)
#define s_hud_v3_hud_target_lockedon_red_t_0062cf24 ((char*)0x0062cf24)
#define s_hud_v3_hud_lock_on_piece1_tga_0062cf04 ((char*)0x0062cf04)
#define s_hud_v2_CircleMask_tga_0062d150 ((char*)0x0062d150)
#define s_hud_v2_ObjectiveInnerLeft_tga_0062d040 ((char*)0x0062d040)
#define s_hud_v3_hud_target_sighted_tga_0062d1f0 ((char*)0x0062d1f0)
#define s_hud_v2_GunsDarken_tga_0062d138 ((char*)0x0062d138)
#define s_hud_v2_white_tga_0062cfec ((char*)0x0062cfec)
#define s_hud_v2_ObjectiveLeft_tga_0062d07c ((char*)0x0062d07c)
#define s_hud_v2_RadioNorth_tga_0062d0c8 ((char*)0x0062d0c8)
#define s_hud_v2_BattleLineOutline_tga_0062d1b8 ((char*)0x0062d1b8)
typedef uint32_t (BEA_THISCALL* FUN_00427110_t)(uint32_t);
static const bea_guard<FUN_00427110_t> FUN_00427110 = {(FUN_00427110_t)0x00427110};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_0053a150_t)(uint32_t);
static const bea_guard<FUN_0053a150_t> FUN_0053a150 = {(FUN_0053a150_t)0x0053a150};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_00481650(void * this_)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int v0;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_14)[20] = *reinterpret_cast<undefined1 (*)[20]>(bea_frame_ + 0x20 - 0x14);
  uVar1 = FUN_004f27f0(s_hud_Crosshair_Outline_tga_0062d2e8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x104) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_Crosshair_Enemy_tga_0062d2d0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x108) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_Crosshair_Friend_tga_0062d2b4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x10c) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_Crosshair_Predictor_tga_0062d298,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x110) = uVar1;
  v0 = 0;
  puVar2 = (undefined4 *)((int)this_ + 0x178);
  do {
    FUN_0055de9b(local_14,s_hud_speaker_1d_tga_0062d284,v0);
    uVar1 = FUN_004f27f0(local_14,0,0,1,1,1);
    *puVar2 = uVar1;
    v0 = v0 + 1;
    puVar2 = puVar2 + 1;
  } while (BEA_LOOP_GUARD((v0 < 6)));
  uVar1 = FUN_004f27f0(s_hud_ScannerBlobSmall_tga_0062d268,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1a0) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_ScannerBlobMedium_tga_0062d24c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1a4) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_ScannerBlobLarge_tga_0062d230,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1a8) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_ScannerBlobRepairPad_tga_0062d210,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1ac) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_target_sighted_tga_0062d1f0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x114) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_RadarOutline_tga_0062d1d8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x118) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_BattleLineOutline_tga_0062d1b8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x11c) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_CircleDarkener_tga_0062d19c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x120) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_WeaponOutline_tga_0062d180,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x124) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_WeaponFill_tga_0062d168,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x128) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_CircleMask_tga_0062d150,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 300) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_GunsDarken_tga_0062d138,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x130) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_GunsOutline_tga_0062d120,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x134) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_GunsTop_tga_0062d10c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x138) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_GunsFront_tga_0062d0f4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x13c) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_GunsSide_tga_0062d0e0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x140) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_RadioNorth_tga_0062d0c8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x148) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_RadioView_tga_0062d0b0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x14c) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_Menu_Background_tga_0062d098,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x150) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_ObjectiveLeft_tga_0062d07c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x154) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_ObjectiveRight_tga_0062d060,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x158) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_ObjectiveInnerLeft_tga_0062d040,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x15c) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_ObjectiveInnerCentre_tga_0062d020,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x160) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_ObjectiveInnerRight_tga_0062d000,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x164) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_white_tga_0062cfec,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x168) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_crosshair_primary_tga_0062cfc8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x16c) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_crosshair_secondary_t_0062cfa4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x170) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_crosshair_dot_tga_0062cf84,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x174) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_ScreenMarker_tga_0062cf6c,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x144) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_lock_on_pieces_all_tg_0062cf48,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x1b0) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_target_lockedon_red_t_0062cf24,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x1b4) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_lock_on_piece1_tga_0062cf04,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x1c8) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_lock_on_piece2_tga_0062cee4,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x1cc) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_hud_lock_on_piece3_tga_0062cec4,0,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x1d0) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_ForsetiIcon_tga_0062ceb0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1d4) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v3_offscreenarrow_tga_0062ce94,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1d8) = uVar1;
  if (*(void **)((int)this_ + 0x60) != (void *)0x0) {
    FUN_00427110(bea_arg(*(void **)((int)this_ + 0x60)));
  }
  if (*(void **)((int)this_ + 0x30) != (void *)0x0) {
    FUN_0053a150(bea_arg(*(void **)((int)this_ + 0x30)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481650, ap_00481650));

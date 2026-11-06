// auto-ported from 004687e0_FUN_004687e0.c (FUN_004687e0, 2522 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_00679b48 GLOBAL_AT(undefined4, 0x00679b48)
#define DAT_009c63f4 GLOBAL_AT(int, 0x009c63f4)
#define DAT_009c63f0 GLOBAL_AT(int, 0x009c63f0)
#define _DAT_009c6404 GLOBAL_AT(int, 0x009c6404)
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define s_FrontEnd_v3_FE_BEA_header_box_tg_0062a028 ((char*)0x0062a028)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a194 ((char*)0x0062a194)
#define s_FrontEnd_v2_FE_White_tga_0062a5e8 ((char*)0x0062a5e8)
#define s_FrontEnd_v2_i_plane_tga_0062a478 ((char*)0x0062a478)
#define s_FrontEnd_v2_FE_Goodies3_tga_0062a554 ((char*)0x0062a554)
#define s_FrontEnd_v2_Flag_SP_tga_0062a4d8 ((char*)0x0062a4d8)
#define s_FrontEnd_RankingB_tga_0062a9c8 ((char*)0x0062a9c8)
#define s_FrontEnd_v3_FE_select_level_brac_00629ffc ((char*)0x00629ffc)
#define s_FrontEnd_RankingEMask_tga_0062a8d8 ((char*)0x0062a8d8)
#define s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a654 ((char*)0x0062a654)
#define s_FrontEnd_v2_FE_white_ring_tga_0062a860 ((char*)0x0062a860)
#define s_FrontEnd_RankingA_tga_0062a9e0 ((char*)0x0062a9e0)
#define s_FrontEnd_v3_FE_select_level_brac_00629fa0 ((char*)0x00629fa0)
#define s_FrontEnd_RankingSMask_tga_0062a964 ((char*)0x0062a964)
#define s_FrontEnd_RankingD_tga_0062a998 ((char*)0x0062a998)
#define s_FrontEnd_v2_FE_avi_box_tga_0062a5a8 ((char*)0x0062a5a8)
#define s_be_trans_msh_00629ed0 ((char*)0x00629ed0)
#define s_FrontEnd_v2_FE_XB_Xbox_tga_00629f30 ((char*)0x00629f30)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a1cc ((char*)0x0062a1cc)
#define s_Done_frontenddata__00629e58 ((char*)0x00629e58)
#define s_FrontEnd_v3_FE_select_level_brac_00629fd0 ((char*)0x00629fd0)
#define s_FrontEnd_BarC_tga_0062aa54 ((char*)0x0062aa54)
#define s_FrontEnd_v2_i_troop_tga_0062a4a8 ((char*)0x0062a4a8)
#define s_FrontEnd_v2_fe_infogrames_tga_0062a3f0 ((char*)0x0062a3f0)
#define s_FrontEnd_v2_FE_XB_MU_tga_00629f14 ((char*)0x00629f14)
#define s_FrontEnd_v2_FE_Reflection_map_tg_0062a83c ((char*)0x0062a83c)
#define s_FrontEnd_RankingS_tga_0062a9f8 ((char*)0x0062a9f8)
#define s_FrontEnd_v3_FE_BEA_header_bracke_0062a09c ((char*)0x0062a09c)
#define s_FrontEnd_v3_SmallStar_tga_00629f84 ((char*)0x00629f84)
#define s_FrontEnd_v3_FE_select_level_epis_0062a3c0 ((char*)0x0062a3c0)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a200 ((char*)0x0062a200)
#define s_FrontEnd_v2_FE_metal_ring_trans__0062a780 ((char*)0x0062a780)
#define s_PS2_Normal_Logo3_msh_00629e6c ((char*)0x00629e6c)
#define s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a604 ((char*)0x0062a604)
#define s_FrontEnd_LevelLink_tga_0062aa7c ((char*)0x0062aa7c)
#define s_FrontEnd_RankingDMask_tga_0062a8f4 ((char*)0x0062a8f4)
#define s_FrontEnd_v2_Flag_GR_tga_0062a4f0 ((char*)0x0062a4f0)
#define s_FrontEnd_v2_FE_level_select_mask_0062a7b4 ((char*)0x0062a7b4)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a0c4 ((char*)0x0062a0c4)
#define s_FrontEnd_LostToys_tga_0062aa10 ((char*)0x0062aa10)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a160 ((char*)0x0062a160)
#define s_FrontEnd_v2_FE_Goodies4_tga_0062a538 ((char*)0x0062a538)
#define s_FrontEnd_RankingCMask_tga_0062a910 ((char*)0x0062a910)
#define s_FrontEnd_v3_FE_BEA_title_bracket_0062a350 ((char*)0x0062a350)
#define s_FrontEnd_v3_FE_BEA_Gamelogo_smal_0062a378 ((char*)0x0062a378)
#define s_FrontEnd_RankingAMask_tga_0062a948 ((char*)0x0062a948)
#define s_FrontEnd_v2_fe_splash1_tga_0062a410 ((char*)0x0062a410)
#define s_FrontEnd_v2_i_Billy_tga_0062a460 ((char*)0x0062a460)
#define s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a67c ((char*)0x0062a67c)
#define s_FrontEnd_v3_FE_BEA_title_text_bo_0062a300 ((char*)0x0062a300)
#define s_FrontEnd_v3_FE_BEA_header_bracke_0062a04c ((char*)0x0062a04c)
#define s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a62c ((char*)0x0062a62c)
#define s_fa_wildcard_J_msh_00629e84 ((char*)0x00629e84)
#define s_FrontEnd_v2_Flag_IT_tga_0062a4c0 ((char*)0x0062a4c0)
#define s_FrontEnd_v3_FE_BEA_title_bracket_0062a328 ((char*)0x0062a328)
#define s_Loading_meshes_00629ee0 ((char*)0x00629ee0)
#define s_FrontEnd_v2_i_Tara_tga_0062a42c ((char*)0x0062a42c)
#define s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a6cc ((char*)0x0062a6cc)
#define s_FrontEnd_v2_i_tank_tga_0062a490 ((char*)0x0062a490)
#define s_FrontEnd_v2_FE_VK_Key_tga_00629f4c ((char*)0x00629f4c)
#define s_FrontEnd_v3_FE_BEA_title_symbol__0062a2d0 ((char*)0x0062a2d0)
#define s_FrontEnd_BarL_tga_0062aa68 ((char*)0x0062aa68)
#define s_FrontEnd_v2_FE_level_select_glow_0062a720 ((char*)0x0062a720)
#define s_FrontEnd_GlareAlpha_tga_0062aa28 ((char*)0x0062aa28)
#define s_FrontEnd_v2_Flag_UK_tga_0062a520 ((char*)0x0062a520)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a234 ((char*)0x0062a234)
#define s_FrontEnd_v2_FE_Arrow_tga_006290f4 ((char*)0x006290f4)
#define s_FrontEnd_v2_FE_Goodies1_tga_0062a58c ((char*)0x0062a58c)
#define s_fa_wildcard_T_msh_00629eac ((char*)0x00629eac)
#define s_be_transm_msh_00629ec0 ((char*)0x00629ec0)
#define s_FrontEnd_v3_FE_BEA_Title2_tga_0062a3a0 ((char*)0x0062a3a0)
#define s_FrontEnd_RankingC_tga_0062a9b0 ((char*)0x0062a9b0)
#define s_FrontEnd_v2_i_Lorenzo_tga_0062a444 ((char*)0x0062a444)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a26c ((char*)0x0062a26c)
#define s_Loading_frontend_textures__0062aa94 ((char*)0x0062aa94)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a12c ((char*)0x0062a12c)
#define s_FrontEnd_v2_Flag_FR_tga_0062a508 ((char*)0x0062a508)
#define s_fa_wildcard_B_msh_00629e98 ((char*)0x00629e98)
#define s_FrontEnd_v2_FE_XB_MU_Corrupt_tga_00629ef0 ((char*)0x00629ef0)
#define s_FrontEnd_RankingBMask_tga_0062a92c ((char*)0x0062a92c)
#define s_FrontEnd_v3_FE_select_level_ring_0062a7dc ((char*)0x0062a7dc)
#define s_FrontEnd_RankingE_tga_0062a980 ((char*)0x0062a980)
#define s_FrontEnd_v2_FE_Goodies2_tga_0062a570 ((char*)0x0062a570)
#define s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a6a4 ((char*)0x0062a6a4)
#define s_FrontEnd_v2_FE_metal_ring_trans__0062a74c ((char*)0x0062a74c)
#define s_FrontEnd_v3_FE_BEA_header_bracke_0062a074 ((char*)0x0062a074)
#define s_FrontEnd_v2_FE_level_select_glow_0062a6f4 ((char*)0x0062a6f4)
#define s_FrontEnd_v2_FE_Forseti_Writing_s_0062a880 ((char*)0x0062a880)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a0f8 ((char*)0x0062a0f8)
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
#define s_FrontEnd_v3_FE_select_level_ring_0062a80c ((char*)0x0062a80c)
#define s_FrontEnd_v2_FE_Forseti_Writing_l_0062a8ac ((char*)0x0062a8ac)
#define s_FrontEnd_BarR_tga_0062aa40 ((char*)0x0062aa40)
#define s_FrontEnd_v3_FE_BEA_title_symbol__0062a2a0 ((char*)0x0062a2a0)
#define s_FrontEnd_v2_FE_Rock_Background_t_0062a5c4 ((char*)0x0062a5c4)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_CDECL* FUN_004a53f0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004a53f0_t> FUN_004a53f0 = {(FUN_004a53f0_t)0x004a53f0};
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(void *, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};
typedef undefined4 (BEA_THISCALL* FUN_004cda60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cda60_t> FUN_004cda60 = {(FUN_004cda60_t)0x004cda60};
typedef uint32_t (BEA_CDECL* FUN_004d7200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d7200_t> FUN_004d7200 = {(FUN_004d7200_t)0x004d7200};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_CDECL* FUN_004f29c0_t)(void);
static const bea_guard<FUN_004f29c0_t> FUN_004f29c0 = {(FUN_004f29c0_t)0x004f29c0};

static undefined4 BEA_THISCALL ap_004687e0(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_4 = 0;
  
  if (DAT_00662dd4 == 0) {
    FUN_004d7200(bea_arg(0xfffffffe), bea_arg(0), bea_arg(0));
  }
  uVar5 = 0xfffffffe;
  FUN_004f29c0();
  FUN_004a53f0(0xfffffffe,uVar5);
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0xc1a00000;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = local_4;
  puVar3 = &DAT_00679b48;
  puVar4 = this_;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((puVar4 = puVar4 + 1, iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this_ + 0x44) = 0x3f800000;
  DAT_009c63f4 = 0;
  DAT_009c63f0 = 0;
  _DAT_009c6404 = 0;
  DAT_009c6400 = 0;
  iVar2 = FUN_004cda60(bea_arg(&DAT_0082b400), bea_arg(1));
  if (iVar2 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)((int)this_ + 0x48);
  for (iVar2 = 0x56; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  CRenderThing__vslot3(s_Loading_frontend_textures__0062aa94);
  uVar5 = FUN_004f27f0(s_FrontEnd_LevelLink_tga_0062aa7c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x48) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_BarL_tga_0062aa68,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x4c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_BarC_tga_0062aa54,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x50) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_BarR_tga_0062aa40,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x54) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_GlareAlpha_tga_0062aa28,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x58) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_LostToys_tga_0062aa10,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x5c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingS_tga_0062a9f8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x60) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingA_tga_0062a9e0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 100) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingB_tga_0062a9c8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x68) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingC_tga_0062a9b0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x6c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingD_tga_0062a998,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x70) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingE_tga_0062a980,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x74) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingSMask_tga_0062a964,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x78) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingAMask_tga_0062a948,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x7c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingBMask_tga_0062a92c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x80) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingCMask_tga_0062a910,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x84) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingDMask_tga_0062a8f4,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x88) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_RankingEMask_tga_0062a8d8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x8c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Forseti_Writing_l_0062a8ac,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x90) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Forseti_Writing_s_0062a880,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x94) = uVar5;
  uVar5 = DAT_00889010;
  DAT_00889010 = 1;
  uVar1 = FUN_004f27f0(s_FrontEnd_v2_FE_white_ring_tga_0062a860,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x98) = uVar1;
  DAT_00889010 = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Reflection_map_tg_0062a83c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x9c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_select_level_ring_0062a80c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xa0) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_select_level_ring_0062a7dc,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xa4) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_level_select_mask_0062a7b4,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xa8) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_metal_ring_trans__0062a780,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xac) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_metal_ring_trans__0062a74c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xb0) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_level_select_glow_0062a720,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xb4) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_level_select_glow_0062a6f4,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xb8) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a6cc,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xbc) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a6a4,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xc0) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a67c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xc4) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a654,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 200) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a62c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xcc) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Ranking_Small_Mas_0062a604,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xd0) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_White_tga_0062a5e8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xd4) = uVar5;
  iVar2 = FUN_004f27f0(s_FrontEnd_v2_FE_Rock_Background_t_0062a5c4,4,0,1,0,1);
  *(int *)((int)this_ + 0xd8) = iVar2;
  *(byte *)(iVar2 + 0x155) = *(byte *)(iVar2 + 0x155) | 1;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_avi_box_tga_0062a5a8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xdc) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Arrow_tga_006290f4,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xe0) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Goodies1_tga_0062a58c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xe4) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Goodies2_tga_0062a570,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xe8) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Goodies3_tga_0062a554,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xec) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Goodies4_tga_0062a538,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xf0) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_Flag_UK_tga_0062a520,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xf4) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_Flag_FR_tga_0062a508,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xf8) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_Flag_GR_tga_0062a4f0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xfc) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_Flag_SP_tga_0062a4d8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x100) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_Flag_IT_tga_0062a4c0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x104) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_i_troop_tga_0062a4a8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x108) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_i_tank_tga_0062a490,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x10c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_i_plane_tga_0062a478,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x110) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_i_Billy_tga_0062a460,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x114) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_i_Lorenzo_tga_0062a444,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x118) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_i_Tara_tga_0062a42c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x11c) = uVar5;
  iVar2 = FUN_004f27f0(s_FrontEnd_v2_fe_splash1_tga_0062a410,4,0,1,0,1);
  *(int *)((int)this_ + 0x120) = iVar2;
  *(byte *)(iVar2 + 0x155) = *(byte *)(iVar2 + 0x155) | 1;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_fe_infogrames_tga_0062a3f0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x124) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_select_level_epis_0062a3c0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x128) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_Title2_tga_0062a3a0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 300) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_Gamelogo_smal_0062a378,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x130) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_bracket_0062a350,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x134) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_bracket_0062a328,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x138) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_text_bo_0062a300,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x13c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_symbol__0062a2d0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x140) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_symbol__0062a2a0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x144) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a26c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x148) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a234,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x14c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a200,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x150) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a1cc,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x154) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a194,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x158) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a160,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x15c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a12c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x160) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a0f8,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x164) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a0c4,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x168) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_header_bracke_0062a09c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x16c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_header_bracke_0062a074,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x170) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_header_bracke_0062a04c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x174) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_BEA_header_box_tg_0062a028,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x178) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_select_level_brac_00629ffc,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x17c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_select_level_brac_00629fd0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x180) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_FE_select_level_brac_00629fa0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x184) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v3_SmallStar_tga_00629f84,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x188) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x18c) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_VK_Key_tga_00629f4c,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 400) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_XB_Xbox_tga_00629f30,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x194) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_XB_MU_tga_00629f14,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x198) = uVar5;
  uVar5 = FUN_004f27f0(s_FrontEnd_v2_FE_XB_MU_Corrupt_tga_00629ef0,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x19c) = uVar5;
  CRenderThing__vslot3(s_Loading_meshes_00629ee0);
  puVar4 = (undefined4 *)((int)this_ + 0x1a0);
  for (iVar2 = 6; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (DAT_0083d448 == 0) {
    uVar5 = FUN_004aa6e0(s_be_trans_msh_00629ed0,1);
    *(undefined4 *)((int)this_ + 0x1a0) = uVar5;
    uVar5 = FUN_004aa6e0(s_be_transm_msh_00629ec0,1);
    *(undefined4 *)((int)this_ + 0x1a4) = uVar5;
    uVar5 = FUN_004aa6e0(s_fa_wildcard_T_msh_00629eac,1);
    *(undefined4 *)((int)this_ + 0x1a8) = uVar5;
    uVar5 = FUN_004aa6e0(s_fa_wildcard_B_msh_00629e98,1);
    *(undefined4 *)((int)this_ + 0x1ac) = uVar5;
    uVar5 = FUN_004aa6e0(s_fa_wildcard_J_msh_00629e84,1);
    *(undefined4 *)((int)this_ + 0x1b0) = uVar5;
    uVar5 = FUN_004aa6e0(s_PS2_Normal_Logo3_msh_00629e6c,1);
    *(undefined4 *)((int)this_ + 0x1b4) = uVar5;
  }
  CRenderThing__vslot3(s_Done_frontenddata__00629e58);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004687e0, ap_004687e0));

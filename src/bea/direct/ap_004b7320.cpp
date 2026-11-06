// auto-ported from 004b7320_FUN_004b7320.c (FUN_004b7320, 1552 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_MessageBox_pilot_oo_tga_006302f4 ((char*)0x006302f4)
#define s_MessageBox_rad_officr_oo_tga_006303dc ((char*)0x006303dc)
#define s_MessageBox_tat_ee_tga_006307c0 ((char*)0x006307c0)
#define s_MessageBox_FC_Billy_oo_tga_00630520 ((char*)0x00630520)
#define s_MessageBox_FC_Billy_ee_tga_00630504 ((char*)0x00630504)
#define s_MessageBox_FC_Simmons_blank_clos_006305e4 ((char*)0x006305e4)
#define s_MessageBox_FC_Billy_aa_tga_006304cc ((char*)0x006304cc)
#define s_MessageBox_FC_Simmons_surprise_c_00630684 ((char*)0x00630684)
#define s_MessageBox_officer_oo_tga_00630450 ((char*)0x00630450)
#define s_MessageBox_rad_officr_aa_tga_0063037c ((char*)0x0063037c)
#define s_MessageBox_Carver_mm_tga_0063080c ((char*)0x0063080c)
#define s_MessageBox_FC_Simmons_stern_open_0063060c ((char*)0x0063060c)
#define s_MessageBox_technic_ee_tga_00630344 ((char*)0x00630344)
#define s_MessageBox_fc_Tara_oo_tga_00630704 ((char*)0x00630704)
#define s_MessageBox_pilot_ee_tga_006302dc ((char*)0x006302dc)
#define s_MessageBox_technic_mm_tga_00630328 ((char*)0x00630328)
#define s_MessageBox_Carver_oo_tga_00630844 ((char*)0x00630844)
#define s_MessageBox_tat_mm_tga_006307a8 ((char*)0x006307a8)
#define s_MessageBox_tat_aa_tga_00630790 ((char*)0x00630790)
#define s_MessageBox_cmdr_aa_tga_0063046c ((char*)0x0063046c)
#define s_MessageBox_officer_aa_tga_006303fc ((char*)0x006303fc)
#define s_MessageBox_pilot_aa_tga_006302ac ((char*)0x006302ac)
#define s_MessageBox_FC_Lorenzo_mm_tga_0063055c ((char*)0x0063055c)
#define s_MessageBox_Carver_aa_tga_006307f0 ((char*)0x006307f0)
#define s_MessageBox_FC_Kramer_oo_tga_00630774 ((char*)0x00630774)
#define s_MessageBox_technic_aa_tga_0063030c ((char*)0x0063030c)
#define s_MessageBox_FC_Kramer_mm_tga_0063073c ((char*)0x0063073c)
#define s_MessageBox_fc_Tara_aa_tga_006306b0 ((char*)0x006306b0)
#define s_MessageBox_cmdr_mm_tga_00630484 ((char*)0x00630484)
#define s_MessageBox_FC_Lorenzo_ee_tga_0063057c ((char*)0x0063057c)
#define s_MessageBox_officer_ee_tga_00630434 ((char*)0x00630434)
#define s_MessageBox_rad_officr_ee_tga_006303bc ((char*)0x006303bc)
#define s_MessageBox_pilot_mm_tga_006302c4 ((char*)0x006302c4)
#define s_MessageBox_FC_Kramer_aa_tga_00630720 ((char*)0x00630720)
#define s_MessageBox_rad_officr_mm_tga_0063039c ((char*)0x0063039c)
#define s_MessageBox_FC_Simmons_stern_clos_00630634 ((char*)0x00630634)
#define s_MessageBox_FC_Kramer_ee_tga_00630758 ((char*)0x00630758)
#define s_MessageBox_fc_Tara_mm_tga_006306cc ((char*)0x006306cc)
#define s_MessageBox_FC_Simmons_blank_open_006305bc ((char*)0x006305bc)
#define s_MessageBox_FC_Lorenzo_oo_tga_0063059c ((char*)0x0063059c)
#define s_MessageBox_technic_oo_tga_00630360 ((char*)0x00630360)
#define s_MessageBox_fc_Tara_ee_tga_006306e8 ((char*)0x006306e8)
#define s_MessageBox_cmdr_ee_tga_0063049c ((char*)0x0063049c)
#define s_MessageBox_Carver_ee_tga_00630828 ((char*)0x00630828)
#define s_MessageBox_FC_Billy_mm_tga_006304e8 ((char*)0x006304e8)
#define s_MessageBox_box_tga_00630280 ((char*)0x00630280)
#define s_MessageBox_tat_oo_tga_006307d8 ((char*)0x006307d8)
#define s_MessageBox_FC_Simmons_surprise_o_0063065c ((char*)0x0063065c)
#define s_MessageBox_officer_mm_tga_00630418 ((char*)0x00630418)
#define s_MessageBox_cmdr_oo_tga_006304b4 ((char*)0x006304b4)
#define s_MessageBox_FC_Lorenzo_aa_tga_0063053c ((char*)0x0063053c)
#define s_MessageBox_noisebig_tga_00630294 ((char*)0x00630294)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_004b7320(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_MessageBox_Carver_oo_tga_00630844,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x34) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_Carver_ee_tga_00630828,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x38) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_Carver_mm_tga_0063080c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x3c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_Carver_aa_tga_006307f0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x40) = uVar1;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x16c) = 0xdcdee;
  uVar1 = FUN_004f27f0(s_MessageBox_tat_oo_tga_006307d8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x4c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_tat_ee_tga_006307c0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x50) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_tat_mm_tga_006307a8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x54) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_tat_aa_tga_00630790,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x58) = uVar1;
  *(undefined4 *)((int)this_ + 0x5c) = 0;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined4 *)((int)this_ + 0x170) = 0x170470;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Kramer_oo_tga_00630774,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 100) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Kramer_ee_tga_00630758,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x68) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Kramer_mm_tga_0063073c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x6c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Kramer_aa_tga_00630720,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x70) = uVar1;
  *(undefined4 *)((int)this_ + 0x74) = 0;
  *(undefined4 *)((int)this_ + 0x78) = 0;
  *(undefined4 *)((int)this_ + 0x174) = 0xe0831;
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  *(undefined4 *)((int)this_ + 0x80) = 0;
  *(undefined4 *)((int)this_ + 0x84) = 0;
  *(undefined4 *)((int)this_ + 0x88) = 0;
  *(undefined4 *)((int)this_ + 0x8c) = 0;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0x178) = 0x5c2de;
  uVar1 = FUN_004f27f0(s_MessageBox_fc_Tara_oo_tga_00630704,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x94) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_fc_Tara_ee_tga_006306e8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x98) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_fc_Tara_mm_tga_006306cc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x9c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_fc_Tara_aa_tga_006306b0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xa0) = uVar1;
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  *(undefined4 *)((int)this_ + 0x17c) = 0x3c345;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Simmons_surprise_c_00630684,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xac) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Simmons_surprise_o_0063065c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xb0) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Simmons_stern_clos_00630634,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xb4) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Simmons_stern_open_0063060c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xb8) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Simmons_blank_clos_006305e4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xbc) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Simmons_blank_open_006305bc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xc0) = uVar1;
  *(undefined4 *)((int)this_ + 0x180) = 0x1a19e0;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Lorenzo_oo_tga_0063059c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xc4) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Lorenzo_ee_tga_0063057c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 200) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Lorenzo_mm_tga_0063055c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xcc) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Lorenzo_aa_tga_0063053c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xd0) = uVar1;
  *(undefined4 *)((int)this_ + 0xd4) = 0;
  *(undefined4 *)((int)this_ + 0xd8) = 0;
  *(undefined4 *)((int)this_ + 0x184) = 0x19f8cf;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Billy_oo_tga_00630520,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xdc) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Billy_ee_tga_00630504,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xe0) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Billy_mm_tga_006304e8,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xe4) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_FC_Billy_aa_tga_006304cc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xe8) = uVar1;
  *(undefined4 *)((int)this_ + 0xec) = 0;
  *(undefined4 *)((int)this_ + 0xf0) = 0;
  *(undefined4 *)((int)this_ + 0x188) = 0xcb1fd;
  uVar1 = FUN_004f27f0(s_MessageBox_cmdr_oo_tga_006304b4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xf4) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_cmdr_ee_tga_0063049c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xf8) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_cmdr_mm_tga_00630484,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xfc) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_cmdr_aa_tga_0063046c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x100) = uVar1;
  *(undefined4 *)((int)this_ + 0x104) = 0;
  *(undefined4 *)((int)this_ + 0x108) = 0;
  *(undefined1 **)((int)this_ + 0x18c) = ((void*)0x00534dfa);
  uVar1 = FUN_004f27f0(s_MessageBox_officer_oo_tga_00630450,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x10c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_officer_ee_tga_00630434,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x110) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_officer_mm_tga_00630418,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x114) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_officer_aa_tga_006303fc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x118) = uVar1;
  *(undefined4 *)((int)this_ + 0x11c) = 0;
  *(undefined4 *)((int)this_ + 0x120) = 0;
  *(undefined4 *)((int)this_ + 400) = 0x1837c4;
  uVar1 = FUN_004f27f0(s_MessageBox_rad_officr_oo_tga_006303dc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x124) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_rad_officr_ee_tga_006303bc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x128) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_rad_officr_mm_tga_0063039c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 300) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_rad_officr_aa_tga_0063037c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x130) = uVar1;
  *(undefined4 *)((int)this_ + 0x134) = 0;
  *(undefined4 *)((int)this_ + 0x138) = 0;
  *(undefined4 *)((int)this_ + 0x194) = 0x85595;
  uVar1 = FUN_004f27f0(s_MessageBox_technic_oo_tga_00630360,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x13c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_technic_ee_tga_00630344,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x140) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_technic_mm_tga_00630328,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x144) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_technic_aa_tga_0063030c,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x148) = uVar1;
  *(undefined4 *)((int)this_ + 0x14c) = 0;
  *(undefined4 *)((int)this_ + 0x150) = 0;
  *(undefined4 *)((int)this_ + 0x198) = 0xa13898;
  uVar1 = FUN_004f27f0(s_MessageBox_pilot_oo_tga_006302f4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x154) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_pilot_ee_tga_006302dc,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x158) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_pilot_mm_tga_006302c4,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x15c) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_pilot_aa_tga_006302ac,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x160) = uVar1;
  *(undefined4 *)((int)this_ + 0x164) = 0;
  *(undefined4 *)((int)this_ + 0x168) = 0;
  *(undefined4 *)((int)this_ + 0x19c) = 0x552e30d;
  uVar1 = FUN_004f27f0(s_MessageBox_noisebig_tga_00630294,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1a4) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageBox_box_tga_00630280,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x1a0) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x1a0);
  return *(uint32_t*)((char*)this_ + 0x1a0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7320, ap_004b7320));

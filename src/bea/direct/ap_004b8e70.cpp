// auto-ported from 004b8e70_FUN_004b8e70.c (FUN_004b8e70, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00807418 GLOBAL_AT(int, 0x00807418)
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
#define s_MessageLog_messge_headframe_tga_00630924 ((char*)0x00630924)
#define s_FrontEnd_v2_FE_Arrow_tga_006290f4 ((char*)0x006290f4)
#define s_MessageLog_endcurve_tga_00630944 ((char*)0x00630944)
#define s_MessageLog_messge_headframe_mask_006308fc ((char*)0x006308fc)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_004b8e70(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_MessageLog_endcurve_tga_00630944,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 8) = uVar1;
  DAT_00807418 = FUN_004f27f0(s_FrontEnd_v2_FE_Arrow_tga_006290f4,4,0,1,0,1);
  uVar1 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageLog_messge_headframe_tga_00630924,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x10) = uVar1;
  uVar1 = FUN_004f27f0(s_MessageLog_messge_headframe_mask_006308fc,4,0,1,0,1);
  *(undefined4 *)((int)this_ + 0x14) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x14);
  return *(uint32_t*)((char*)this_ + 0x14);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b8e70, ap_004b8e70));

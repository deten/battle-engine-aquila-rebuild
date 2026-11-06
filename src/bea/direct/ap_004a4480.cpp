// auto-ported from 004a4480_vslot13.c (CScaleMenuItem::vslot13, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CScaleMenuItem;
#define s_FrontEnd_v2_FE_Blank_tga_00629f68 ((char*)0x00629f68)
#define s_FrontEnd_v2_FE_Arrow_tga_006290f4 ((char*)0x006290f4)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_004a4480(CScaleMenuItem * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_FrontEnd_v2_FE_Arrow_tga_006290f4,4,0,1,0,1);
  *(undefined4 *)(this_ + 0x1c) = uVar1;
  uVar1 = FUN_004f27f0(s_FrontEnd_v2_FE_Blank_tga_00629f68,4,0,1,0,1);
  *(undefined4 *)(this_ + 0x20) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x20);
  return *(uint32_t*)((char*)this_ + 0x20);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4480, ap_004a4480));

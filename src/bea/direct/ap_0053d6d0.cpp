// auto-ported from 0053d6d0_vslot2.c (CDXEngine::vslot2, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CDXEngine;
typedef char CEngine;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define s_default_msh_00632b30 ((char*)0x00632b30)
#define s_meshtex_default_tga_00625498 ((char*)0x00625498)
#define s_meshtex_outline_tga_006505e8 ((char*)0x006505e8)
#define s_meshtex_EdArrow_tga_006505d4 ((char*)0x006505d4)
#define s_Sun_Sprite_006505c8 ((char*)0x006505c8)
typedef uint32_t (BEA_THISCALL* CEngine__vslot2_t)(uint32_t);
static const bea_guard<CEngine__vslot2_t> CEngine__vslot2 = {(CEngine__vslot2_t)0x00449d50};
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_0053d6d0(CDXEngine * this_)
{
  undefined4 uVar1;
  
  CEngine__vslot2(bea_arg((CEngine *)this_));
  uVar1 = FUN_004f27f0(s_meshtex_default_tga_00625498,0,0,0xffffffff,1,1);
  *(undefined4 *)(this_ + 0x4e4) = uVar1;
  uVar1 = FUN_004f27f0(s_meshtex_outline_tga_006505e8,0,0,0xffffffff,1,1);
  *(undefined4 *)(this_ + 0x4e8) = uVar1;
  uVar1 = FUN_004f27f0(s_meshtex_EdArrow_tga_006505d4,0,0,0xffffffff,1,1);
  *(undefined4 *)(this_ + 0x4ec) = uVar1;
  uVar1 = FUN_004aa6e0(s_default_msh_00632b30,1);
  *(undefined4 *)(this_ + 0x28) = uVar1;
  uVar1 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Sun_Sprite_006505c8));
  *(undefined4 *)(this_ + 0xc80) = uVar1;
  return *(uint32_t*)((char*)this_ + 0xc80);
  return *(uint32_t*)((char*)this_ + 0xc80);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053d6d0, ap_0053d6d0));

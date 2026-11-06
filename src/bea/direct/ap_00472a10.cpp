// auto-ported from 00472a10_FUN_00472a10.c (FUN_00472a10, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_Interface_Joypad_tga_0062c8a8 ((char*)0x0062c8a8)
#define s_hud_Menu_background_tga_0062c890 ((char*)0x0062c890)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_00472a10(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_Interface_Joypad_tga_0062c8a8,4,0,1,1,1);
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_Menu_background_tga_0062c890,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 8) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x8);
  return *(uint32_t*)((char*)this_ + 0x8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472a10, ap_00472a10));

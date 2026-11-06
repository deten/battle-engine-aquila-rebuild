// auto-ported from 00427110_FUN_00427110.c (FUN_00427110, 115 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_hud_v2_ThreatFlash_tga_006247b0 ((char*)0x006247b0)
#define s_hud_v2_DamageFlash_tga_00624798 ((char*)0x00624798)
#define s_hud_v2_BarLine_tga_00624784 ((char*)0x00624784)
#define s_hud_v2_CompassObjectiveMarker_tg_00624760 ((char*)0x00624760)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_00427110(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_hud_v2_ThreatFlash_tga_006247b0,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x3ef4) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_DamageFlash_tga_00624798,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x3ef8) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_BarLine_tga_00624784,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x3efc) = uVar1;
  uVar1 = FUN_004f27f0(s_hud_v2_CompassObjectiveMarker_tg_00624760,0,0,1,1,1);
  *(undefined4 *)((int)this_ + 0x3f00) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x3f00);
  return *(uint32_t*)((char*)this_ + 0x3f00);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00427110, ap_00427110));

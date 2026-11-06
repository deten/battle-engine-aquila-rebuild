// auto-ported from 00551c90_FUN_00551c90.c (FUN_00551c90, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Is_the_visual_effect_for_zooming_006521d4 ((char*)0x006521d4)
#define s_cg_zoomeffectenabled_006521bc ((char*)0x006521bc)
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};

static uint32_t BEA_THISCALL ap_00551c90(void * this_)
{
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined1 *)((int)this_ + 0x10) = 1;
  return FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_zoomeffectenabled_006521bc), bea_arg(s_Is_the_visual_effect_for_zooming_006521d4), bea_arg(3), bea_arg((undefined1 *)((int)this_ + 0x10)), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551c90, ap_00551c90));

// auto-ported from 00515320_vslot0.c (CPCMusic::vslot0, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPCMusic;
#define s_data_music_0063dff0 ((char*)0x0063dff0)
typedef uint32_t (BEA_THISCALL* FUN_004bb7c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004bb7c0_t> FUN_004bb7c0 = {(FUN_004bb7c0_t)0x004bb7c0};
typedef uint32_t (BEA_CDECL* FUN_005282b0_t)(void);
static const bea_guard<FUN_005282b0_t> FUN_005282b0 = {(FUN_005282b0_t)0x005282b0};

static uint32_t BEA_THISCALL ap_00515320(CPCMusic * this_)
{
  FUN_005282b0();
  return FUN_004bb7c0(bea_arg(this_), bea_arg(s_data_music_0063dff0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515320, ap_00515320));

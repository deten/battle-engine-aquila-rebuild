// auto-ported from 00452db0_FUN_00452db0.c (FUN_00452db0, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
#define s_data_video_FEBack128_vid_00629068 ((char*)0x00629068)
typedef uint32_t (BEA_THISCALL* FUN_005412e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005412e0_t> FUN_005412e0 = {(FUN_005412e0_t)0x005412e0};

static uint32_t BEA_STDCALL ap_00452db0(undefined4 param_1)
{
  return FUN_005412e0(bea_arg(&DAT_0089d91c), bea_arg(s_data_video_FEBack128_vid_00629068), bea_arg(0x80), bea_arg(0x80), bea_arg(0), bea_arg(1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452db0, ap_00452db0));

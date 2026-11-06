// auto-ported from 004656b0_vslot6.c (CFMV::vslot6, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFMV;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_fmv_play_00629adc ((char*)0x00629adc)
#define s_Play_a_named_FMV_clip_00629ae8 ((char*)0x00629ae8)
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};

static void BEA_THISCALL ap_004656b0(CFMV * this_)
{
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_fmv_play_00629adc), bea_arg(s_Play_a_named_FMV_clip_00629ae8), bea_arg(((void*)0x004655d0)), bea_arg(0));
  *(undefined4 *)(this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004656b0, ap_004656b0));

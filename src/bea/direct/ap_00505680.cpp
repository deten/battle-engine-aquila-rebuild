// auto-ported from 00505680_vslot2.c (CWaveSoundRead::vslot2, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CWaveSoundRead;
typedef undefined4 (BEA_CDECL* FUN_005053d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005053d0_t> FUN_005053d0 = {(FUN_005053d0_t)0x005053d0};

static uint32_t BEA_THISCALL ap_00505680(CWaveSoundRead * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  return FUN_005053d0(bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(param_1), bea_arg(param_2), bea_arg(this_ + 0xc), bea_arg(param_3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505680, ap_00505680));

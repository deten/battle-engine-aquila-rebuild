// auto-ported from 0044d210_vslot36.c (CFeature::vslot36, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFeature;
typedef char CThing;
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
typedef uint32_t (BEA_THISCALL* CThing__vslot36_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot36_t> CThing__vslot36 = {(CThing__vslot36_t)0x004f36d0};
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};

static uint32_t BEA_THISCALL ap_0044d210(CFeature * this_, undefined4 param_1)
{
  FUN_004ebfb0(bea_arg(&DAT_009c8010), bea_arg(this_), bea_arg(0));
  return CThing__vslot36(bea_arg((CThing *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044d210, ap_0044d210));

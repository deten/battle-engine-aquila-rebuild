// auto-ported from 004bac10_vslot71.c (CMissile::vslot71, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CMissile;
typedef uint32_t (BEA_STDCALL* CFEPCommon__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CFEPCommon__vslot9_t> CFEPCommon__vslot9 = {(CFEPCommon__vslot9_t)0x00452da0};

static uint32_t BEA_THISCALL ap_004bac10(CMissile * this_, undefined4 param_1, undefined4 param_2)
{
  bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x68, param_1,param_2);
  return CFEPCommon__vslot9(bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bac10, ap_004bac10));

// auto-ported from 004331c0_vslot1.c (CUnitUseSpawner::vslot1, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitUseSpawner;
typedef uint32_t (BEA_THISCALL* FUN_00511ad0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00511ad0_t> FUN_00511ad0 = {(FUN_00511ad0_t)0x00511ad0};

static uint32_t BEA_THISCALL ap_004331c0(CUnitUseSpawner * this_, void *param_1)
{
  return FUN_00511ad0(bea_arg(param_1), bea_arg(this_ + 0x108), bea_arg(this_ + 8), bea_arg(*(undefined4 *)(this_ + 0x208)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004331c0, ap_004331c0));

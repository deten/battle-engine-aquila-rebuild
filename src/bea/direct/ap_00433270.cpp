// auto-ported from 00433270_vslot1.c (CUnitComponent::vslot1, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitComponent;
typedef uint32_t (BEA_THISCALL* FUN_00511900_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00511900_t> FUN_00511900 = {(FUN_00511900_t)0x00511900};

static uint32_t BEA_THISCALL ap_00433270(CUnitComponent * this_, void *param_1)
{
  return FUN_00511900(bea_arg(param_1), bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(this_ + 0xc));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00433270, ap_00433270));

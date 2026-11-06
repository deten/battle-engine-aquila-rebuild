// auto-ported from 0048dcc0_vslot1.c (CSphereTriggerInitThing::vslot1, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInitThing;
typedef char CSphereTriggerInitThing;
typedef uint32_t (BEA_THISCALL* CInitThing__vslot1_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CInitThing__vslot1_t> CInitThing__vslot1 = {(CInitThing__vslot1_t)0x0040e280};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_THISCALL ap_0048dcc0(CSphereTriggerInitThing * this_, undefined4 param_1, void *param_2)
{
  CInitThing__vslot1(bea_arg((CInitThing *)this_), bea_arg(param_1), bea_arg(param_2));
  return FUN_00548570(bea_arg(param_2), bea_arg(this_ + 0x3bc), bea_arg(4));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048dcc0, ap_0048dcc0));

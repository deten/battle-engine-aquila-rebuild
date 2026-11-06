// auto-ported from 004fd4d0_vslot90.c (CUnit::vslot90, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* FUN_00445070_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00445070_t> FUN_00445070 = {(FUN_00445070_t)0x00445070};
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};

static uint32_t BEA_THISCALL ap_004fd4d0(CUnit * this_, undefined4 param_1)
{
  if (*(void **)(this_ + 0x178) != (void *)0x0) {
    return FUN_00445070(bea_arg(*(void **)(this_ + 0x178)), bea_arg(param_1));
  }
  return FUN_004f3ac0(bea_arg(this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd4d0, ap_004fd4d0));

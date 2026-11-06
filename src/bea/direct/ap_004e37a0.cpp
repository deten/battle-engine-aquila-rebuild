// auto-ported from 004e37a0_vslot0.c (CSpawnerThing::vslot0, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot0_t> CComplexThing__vslot0 = {(CComplexThing__vslot0_t)0x004f4300};
typedef uint32_t (BEA_THISCALL* FUN_004e3370_t)(uint32_t);
static const bea_guard<FUN_004e3370_t> FUN_004e3370 = {(FUN_004e3370_t)0x004e3370};

static uint32_t BEA_THISCALL ap_004e37a0(CComplexThing * this_, int param_1)
{
  if (*(short *)(param_1 + 4) != 3000) {
    return CComplexThing__vslot0(bea_arg(this_), bea_arg(param_1));
  }
  return FUN_004e3370(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e37a0, ap_004e37a0));

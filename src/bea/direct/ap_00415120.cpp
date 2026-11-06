// auto-ported from 00415120_vslot0.c (CBoat::vslot0, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot0_t> CUnit__vslot0 = {(CUnit__vslot0_t)0x004f9820};

static uint32_t BEA_THISCALL ap_00415120(CUnit * this_, int param_1)
{
  if (*(short *)(param_1 + 4) != 8000) {
    return CUnit__vslot0(bea_arg(this_), bea_arg(param_1));
  }
  return bea_vcall<uint32_t>(this_, 0x174);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415120, ap_00415120));

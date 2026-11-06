// auto-ported from 0047a9c0_vslot54.c (CGillMHead::vslot54, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CUnit__vslot54_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot54_t> CUnit__vslot54 = {(CUnit__vslot54_t)0x004fdcb0};

static void BEA_THISCALL ap_0047a9c0(CUnit * this_, int param_1)
{
  if (param_1 != 4) {
    CUnit__vslot54(bea_arg(this_), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047a9c0, ap_0047a9c0));

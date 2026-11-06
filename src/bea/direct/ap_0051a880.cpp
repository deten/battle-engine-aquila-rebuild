// auto-ported from 0051a880_vslot4.c (CFEPCredits::vslot4, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004679e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004679e0_t> FUN_004679e0 = {(FUN_004679e0_t)0x004679e0};

static void BEA_STDCALL ap_0051a880(float param_1, undefined4 param_2)
{
  if (param_1 == 1.0f) {
    FUN_004679e0(bea_arg(0x3f800000), bea_arg(0x3fffffff), bea_arg(param_2));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a880, ap_0051a880));

// auto-ported from 0051fb60_vslot4.c (CFEPScreenPos::vslot4, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_004679e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004679e0_t> FUN_004679e0 = {(FUN_004679e0_t)0x004679e0};

static void BEA_STDCALL ap_0051fb60(float param_1, undefined4 param_2)
{
  if (param_1 == 1.0f) {
    FUN_004679e0(bea_arg(param_1), bea_arg(0x3fffffff), bea_arg(param_2));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0051fb60.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

// auto-ported from 004b52a0_FUN_004b52a0.c (FUN_004b52a0, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_CDECL ap_004b52a0(float param_1)
{
  if (param_1 < 0.0f) {
    return -bea_fcast<float10>(param_1);
  }
  return bea_fcast<float10>(param_1);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004b52a0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

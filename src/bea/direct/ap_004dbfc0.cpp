// auto-ported from 004dbfc0_vslot14.c (CRTCutscene::vslot14, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTCutscene;
typedef float10 (BEA_THISCALL* FUN_004aa7e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa7e0_t> FUN_004aa7e0 = {(FUN_004aa7e0_t)0x004aa7e0};

static float10 BEA_THISCALL ap_004dbfc0(CRTCutscene * this_, undefined4 param_1, undefined4 param_2)
{
  void *this_00;
  float10 fVar1;
  
  this_00 = (void *)bea_vcall<uint32_t>(this_, 0x24);
  if (this_00 != (void *)0x0) {
    fVar1 = (float10)FUN_004aa7e0(bea_arg(this_00), bea_arg(param_1), bea_arg(param_2));
    return fVar1;
  }
  return (float10)0.0f;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004dbfc0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

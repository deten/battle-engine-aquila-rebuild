// auto-ported from 00459e50_vslot4.c (CFEPE3LevelSelect::vslot4, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00452ce0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00452ce0_t> FUN_00452ce0 = {(FUN_00452ce0_t)0x00452ce0};

static void BEA_STDCALL ap_00459e50(float param_1, undefined4 param_2)
{
  float fVar1;
  undefined4 local_8;
  
  if (0.5f < param_1) {
    fVar1 = (param_1 - 0.75f) * 4.0f;
    if (0.0f <= fVar1) {
      if (1.0f < fVar1) {
        fVar1 = 1.0f;
      }
    }
    else {
      fVar1 = 0.0f;
    }
    local_8 = (int)(longlong)ROUND(fVar1 * 255.0f);
    FUN_00452ce0(bea_arg(0x3f800000), bea_arg(local_8 * 0x3f0000 | 0xffffff), bea_arg(0xcb18967f), bea_arg(0xcb18967f));
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00459e50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

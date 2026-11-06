// auto-ported from 00494ff0_vslot7.c (CDestructableSegmentsMotionController::vslot7, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00444f00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00444f00_t> FUN_00444f00 = {(FUN_00444f00_t)0x00444f00};

static undefined4 BEA_THISCALL ap_00494ff0(int this_, int param_1)
{
  undefined4 uVar1;

  if (*(int *)(param_1 + 0xa4) != 0) {
    return 0;
  }
  uVar1 = FUN_00444f00(bea_arg(*(void **)(this_ + 0xc)), bea_arg(*(undefined4 *)(param_1 + 0x88)));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494ff0, ap_00494ff0));

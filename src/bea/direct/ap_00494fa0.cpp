// auto-ported from 00494fa0_vslot6.c (CDestructableSegmentsMotionController::vslot6, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef bool (BEA_THISCALL* FUN_00444f20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00444f20_t> FUN_00444f20 = {(FUN_00444f20_t)0x00444f20};

static uint * BEA_THISCALL ap_00494fa0(int this_, int param_1, uint *param_2)
{
  int iVar1;

  if (*(int *)(param_1 + 0xa4) != 0) {
    *param_2 = *param_2 | 1;
    return param_2;
  }
  iVar1 = FUN_00444f20(bea_arg(*(void **)(this_ + 0xc)), bea_arg(*(undefined4 *)(param_1 + 0x88)));
  if (iVar1 == 0) {
    *param_2 = *param_2 | 1;
    return param_2;
  }
  *param_2 = *param_2 & 0xfffffffe;
  return param_2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494fa0, ap_00494fa0));

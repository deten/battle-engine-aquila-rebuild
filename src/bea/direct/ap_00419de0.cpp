// auto-ported from 00419de0_vslot0_t4.c (CPanCamera::vslot0_t4, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPanCamera;
typedef uint32_t (BEA_THISCALL* FUN_00419b00_t)(uint32_t);
static const bea_guard<FUN_00419b00_t> FUN_00419b00 = {(FUN_00419b00_t)0x00419b00};

static int BEA_THISCALL ap_00419de0(CPanCamera * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 2000) {
    param_1 = FUN_00419b00(bea_arg(this_ + -4));
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00419de0, ap_00419de0));

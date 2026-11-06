// auto-ported from 00424a00_vslot0.c (CCockpit::vslot0, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00424a20_t)(uint32_t);
static const bea_guard<FUN_00424a20_t> FUN_00424a20 = {(FUN_00424a20_t)0x00424a20};

static int BEA_THISCALL ap_00424a00(void * this_, int param_1)
{
  int iVar1;

  iVar1 = 0;
  if ((*(short *)(param_1 + 4) != 2000) && (iVar1 = *(short *)(param_1 + 4) + -0x7d1, iVar1 == 0)) {
    iVar1 = FUN_00424a20(bea_arg(this_));
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00424a00, ap_00424a00));

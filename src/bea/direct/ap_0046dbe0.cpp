// auto-ported from 0046dbe0_vslot3.c (CWaitForStart::vslot3, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};

static void BEA_STDCALL ap_0046dbe0(void *param_1, int param_2, undefined4 param_3)
{
  if ((param_2 == 0x40) || (param_2 == 0x12)) {
    FUN_0042e6e0(bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046dbe0, ap_0046dbe0));

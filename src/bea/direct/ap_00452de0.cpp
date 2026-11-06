// auto-ported from 00452de0_FUN_00452de0.c (FUN_00452de0, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
typedef uint32_t (BEA_THISCALL* FUN_00541650_t)(uint32_t);
static const bea_guard<FUN_00541650_t> FUN_00541650 = {(FUN_00541650_t)0x00541650};

static void BEA_CDECL ap_00452de0(void)
{
  FUN_00541650(bea_arg(&DAT_0089d91c));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452de0, ap_00452de0));

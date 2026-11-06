// auto-ported from 00515980_FUN_00515980.c (FUN_00515980, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888d94 GLOBAL_AT(int, 0x00888d94)

static uint32_t BEA_STDCALL ap_00515980(int param_1)
{
  undefined1 uVar1;
  
  uVar1 = (&DAT_00888d94)[param_1];
  (&DAT_00888d94)[param_1] = 0;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515980, ap_00515980));

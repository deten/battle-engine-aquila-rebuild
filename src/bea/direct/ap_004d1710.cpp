// auto-ported from 004d1710_FUN_004d1710.c (FUN_004d1710, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_0082b4ec GLOBAL_AT(int, 0x0082b4ec)
#define _DAT_0082b494 GLOBAL_AT(int, 0x0082b494)

static uint32_t BEA_CDECL ap_004d1710(undefined4 param_1)
{
  _DAT_0082b4ec = 0xff;
  _DAT_0082b494 = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1710, ap_004d1710));

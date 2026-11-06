// auto-ported from 0055a0f0_FUN_0055a0f0.c (FUN_0055a0f0, 79 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_0055a0f0(undefined4 param_1)
{
  switch(param_1) {
  default:
    return 0;
  case 1:
    return 0x19;
  case 2:
    return 0x1a;
  case 3:
    return 0x16;
  case 4:
    return 0x15;
  case 5:
    return 0x17;
  case 6:
    return 0x31545844;
  case 7:
    return 0x32545844;
  case 8:
    return 0x34545844;
  case 9:
    return 0x3c;
  case 10:
    return 0x3f;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0055a0f0, ap_0055a0f0));

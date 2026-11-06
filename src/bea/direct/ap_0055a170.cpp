// auto-ported from 0055a170_FUN_0055a170.c (FUN_0055a170, 127 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_0055a170(int param_1)
{
  if (param_1 < 0x1b) {
    if (param_1 == 0x1a) {
      return 2;
    }
    switch(param_1) {
    case 0x15:
      return 4;
    case 0x16:
      return 3;
    case 0x17:
      return 5;
    case 0x19:
      return 1;
    }
  }
  else if (param_1 < 0x31545845) {
    if (param_1 == 0x31545844) {
      return 6;
    }
    if (param_1 == 0x3c) {
      return 9;
    }
    if (param_1 == 0x3f) {
      return 10;
    }
  }
  else {
    if (param_1 == 0x32545844) {
      return 7;
    }
    if (param_1 == 0x34545844) {
      return 8;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0055a170, ap_0055a170));

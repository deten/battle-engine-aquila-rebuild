// auto-ported from 0045cb80_FUN_0045cb80.c (FUN_0045cb80, 129 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_CDECL ap_0045cb80(int param_1, int param_2)
{
  if (param_2 == 0) {
    if (7 < param_1) {
      if (param_1 < 0xd) {
        return param_1 + 0x3a;
      }
      if (param_1 == 0xd) {
        return 0x4a;
      }
      if (param_1 == 0xe) {
        return 0x4b;
      }
      if (param_1 == 0xf) {
        return 0x4c;
      }
      return (-(uint)(param_1 != 0x10) & 0xffffffb2) + 0x4d;
    }
  }
  else {
    if (param_2 == 1) {
      if (param_1 < 0x3a) {
        return param_1 + 8;
      }
    }
    else if (param_2 == 2) {
      if (param_1 < 0x20) {
        return param_1 + 0xc9;
      }
    }
    else if ((param_2 == 3) && (param_1 < 0x7b)) {
      return param_1 + 0x4e;
    }
    param_1 = -1;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045cb80, ap_0045cb80));

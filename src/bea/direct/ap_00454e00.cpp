// auto-ported from 00454e00_FUN_00454e00.c (FUN_00454e00, 58 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_00454e00(undefined4 param_1, undefined4 param_2)
{
  switch(param_1) {
  default:
    return 1;
  case 4:
  case 6:
    return 3;
  case 5:
  case 7:
    return 2;
  case 8:
  case 9:
  case 10:
    return 4;
  case 0xb:
  case 0xd:
    return 5;
  case 0xc:
  case 0xe:
    return 6;
  case 0xf:
  case 0x10:
  case 0x11:
    return 7;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00454e00, ap_00454e00));

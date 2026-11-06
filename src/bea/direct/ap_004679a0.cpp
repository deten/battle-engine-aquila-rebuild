// auto-ported from 004679a0_FUN_004679a0.c (FUN_004679a0, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_004679a0(undefined4 param_1)
{
  switch(param_1) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x13:
    return 1;
  default:
    return 0;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004679a0, ap_004679a0));

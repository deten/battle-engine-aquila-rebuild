// auto-ported from 00501ba0_FUN_00501ba0.c (FUN_00501ba0, 45 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00501ba0(int in_ECX)
{
  switch(*(undefined4 *)(in_ECX + 0x2c)) {
  default:
    return 0x152;
  case 1:
    return 0x15a;
  case 3:
    return 0x46;
  case 4:
  case 7:
    return 0x102;
  case 6:
  case 8:
    return 0x142;
  }
}

// @autoport-registration (verified: 3522 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00501ba0, ap_00501ba0));

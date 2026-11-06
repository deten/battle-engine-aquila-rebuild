// auto-ported from 0050f680_FUN_0050f680.c (FUN_0050f680, 36 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_CDECL ap_0050f680(undefined4 param_1)
{
  switch(param_1) {
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
    return 0;
  default:
    return 1;
  }
}

// @autoport-registration (verified: 24 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050f680, ap_0050f680));

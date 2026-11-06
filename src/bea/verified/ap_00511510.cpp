// auto-ported from 00511510_FUN_00511510.c (FUN_00511510, 55 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_CDECL ap_00511510(int param_1)
{
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
  case 5:
  case 7:
  case 8:
  case 10:
  case 0x10:
  case 0x18:
    return 10;
  default:
    return 0;
  case 2:
  case 4:
  case 0xb:
    return 5;
  case 3:
  case 0xd:
    return 1;
  case 6:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    return 100;
  case 9:
  case 0xc:
  case 0xf:
    return 0x14;
  }
}

// @autoport-registration (verified: 6 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00511510, ap_00511510));

// auto-ported from 00540990_vslot0.c (CDXBitmapDebugFont::vslot0, 112 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_STDCALL ap_00540990(undefined4 param_1)
{
  if ((ushort)param_1 < 0x80) {
    return (ushort)param_1 - 0x20;
  }
  switch((ushort)param_1) {
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
    return 0x41;
  default:
    return 0;
  case 0xe7:
    return 0x43;
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
    return 0x45;
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    return 0x49;
  case 0xf1:
    return 0x4e;
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
    return 0x4f;
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
    return 0x55;
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540990, ap_00540990));

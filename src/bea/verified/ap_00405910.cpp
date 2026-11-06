// auto-ported from 00405910_vslot11.c (CFrontEndThing::vslot11, 4 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_00405910(void)
{
  return 0xffffffff;
}

// @autoport-registration (verified: 1459 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00405910, ap_00405910));

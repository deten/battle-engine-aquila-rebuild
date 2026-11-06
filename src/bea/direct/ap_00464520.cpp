// auto-ported from 00464520_vslot7.c (CFEPMain::vslot7, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPMain;

static uint32_t BEA_THISCALL ap_00464520(CFEPMain * this_, undefined4 param_1)
{
  *(undefined4 *)(this_ + 0x14) = 0;
  *(undefined4 *)(this_ + 0x18) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00464520, ap_00464520));

// auto-ported from 00464620_vslot0.c (CFEPSaveGame::vslot0, 14 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPSaveGame;

static undefined4 BEA_THISCALL ap_00464620(CFEPSaveGame * this_)
{
  *(undefined4 *)(this_ + 8) = 0;
  *(undefined4 *)(this_ + 0xc) = 0;
  return 1;
}

// @autoport-registration (verified: 97 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00464620, ap_00464620));

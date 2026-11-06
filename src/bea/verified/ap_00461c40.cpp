// auto-ported from 00461c40_vslot0.c (CFEPLoadGame::vslot0, 25 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPLoadGame;

static undefined4 BEA_THISCALL ap_00461c40(CFEPLoadGame * this_)
{
  *(undefined4 *)(this_ + 0x40) = 0xffffffff;
  *(undefined4 *)(this_ + 0x38) = 0;
  *(undefined4 *)(this_ + 0x3c) = 0;
  *(undefined2 *)(this_ + 0x44) = 0;
  return 1;
}

// @autoport-registration (verified: 97 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00461c40, ap_00461c40));

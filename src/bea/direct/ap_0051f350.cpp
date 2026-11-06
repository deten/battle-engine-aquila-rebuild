// auto-ported from 0051f350_vslot6.c (CFEPMultiplayerStart::vslot6, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPMultiplayerStart;
#define DAT_008a9560 GLOBAL_AT(char, 0x008a9560)

static uint BEA_THISCALL ap_0051f350(CFEPMultiplayerStart * this_, undefined4 param_1)
{
  uint uVar1;
  
  this_[5] = (CFEPMultiplayerStart)0x1;
  this_[4] = (CFEPMultiplayerStart)0x0;
  *(undefined4 *)(this_ + 0xc) = 0;
  *(undefined4 *)(this_ + 8) = 0;
  uVar1 = (uint)(byte)(*(uint8_t*)((char*)&DAT_008a9560 + 0));
  this_[4] = (*(uint8_t*)((char*)&DAT_008a9560 + 0));
  this_[6] = (CFEPMultiplayerStart)0x3;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f350, ap_0051f350));

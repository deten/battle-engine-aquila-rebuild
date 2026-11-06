// auto-ported from 0051bfa0_vslot0.c (CFEPLanguageTest::vslot0, 20 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPLanguageTest;

static undefined4 BEA_THISCALL ap_0051bfa0(CFEPLanguageTest * this_)
{
  *(undefined4 *)(this_ + 8) = 0;
  *(undefined4 *)(this_ + 0x10) = 0;
  *(undefined4 *)(this_ + 0x14) = 0;
  this_[0x18] = (CFEPLanguageTest)0x0;
  return 1;
}

// @autoport-registration (verified: 91 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051bfa0, ap_0051bfa0));

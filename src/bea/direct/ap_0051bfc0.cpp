// auto-ported from 0051bfc0_vslot1.c (CFEPLanguageTest::vslot1, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPLanguageTest;

static void BEA_THISCALL ap_0051bfc0(CFEPLanguageTest * this_)
{
  if (*(undefined4 **)(this_ + 0x14) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)(this_ + 0x14), 0x0, 1);
  }
  *(undefined4 *)(this_ + 0x14) = 0;
  this_[0x18] = (CFEPLanguageTest)0x0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051bfc0, ap_0051bfc0));

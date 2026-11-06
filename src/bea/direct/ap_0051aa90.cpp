// auto-ported from 0051aa90_vslot0.c (CFEPDirectory::vslot0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFEPDirectory;

static undefined4 BEA_THISCALL ap_0051aa90(CFEPDirectory * this_)
{
  int iVar1;
  
  *(undefined4 *)(this_ + 0x4008) = 0;
  *(undefined4 *)(this_ + 0x400c) = 0;
  *(undefined4 *)(this_ + 0x4004) = 0;
  *(undefined4 *)(this_ + 0x4010) = 0;
  for (iVar1 = 0x1000; BEA_LOOP_GUARD((this_ = this_ + 4, iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)this_ = 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051aa90, ap_0051aa90));

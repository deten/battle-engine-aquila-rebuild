// auto-ported from 004fe480_FUN_004fe480.c (FUN_004fe480, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004fe480(void * this_)
{
  undefined4 uVar1;
  
  if (*(int **)((int)this_ + 0x208) != (int *)0x0) {
                    
                    
    uVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x208), 0x24);
    return uVar1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe480, ap_004fe480));

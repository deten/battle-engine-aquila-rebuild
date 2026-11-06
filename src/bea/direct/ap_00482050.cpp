// auto-ported from 00482050_FUN_00482050.c (FUN_00482050, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00482050(void * this_)
{
  undefined4 uVar1;
  
  if (*(int *)((int)this_ + 0x200) != 0) {
    if (*(int *)((int)this_ + 0x1fc) != 0) {
      bea_vcall<uint32_t>(*(int *)((int)this_ + 0x1fc) + 4, 0x4, 1);
    }
    uVar1 = *(undefined4 *)((int)this_ + 0x200);
    *(undefined4 *)((int)this_ + 0x200) = 0;
    *(undefined4 *)((int)this_ + 0x1fc) = uVar1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00482050, ap_00482050));

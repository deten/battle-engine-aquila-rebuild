// auto-ported from 004e06b0_FUN_004e06b0.c (FUN_004e06b0, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004e06b0(void * this_)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)this_;
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)this_ = 0;
    return;
  }
  do {
    puVar1 = (undefined4 *)puVar2[0x1d];
    if (puVar2 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar2, 0x0, 1);
    }
    puVar2 = puVar1;
  } while (BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0)));
  *(undefined4 *)this_ = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e06b0, ap_004e06b0));

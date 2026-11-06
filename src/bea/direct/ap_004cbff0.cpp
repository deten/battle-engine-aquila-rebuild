// auto-ported from 004cbff0_FUN_004cbff0.c (FUN_004cbff0, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004cbff0(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this_;
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    puVar2 = *(undefined4 **)this_;
    iVar1 = puVar2[0xe];
    if (puVar2 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar2, 0x0, 1);
    }
    *(int *)this_ = iVar1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cbff0, ap_004cbff0));

// auto-ported from 004815c0_FUN_004815c0.c (FUN_004815c0, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004815c0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this_ + 0x34);
  for (iVar2 = 6; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar1 = 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)((int)this_ + 0x68);
  iVar2 = 4;
  do {
    puVar1[-1] = 0xc1200000;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  *(undefined4 *)((int)this_ + 0x94) = 0;
  *(undefined4 *)((int)this_ + 0xa4) = 0xc61c4000;
  *(undefined4 *)((int)this_ + 0xa8) = 0xc61c4000;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0xac) = 0;
  puVar1 = (undefined4 *)((int)this_ + 0xe4);
  iVar2 = 4;
  do {
    puVar1[-4] = 0x3f800000;
    *puVar1 = 0x3f800000;
    puVar1[4] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x35] = 0;
    puVar1[0x42] = 0;
    puVar1[0x3e] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004815c0, ap_004815c0));

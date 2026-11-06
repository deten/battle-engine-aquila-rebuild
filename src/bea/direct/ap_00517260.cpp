// auto-ported from 00517260_FUN_00517260.c (FUN_00517260, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00517260(void * this_)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this_ + 0xc4);
  iVar3 = 0x40;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar1, 0x48, piVar1);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD((iVar3 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517260, ap_00517260));

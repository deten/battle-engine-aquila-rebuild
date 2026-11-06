// auto-ported from 00442380_FUN_00442380.c (FUN_00442380, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066ffb0 GLOBAL_AT(int, 0x0066ffb0)

static void BEA_THISCALL ap_00442380(void * this_)
{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_0066ffb0;
  if (DAT_0066ffb0 == this_) {
    DAT_0066ffb0 = (int *)*(undefined4 *)this_;
    return;
  }
  do {
    piVar1 = piVar2;
    if (piVar1 == (int *)0x0) break;
    piVar2 = (int *)*piVar1;
  } while (BEA_LOOP_GUARD(((int *)*piVar1 != this_)));
  *piVar1 = *(int *)this_;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00442380, ap_00442380));

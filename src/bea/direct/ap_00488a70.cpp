// auto-ported from 00488a70_FUN_00488a70.c (FUN_00488a70, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0067a678 GLOBAL_AT(undefined4*, 0x0067a678)

static void BEA_THISCALL ap_00488a70(void * this_)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_0067a678 == (undefined4 *)0x0) {
    DAT_0067a678 = this_;
    *(undefined4 *)this_ = 0;
    return;
  }
  puVar3 = (undefined4 *)*DAT_0067a678;
  puVar2 = DAT_0067a678;
  while (BEA_LOOP_GUARD((puVar1 = puVar3, puVar1 != (undefined4 *)0x0))) {
    puVar2 = puVar1;
    puVar3 = (undefined4 *)*puVar1;
  }
  *puVar2 = this_;
  *(undefined4 *)this_ = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488a70, ap_00488a70));

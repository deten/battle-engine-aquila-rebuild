// auto-ported from 0042ea60_FUN_0042ea60.c (FUN_0042ea60, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066e99c GLOBAL_AT(undefined4*, 0x0066e99c)

static void BEA_CDECL ap_0042ea60(void)
{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)*DAT_0066e99c;
  DAT_0066e99c[2] = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x4);
    puVar1 = *(undefined4 **)(DAT_0066e99c[2] + 4);
    DAT_0066e99c[2] = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ea60, ap_0042ea60));

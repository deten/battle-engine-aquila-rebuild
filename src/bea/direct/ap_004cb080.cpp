// auto-ported from 004cb080_FUN_004cb080.c (FUN_004cb080, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b3e8 GLOBAL_AT(int, 0x0082b3e8)

static void BEA_CDECL ap_004cb080(void)
{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0082b3e8; BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0)); puVar1 = (undefined4 *)*puVar1) {
    if ((puVar1[1] != 0) && (*(int *)(puVar1[1] + 0xa4) == 0)) {
      puVar1[1] = 0;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cb080, ap_004cb080));

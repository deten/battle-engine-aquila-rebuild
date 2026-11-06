// auto-ported from 004caf30_FUN_004caf30.c (FUN_004caf30, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0082b3e4 GLOBAL_AT(int, 0x0082b3e4)

static void BEA_CDECL ap_004caf30(void)
{
  int iVar1;
  
  for (iVar1 = DAT_0082b3e4; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0xb0)) {
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    *(undefined4 *)(iVar1 + 0xa8) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004caf30, ap_004caf30));

// auto-ported from 00490780_FUN_00490780.c (FUN_00490780, 68 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_009c6904 GLOBAL_AT(char, 0x009c6904)
#define DAT_009c68a0 GLOBAL_AT(char, 0x009c68a0)

static void BEA_THISCALL ap_00490780(void * this_, int param_1)
{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  DAT_009c6904 = 1;
  piVar3 = (int *)((int)this_ + 0x1cc);
  iVar2 = 1;
  DAT_009c68a0 = param_1 != 0;
  do {
    if (*piVar3 != 0) {
      (&DAT_009c68a0)[iVar2] = param_1 != 0;
      (&DAT_009c6904)[iVar2] = 1;
    }
    piVar3 = piVar3 + 0x1d;
    bVar1 = iVar2 < 8;
    iVar2 = iVar2 + 1;
  } while (BEA_LOOP_GUARD((bVar1)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490780, ap_00490780));

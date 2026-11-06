// auto-ported from 00513d20_FUN_00513d20.c (FUN_00513d20, 58 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00889074 GLOBAL_AT(undefined4, 0x00889074)
#define DAT_00889078 GLOBAL_AT(int, 0x00889078)

static void BEA_STDCALL ap_00513d20(int param_1)
{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00889074;
  iVar2 = DAT_00889074;
  if (DAT_00889074 != 0) {
    while (BEA_LOOP_GUARD((iVar2 != param_1))) {
      puVar3 = (undefined4 *)(iVar2 + 4);
      piVar1 = (int *)(iVar2 + 4);
      iVar2 = *piVar1;
      if (*piVar1 == 0) {
        return;
      }
    }
    *puVar3 = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = DAT_00889078;
    DAT_00889078 = param_1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513d20, ap_00513d20));

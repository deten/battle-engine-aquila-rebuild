// auto-ported from 00521650_FUN_00521650.c (FUN_00521650, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089da74 GLOBAL_AT(undefined4*, 0x0089da74)
#define DAT_0089da6c GLOBAL_AT(undefined4*, 0x0089da6c)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static uint32_t BEA_CDECL ap_00521650(void)
{
  int *piVar1;
  char cVar2;
  
  DAT_0089da74 = DAT_0089da6c;
  if (DAT_0089da6c == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*DAT_0089da6c;
  }
  while (BEA_LOOP_GUARD((piVar1 != (int *)0x0))) {
    if (DAT_0089d94c == *piVar1) goto LAB_0052168d;
    DAT_0089da74 = (undefined4 *)DAT_0089da74[1];
    if (DAT_0089da74 == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)*DAT_0089da74;
    }
  }
  piVar1 = (int *)0x0;
LAB_0052168d:
  cVar2 = '\0';
  if (piVar1 != (int *)0x0) {
    cVar2 = piVar1[1] != 0;
    if (piVar1[3] != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (piVar1[2] != 0) {
      cVar2 = cVar2 + '\x01';
    }
  }
  return cVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521650, ap_00521650));

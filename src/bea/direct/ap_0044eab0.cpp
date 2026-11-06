// auto-ported from 0044eab0_FUN_0044eab0.c (FUN_0044eab0, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089da3c GLOBAL_AT(undefined4*, 0x0089da3c)
#define DAT_0089da34 GLOBAL_AT(undefined4*, 0x0089da34)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static undefined4 BEA_CDECL ap_0044eab0(int param_1)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  DAT_0089da3c = DAT_0089da34;
  if (DAT_0089da34 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0089da34;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (DAT_0089d94c == *piVar2) break;
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*DAT_0089da3c;
    }
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)piVar2[5];
  iVar3 = 0;
  piVar2[7] = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    if (iVar3 == param_1) {
      return *puVar1;
    }
    iVar3 = iVar3 + 1;
    puVar1 = *(undefined4 **)(piVar2[7] + 4);
    piVar2[7] = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  } while (BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0)));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044eab0, ap_0044eab0));

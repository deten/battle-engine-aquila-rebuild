// auto-ported from 004dee00_FUN_004dee00.c (FUN_004dee00, 146 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004dee00(void * this_, int param_1)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 2:
    iVar3 = 9;
    break;
  case 3:
    iVar3 = 10;
    break;
  case 4:
    iVar3 = 0xb;
    break;
  case 5:
    iVar3 = 0xc;
    break;
  case 6:
    iVar3 = 0xd;
    break;
  case 7:
    iVar3 = 0xe;
    break;
  case 8:
    iVar3 = 0xf;
    break;
  case 9:
    iVar3 = 0x10;
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x19c);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x270) == iVar3)) break;
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dee00, ap_004dee00));

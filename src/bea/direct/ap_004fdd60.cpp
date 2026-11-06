// auto-ported from 004fdd60_vslot63.c (CUnit::vslot63, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CUnit;

static undefined4 BEA_THISCALL ap_004fdd60(CUnit * this_, char *param_1)
{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  piVar4 = *(int **)(this_ + 0x18c);
  if (piVar4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  do {
    if (iVar3 == 0) {
      puVar2 = *(undefined4 **)(this_ + 0x19c);
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*puVar2;
      }
      while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
        if ((int *)*piVar4 != (int *)0x0) {
          bea_vcall<uint32_t>(*piVar4, 0xfc, param_1);
        }
        puVar2 = (undefined4 *)puVar2[1];
        if (puVar2 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)*puVar2;
        }
      }
      return 0;
    }
    *(undefined4 *)(iVar3 + 0x3c0) = 1;
    uVar5 = 0xffffffff;
    pcVar7 = param_1;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = (char *)(iVar3 + 700);
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    piVar4 = (int *)piVar4[1];
    if (piVar4 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar4;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fdd60, ap_004fdd60));

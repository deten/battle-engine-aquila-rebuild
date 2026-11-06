// auto-ported from 00454e90_FUN_00454e90.c (FUN_00454e90, 235 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008892dc GLOBAL_AT(undefined4, 0x008892dc)

static void BEA_CDECL ap_00454e90(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (DAT_008892dc != -1) {
    puVar5 = &DAT_008892dc;
    do {
      if (*(char *)(puVar5 + -1) != '\0') {
        piVar3 = puVar5 + 1;
        iVar4 = 2;
        do {
          if ((*piVar3 == param_1) && ((short)piVar3[2] == (short)param_2)) {
            switch(param_3) {
            default:
              iVar2 = 1;
              break;
            case 4:
            case 6:
              iVar2 = 3;
              break;
            case 5:
            case 7:
              iVar2 = 2;
              break;
            case 8:
            case 9:
            case 10:
              iVar2 = 4;
              break;
            case 0xb:
            case 0xd:
              iVar2 = 5;
              break;
            case 0xc:
            case 0xe:
              iVar2 = 6;
              break;
            case 0xf:
            case 0x10:
            case 0x11:
              iVar2 = 7;
            }
            switch(piVar3[1]) {
            default:
              iVar1 = 1;
              break;
            case 4:
            case 6:
              iVar1 = 3;
              break;
            case 5:
            case 7:
              iVar1 = 2;
              break;
            case 8:
            case 9:
            case 10:
              iVar1 = 4;
              break;
            case 0xb:
            case 0xd:
              iVar1 = 5;
              break;
            case 0xc:
            case 0xe:
              iVar1 = 6;
              break;
            case 0xf:
            case 0x10:
            case 0x11:
              iVar1 = 7;
            }
            if (iVar2 == iVar1) {
              *piVar3 = -1;
            }
          }
          piVar3 = piVar3 + 3;
          iVar4 = iVar4 + -1;
        } while (BEA_LOOP_GUARD((iVar4 != 0)));
      }
      piVar3 = puVar5 + 8;
      puVar5 = puVar5 + 8;
    } while (BEA_LOOP_GUARD((*piVar3 != -1)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00454e90, ap_00454e90));

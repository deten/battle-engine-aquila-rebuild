// auto-ported from 00418750_FUN_00418750.c (FUN_00418750, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00418750(void * this_, char *param_1, int param_2, int param_3, int param_4)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(param_3 * *(int *)((int)this_ + 0x10) + *(int *)((int)this_ + 0xc) + param_2);
  for (; BEA_LOOP_GUARD(((param_4 != 0 && (param_3 < *(int *)((int)this_ + 0x18))))); param_3 = param_3 + 1) {
    if (param_3 < 0) {
      cVar1 = *param_1;
      while (BEA_LOOP_GUARD((param_1 = param_1 + 1, cVar1 != '\0'))) {
        if ('\0' < cVar1) {
          param_1 = param_1 + cVar1;
        }
        cVar1 = *param_1;
      }
    }
    else {
      cVar1 = *param_1;
      pcVar2 = pcVar3;
      while (BEA_LOOP_GUARD((param_1 = param_1 + 1, cVar1 != '\0'))) {
        if (cVar1 < '\x01') {
          pcVar2 = pcVar2 + -(int)cVar1;
        }
        else {
          do {
            *pcVar2 = *param_1;
            pcVar2 = pcVar2 + 1;
            param_1 = param_1 + 1;
            cVar1 = cVar1 + -1;
          } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        }
        cVar1 = *param_1;
      }
    }
    pcVar3 = pcVar3 + *(int *)((int)this_ + 0x10);
    param_4 = param_4 + -1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418750, ap_00418750));

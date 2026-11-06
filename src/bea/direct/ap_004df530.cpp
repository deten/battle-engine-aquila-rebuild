// auto-ported from 004df530_FUN_004df530.c (FUN_004df530, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004df530(void * this_, char *param_1)
{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    pcVar2 = (char *)((int)this_ + 0x110);
    do {
      *pcVar2 = cVar1;
      cVar1 = param_1[1];
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004df530, ap_004df530));

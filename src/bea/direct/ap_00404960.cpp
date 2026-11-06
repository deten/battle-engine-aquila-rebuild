// auto-ported from 00404960_FUN_00404960.c (FUN_00404960, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006601a8 GLOBAL_AT(int, 0x006601a8)

static void BEA_THISCALL ap_00404960(void * this_)
{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this_ = ((void*)0x005d87ec);
  if (DAT_006601a8 == this_) {
    DAT_006601a8 = (void *)*(undefined4 *)((int)this_ + 4);
    return;
  }
  pvVar3 = *(void **)((int)DAT_006601a8 + 4);
  pvVar2 = DAT_006601a8;
  while (BEA_LOOP_GUARD((pvVar1 = pvVar3, pvVar1 != this_))) {
    pvVar2 = pvVar1;
    pvVar3 = *(void **)((int)pvVar1 + 4);
  }
  *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)((int)this_ + 4);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404960, ap_00404960));

// auto-ported from 00528bf0_FUN_00528bf0.c (FUN_00528bf0, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c01c GLOBAL_AT(undefined4, 0x0089c01c)

static void BEA_THISCALL ap_00528bf0(void * this_)
{
  void *pvVar1;
  undefined4 *puVar2;
  
  *(undefined ***)this_ = ((void*)0x005e4aac);
  if (*(HANDLE *)((int)this_ + 0xc) != (HANDLE)0xffffffff) {
    *(undefined1 *)((int)this_ + 0x14) = 1;
    SetEvent(*(HANDLE *)((int)this_ + 0xc));
    WaitForSingleObject(*(HANDLE *)((int)this_ + 4),0xffffffff);
    CloseHandle(*(HANDLE *)((int)this_ + 4));
    *(undefined4 *)((int)this_ + 4) = 0xffffffff;
    CloseHandle(*(HANDLE *)((int)this_ + 8));
    *(undefined4 *)((int)this_ + 8) = 0xffffffff;
    CloseHandle(*(HANDLE *)((int)this_ + 0xc));
    *(undefined4 *)((int)this_ + 0xc) = 0xffffffff;
    CloseHandle(*(HANDLE *)((int)this_ + 0x10));
    *(undefined4 *)((int)this_ + 0x10) = 0xffffffff;
  }
  puVar2 = &DAT_0089c01c;
  pvVar1 = DAT_0089c01c;
  if (DAT_0089c01c != (void *)0x0) {
    while (BEA_LOOP_GUARD((pvVar1 != this_))) {
      puVar2 = (undefined4 *)((int)pvVar1 + 0x18);
      pvVar1 = *(void **)((int)pvVar1 + 0x18);
      if (pvVar1 == (void *)0x0) {
        return;
      }
    }
    *puVar2 = *(undefined4 *)((int)this_ + 0x18);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528bf0, ap_00528bf0));

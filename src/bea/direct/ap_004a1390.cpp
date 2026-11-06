// auto-ported from 004a1390_FUN_004a1390.c (FUN_004a1390, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004a1390(void * this_)
{
  HANDLE pvVar1;
  
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this_ + 0x8bc) = pvVar1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1390, ap_004a1390));

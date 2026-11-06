// auto-ported from 0047fab0_FUN_0047fab0.c (FUN_0047fab0, 31 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0047fab0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = this_;
  do {
    puVar1 = puVar1 + 3;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD(iVar2 != 0));
  *(undefined ***)this_ = ((void*)0x005dbdf8);
  return this_;
  return this_;
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0047fab0, ap_0047fab0));

// auto-ported from 00490220_FUN_00490220.c (FUN_00490220, 85 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00490220(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 6;
  puVar1 = (undefined4 *)((int)this_ + 0x1f8);
  do {
    puVar1[-7] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[-6] = 0;
    puVar1[-5] = 0;
    puVar1[-4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD(iVar2 != 0));
  return this_;
  return this_;
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00490220, ap_00490220));

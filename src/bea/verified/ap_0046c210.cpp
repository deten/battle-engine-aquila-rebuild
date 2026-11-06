// auto-ported from 0046c210_FUN_0046c210.c (FUN_0046c210, 156 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_0046c210(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d9388);
  puVar1 = (undefined4 *)((int)this_ + 0x4c);
  iVar2 = 10;
  do {
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this_ + 0x9c);
  iVar2 = 10;
  do {
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this_ + 0x9f8) = 0;
  *(undefined4 *)((int)this_ + 0xa04) = 0;
  *(undefined4 *)((int)this_ + 0x2a0) = 0xffffffff;
  *(undefined ***)this_ = ((void*)0x005dbbb4);
  *(undefined4 *)((int)this_ + 0x120) = 0;
  *(undefined4 *)((int)this_ + 0x124) = 0;
  *(undefined4 *)((int)this_ + 0x128) = 1;
  *(undefined1 *)((int)this_ + 300) = 0;
  *(undefined1 *)((int)this_ + 0x22c) = 0;
  *(undefined1 *)((int)this_ + 0x25e) = 0;
  *(undefined4 *)((int)this_ + 0x11c) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x9f0) = 0;
  *(undefined4 *)((int)this_ + 0x9f4) = 0;
  *(undefined4 *)((int)this_ + 0x118) = 0;
  return;
}

// @autoport-registration (verified: 6 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0046c210, ap_0046c210));

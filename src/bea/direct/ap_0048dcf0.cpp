// auto-ported from 0048dcf0_FUN_0048dcf0.c (FUN_0048dcf0, 224 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0067a790 GLOBAL_AT(undefined4, 0x0067a790)
#define DAT_0067a7c0 GLOBAL_AT(int, 0x0067a7c0)
#define DAT_0067a7c4 GLOBAL_AT(int, 0x0067a7c4)
#define DAT_0067a7c8 GLOBAL_AT(int, 0x0067a7c8)
#define DAT_0067a7cc GLOBAL_AT(int, 0x0067a7cc)

static void * BEA_THISCALL ap_0048dcf0(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_0067a790;
  puVar4 = (undefined4 *)((int)this_ + 0x14);
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x50) = DAT_0067a7c0;
  *(undefined4 *)((int)this_ + 0x54) = DAT_0067a7c4;
  *(undefined4 *)((int)this_ + 0x58) = DAT_0067a7c8;
  uVar1 = DAT_0067a7cc;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined4 *)((int)this_ + 100) = 0;
  *(undefined4 *)((int)this_ + 0x5c) = uVar1;
  *(undefined4 *)((int)this_ + 0x68) = 0;
  *(undefined4 *)((int)this_ + 0x70) = 0;
  *(undefined4 *)((int)this_ + 0x74) = 0;
  *(undefined4 *)((int)this_ + 0x78) = 1;
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  *(undefined4 *)((int)this_ + 0x80) = 2;
  *(undefined4 *)((int)this_ + 0x84) = 2;
  *(undefined4 *)((int)this_ + 0x88) = 1;
  *(undefined4 *)((int)this_ + 0x94) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0x8c) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x3ac) = 1;
  *(undefined4 *)((int)this_ + 0xa0) = 2;
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  *(undefined4 *)((int)this_ + 0x3b0) = 0;
  *(undefined4 *)((int)this_ + 0x3b4) = 0;
  *(undefined ***)this_ = ((void*)0x005dc1cc);
  *(undefined1 *)((int)this_ + 0xac) = 0;
  *(undefined1 *)((int)this_ + 0x1ac) = 0;
  *(undefined1 *)((int)this_ + 0x2ac) = 0;
  *(undefined4 *)((int)this_ + 0x3b8) = 0;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048dcf0, ap_0048dcf0));

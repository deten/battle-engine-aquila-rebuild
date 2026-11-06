// auto-ported from 0040e1b0_vslot0.c (CInitThing::vslot0, 197 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CInitThing;

static CInitThing * BEA_THISCALL ap_0040e1b0(CInitThing * this_, int param_1)
{
  int iVar1;
  CInitThing *pCVar2;
  undefined4 *puVar3;
  CInitThing *pCVar4;
  
  *(undefined4 *)(this_ + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_ + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this_ + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this_ + 0x48) = *(undefined4 *)(param_1 + 0x48);
  puVar3 = (undefined4 *)(param_1 + 0x14);
  pCVar4 = this_ + 0x14;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pCVar4 = pCVar4 + 4;
  }
  *(undefined4 *)(this_ + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this_ + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this_ + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this_ + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pCVar4 = (CInitThing *)(param_1 + 0x2ac);
  pCVar2 = this_ + 0xac;
  do {
    *pCVar2 = pCVar2[param_1 - (int)this_];
    pCVar2[0x100] = pCVar4[-0x100];
    pCVar2[0x200] = *pCVar4;
    pCVar2 = pCVar2 + 1;
    pCVar4 = pCVar4 + 1;
  } while (BEA_LOOP_GUARD(((int)(pCVar2 + (-0xac - (int)this_)) < 0x100)));
  *(undefined4 *)(this_ + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(this_ + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040e1b0, ap_0040e1b0));

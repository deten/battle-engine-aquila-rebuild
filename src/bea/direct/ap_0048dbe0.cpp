// auto-ported from 0048dbe0_vslot0.c (CSphereTriggerInitThing::vslot0, 209 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CSphereTriggerInitThing;

static CSphereTriggerInitThing * BEA_THISCALL ap_0048dbe0(CSphereTriggerInitThing * this_, int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  CSphereTriggerInitThing *pCVar3;
  CSphereTriggerInitThing *pCVar4;
  
  *(undefined4 *)(this_ + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_ + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this_ + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this_ + 0x48) = *(undefined4 *)(param_1 + 0x48);
  puVar2 = (undefined4 *)(param_1 + 0x14);
  pCVar4 = this_ + 0x14;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar4 = pCVar4 + 4;
  }
  pCVar4 = (CSphereTriggerInitThing *)(param_1 + 0x2ac);
  *(undefined4 *)(this_ + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this_ + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this_ + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this_ + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pCVar3 = this_ + 0xac;
  do {
    *pCVar3 = pCVar3[param_1 - (int)this_];
    pCVar3[0x100] = pCVar4[-0x100];
    pCVar3[0x200] = *pCVar4;
    pCVar3 = pCVar3 + 1;
    pCVar4 = pCVar4 + 1;
  } while (BEA_LOOP_GUARD(((int)(pCVar3 + (-0xac - (int)this_)) < 0x100)));
  *(undefined4 *)(this_ + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(this_ + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(this_ + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048dbe0, ap_0048dbe0));

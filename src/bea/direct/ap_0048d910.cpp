// auto-ported from 0048d910_vslot0.c (CWallInitThing::vslot0, 262 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CWallInitThing;

static CWallInitThing * BEA_THISCALL ap_0048d910(CWallInitThing * this_, int param_1)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  CWallInitThing *pCVar6;
  CWallInitThing *pCVar7;
  char *pcVar8;
  char *pcVar9;
  
  *(undefined4 *)(this_ + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_ + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_ + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_ + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_ + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this_ + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this_ + 0x48) = *(undefined4 *)(param_1 + 0x48);
  puVar5 = (undefined4 *)(param_1 + 0x14);
  pCVar7 = this_ + 0x14;
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    pCVar7 = pCVar7 + 4;
  }
  pCVar7 = (CWallInitThing *)(param_1 + 0x2ac);
  *(undefined4 *)(this_ + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this_ + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this_ + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this_ + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pCVar6 = this_ + 0xac;
  do {
    *pCVar6 = pCVar6[param_1 - (int)this_];
    pCVar6[0x100] = pCVar7[-0x100];
    pCVar6[0x200] = *pCVar7;
    pCVar6 = pCVar6 + 1;
    pCVar7 = pCVar7 + 1;
  } while (BEA_LOOP_GUARD(((int)(pCVar6 + (-0xac - (int)this_)) < 0x100)));
  *(undefined4 *)(this_ + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(this_ + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(this_ + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(this_ + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  uVar3 = 0xffffffff;
  pcVar8 = (char *)(param_1 + 0x3c0);
  do {
    pcVar9 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pCVar7 = (CWallInitThing *)(pcVar9 + -uVar3);
  pCVar6 = this_ + 0x3c0;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar7;
    pCVar7 = pCVar7 + 4;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pCVar6 = *pCVar7;
    pCVar7 = pCVar7 + 1;
    pCVar6 = pCVar6 + 1;
  }
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048d910, ap_0048d910));

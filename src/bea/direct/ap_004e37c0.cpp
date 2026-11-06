// auto-ported from 004e37c0_vslot63.c (CSpawnerThing::vslot63, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CSpawnerThing;

static CSpawnerThing * BEA_THISCALL ap_004e37c0(CSpawnerThing * this_, char *param_1)
{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CSpawnerThing *pCVar4;
  char *pcVar5;
  CSpawnerThing *pCVar6;
  
  uVar2 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar2 = ~uVar2;
  pCVar4 = (CSpawnerThing *)(pcVar5 + -uVar2);
  pCVar6 = this_ + 0x154;
  for (uVar3 = uVar2 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar4;
    pCVar4 = pCVar4 + 4;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; BEA_LOOP_GUARD((uVar2 != 0)); uVar2 = uVar2 - 1) {
    *pCVar6 = *pCVar4;
    pCVar4 = pCVar4 + 1;
    pCVar6 = pCVar6 + 1;
  }
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e37c0, ap_004e37c0));

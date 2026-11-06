// auto-ported from 00556fc0_vslot6.c (CDXTexture::vslot6, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDXTexture;
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)

static uint32_t BEA_THISCALL ap_00556fc0(CDXTexture * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CDXTexture *pCVar5;
  char *pcVar6;
  char *pcVar7;
  CDXTexture *pCVar8;
  
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_00662b2c;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pCVar5 = (CDXTexture *)(pcVar7 + -uVar3);
  pCVar8 = this_ + 8;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar8 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    pCVar8 = pCVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pCVar8 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar8 = pCVar8 + 1;
  }
  *(undefined2 *)(this_ + 0xb0) = (undefined2)param_2;
  *(undefined4 *)(this_ + 0xac) = param_1;
  *(undefined4 *)(this_ + 0x148) = param_4;
  *(undefined4 *)(this_ + 0x144) = param_3;
  *(undefined4 *)(this_ + 0x13c) = 1;
  this_[0x14c] = (*(uint8_t*)((char*)&param_5 + 0));
  *(undefined4 *)(this_ + 0x150) = param_6;
  *(int *)(this_ + 0xa4) = *(int *)(this_ + 0xa4) + 1;
  iVar2 = bea_vcall<uint32_t>(this_, 0x4);
  return -1 < iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556fc0, ap_00556fc0));

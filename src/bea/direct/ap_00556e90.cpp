// auto-ported from 00556e90_vslot5.c (CDXTexture::vslot5, 180 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CDXTexture;
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
#define DAT_00652678 GLOBAL_AT(char, 0x00652678)
typedef char * (BEA_CDECL* _strstr_t)(uint32_t, uint32_t);
static const bea_guard<_strstr_t> _strstr = {(_strstr_t)0x0055ea80};

static uint32_t BEA_THISCALL ap_00556e90(CDXTexture * this_, char *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CDXTexture *pCVar6;
  CDXTexture *pCVar7;
  
  *(undefined4 *)(this_ + 0x148) = param_4;
  *(undefined4 *)(this_ + 0x144) = param_2;
  *(undefined4 *)(this_ + 0x13c) = param_5;
  *(undefined4 *)(this_ + 0xa8) = param_2;
  uVar4 = 0xffffffff;
  *(undefined4 *)(this_ + 0x150) = 1;
  do {
    pcVar2 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar2;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar4 = ~uVar4;
  pCVar6 = (CDXTexture *)(pcVar2 + -uVar4);
  pCVar7 = this_ + 8;
  for (uVar5 = uVar4 >> 2; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pCVar6;
    pCVar6 = pCVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *pCVar7 = *pCVar6;
    pCVar6 = pCVar6 + 1;
    pCVar7 = pCVar7 + 1;
  }
  this_[0x154] = (CDXTexture)(DAT_00889010 == 0);
  pcVar2 = _strstr(bea_arg((char *)(this_ + 8)), bea_arg(&DAT_00652678));
  if (pcVar2 == (char *)0x0) {
    *(undefined4 *)(this_ + 0xb4) = 0;
  }
  else {
    *(undefined4 *)(this_ + 0xb4) = 1;
  }
  *(int *)(this_ + 0xa4) = *(int *)(this_ + 0xa4) + 1;
  iVar3 = bea_vcall<uint32_t>(this_, 0x4);
  return -1 < iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556e90, ap_00556e90));

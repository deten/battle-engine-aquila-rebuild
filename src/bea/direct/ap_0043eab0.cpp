// auto-ported from 0043eab0_vslot9.c (CCutscene::vslot9, 491 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CCutscene;
#define DAT_006280e4 GLOBAL_AT(char, 0x006280e4)
#define DAT_006280d4 GLOBAL_AT(char, 0x006280d4)
#define s_Music_006280dc ((char*)0x006280dc)
#define PTR_s_English_00628090 GLOBAL_AT(void*, 0x00628090)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
// @autoport-this-assumed: this_ passed to FUN_0043ed80 (ECX = this, checked in the disassembly)
typedef int (BEA_THISCALL* FUN_0043ed80_t)(uint32_t);
static const bea_guard<FUN_0043ed80_t> FUN_0043ed80 = {(FUN_0043ed80_t)0x0043ed80};

static void BEA_THISCALL ap_0043eab0(CCutscene * this_, int param_1)
{
  char cVar1;
  CCutscene CVar2;
  CCutscene *pCVar3;
  CCutscene *pCVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  int iVar8;
  CCutscene *pCVar9;
  CCutscene *pCVar10;
  char *pcVar11;
  char *pcVar12;
  int local_10;
  
  this_[0x6b8] = (CCutscene)0x0;
  *(undefined4 *)(this_ + 0x844) = 0;
  *(undefined4 *)(this_ + 0x848) = 0xffffffff;
  *(undefined4 *)(this_ + 0xf4) = 1;
  iVar8 = 0x1e;
  pCVar3 = this_ + 0xf8;
  do {
    *(undefined4 *)(pCVar3 + -0x7c) = 0;
    *(undefined4 *)pCVar3 = 0;
    *(undefined4 *)(pCVar3 + 0x5c4) = 0;
    *(undefined4 *)(pCVar3 + 0x438) = 0xffffffff;
    pCVar3 = pCVar3 + 4;
    iVar8 = iVar8 + -1;
  } while (BEA_LOOP_GUARD((iVar8 != 0)));
  *(undefined4 *)(this_ + 0xf8) = 1;
  uVar5 = 0xffffffff;
  pcVar11 = &DAT_006280e4;
  do {
    pcVar12 = pcVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pCVar3 = (CCutscene *)(pcVar12 + -uVar5);
  pCVar9 = this_ + 0x170;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar9 = pCVar9 + 4;
  }
  local_10 = 0;
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pCVar9 = *pCVar3;
    pCVar3 = pCVar3 + 1;
    pCVar9 = pCVar9 + 1;
  }
  uVar5 = 0xffffffff;
  *(undefined4 *)(this_ + 0xfc) = 2;
  pcVar11 = s_Music_006280dc;
  do {
    pcVar12 = pcVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pCVar3 = this_ + 0x1b0;
  pCVar9 = (CCutscene *)(pcVar12 + -uVar5);
  pCVar10 = this_ + 400;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pCVar10 = *(undefined4 *)pCVar9;
    pCVar9 = pCVar9 + 4;
    pCVar10 = pCVar10 + 4;
  }
  pCVar4 = this_ + 0x538;
  ppuVar7 = &PTR_s_English_00628090;
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pCVar10 = *pCVar9;
    pCVar9 = pCVar9 + 1;
    pCVar10 = pCVar10 + 1;
  }
  do {
    *(undefined4 *)(pCVar4 + -0x438) = 2;
    uVar5 = 0xffffffff;
    pcVar11 = *ppuVar7;
    do {
      pcVar12 = pcVar11;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    ppuVar7 = ppuVar7 + 1;
    pCVar9 = (CCutscene *)(pcVar12 + -uVar5);
    pCVar10 = pCVar3;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar9;
      pCVar9 = pCVar9 + 4;
      pCVar10 = pCVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pCVar10 = *pCVar9;
      pCVar9 = pCVar9 + 1;
      pCVar10 = pCVar10 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006280d4;
    do {
      pcVar12 = pcVar11;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar5 = ~uVar5;
    iVar8 = -1;
    pCVar9 = pCVar3;
    do {
      pCVar10 = pCVar9;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pCVar10 = pCVar9 + 1;
      CVar2 = *pCVar9;
      pCVar9 = pCVar10;
    } while (BEA_LOOP_GUARD((CVar2 != (CCutscene)0x0)));
    pCVar9 = (CCutscene *)(pcVar12 + -uVar5);
    pCVar10 = pCVar10 + -1;
    for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar9;
      pCVar9 = pCVar9 + 4;
      pCVar10 = pCVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
      *pCVar10 = *pCVar9;
      pCVar9 = pCVar9 + 1;
      pCVar10 = pCVar10 + 1;
    }
    pCVar3 = pCVar3 + 0x20;
    *(int *)pCVar4 = local_10;
    local_10 = local_10 + 1;
    pCVar4 = pCVar4 + 4;
  } while (BEA_LOOP_GUARD(((int)ppuVar7 < 0x628098)));
  uVar5 = 0xffffffff;
  *(undefined4 *)(this_ + 0xf4) = 4;
  pcVar11 = (char *)(param_1 + 0x4bc);
  do {
    pcVar12 = pcVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pCVar3 = (CCutscene *)(pcVar12 + -uVar5);
  pCVar9 = this_ + 0x858;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar9 = pCVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pCVar9 = *pCVar3;
    pCVar3 = pCVar3 + 1;
    pCVar9 = pCVar9 + 1;
  }
  uVar5 = 0xffffffff;
  *(undefined4 *)(this_ + 0x84c) = 0;
  pcVar11 = (char *)(param_1 + 0x3bc);
  do {
    pcVar12 = pcVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pCVar3 = (CCutscene *)(pcVar12 + -uVar5);
  pCVar9 = this_ + 0x5a8;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar9 = pCVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pCVar9 = *pCVar3;
    pCVar3 = pCVar3 + 1;
    pCVar9 = pCVar9 + 1;
  }
  FUN_0043ed80(bea_arg(this_));
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  bea_vcall<uint32_t>(this_, 0x48);
  this_[0x2c] = (CCutscene)((byte)this_[0x2c] | 8);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043eab0, ap_0043eab0));

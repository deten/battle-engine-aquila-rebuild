// auto-ported from 0051da60_vslot6.c (CFEPMultiplayer::vslot6, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPMultiplayer;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static int BEA_THISCALL ap_0051da60(CFEPMultiplayer * this_, int param_1)
{
  int iVar1;
  int iVar2;
  CFEPMultiplayer *pCVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  iVar1 = 0;
  *(float *)(this_ + 4) = (float)(fVar4 + (float10)2.0f);
  pCVar3 = this_ + 0x10;
  for (iVar2 = 0x12; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  if (param_1 == 0xf) {
    iVar1 = *(int *)(this_ + 0x60) * 3 + *(int *)(this_ + 100);
    *(undefined4 *)(this_ + iVar1 * 4 + 0x10) = 0x3f800000;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051da60, ap_0051da60));

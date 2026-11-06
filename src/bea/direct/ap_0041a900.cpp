// auto-ported from 0041a900_vslot9.c (CControllableCamera::vslot9, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CControllableCamera;
#define DAT_006605c8 GLOBAL_AT(int, 0x006605c8)

static CControllableCamera * BEA_THISCALL ap_0041a900(CControllableCamera * this_)
{
  int iVar1;
  CControllableCamera *pCVar2;
  CControllableCamera *pCVar3;
  
  if (*(int *)(this_ + 0xcc) != DAT_006605c8) {
    *(int *)(this_ + 0xcc) = DAT_006605c8;
    *(undefined4 *)(this_ + 0x4c) = *(undefined4 *)(this_ + 0x3c);
    *(undefined4 *)(this_ + 0x50) = *(undefined4 *)(this_ + 0x40);
    *(undefined4 *)(this_ + 0x54) = *(undefined4 *)(this_ + 0x44);
    *(undefined4 *)(this_ + 0x58) = *(undefined4 *)(this_ + 0x48);
    pCVar2 = this_ + 0xc;
    pCVar3 = this_ + 0x5c;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
      pCVar2 = pCVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
    *(undefined4 *)(this_ + 0x3c) = *(undefined4 *)(this_ + 0x8c);
    *(undefined4 *)(this_ + 0x40) = *(undefined4 *)(this_ + 0x90);
    *(undefined4 *)(this_ + 0x44) = *(undefined4 *)(this_ + 0x94);
    *(undefined4 *)(this_ + 0x48) = *(undefined4 *)(this_ + 0x98);
    pCVar2 = this_ + 0x9c;
    pCVar3 = this_ + 0xc;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
      pCVar2 = pCVar2 + 4;
      pCVar3 = pCVar3 + 4;
    }
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041a900, ap_0041a900));

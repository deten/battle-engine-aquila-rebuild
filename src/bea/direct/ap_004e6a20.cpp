// auto-ported from 004e6a20_vslot54.c (CNormalSquad::vslot54, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static undefined4 BEA_THISCALL ap_004e6a20(CNormalSquad * this_, int param_1)
{
  CNormalSquad *pCVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    uVar2 = FUN_00401000(bea_arg(this_ + 0xc4), bea_arg(0));
    *(undefined4 *)(this_ + 0x120) = 1;
    return uVar2;
  }
  if (param_1 == 3) {
    pCVar1 = this_ + 0x1c;
    *(undefined4 *)(this_ + 0x9c) = 1;
    *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)pCVar1;
    *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(this_ + 0x20);
    *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(this_ + 0x24);
    *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(this_ + 0x28);
    *(undefined4 *)(this_ + 0xf4) = *(undefined4 *)pCVar1;
    *(undefined4 *)(this_ + 0xf8) = *(undefined4 *)(this_ + 0x20);
    *(undefined4 *)(this_ + 0xfc) = *(undefined4 *)(this_ + 0x24);
    *(undefined4 *)(this_ + 0x100) = *(undefined4 *)(this_ + 0x28);
    return pCVar1;
  }
  if (param_1 == 2) {
    *(undefined4 *)(this_ + 0x9c) = 0;
    return param_1;
  }
  *(int *)(this_ + 0x120) = param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6a20, ap_004e6a20));

// auto-ported from 00428770_vslot1_t8.c (CComponent::vslot1_t8, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CComponent;
typedef uint32_t (BEA_THISCALL* CActor__vslot1_t8_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot1_t8_t> CActor__vslot1_t8 = {(CActor__vslot1_t8_t)0x00401c50};
typedef uint32_t (BEA_THISCALL* FUN_00428500_t)(uint32_t);
static const bea_guard<FUN_00428500_t> FUN_00428500 = {(FUN_00428500_t)0x00428500};

static undefined4 * BEA_THISCALL ap_00428770(CComponent * this_, undefined4 *param_1)
{
  int iVar1;
  CComponent *pCVar2;
  undefined4 *puVar3;
  
  if ((((byte)this_[0x24] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x15c) + 0x198) != 0)) {
    CActor__vslot1_t8(bea_arg((CActor *)this_), bea_arg(param_1));
    return param_1;
  }
  FUN_00428500(bea_arg(this_ + -8));
  pCVar2 = this_ + 0x34;
  puVar3 = param_1;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428770, ap_00428770));

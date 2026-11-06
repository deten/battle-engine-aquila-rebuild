// auto-ported from 00428710_vslot0_t8.c (CComponent::vslot0_t8, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CComponent;
typedef uint32_t (BEA_THISCALL* CActor__vslot0_t8_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot0_t8_t> CActor__vslot0_t8 = {(CActor__vslot0_t8_t)0x00401be0};
typedef uint32_t (BEA_THISCALL* FUN_00428500_t)(uint32_t);
static const bea_guard<FUN_00428500_t> FUN_00428500 = {(FUN_00428500_t)0x00428500};

static undefined4 * BEA_THISCALL ap_00428710(CComponent * this_, undefined4 *param_1)
{
  if ((((byte)this_[0x24] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x15c) + 0x198) != 0)) {
    CActor__vslot0_t8(bea_arg((CActor *)this_), bea_arg(param_1));
    return param_1;
  }
  FUN_00428500(bea_arg(this_ + -8));
  *param_1 = *(undefined4 *)(this_ + 0x14);
  param_1[1] = *(undefined4 *)(this_ + 0x18);
  param_1[2] = *(undefined4 *)(this_ + 0x1c);
  param_1[3] = *(undefined4 *)(this_ + 0x20);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428710, ap_00428710));

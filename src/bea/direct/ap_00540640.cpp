// auto-ported from 00540640_FUN_00540640.c (FUN_00540640, 53 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00540010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540010_t> FUN_00540010 = {(FUN_00540010_t)0x00540010};

static undefined4 BEA_THISCALL ap_00540640(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  undefined4 uVar1;

  uVar1 = FUN_00540010(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_7), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(param_6));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540640, ap_00540640));

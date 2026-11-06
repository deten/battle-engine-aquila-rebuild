// auto-ported from 00432a20_vslot3.c (CUnitAlligence::vslot3, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnitAlligence;
typedef undefined4 * (BEA_CDECL* FUN_0043e310_t)(uint32_t);
static const bea_guard<FUN_0043e310_t> FUN_0043e310 = {(FUN_0043e310_t)0x0043e310};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_THISCALL ap_00432a20(CUnitAlligence * this_, void *param_1)
{
  undefined4 uVar1;
  
  FUN_00548570(bea_arg(param_1), bea_arg(&param_1), bea_arg(4));
  uVar1 = FUN_0043e310(bea_arg(param_1));
  *(undefined4 *)(this_ + 8) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x8);
  return *(uint32_t*)((char*)this_ + 0x8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00432a20, ap_00432a20));

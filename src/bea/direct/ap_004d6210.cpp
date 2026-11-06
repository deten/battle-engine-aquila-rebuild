// auto-ported from 004d6210_FUN_004d6210.c (FUN_004d6210, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_005491b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005491b0_t> FUN_005491b0 = {(FUN_005491b0_t)0x005491b0};

static uint32_t BEA_THISCALL ap_004d6210(void * this_, int param_1)
{
  undefined4 uVar1;
  
  uVar1 = FUN_005491b0(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_), bea_arg(param_1 * 6));
  *(int *)((int)this_ + 4) = param_1;
  *(undefined4 *)this_ = uVar1;
  return *(uint32_t*)((char*)this_ + 0x0);
  return *(uint32_t*)((char*)this_ + 0x0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6210, ap_004d6210));

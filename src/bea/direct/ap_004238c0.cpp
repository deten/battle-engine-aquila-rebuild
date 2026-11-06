// auto-ported from 004238c0_FUN_004238c0.c (FUN_004238c0, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00547ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00547ec0_t> FUN_00547ec0 = {(FUN_00547ec0_t)0x00547ec0};

static undefined4 BEA_THISCALL ap_004238c0(void * this_, undefined4 param_1)
{
  int iVar1;
  
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  iVar1 = FUN_00547ec0(bea_arg(*(void **)((int)this_ + 4)), bea_arg(param_1), bea_arg(0x11), bea_arg(1), bea_arg(0));
  if (iVar1 != 0) {
    return *(undefined4 *)((int)this_ + 4);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004238c0, ap_004238c0));

// auto-ported from 00465530_FUN_00465530.c (FUN_00465530, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_flexarray_cpp_00629a9c ((char*)0x00629a9c)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_00465530(void * this_, int param_1)
{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    param_1 = 0x10;
  }
  *(int *)((int)this_ + 4) = param_1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(param_1 << 2), bea_arg(0x12), bea_arg(s_C__dev_ONSLAUGHT2_flexarray_cpp_00629a9c), bea_arg(0x22));
  *(undefined4 *)this_ = uVar1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465530, ap_00465530));

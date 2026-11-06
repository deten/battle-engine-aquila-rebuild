// auto-ported from 00465640_FUN_00465640.c (FUN_00465640, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)
#define DAT_0083d97c GLOBAL_AT(int, 0x0083d97c)
typedef uint32_t (BEA_CDECL* FUN_0042d7d0_t)(uint32_t);
static const bea_guard<FUN_0042d7d0_t> FUN_0042d7d0 = {(FUN_0042d7d0_t)0x0042d7d0};

static undefined4 BEA_THISCALL ap_00465640(void * this_, undefined4 param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  undefined4 uVar1;
  
  if ((param_2 == 0) && (DAT_006630cc == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)((int)this_ + 0xc) = uVar1;
  FUN_0042d7d0(bea_arg(1));
  uVar1 = bea_vcall<uint32_t>(this_, 0x2c, param_1,-(uint)(param_3 != 0) & DAT_0083d97c,param_4,param_5,param_6,param_7);
  FUN_0042d7d0(bea_arg(0));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465640, ap_00465640));

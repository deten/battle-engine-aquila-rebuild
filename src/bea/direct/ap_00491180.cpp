// auto-ported from 00491180_FUN_00491180.c (FUN_00491180, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00491180(void * this_)
{
  undefined4 uVar1;
  
  *(undefined2 *)((int)this_ + 0xc) = 0xffff;
  if (*(int *)this_ != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
    *(undefined4 *)this_ = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this_ + 8) != 0) {
    uVar1 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 8)));
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00491180, ap_00491180));

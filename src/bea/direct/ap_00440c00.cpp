// auto-ported from 00440c00_FUN_00440c00.c (FUN_00440c00, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_00440c00(void * this_)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)this_;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*piVar1));
    *piVar1 = 0;
  }
  uVar2 = 0;
  if (*(int *)this_ != 0) {
    uVar2 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
    *(undefined4 *)this_ = 0;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00440c00, ap_00440c00));

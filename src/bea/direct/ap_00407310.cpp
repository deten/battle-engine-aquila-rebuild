// auto-ported from 00407310_FUN_00407310.c (FUN_00407310, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00412610_t)(uint32_t);
static const bea_guard<FUN_00412610_t> FUN_00412610 = {(FUN_00412610_t)0x00412610};
typedef int (BEA_THISCALL* FUN_00414030_t)(uint32_t);
static const bea_guard<FUN_00414030_t> FUN_00414030 = {(FUN_00414030_t)0x00414030};

static undefined4 BEA_THISCALL ap_00407310(void * this_, int param_1)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0x260) == 3) {
    iVar1 = FUN_00412610(bea_arg(*(void **)((int)this_ + 0x57c)));
  }
  else {
    iVar1 = FUN_00414030(bea_arg(*(void **)((int)this_ + 0x578)));
  }
  if ((iVar1 != 0) && (iVar1 == param_1)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00407310, ap_00407310));

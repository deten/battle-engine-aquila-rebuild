// auto-ported from 00524710_vslot2.c (COggFileRead::vslot2, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char COggFileRead;
typedef int (BEA_THISCALL* FUN_00524180_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00524180_t> FUN_00524180 = {(FUN_00524180_t)0x00524180};

static undefined4 BEA_THISCALL ap_00524710(COggFileRead * this_, undefined4 param_1, undefined4 param_2, int *param_3)
{
  int iVar1;
  
  if ((*(int *)(this_ + 0x2008) == 0) && (*(int *)(this_ + 0x2010) == 0)) {
    *param_3 = 0;
    return 0x80004005;
  }
  iVar1 = FUN_00524180(bea_arg(this_), bea_arg(param_2), bea_arg(param_1));
  *param_3 = iVar1;
  if (iVar1 == -1) {
    *param_3 = 0;
    return 0x80004005;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00524710, ap_00524710));

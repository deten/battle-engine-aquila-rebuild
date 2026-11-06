// auto-ported from 004a4cd0_vslot2.c (CMenuOptionsList::vslot2, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMenuOptionsList;
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};

static undefined4 BEA_THISCALL ap_004a4cd0(CMenuOptionsList * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_004e5c90(bea_arg(this_ + 8), bea_arg(*(undefined4 *)(this_ + 0x18)));
  cVar1 = bea_vcall<uint32_t>(piVar2, 0x20);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_004e5c90(bea_arg(this_ + 8), bea_arg(*(undefined4 *)(this_ + 0x18)));
    bea_vcall<uint32_t>(piVar2, 0x4, param_1,param_2,param_3);
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4cd0, ap_004a4cd0));

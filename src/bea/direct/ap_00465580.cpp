// auto-ported from 00465580_FUN_00465580.c (FUN_00465580, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_005491b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005491b0_t> FUN_005491b0 = {(FUN_005491b0_t)0x005491b0};

static int BEA_THISCALL ap_00465580(void * this_, uint param_1)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_005491b0(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_), bea_arg(param_1 * 4));
  uVar1 = *(uint *)((int)this_ + 4);
  *(int *)this_ = iVar2;
  if (uVar1 < param_1) {
    puVar4 = (undefined4 *)(iVar2 + uVar1 * 4);
    iVar3 = param_1 - uVar1;
    if (iVar3 != 0) {
      iVar2 = 0;
      for (; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  *(uint *)((int)this_ + 4) = param_1;
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465580, ap_00465580));

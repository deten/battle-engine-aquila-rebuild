// auto-ported from 004d61b0_FUN_004d61b0.c (FUN_004d61b0, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_005491b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005491b0_t> FUN_005491b0 = {(FUN_005491b0_t)0x005491b0};

static int BEA_THISCALL ap_004d61b0(void * this_, undefined4 *param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this_ + 8) + 1;
  *(int *)((int)this_ + 8) = iVar3;
  if (*(int *)((int)this_ + 4) < iVar3) {
    uVar2 = FUN_005491b0(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_), bea_arg(iVar3 * 0xc));
    *(int *)((int)this_ + 4) = iVar3 * 2;
    *(undefined4 *)this_ = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)this_ + -6 + *(int *)((int)this_ + 8) * 6);
  *puVar1 = *param_1;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 1);
  return *(int *)((int)this_ + 8) + -1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d61b0, ap_004d61b0));

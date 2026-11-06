// auto-ported from 0042af20_FUN_0042af20.c (FUN_0042af20, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0042af20(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this_ + 0x2394);
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    iVar1 = *(int *)(iVar2 + 0xa8);
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    iVar2 = iVar1;
  }
  iVar2 = *(int *)((int)this_ + 0x2398);
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    iVar1 = *(int *)(iVar2 + 0xac);
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this_ + 0x2394) = 0;
  *(undefined4 *)((int)this_ + 0x2398) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042af20, ap_0042af20));

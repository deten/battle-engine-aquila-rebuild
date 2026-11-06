// auto-ported from 0042ae70_FUN_0042ae70.c (FUN_0042ae70, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0042ae70(void * this_)
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
  if (*(int *)((int)this_ + 0x23b0) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x23b0)));
    *(undefined4 *)((int)this_ + 0x23b0) = 0;
  }
  if (*(int *)((int)this_ + 0x23a0) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x23a0)));
    *(undefined4 *)((int)this_ + 0x23a0) = 0;
  }
  if (*(int *)((int)this_ + 0x23a4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x23a4)));
    *(undefined4 *)((int)this_ + 0x23a4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042ae70, ap_0042ae70));

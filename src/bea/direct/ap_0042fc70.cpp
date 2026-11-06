// auto-ported from 0042fc70_FUN_0042fc70.c (FUN_0042fc70, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_0042fc70_t)(uint32_t);
static const bea_guard<FUN_0042fc70_t> FUN_0042fc70 = {(FUN_0042fc70_t)0x0042fc70};

static int BEA_THISCALL ap_0042fc70(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  if (*(int **)((int)this_ + 4) != (int *)0x0) {
    iVar2 = bea_vcall<uint32_t>(*(int **)((int)this_ + 4), 0x8);
    iVar2 = iVar2 + 8;
  }
  if (*(void **)((int)this_ + 8) != (void *)0x0) {
    iVar1 = FUN_0042fc70(bea_arg(*(void **)((int)this_ + 8)));
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042fc70, ap_0042fc70));

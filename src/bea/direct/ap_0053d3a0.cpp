// auto-ported from 0053d3a0_FUN_0053d3a0.c (FUN_0053d3a0, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static void BEA_THISCALL ap_0053d3a0(void * this_)
{
  int iVar1;
  
  if (*(int *)((int)this_ + 0x4e4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x4e4) + 8)));
    *(undefined4 *)((int)this_ + 0x4e4) = 0;
  }
  iVar1 = *(int *)((int)this_ + 0x28);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + -1;
    *(undefined4 *)((int)this_ + 0x28) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053d3a0, ap_0053d3a0));

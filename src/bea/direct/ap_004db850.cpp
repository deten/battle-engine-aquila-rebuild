// auto-ported from 004db850_FUN_004db850.c (FUN_004db850, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004dc950_t)(uint32_t);
static const bea_guard<FUN_004dc950_t> FUN_004dc950 = {(FUN_004dc950_t)0x004dc950};

static void BEA_THISCALL ap_004db850(void * this_)
{
  int iVar1;
  
  iVar1 = *(int *)((int)this_ + 0x54);
  *(undefined ***)this_ = ((void*)0x005de9c0);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + -1;
    *(undefined4 *)((int)this_ + 0x54) = 0;
  }
  FUN_004dc950(bea_arg(this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db850, ap_004db850));

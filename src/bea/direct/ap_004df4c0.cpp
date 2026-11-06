// auto-ported from 004df4c0_FUN_004df4c0.c (FUN_004df4c0, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};

static void * BEA_THISCALL ap_004df4c0(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004f3e10(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005ded48);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005decd0);
  puVar2 = (undefined4 *)((int)this_ + 0x110);
  for (iVar1 = 0x40; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004df4c0, ap_004df4c0));

// auto-ported from 004306b0_FUN_004306b0.c (FUN_004306b0, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_004306b0_t)(uint32_t);
static const bea_guard<FUN_004306b0_t> FUN_004306b0 = {(FUN_004306b0_t)0x004306b0};

static int BEA_THISCALL ap_004306b0(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 4), 0x8);
  if (*(void **)((int)this_ + 8) != (void *)0x0) {
    iVar2 = FUN_004306b0(bea_arg(*(void **)((int)this_ + 8)));
    return iVar1 + 0xc + iVar2;
  }
  return iVar1 + 0xc;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004306b0, ap_004306b0));

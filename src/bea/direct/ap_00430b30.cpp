// auto-ported from 00430b30_FUN_00430b30.c (FUN_00430b30, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00430b30_t)(uint32_t);
static const bea_guard<FUN_00430b30_t> FUN_00430b30 = {(FUN_00430b30_t)0x00430b30};

static int BEA_THISCALL ap_00430b30(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 4), 0x8);
  if (*(void **)((int)this_ + 8) != (void *)0x0) {
    iVar2 = FUN_00430b30(bea_arg(*(void **)((int)this_ + 8)));
    return iVar1 + 0xc + iVar2;
  }
  return iVar1 + 0xc;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00430b30, ap_00430b30));

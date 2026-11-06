// auto-ported from 00540970_FUN_00540970.c (FUN_00540970, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static undefined4 BEA_THISCALL ap_00540970(void * this_)
{
  int iVar1;
  
  if (*(void **)((int)this_ + 0x170) != (void *)0x0) {
    iVar1 = FUN_00558690(bea_arg(*(void **)((int)this_ + 0x170)));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540970, ap_00540970));

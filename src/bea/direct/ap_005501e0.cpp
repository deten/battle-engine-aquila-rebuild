// auto-ported from 005501e0_FUN_005501e0.c (FUN_005501e0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00500a10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500a10_t> FUN_00500a10 = {(FUN_00500a10_t)0x00500a10};

static uint32_t BEA_THISCALL ap_005501e0(void * this_, undefined4 param_1)
{
  undefined4 uVar1;
  
  uVar1 = FUN_00500a10(bea_arg(*(void **)((int)this_ + 0x198)), bea_arg(param_1), bea_arg(1));
  *(undefined4 *)((int)this_ + 0x19c) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x19c);
  return *(uint32_t*)((char*)this_ + 0x19c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005501e0, ap_005501e0));

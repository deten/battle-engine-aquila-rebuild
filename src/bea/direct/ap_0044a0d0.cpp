// auto-ported from 0044a0d0_FUN_0044a0d0.c (FUN_0044a0d0, 53 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00515ab0_t)(uint32_t);
static const bea_guard<FUN_00515ab0_t> FUN_00515ab0 = {(FUN_00515ab0_t)0x00515ab0};

static uint32_t BEA_THISCALL ap_0044a0d0(void * this_, int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  *(int *)((int)this_ + 0x4ac) = param_1;
  puVar2 = (undefined4 *)((int)this_ + (param_1 * 3 + 0x87) * 8);
  puVar3 = (undefined4 *)((int)this_ + 0x474);
  for (iVar1 = 6; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return FUN_00515ab0(bea_arg((undefined4 *)((int)this_ + 0x474)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a0d0, ap_0044a0d0));

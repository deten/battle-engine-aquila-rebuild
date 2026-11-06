// auto-ported from 004270e0_FUN_004270e0.c (FUN_004270e0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0053be40_t)(uint32_t);
static const bea_guard<FUN_0053be40_t> FUN_0053be40 = {(FUN_0053be40_t)0x0053be40};

static uint32_t BEA_THISCALL ap_004270e0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  puVar3 = (undefined4 *)((int)this_ + 0x3c24);
  iVar4 = 2;
  do {
    iVar2 = 0x1e;
    puVar1 = puVar3;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  return FUN_0053be40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004270e0, ap_004270e0));

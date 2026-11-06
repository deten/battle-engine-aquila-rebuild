// auto-ported from 004019b0_vslot21.c (CActor::vslot21, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CComplexThing;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot21_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot21_t> CComplexThing__vslot21 = {(CComplexThing__vslot21_t)0x004f4460};

static uint32_t BEA_THISCALL ap_004019b0(CActor * this_, undefined4 *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  CActor *pCVar3;
  puVar2 = param_1;
  pCVar3 = this_ + 0x9c;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar3 = pCVar3 + 4;
  }
  return CComplexThing__vslot21(bea_arg((CComplexThing *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004019b0, ap_004019b0));

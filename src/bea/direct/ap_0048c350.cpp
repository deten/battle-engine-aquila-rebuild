// auto-ported from 0048c350_vslot2.c (CInfluenceNode::vslot2, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CInfluenceNode;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0048c350(CInfluenceNode * this_)
{
  int *piVar1;
  int iVar2;
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)(this_ + 0x7c);
    *(int **)(this_ + 0x84) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) break;
    FUN_004e5bd0(bea_arg(this_ + 0x7c), bea_arg(iVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
  }
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048c350, ap_0048c350));

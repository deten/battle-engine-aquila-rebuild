// auto-ported from 004bc050_vslot2.c (CNamedMesh::vslot2, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CNamedMesh;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_STDCALL* FUN_0050b020_t)(uint32_t);
static const bea_guard<FUN_0050b020_t> FUN_0050b020 = {(FUN_0050b020_t)0x0050b020};

static uint32_t BEA_THISCALL ap_004bc050(CNamedMesh * this_)
{
  FUN_0050b020(bea_arg(this_));
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc050, ap_004bc050));

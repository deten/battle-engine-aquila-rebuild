// auto-ported from 00418450_vslot2.c (CBuildingNamedMesh::vslot2, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CBuildingNamedMesh;
typedef char CNamedMesh;
typedef uint32_t (BEA_THISCALL* CNamedMesh__vslot2_t)(uint32_t);
static const bea_guard<CNamedMesh__vslot2_t> CNamedMesh__vslot2 = {(CNamedMesh__vslot2_t)0x004bc050};
typedef uint32_t (BEA_STDCALL* FUN_0050b020_t)(uint32_t);
static const bea_guard<FUN_0050b020_t> FUN_0050b020 = {(FUN_0050b020_t)0x0050b020};

static uint32_t BEA_THISCALL ap_00418450(CBuildingNamedMesh * this_)
{
  FUN_0050b020(bea_arg(this_));
  return CNamedMesh__vslot2(bea_arg((CNamedMesh *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418450, ap_00418450));

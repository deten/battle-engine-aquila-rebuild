// auto-ported from 00418390_vslot9.c (CBuildingNamedMesh::vslot9, 51 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CBuildingNamedMesh;
typedef char CNamedMesh;
typedef uint32_t (BEA_THISCALL* CNamedMesh__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CNamedMesh__vslot9_t> CNamedMesh__vslot9 = {(CNamedMesh__vslot9_t)0x004bbcd0};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};

static uint32_t BEA_THISCALL ap_00418390(CBuildingNamedMesh * this_, int param_1)
{
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  CNamedMesh__vslot9(bea_arg((CNamedMesh *)this_), bea_arg(param_1));
  bea_vcall<uint32_t>(this_, 0x48);
  return FUN_0050b010(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418390, ap_00418390));

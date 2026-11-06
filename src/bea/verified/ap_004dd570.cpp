// auto-ported from 004dd570_vslot23.c (CRTMesh::vslot23, 13 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004dd570(int in_ECX, int param_1)
{
  return *(undefined4 *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
}

// @autoport-registration (verified: 174618 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004dd570, ap_004dd570));

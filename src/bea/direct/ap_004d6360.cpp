// auto-ported from 004d6360_vslot9.c (CRadar::vslot9, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRadar;
typedef char CUnit;
#define DAT_0083c9d8 GLOBAL_AT(undefined4, 0x0083c9d8)
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static int BEA_THISCALL ap_004d6360(CRadar * this_, int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  CRadar *pCVar3;
  
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  puVar2 = &DAT_0083c9d8;
  pCVar3 = this_ + 0x250;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar3 = pCVar3 + 4;
  }
  iVar1 = _rand();
  *(float *)(this_ + 0x280) = (float)(iVar1 % 0x188b) * 0.001f - 3.1415927f;
  return iVar1 / 0x188b;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6360, ap_004d6360));

// auto-ported from 0048da20_vslot1.c (CWallInitThing::vslot1, 86 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInitThing;
typedef char CWallInitThing;
typedef uint32_t (BEA_THISCALL* CInitThing__vslot1_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CInitThing__vslot1_t> CInitThing__vslot1 = {(CInitThing__vslot1_t)0x0040e280};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_0048da20(CWallInitThing * this_, undefined4 param_1, void *param_2)
{
  CWallInitThing *pCVar1;
  
  CInitThing__vslot1(bea_arg((CInitThing *)this_), bea_arg(param_1), bea_arg(param_2));
  FUN_00548570(bea_arg(param_2), bea_arg(this_ + 0x3bc), bea_arg(4));
  if (0x1e < (short)param_1) {
    FUN_00548570(bea_arg(param_2), bea_arg(this_ + 0x4c0), bea_arg(4));
    pCVar1 = this_ + 0x3bf;
    do {
      pCVar1 = pCVar1 + 1;
      FUN_00548570(bea_arg(param_2), bea_arg(pCVar1), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pCVar1 != (CWallInitThing)0x0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048da20, ap_0048da20));

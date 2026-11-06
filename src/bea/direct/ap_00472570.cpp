// auto-ported from 00472570_FUN_00472570.c (FUN_00472570, 94 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_THISCALL ap_00472570(void * this_, undefined4 param_1)
{
  int iVar1;
  
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg((int)this_ + 0x22c));
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg((int)this_ + 0x25e));
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_00568390(bea_arg(param_1), bea_arg((int)this_ + 300));
  return iVar1 == 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472570, ap_00472570));

// auto-ported from 00556f50_FUN_00556f50.c (FUN_00556f50, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};

static undefined4 BEA_THISCALL ap_00556f50(void * this_)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(iVar2), bea_arg(0));
    iVar2 = iVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar2 < 4)));
  if (this_ != (void *)0x0) {
    uVar1 = bea_vcall<uint32_t>(this_, 0x0, 1);
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556f50, ap_00556f50));

// auto-ported from 004f99b0_FUN_004f99b0.c (FUN_004f99b0, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};

static undefined4 BEA_THISCALL ap_004f99b0(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)((int)this_ + 0x164) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this_ + 0x164) + 0x34), uVar2 = 0, iVar1 != 0)) {
    uVar2 = FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(iVar1), bea_arg(this_), bea_arg(0x3f333333), bea_arg(2), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f99b0, ap_004f99b0));

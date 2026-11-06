// auto-ported from 0053bd60_FUN_0053bd60.c (FUN_0053bd60, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00427200_t)(uint32_t);
static const bea_guard<FUN_00427200_t> FUN_00427200 = {(FUN_00427200_t)0x00427200};

static void * BEA_THISCALL ap_0053bd60(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00427200(bea_arg(this_));
  puVar1 = (undefined4 *)((int)this_ + 0x3f04);
  iVar2 = 2;
  do {
    puVar1[-0xc1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  *(undefined4 *)((int)this_ + 0x3f0c) = 0;
  *(undefined4 *)((int)this_ + 0x3c08) = 0;
  *(undefined4 *)((int)this_ + 0x3f10) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053bd60, ap_0053bd60));

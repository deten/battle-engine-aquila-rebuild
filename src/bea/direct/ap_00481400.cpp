// auto-ported from 00481400_FUN_00481400.c (FUN_00481400, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_00481400(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0055dc20(bea_arg((int)this_ + 0x9c), bea_arg(4), bea_arg(2), bea_arg(((void*)0x00551fd0)), bea_arg(((void*)0x0044b1d0)));
  *(undefined4 *)((int)this_ + 0x5c) = 0;
  *(undefined4 *)((int)this_ + 0x1fc) = 0;
  *(undefined4 *)((int)this_ + 0x200) = 0;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  puVar2 = (undefined4 *)((int)this_ + 0x34);
  for (iVar1 = 6; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 1;
    puVar2 = puVar2 + 1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481400, ap_00481400));

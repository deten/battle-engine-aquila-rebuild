// auto-ported from 00500020_FUN_00500020.c (FUN_00500020, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit extraout_ECX_00: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit extraout_ECX: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};

static int BEA_THISCALL ap_00500020(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
{
  int iVar1;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this_ + 0x10) = param_1;
  *(undefined4 *)((int)this_ + 0x18) = param_3;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x14) = param_2;
  *(int *)((int)this_ + 0x20) = param_4;
  if (param_4 == 1) {
    iVar1 = bea_vcall<uint32_t>(this_, 0x4);
    uVar2 = extraout_ECX;
  }
  else {
    iVar1 = bea_vcall<uint32_t>(this_, 0x8);
    uVar2 = extraout_ECX_00;
  }
  FUN_0042d080(bea_arg(CONCAT31((int3)((uint)uVar2 >> 8),-1 < iVar1)), bea_arg(0xd2), bea_arg(6));
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500020, ap_00500020));

// auto-ported from 004a02e0_FUN_004a02e0.c (FUN_004a02e0, 173 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef void * (BEA_THISCALL* FUN_004fe710_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fe710_t> FUN_004fe710 = {(FUN_004fe710_t)0x004fe710};

static void * BEA_THISCALL ap_004a02e0(void * this_, undefined4 param_1, undefined4 param_2)
{
  uint uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004fe710(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
  *(undefined ***)this_ = ((void*)0x005dc4c0);
  *(undefined4 *)((int)this_ + 0x14) = 0;
  uVar1 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar1 = uVar1 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  if (0.5f < (float)(int)uVar1 * 1.5258789e-05f) {
    *(undefined4 *)((int)this_ + 0x60) = 1;
    return this_;
  }
  *(undefined4 *)((int)this_ + 0x60) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a02e0, ap_004a02e0));

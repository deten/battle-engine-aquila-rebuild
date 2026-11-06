// auto-ported from 00497090_FUN_00497090.c (FUN_00497090, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00494c60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00494c60_t> FUN_00494c60 = {(FUN_00494c60_t)0x00494c60};

static void * BEA_THISCALL ap_00497090(void * this_, int param_1)
{
  FUN_00494c60(bea_arg(this_), bea_arg(*(undefined4 *)(param_1 + 0x178)));
  *(int *)((int)this_ + 0x10) = param_1;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0;
  *(undefined4 *)((int)this_ + 0x54) = 0;
  *(undefined4 *)((int)this_ + 0x58) = 0;
  *(undefined4 *)((int)this_ + 0x5c) = 0;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined4 *)((int)this_ + 100) = 0;
  *(undefined4 *)((int)this_ + 0x68) = 0;
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  *(undefined4 *)((int)this_ + 0x70) = 0;
  *(undefined4 *)((int)this_ + 0x74) = 0;
  *(undefined ***)this_ = ((void*)0x005dc388);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00497090, ap_00497090));

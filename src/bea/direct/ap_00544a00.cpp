// auto-ported from 00544a00_FUN_00544a00.c (FUN_00544a00, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_0048de90_t)(uint32_t);
static const bea_guard<FUN_0048de90_t> FUN_0048de90 = {(FUN_0048de90_t)0x0048de90};

static void * BEA_THISCALL ap_00544a00(void * this_)
{
  FUN_0048de90(bea_arg((undefined4 *)((int)this_ + 8)));
  *(undefined ***)this_ = ((void*)0x005e50d0);
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined1 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544a00, ap_00544a00));

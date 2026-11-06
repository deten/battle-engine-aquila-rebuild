// auto-ported from 00410210_FUN_00410210.c (FUN_00410210, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00412650_t)(uint32_t);
static const bea_guard<FUN_00412650_t> FUN_00412650 = {(FUN_00412650_t)0x00412650};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_00410210(void * this_, undefined4 param_1)
{  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004e5840(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x18) = param_1;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x44) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x3c) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x40) = 0xc1200000;
  FUN_00412650(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0x3f000000;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00410210, ap_00410210));

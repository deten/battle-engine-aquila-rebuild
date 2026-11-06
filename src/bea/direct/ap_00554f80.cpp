// auto-ported from 00554f80_FUN_00554f80.c (FUN_00554f80, 135 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c7f84 GLOBAL_AT(int, 0x009c7f84)
typedef uint32_t (BEA_THISCALL* FUN_00404920_t)(uint32_t);
static const bea_guard<FUN_00404920_t> FUN_00404920 = {(FUN_00404920_t)0x00404920};

static void * BEA_THISCALL ap_00554f80(void * this_)
{
  FUN_00404920(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e5974);
  *(undefined4 *)((int)this_ + 0x50) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x54) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x390) = 0;
  *(undefined4 *)((int)this_ + 0x394) = 0;
  *(undefined4 *)((int)this_ + 0x398) = 0;
  *(undefined4 *)((int)this_ + 0x388) = 0x41000000;
  *(undefined4 *)((int)this_ + 0x38c) = 0x40000000;
  *(undefined4 *)((int)this_ + 0x3a0) = 0x41200000;
  *(bool *)((int)this_ + 0x14) = DAT_009c7f84 == 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00554f80, ap_00554f80));

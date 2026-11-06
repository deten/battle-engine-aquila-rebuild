// auto-ported from 004d81e0_FUN_004d81e0.c (FUN_004d81e0, 164 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};

static void * BEA_THISCALL ap_004d81e0(void * this_, undefined4 param_1)
{  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004f3e10(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005d844c);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d83d4);
  *(undefined4 *)((int)this_ + 0xe4) = 0;
  FUN_004cb040(bea_arg((void *)((int)this_ + 0xe0)));
  *(undefined4 *)((int)this_ + 0xe8) = 0;
  *(undefined4 *)((int)this_ + 0xec) = 0;
  *(undefined ***)this_ = ((void*)0x005de82c);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005de7b4);
  *(undefined4 *)((int)this_ + 0xf0) = param_1;
  *(undefined4 *)((int)this_ + 0x124) = 0;
  *(undefined4 *)((int)this_ + 0xf4) = DAT_00672fd0;
  *(undefined4 *)((int)this_ + 0x120) = 0;
  *(undefined4 *)((int)this_ + 300) = 0;
  *(undefined4 *)((int)this_ + 0x130) = 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d81e0, ap_004d81e0));

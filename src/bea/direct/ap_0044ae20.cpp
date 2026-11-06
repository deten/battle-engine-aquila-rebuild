// auto-ported from 0044ae20_FUN_0044ae20.c (FUN_0044ae20, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void * BEA_THISCALL ap_0044ae20(void * this_, undefined4 param_1, undefined4 param_2)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)this_ = 0;
  *(undefined2 *)((int)this_ + 4) = (undefined2)param_1;
  FUN_00401000(bea_arg(this_), bea_arg(param_2));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044ae20, ap_0044ae20));

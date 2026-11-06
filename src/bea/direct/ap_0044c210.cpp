// auto-ported from 0044c210_FUN_0044c210.c (FUN_0044c210, 201 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static void BEA_THISCALL ap_0044c210(void * this_, void *param_1)
{
  void *this_00;
  
  this_00 = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&param_1), bea_arg(4));
  *(void **)this_ = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 4) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 8) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 0x10) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 0x14) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 0x18) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 0x20) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 0x24) = param_1;
  FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
  *(void **)((int)this_ + 0x28) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c210, ap_0044c210));

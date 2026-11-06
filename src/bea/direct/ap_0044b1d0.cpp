// auto-ported from 0044b1d0_FUN_0044b1d0.c (FUN_0044b1d0, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (141 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_0044b1d0(void * this_)
{
  void *this_00;
  
  if ((*(int *)this_ != 0) && (this_00 = *(void **)(*(int *)this_ + 4), this_00 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b1d0, ap_0044b1d0));

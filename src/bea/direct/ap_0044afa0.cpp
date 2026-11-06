// auto-ported from 0044afa0_FUN_0044afa0.c (FUN_0044afa0, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_0044afa0(void * this_)
{
  FUN_0055dc20(bea_arg((int)this_ + 0x30), bea_arg(0x10), bea_arg(600), bea_arg(((void*)0x00505d00)), bea_arg(((void*)0x004e5c60)));
  *(undefined ***)this_ = ((void*)0x005db28c);
  *(undefined4 *)((int)this_ + 0x25b0) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044afa0, ap_0044afa0));

// auto-ported from 00515f60_FUN_00515f60.c (FUN_00515f60, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_00515f60(void * this_)
{
  FUN_0055dc20(bea_arg((int)this_ + 8), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  *(undefined4 *)((int)this_ + 0x424) = 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515f60, ap_00515f60));

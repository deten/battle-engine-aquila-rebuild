// auto-ported from 00551f20_FUN_00551f20.c (FUN_00551f20, 135 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_00551f20(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005e48c8);
  local_4 = 0;
  FUN_0055dc20(bea_arg((int)this_ + 0xc), bea_arg(8), bea_arg(0x20), bea_arg(((void*)0x00551fd0)), bea_arg(((void*)0x0044b1d0)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  FUN_0055dc20(bea_arg((int)this_ + 0x10c), bea_arg(0x20), bea_arg(0x20), bea_arg(((void*)0x00551fd0)), bea_arg(((void*)0x0044b1d0)));
  *(undefined ***)this_ = ((void*)0x005e512c);
  *(undefined1 *)((int)this_ + 0x704) = 1;
  *(undefined1 *)((int)this_ + 0x706) = 1;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551f20, ap_00551f20));

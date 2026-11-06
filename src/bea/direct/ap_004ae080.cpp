// auto-ported from 004ae080_FUN_004ae080.c (FUN_004ae080, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004adff0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004adff0_t> FUN_004adff0 = {(FUN_004adff0_t)0x004adff0};

static void BEA_THISCALL ap_004ae080(void * this_)
{
  *(undefined4 *)this_ = 0;
  FUN_004adff0(bea_arg(this_), bea_arg(1));
  **(undefined4 **)((int)this_ + 0x10) = 0;
  **(undefined4 **)((int)this_ + 0x14) = 0;
  **(undefined4 **)((int)this_ + 0x18) = 0x3f800000;
  **(undefined4 **)((int)this_ + 0x1c) = 0x3f800000;
  **(undefined4 **)((int)this_ + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this_ + 4) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae080, ap_004ae080));

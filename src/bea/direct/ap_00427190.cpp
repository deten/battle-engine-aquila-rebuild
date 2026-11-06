// auto-ported from 00427190_FUN_00427190.c (FUN_00427190, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static void BEA_THISCALL ap_00427190(void * this_)
{
  if (*(int *)((int)this_ + 0x3ef4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x3ef4) + 8)));
    *(undefined4 *)((int)this_ + 0x3ef4) = 0;
  }
  if (*(int *)((int)this_ + 0x3ef8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x3ef8) + 8)));
    *(undefined4 *)((int)this_ + 0x3ef8) = 0;
  }
  if (*(int *)((int)this_ + 0x3efc) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x3efc) + 8)));
    *(undefined4 *)((int)this_ + 0x3efc) = 0;
  }
  if (*(int *)((int)this_ + 0x3f00) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x3f00) + 8)));
    *(undefined4 *)((int)this_ + 0x3f00) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00427190, ap_00427190));

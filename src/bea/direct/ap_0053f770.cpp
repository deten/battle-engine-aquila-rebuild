// auto-ported from 0053f770_FUN_0053f770.c (FUN_0053f770, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};

static void BEA_THISCALL ap_0053f770(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005e504c);
  if (*(int *)((int)this_ + 0x170) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x170) + 8)));
    *(undefined4 *)((int)this_ + 0x170) = 0;
  }
  if (*(void **)((int)this_ + 0x174) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 0x174)));
    *(undefined4 *)((int)this_ + 0x174) = 0;
  }
  if (*(void **)((int)this_ + 0x178) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 0x178)));
    *(undefined4 *)((int)this_ + 0x178) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053f770, ap_0053f770));

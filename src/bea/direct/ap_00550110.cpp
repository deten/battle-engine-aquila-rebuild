// auto-ported from 00550110_FUN_00550110.c (FUN_00550110, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};

static void BEA_THISCALL ap_00550110(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)((int)this_ + 0x194) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x194) + 8)));
    *(undefined4 *)((int)this_ + 0x194) = 0;
  }
  if (*(void **)((int)this_ + 0x198) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 0x198)));
    *(undefined4 *)((int)this_ + 0x198) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550110, ap_00550110));

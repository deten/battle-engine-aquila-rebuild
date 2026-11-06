// auto-ported from 004539d0_FUN_004539d0.c (FUN_004539d0, 115 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_006290b4 GLOBAL_AT(char, 0x006290b4)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_STDCALL* FUN_005159c0_t)(uint32_t);
static const bea_guard<FUN_005159c0_t> FUN_005159c0 = {(FUN_005159c0_t)0x005159c0};

static void BEA_THISCALL ap_004539d0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005db404);
  if (DAT_006290b4 == '\0') {
    DAT_006290b4 = '\x01';
    FUN_005159c0(bea_arg(0));
  }
  if (*(int *)((int)this_ + 0x2c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x2c) + 8)));
    *(undefined4 *)((int)this_ + 0x2c) = 0;
  }
  *(undefined ***)this_ = ((void*)0x005db440);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004539d0, ap_004539d0));

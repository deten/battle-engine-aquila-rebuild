// auto-ported from 004ddfd0_FUN_004ddfd0.c (FUN_004ddfd0, 124 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 0x55ae40 is a thiscall on the global 0x9cc148 (mov ecx, 0x9cc148 at 004ddff4) with `this` as its one stack argument; Ghidra dropped the receiver
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0055ae40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055ae40_t> FUN_0055ae40 = {(FUN_0055ae40_t)0x0055ae40};

static void BEA_THISCALL ap_004ddfd0(void * this_)
{
  int iVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005deb9c);
  FUN_0055ae40(bea_arg(0x9cc148), bea_arg(this_));   // ECX = 0x9cc148 (004ddff4), push esi
  iVar1 = *(int *)((int)this_ + 0x14);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + -1;
    *(undefined4 *)((int)this_ + 0x14) = 0;
  }
  *(undefined ***)this_ = ((void*)0x005deaac);
  if (*(undefined4 **)((int)this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x10), 0x0, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ddfd0, ap_004ddfd0));

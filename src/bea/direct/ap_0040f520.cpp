// auto-ported from 0040f520_FUN_0040f520.c (FUN_0040f520, 111 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_0040f520(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x40)));
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x50)));
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  puVar1 = (undefined4 *)((int)this_ + 0x88);
  iVar2 = 6;
  do {
    puVar1[-6] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  *(undefined4 *)((int)this_ + 100) = 0;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined4 *)((int)this_ + 0x68) = 0;
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f520, ap_0040f520));

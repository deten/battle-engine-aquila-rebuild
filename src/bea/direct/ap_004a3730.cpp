// auto-ported from 004a3730_FUN_004a3730.c (FUN_004a3730, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static void BEA_THISCALL ap_004a3730(void * this_)
{
  void *this_00;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005dc520);
  local_4 = 1;
  if (*(int *)((int)this_ + 0x1c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1c) + 8)));
    *(undefined4 *)((int)this_ + 0x1c) = 0;
  }
  if (*(int *)((int)this_ + 0x20) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x20) + 8)));
    *(undefined4 *)((int)this_ + 0x20) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if ((*(int *)((int)this_ + 0x34) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this_ + 0x34) + 4), this_00 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg((int)this_ + 0x34));
  }
  *(undefined ***)this_ = ((void*)0x005db440);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3730, ap_004a3730));

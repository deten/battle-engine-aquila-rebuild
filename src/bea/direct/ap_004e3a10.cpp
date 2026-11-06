// auto-ported from 004e3a10_FUN_004e3a10.c (FUN_004e3a10, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static uint32_t BEA_THISCALL ap_004e3a10(void * this_)
{
  int *this_00;
  void *this_01;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005dee94);
  this_00 = (int *)((int)this_ + 8);
  local_4 = 1;
  if (*(int *)((int)this_ + 8) != 0) {
    *(undefined4 *)(*(int *)((int)this_ + 8) + 0x80) = 0;
    FUN_00401000(bea_arg(this_00), bea_arg(0));
  }
  local_4 = local_4 & 0xffffff00;
  if ((*this_00 != 0) && (this_01 = *(void **)(*this_00 + 4), this_01 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_01), bea_arg(this_00));
  }
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3a10, ap_004e3a10));

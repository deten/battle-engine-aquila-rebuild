// auto-ported from 004ead90_FUN_004ead90.c (FUN_004ead90, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855100 GLOBAL_AT(int, 0x00855100)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004f3f00_t)(uint32_t);
static const bea_guard<FUN_004f3f00_t> FUN_004f3f00 = {(FUN_004f3f00_t)0x004f3f00};

static uint32_t BEA_THISCALL ap_004ead90(void * this_)
{
  void *this_00;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005df2ec);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df274);
  local_4 = 1;
  FUN_004e5bd0(bea_arg(&DAT_00855100), bea_arg(this_));
  local_4 = local_4 & 0xffffff00;
  if ((*(int *)((int)this_ + 0x7c) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this_ + 0x7c) + 4), this_00 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg((int)this_ + 0x7c));
  }
  local_4 = 0xffffffff;
  return FUN_004f3f00(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ead90, ap_004ead90));

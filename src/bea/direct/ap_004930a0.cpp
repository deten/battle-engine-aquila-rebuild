// auto-ported from 004930a0_FUN_004930a0.c (FUN_004930a0, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004bae50_t)(uint32_t);
static const bea_guard<FUN_004bae50_t> FUN_004bae50 = {(FUN_004bae50_t)0x004bae50};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004930a0(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dc250);
  if (*(int *)((int)this_ + 0xc) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xc)));
  }
  if (*(int *)((int)this_ + 0x10) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x10)));
  }
  if (*(int *)((int)this_ + 0x28) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x28)));
  }
  if (*(int *)((int)this_ + 0x24) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x24)));
  }
  if (*(int *)((int)this_ + 0x2c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x2c)));
  }
  if (*(int *)((int)this_ + 0x34) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x34)));
  }
  if (*(int *)((int)this_ + 0x30) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x30)));
  }
  if (*(int *)((int)this_ + 0x38) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x38)));
  }
  return FUN_004bae50(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004930a0, ap_004930a0));

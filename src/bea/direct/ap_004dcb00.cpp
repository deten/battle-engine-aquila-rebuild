// auto-ported from 004dcb00_FUN_004dcb00.c (FUN_004dcb00, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004dcb00(void * this_)
{
  if (*(int *)this_ != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
    *(undefined4 *)this_ = 0;
  }
  if (*(int *)((int)this_ + 4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  if (*(int *)((int)this_ + 8) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 8)));
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(int *)((int)this_ + 0xc) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xc)));
    *(undefined4 *)((int)this_ + 0xc) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dcb00, ap_004dcb00));

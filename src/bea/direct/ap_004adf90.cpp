// auto-ported from 004adf90_FUN_004adf90.c (FUN_004adf90, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004adf90(void * this_)
{
  if (*(int *)((int)this_ + 8) != 0) {
    if (*(int *)((int)this_ + 0xc) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xc)));
      *(undefined4 *)((int)this_ + 0xc) = 0;
    }
    *(undefined4 *)((int)this_ + 0x10) = 0;
    *(undefined4 *)((int)this_ + 0x14) = 0;
    *(undefined4 *)((int)this_ + 0x18) = 0;
    *(undefined4 *)((int)this_ + 0x1c) = 0;
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(int *)this_ != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)this_ + 8)));
    *(undefined4 *)this_ = 0;
  }
  if (*(void **)((int)this_ + 4) != (void *)0x0) {
    FUN_00501310(bea_arg(*(void **)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004adf90, ap_004adf90));

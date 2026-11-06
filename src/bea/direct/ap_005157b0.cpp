// auto-ported from 005157b0_FUN_005157b0.c (FUN_005157b0, 198 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0053f770_t)(uint32_t);
static const bea_guard<FUN_0053f770_t> FUN_0053f770 = {(FUN_0053f770_t)0x0053f770};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_005157b0(void * this_)
{
  void *pvVar1;
  
  pvVar1 = *(void **)((int)this_ + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_0053f770(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x18) = 0;
  }
  pvVar1 = *(void **)((int)this_ + 0x1c);
  if (pvVar1 != (void *)0x0) {
    FUN_0053f770(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x1c) = 0;
  }
  pvVar1 = *(void **)((int)this_ + 0x20);
  if (pvVar1 != (void *)0x0) {
    FUN_0053f770(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x20) = 0;
  }
  pvVar1 = *(void **)((int)this_ + 0x24);
  if (pvVar1 != (void *)0x0) {
    FUN_0053f770(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x24) = 0;
  }
  pvVar1 = *(void **)((int)this_ + 0x28);
  if (pvVar1 != (void *)0x0) {
    FUN_0053f770(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x28) = 0;
  }
  pvVar1 = *(void **)((int)this_ + 0x2c);
  if (pvVar1 != (void *)0x0) {
    FUN_0053f770(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x2c) = 0;
  }
  if (*(int *)this_ != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)this_));
    *(undefined4 *)this_ = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005157b0, ap_005157b0));

// auto-ported from 004a3630_FUN_004a3630.c (FUN_004a3630, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Monitor_h_00622b80 ((char*)0x00622b80)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004a3630(void * this_, undefined4 param_1, undefined4 param_2, float param_3, int param_4, int param_5, undefined4 param_6)
{
  undefined3 uVar1;
  void *this_00;
  undefined4 local_14;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  *(undefined4 *)((int)this_ + 4) = param_2;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  *(undefined4 *)((int)this_ + 0x14) = 0xffd6d6d6;
  *(undefined4 *)((int)this_ + 0x18) = param_1;
  *(undefined ***)this_ = ((void*)0x005db440);
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined1 *)((int)this_ + 0x30) = (undefined1)param_6;
  uStack_3 = 0;
  uVar1 = uStack_3;
  local_4 = 1;
  uStack_3 = 0;
  *(int *)((int)this_ + 0x34) = param_4;
  if (param_4 != 0) {
    if (*(int *)(param_4 + 4) == 0) {
      this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_Monitor_h_00622b80), bea_arg(0x18));
      local_4 = 2;
      if (this_00 == (void *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        FUN_004e5840(bea_arg(this_00));
      }
      *(void **)(param_4 + 4) = this_00;
      uVar1 = uStack_3;
    }
    uStack_3 = uVar1;
    local_4 = 1;
    FUN_004e5a80(bea_arg(*(void **)(param_4 + 4)), bea_arg((int *)((int)this_ + 0x34)));
  }
  *(int *)((int)this_ + 0x2c) = param_5;
  *(undefined ***)this_ = ((void*)0x005dc520);
  local_14 = (undefined4)(longlong)ROUND((float)param_5 * param_3 + 0.48f);
  *(undefined4 *)((int)this_ + 0x24) = local_14;
  *(undefined4 *)((int)this_ + 0x28) = local_14;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3630, ap_004a3630));

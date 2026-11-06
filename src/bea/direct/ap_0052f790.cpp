// auto-ported from 0052f790_FUN_0052f790.c (FUN_0052f790, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064cc80 ((char*)0x0064cc80)
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_0052f790(void * this_, void *param_1)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  *(undefined ***)this_ = ((void*)0x005e4e4c);
  FUN_00548570(bea_arg(param_1), bea_arg(&param_1), bea_arg(4));
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((int)param_1 + 1), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cc80), bea_arg(0x5c));
  *(undefined4 *)((int)this_ + 4) = uVar1;
  FUN_00548570(bea_arg(this_00), bea_arg(uVar1), bea_arg(param_1));
  *(undefined1 *)(*(int *)((int)this_ + 4) + (int)param_1) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052f790, ap_0052f790));

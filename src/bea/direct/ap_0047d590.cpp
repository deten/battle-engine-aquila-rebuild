// auto-ported from 0047d590_FUN_0047d590.c (FUN_0047d590, 187 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Array_h_0062cba4 ((char*)0x0062cba4)
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};
typedef undefined4 (BEA_THISCALL* FUN_004fd380_t)(uint32_t);
static const bea_guard<FUN_004fd380_t> FUN_004fd380 = {(FUN_004fd380_t)0x004fd380};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_0047d590(void * this_, void *param_1)
{
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  FUN_0047e290(bea_arg(this_), bea_arg(param_1));
  local_4 = 0;
  *(undefined4 *)((int)this_ + 0x38) = 1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x54), bea_arg(s_C__dev_ONSLAUGHT2_Array_h_0062cba4), bea_arg(0x12));
  *(undefined4 *)((int)this_ + 0x34) = uVar1;
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  *(undefined4 *)((int)this_ + 0x40) = 1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x54), bea_arg(s_C__dev_ONSLAUGHT2_Array_h_0062cba4), bea_arg(0x12));
  *(undefined4 *)((int)this_ + 0x3c) = uVar1;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x28) = 0xffffffff;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
  *(undefined ***)this_ = ((void*)0x005dbd90);
  uVar1 = FUN_004fd380(bea_arg(param_1));
  *(undefined4 *)((int)this_ + 0x20) = uVar1;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047d590, ap_0047d590));

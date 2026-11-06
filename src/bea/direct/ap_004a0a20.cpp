// auto-ported from 004a0a20_FUN_004a0a20.c (FUN_004a0a20, 228 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_C__dev_ONSLAUGHT2_Array_h_0062cba4 ((char*)0x0062cba4)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};
typedef undefined4 (BEA_THISCALL* FUN_004fd380_t)(uint32_t);
static const bea_guard<FUN_004fd380_t> FUN_004fd380 = {(FUN_004fd380_t)0x004fd380};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004a0a20(void * this_, undefined4 *param_1)
{
  void *this_00;
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  FUN_0047e290(bea_arg(this_), bea_arg(param_1));
  local_4 = 0;
  *(undefined4 *)((int)this_ + 0x38) = 1;
  param_1 = (undefined4 *)((int)this_ + 0x24);
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
  *(undefined4 *)((int)this_ + 0x44) = 0;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),3);
  *(undefined ***)this_ = ((void*)0x005dc4f4);
  uVar1 = FUN_004fd380(bea_arg(this_00));
  *(undefined4 *)((int)this_ + 0x20) = uVar1;
  FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x44)), bea_arg(0));
  param_1 = (undefined4 *)0xbf800000;
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a0a20, ap_004a0a20));

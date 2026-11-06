// auto-ported from 004e6870_FUN_004e6870.c (FUN_004e6870, 241 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_array_h_0062d590 ((char*)0x0062d590)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004e5da0_t)(uint32_t);
static const bea_guard<FUN_004e5da0_t> FUN_004e5da0 = {(FUN_004e5da0_t)0x004e5da0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004e6870(void * this_)
{
  undefined4 uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  FUN_004e5da0(bea_arg(this_));
  local_4 = 0;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0xa4)));
  *(undefined4 *)((int)this_ + 0xc4) = 0;
  *(undefined4 *)((int)this_ + 200) = 0;
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  *(undefined4 *)((int)this_ + 0xe8) = 1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x54), bea_arg(s_C__dev_ONSLAUGHT2_array_h_0062d590), bea_arg(0x12));
  *(undefined4 *)((int)this_ + 0xe4) = uVar1;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),4);
  *(undefined4 *)((int)this_ + 0xf0) = 1;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x54), bea_arg(s_C__dev_ONSLAUGHT2_array_h_0062d590), bea_arg(0x12));
  *(undefined4 *)((int)this_ + 0xec) = uVar1;
  *(undefined4 *)((int)this_ + 0xdc) = 0;
  *(undefined4 *)((int)this_ + 0xe0) = 0;
  *(undefined4 *)((int)this_ + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xd8) = 0xffffffff;
  *(undefined ***)this_ = ((void*)0x005df0f4);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df07c);
  *(undefined4 *)((int)this_ + 0xb4) = 0;
  *(undefined4 *)((int)this_ + 0x108) = 0;
  *(undefined4 *)((int)this_ + 0xbc) = 0;
  *(undefined4 *)((int)this_ + 0xd0) = 0;
  *(undefined4 *)((int)this_ + 0x118) = 0;
  *(undefined4 *)((int)this_ + 0x114) = 1;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6870, ap_004e6870));

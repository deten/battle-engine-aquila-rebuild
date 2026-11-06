// auto-ported from 0050f0a0_FUN_0050f0a0.c (FUN_0050f0a0, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004f7e90_t)(uint32_t);
static const bea_guard<FUN_004f7e90_t> FUN_004f7e90 = {(FUN_004f7e90_t)0x004f7e90};

static void * BEA_THISCALL ap_0050f0a0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  FUN_004f7e90(bea_arg(this_));
  local_4 = 0;
  *(undefined4 *)((int)this_ + 0x254) = 0;
  FUN_004cb040(bea_arg((void *)((int)this_ + 0x250)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x25c)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x26c)));
  *(undefined ***)this_ = ((void*)0x005e3778);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005e3700);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050f0a0, ap_0050f0a0));

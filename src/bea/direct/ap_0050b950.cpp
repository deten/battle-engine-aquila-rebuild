// auto-ported from 0050b950_FUN_0050b950.c (FUN_0050b950, 105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0048afb0_t)(uint32_t);
static const bea_guard<FUN_0048afb0_t> FUN_0048afb0 = {(FUN_0048afb0_t)0x0048afb0};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static uint32_t BEA_THISCALL ap_0050b950(void * this_)
{
  undefined1 *puStack_8;
  int local_4;
  *(undefined ***)this_ = ((void*)0x005dfcb4);
  local_4 = 2;
  FUN_0048afb0(bea_arg(this_));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x18)));
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 8)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050b950, ap_0050b950));

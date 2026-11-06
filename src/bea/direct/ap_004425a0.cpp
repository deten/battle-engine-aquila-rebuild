// auto-ported from 004425a0_FUN_004425a0.c (FUN_004425a0, 155 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855180 GLOBAL_AT(int, 0x00855180)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};

static void * BEA_THISCALL ap_004425a0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d92d4);
  *(undefined4 *)((int)this_ + 8) = param_2;
  *(undefined4 *)((int)this_ + 0x20) = param_3;
  local_4 = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x14) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 1;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x24)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  *(undefined4 *)((int)this_ + 0x34) = param_4;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = param_1;
  *(undefined ***)this_ = ((void*)0x005db02c);
  FUN_004e5a80(bea_arg(&DAT_00855180), bea_arg(this_));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004425a0, ap_004425a0));

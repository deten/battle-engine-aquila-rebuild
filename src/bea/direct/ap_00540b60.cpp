// auto-ported from 00540b60_FUN_00540b60.c (FUN_00540b60, 134 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00512d50_t)(uint32_t);
static const bea_guard<FUN_00512d50_t> FUN_00512d50 = {(FUN_00512d50_t)0x00512d50};
typedef uint32_t (BEA_THISCALL* FUN_00528bf0_t)(uint32_t);
static const bea_guard<FUN_00528bf0_t> FUN_00528bf0 = {(FUN_00528bf0_t)0x00528bf0};

static uint32_t BEA_THISCALL ap_00540b60(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  local_4 = 4;
  FUN_00528bf0(bea_arg((void *)((int)this_ + 0x37e8)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x314)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x2dc)));
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  FUN_00512d50(bea_arg((void *)((int)this_ + 0x1c4)));
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d9260);
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540b60, ap_00540b60));

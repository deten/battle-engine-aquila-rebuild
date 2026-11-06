// auto-ported from 004e6ae0_FUN_004e6ae0.c (FUN_004e6ae0, 208 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f3f00_t)(uint32_t);
static const bea_guard<FUN_004f3f00_t> FUN_004f3f00 = {(FUN_004f3f00_t)0x004f3f00};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004e6ae0(void * this_)
{
  void *pvVar1;
  undefined1 *puStack_8;
  int local_4;
  (*(uint8_t*)((char*)&local_4 + 0)) = 4;
  *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xec)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xe4)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  if ((*(int *)((int)this_ + 200) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)this_ + 200) + 4), pvVar1 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar1), bea_arg((int)this_ + 200));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  if ((*(int *)((int)this_ + 0xc4) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)this_ + 0xc4) + 4), pvVar1 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar1), bea_arg((int)this_ + 0xc4));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0xa4)));
  local_4 = 0xffffffff;
  return FUN_004f3f00(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e6ae0, ap_004e6ae0));

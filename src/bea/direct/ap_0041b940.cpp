// auto-ported from 0041b940_FUN_0041b940.c (FUN_0041b940, 166 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00661f24 GLOBAL_AT(undefined4, 0x00661f24)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004e5850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5850_t> FUN_004e5850 = {(FUN_004e5850_t)0x004e5850};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static void * BEA_THISCALL ap_0041b940(void * this_, void *param_1)
{
  undefined4 *puVar1;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  uint &local_4 = *reinterpret_cast<uint *>(bea_frame_ + 0x20 - 0x4);
  local_4 = 0xffffffff;
  FUN_004e5840(bea_arg(local_1c));
  local_4 = 1;
  if (*(int *)((int)this_ + 8) < 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = &DAT_00661f24 + *(int *)((int)this_ + 8) * 2;
  }
  FUN_004e5b20(bea_arg(local_1c), bea_arg(puVar1));
  if (*(int *)((int)this_ + 0xc) < 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = &DAT_00661f24 + *(int *)((int)this_ + 0xc) * 2;
  }
  FUN_004e5b20(bea_arg(local_1c), bea_arg(puVar1));
  FUN_004e5850(bea_arg(param_1), bea_arg(local_1c));
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg(local_1c));
  return (void *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b940, ap_0041b940));

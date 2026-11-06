// auto-ported from 0050ac70_FUN_0050ac70.c (FUN_0050ac70, 294 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac ((char*)0x0063d2ac)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef void * (BEA_THISCALL* FUN_0052f790_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052f790_t> FUN_0052f790 = {(FUN_0052f790_t)0x0052f790};
typedef void * (BEA_THISCALL* FUN_00538ec0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00538ec0_t> FUN_00538ec0 = {(FUN_00538ec0_t)0x00538ec0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0050ac70(void * this_, void *param_1)
{
  void *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  void * &local_20 = *reinterpret_cast<void * *>(bea_frame_ + 0x30 - 0x20);
  void * &local_1c = *reinterpret_cast<void * *>(bea_frame_ + 0x30 - 0x1c);
  undefined1 (&local_18)[12] = *reinterpret_cast<undefined1 (*)[12]>(bea_frame_ + 0x30 - 0x18);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  this_00 = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_24), bea_arg(4));
  param_1 = (void *)0x0;
  if (0 < local_24) {
    local_20 = (void *)((int)this_ + 0x120);
    do {
      local_1c = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0xc0));
      uVar3 = 0;
      if (local_1c != (void *)0x0) {
        uVar3 = FUN_0052f790(bea_arg(local_1c), bea_arg(this_00));
      }
      local_1c = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x70), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0xc3));
      if (local_1c == (void *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00538ec0(bea_arg(local_1c), bea_arg(this_00));
      }
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0xc5));
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = uVar3;
        puVar2[1] = uVar1;
      }
      FUN_004e5b20(bea_arg(local_20), bea_arg(puVar2));
      FUN_00548570(bea_arg(this_00), bea_arg(local_18), bea_arg(10));
      param_1 = (void *)((int)param_1 + 1);
    } while (BEA_LOOP_GUARD(((int)param_1 < local_24)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050ac70, ap_0050ac70));

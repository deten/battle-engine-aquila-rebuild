// auto-ported from 00539770_FUN_00539770.c (FUN_00539770, 291 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__00650134 ((char*)0x00650134)
typedef void * (BEA_THISCALL* FUN_004241a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004241a0_t> FUN_004241a0 = {(FUN_004241a0_t)0x004241a0};
typedef void * (BEA_THISCALL* FUN_004241f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004241f0_t> FUN_004241f0 = {(FUN_004241f0_t)0x004241f0};
typedef undefined4 * (BEA_CDECL* FUN_0052ec60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052ec60_t> FUN_0052ec60 = {(FUN_0052ec60_t)0x0052ec60};
typedef void * (BEA_THISCALL* FUN_0052f790_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052f790_t> FUN_0052f790 = {(FUN_0052f790_t)0x0052f790};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_00539770(void * this_, void *param_1)
{
  void *this_00;
  void *pvVar1;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x1c);
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  void * &local_14 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x14);
  void * &local_10 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x4);
  this_00 = param_1;
  local_4 = 0xffffffff;
  local_14 = this_;
  FUN_004241a0(bea_arg(this_), bea_arg(0x10), bea_arg(1));
  local_4 = 0;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_1c), bea_arg(4));
  param_1 = (void *)0x0;
  if (0 < local_1c) {
    do {
      pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x18), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__00650134), bea_arg(0x121));
      (*(uint8_t*)((char*)&local_4 + 0)) = 1;
      local_10 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        FUN_0052f790(bea_arg(pvVar1), bea_arg(this_00));
        (*(uint8_t*)((char*)&local_4 + 0)) = 2;
        FUN_00548570(bea_arg(this_00), bea_arg(&local_18), bea_arg(4));
        if (local_18 == 0) {
          *(undefined4 *)((int)pvVar1 + 8) = 0;
        }
        else {
          uVar2 = FUN_0052ec60(bea_arg(local_18), bea_arg(this_00));
          *(undefined4 *)((int)pvVar1 + 8) = uVar2;
        }
        FUN_00548570(bea_arg(this_00), bea_arg((int)pvVar1 + 0xc), bea_arg(4));
        FUN_00548570(bea_arg(this_00), bea_arg((int)pvVar1 + 0x10), bea_arg(4));
        FUN_00548570(bea_arg(this_00), bea_arg((int)pvVar1 + 0x14), bea_arg(4));
      }
      local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
      FUN_004241f0(bea_arg(this_), bea_arg(pvVar1));
      param_1 = (void *)((int)param_1 + 1);
    } while (BEA_LOOP_GUARD(((int)param_1 < local_1c)));
  }
  FUN_00548570(bea_arg(this_00), bea_arg((int)this_ + 0x10), bea_arg(4));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539770, ap_00539770));

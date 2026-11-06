// auto-ported from 00402ad0_vslot9.c (CAirUnit::vslot9, 590 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008550e0 GLOBAL_AT(int, 0x008550e0)
#define s_C__dev_ONSLAUGHT2_AirUnit_cpp_00622cf4 ((char*)0x00622cf4)
#define s_Trail_00622d14 ((char*)0x00622d14)
#define s_Engine_00622cec ((char*)0x00622cec)
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00402ad0(CAirUnit * this_, int param_1)
{
  undefined4 uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x88);
  void * &pvStack_80 = *reinterpret_cast<void * *>(bea_frame_ + 0x90 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  undefined1 (&local_6c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x90 - 0x6c);
  undefined1 (&local_3c)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x90 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x90 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4);
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  local_90 = *(float *)(*(int *)(param_1 + 0x3bc) + 0xb8);
  *(float *)(this_ + 300) = local_90;
  *(float *)(this_ + 0x130) = local_90;
  *(float *)(this_ + 0x134) = local_90;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xc4);
  *(undefined4 *)(this_ + 0x100) = uVar1;
  *(undefined4 *)(this_ + 0x104) = uVar1;
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xcc);
  local_8c = local_90;
  local_88 = local_90;
  if (*(int *)(*(int *)(this_ + 0x164) + 8) != 0) {
    iVar4 = 1;
    while(BEA_LOOP_GUARD(( true ))) {
      piVar2 = *(int **)(this_ + 0x30);
      FUN_004011b0(bea_arg(local_6c), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      bea_vcall<uint32_t>(piVar2, 0x1c, s_Trail_00622d14,iVar4,&local_90,local_6c,1,0);
      if (((local_90 == 0.0f) && (local_8c == 0.0f)) && (local_88 == 0.0f)) break;
      pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_AirUnit_cpp_00622cf4), bea_arg(0x2a));
      pvStack_80 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar3 + 4) = 0;
        FUN_004cb040(bea_arg(pvVar3));
      }
      FUN_004e5b20(bea_arg(this_ + 0x25c), bea_arg(pvVar3));
      iVar4 = iVar4 + 1;
    }
  }
  if (*(int *)(*(int *)(this_ + 0x164) + 0x14) != 0) {
    iVar4 = 1;
    while(BEA_LOOP_GUARD(( true ))) {
      piVar2 = *(int **)(this_ + 0x30);
      FUN_004011b0(bea_arg(local_3c), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
      bea_vcall<uint32_t>(piVar2, 0x1c, s_Engine_00622cec,iVar4,&fStack_7c,local_3c,1,0);
      if (((fStack_7c == 0.0f) && (fStack_78 == 0.0f)) && (fStack_74 == 0.0f)) break;
      pvVar3 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x10), bea_arg(s_C__dev_ONSLAUGHT2_AirUnit_cpp_00622cf4), bea_arg(0x36));
      pvStack_80 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar3 + 4) = 0;
        FUN_004cb040(bea_arg(pvVar3));
      }
      FUN_004e5b20(bea_arg(this_ + 0x26c), bea_arg(pvVar3));
      iVar4 = iVar4 + 1;
    }
  }
  *(undefined4 *)(this_ + 600) = 0;
  return FUN_004e5a80(bea_arg(&DAT_008550e0), bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402ad0, ap_00402ad0));

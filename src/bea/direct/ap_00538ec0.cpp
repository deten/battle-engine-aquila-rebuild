// auto-ported from 00538ec0_FUN_00538ec0.c (FUN_00538ec0, 379 bytes) by tools/autoport.py
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
#define s_C__dev_ONSLAUGHT2_MissionScript__00650040 ((char*)0x00650040)
typedef void * (BEA_THISCALL* FUN_004241a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004241a0_t> FUN_004241a0 = {(FUN_004241a0_t)0x004241a0};
typedef void * (BEA_THISCALL* FUN_004241f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004241f0_t> FUN_004241f0 = {(FUN_004241f0_t)0x004241f0};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef undefined4 * (BEA_CDECL* FUN_0052d3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052d3d0_t> FUN_0052d3d0 = {(FUN_0052d3d0_t)0x0052d3d0};
typedef void * (BEA_THISCALL* FUN_0052fa70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0052fa70_t> FUN_0052fa70 = {(FUN_0052fa70_t)0x0052fa70};
typedef void * (BEA_THISCALL* FUN_00539770_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539770_t> FUN_00539770 = {(FUN_00539770_t)0x00539770};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_00538ec0(void * this_, void *param_1)
{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  void * &local_10 = *reinterpret_cast<void * *>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  local_4 = 0xffffffff;
  local_10 = this_;
  FUN_004241a0(bea_arg((void *)((int)this_ + 4)), bea_arg(0x10), bea_arg(1));
  iVar2 = 0;
  local_4 = 0;
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x48)));
  this_00 = param_1;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  *(undefined ***)this_ = ((void*)0x005e4f54);
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_18), bea_arg(4));
  if (0 < local_18) {
    do {
      FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
      uVar1 = FUN_0052d3d0(bea_arg(param_1), bea_arg(this_00));
      FUN_004241f0(bea_arg((void *)((int)this_ + 4)), bea_arg(uVar1));
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < local_18)));
  }
  iVar2 = (int)this_ + 0x14;
  iVar3 = 0xd;
  do {
    FUN_00548570(bea_arg(this_00), bea_arg(iVar2), bea_arg(4));
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (BEA_LOOP_GUARD((iVar3 != 0)));
  param_1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__00650040), bea_arg(0x39));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  if (param_1 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00539770(bea_arg(param_1), bea_arg(this_00));
  }
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  *(undefined4 *)((int)this_ + 0x58) = uVar1;
  FUN_00548570(bea_arg(this_00), bea_arg(&local_14), bea_arg(4));
  iVar2 = 0;
  if (0 < local_14) {
    do {
      param_1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__00650040), bea_arg(0x43));
      (*(uint8_t*)((char*)&local_4 + 0)) = 3;
      if (param_1 == (void *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_0052fa70(bea_arg(param_1), bea_arg(this_), bea_arg(this_00));
      }
      local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
      FUN_004e5b20(bea_arg((void *)((int)this_ + 0x48)), bea_arg(uVar1));
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < local_14)));
  }
  FUN_00548570(bea_arg(this_00), bea_arg((int)this_ + 0x60), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg((int)this_ + 0x5c), bea_arg(4));
  *(undefined4 *)((int)this_ + 100) = *(undefined4 *)((int)this_ + 0xc);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00538ec0, ap_00538ec0));

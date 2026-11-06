// auto-ported from 004fe710_FUN_004fe710.c (FUN_004fe710, 788 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_0066ffc8 GLOBAL_AT(int, 0x0066ffc8)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s__s_CANT_start_following_waypoint_00633cb0 ((char*)0x00633cb0)
#define s__s_CANT_start_fighting_cos_it_al_00633c80 ((char*)0x00633c80)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_CDECL* FUN_00472240_t)(int, undefined4, ...);
static const bea_guard<FUN_00472240_t> FUN_00472240 = {(FUN_00472240_t)0x00472240};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void * BEA_THISCALL ap_004fe710(void * this_, int param_1, uint param_2)
{
  int *this_00;
  int *this_01;
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_70)[100] = *reinterpret_cast<undefined1 (*)[100]>(bea_frame_ + 0x70 - 0x70);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x70 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x4);
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  this_00 = (int *)((int)this_ + 0x24);
  *this_00 = 0;
  this_01 = (int *)((int)this_ + 0x28);
  *this_01 = 0;
  *(undefined ***)this_ = ((void*)0x005d8d1c);
  *(int *)((int)this_ + 8) = param_1;
  *(undefined4 *)((int)this_ + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 1;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  FUN_00401000(bea_arg(this_00), bea_arg(*(undefined4 *)(param_2 + 0xa4)));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 1;
  FUN_00401000(bea_arg(this_01), bea_arg(*(undefined4 *)(param_2 + 0x3b4)));
  if (*this_01 == 0) {
    if (*(int *)(*(int *)((int)this_ + 8) + 0x74) != 0) {
      param_2 = -0x40800000;
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d3), bea_arg(*(int *)((int)this_ + 8)), bea_arg(&param_2), bea_arg(0), bea_arg(0), bea_arg(0));
    }
    if (*this_00 == 0) {
      if (*(int *)((int)this_ + 0x20) == 1) {
        pcVar2 = (char *)bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x1c);
        FUN_0055de9b(auStack_70,s__s_CANT_start_fighting_cos_it_al_00633c80,pcVar2);
        FUN_00472240(&DAT_0066ffc8,auStack_70);
        FUN_00441740(&DAT_0066f580,auStack_70);
        goto LAB_004fe8e8;
      }
      *(undefined4 *)((int)this_ + 0x20) = 1;
      uVar4 = 3000;
    }
    else {
      if (*(int *)((int)this_ + 0x20) == 0) {
        pcVar2 = (char *)bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x1c);
        FUN_0055de9b(auStack_70,s__s_CANT_start_following_waypoint_00633cb0,pcVar2);
        FUN_00472240(&DAT_0066ffc8,auStack_70);
        FUN_00441740(&DAT_0066f580,auStack_70);
        goto LAB_004fe8e8;
      }
      *(undefined4 *)((int)this_ + 0x20) = 0;
      uVar4 = 0xbb9;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 0x3b8);
    *(int *)((int)this_ + 0x2c) = iVar1;
    if (iVar1 == 0) goto LAB_004fe8e8;
    *(undefined4 *)((int)this_ + 0x20) = 2;
    uVar4 = 0xbba;
    *(float *)((int)this_ + 0x44) = DAT_00672fd0 + 10.0f;
  }
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(uVar4), bea_arg(this_), bea_arg(&DAT_00672fd0), bea_arg(0), bea_arg(0), bea_arg(0));
LAB_004fe8e8:
  if (*(int *)(*(int *)(param_1 + 0x164) + 0x19c) != 0) {
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    param_2 = uVar3 & 0x8000ffff;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffff0000) + 1;
    }
    *(float *)((int)this_ + 0x48) = (float)(int)param_2 * 6.1035155e-07f + 0.04f;
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    param_2 = uVar3 & 0x8000ffff;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffff0000) + 1;
    }
    *(float *)((int)this_ + 0x54) = (float)(int)param_2 * 6.1035155e-07f + 0.04f;
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    param_2 = uVar3 & 0x8000ffff;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffff0000) + 1;
    }
    if (0.5f < (float)(int)param_2 * 1.5258789e-05f) {
      *(float *)((int)this_ + 0x48) = -*(float *)((int)this_ + 0x48);
    }
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    if (0.5f < (float)(int)uVar3 * 1.5258789e-05f) {
      *(float *)((int)this_ + 0x54) = -*(float *)((int)this_ + 0x54);
    }
    *(float *)((int)this_ + 0x50) = -*(float *)((int)this_ + 0x48);
    *(float *)((int)this_ + 0x5c) = -*(float *)((int)this_ + 0x54);
    *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)((int)this_ + 0x48);
    *(undefined4 *)((int)this_ + 0x58) = *(undefined4 *)((int)this_ + 0x54);
  }
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe710, ap_004fe710));

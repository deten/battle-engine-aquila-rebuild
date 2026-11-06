// auto-ported from 004aede0_FUN_004aede0.c (FUN_004aede0, 816 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0044c1c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044c1c0_t> FUN_0044c1c0 = {(FUN_0044c1c0_t)0x0044c1c0};
typedef uint32_t (BEA_THISCALL* FUN_004b1eb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b1eb0_t> FUN_004b1eb0 = {(FUN_004b1eb0_t)0x004b1eb0};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_THISCALL ap_004aede0(void * this_, void *param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *this_00;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  this_00 = param_1;
  iVar10 = 0;
  if (0 < *(int *)((int)this_ + 0xa8)) {
    iVar11 = 0;
    do {
      FUN_00548570(bea_arg(this_00), bea_arg(iVar11 + 0x20 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(this_00), bea_arg(iVar11 + 0x24 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(this_00), bea_arg(iVar11 + 0x28 + *(int *)((int)this_ + 0x134)), bea_arg(4));
      *(float *)(iVar11 + 0x28 + *(int *)((int)this_ + 0x134)) =
           -*(float *)(iVar11 + 0x28 + *(int *)((int)this_ + 0x134));
      FUN_00548570(bea_arg(this_00), bea_arg(iVar11 + 0x2c + *(int *)((int)this_ + 0x134)), bea_arg(4));
      FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
      if (((int)param_1 < -2) || (param_4 <= (int)param_1)) {
        param_1 = (void *)0xffffffff;
      }
      iVar7 = 6;
      iVar8 = iVar11 + 0x30;
      do {
        iVar7 = iVar7 + -1;
        *(undefined4 *)(iVar8 + *(int *)((int)this_ + 0x134)) = 0xffffffff;
        iVar8 = iVar8 + 4;
      } while (((iVar7 != 0)));
      if (param_1 == (void *)0xffffffff) {
        *(undefined4 *)(iVar11 + 0x30 + *(int *)((int)this_ + 0x134)) = 0;
      }
      else {
        *(void **)(iVar11 + 0x30 + *(int *)((int)this_ + 0x134)) = param_1;
      }
      local_20 = 1.0;
      puVar9 = (undefined4 *)(iVar11 + *(int *)((int)this_ + 0x134));
      local_1c = 0.0;
      *puVar9 = 0x3f800000;
      local_18 = 0.0;
      puVar9[1] = 0;
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x60;
      puVar9[2] = 0;
      puVar9[3] = bea_piece32(local_14);
    } while (((iVar10 < *(int *)((int)this_ + 0xa8))));
  }
  iVar10 = 0;
  param_4 = 0;
  if (0 < *(int *)((int)this_ + 0xb4)) {
    do {
      iVar11 = 0;
      if (0 < *(int *)((int)this_ + 0xac)) {
        param_1 = (void *)0x0;
        do {
          FUN_0044c1c0(bea_arg((void *)(*(int *)(iVar10 + *(int *)((int)this_ + 0x84)) + (int)param_1)), bea_arg(this_00));
          iVar11 = iVar11 + 1;
          param_1 = (void *)((int)param_1 + 0x10);
        } while (((iVar11 < *(int *)((int)this_ + 0xac))));
      }
      iVar11 = 0;
      if (0 < *(int *)((int)this_ + 0xac)) {
        iVar8 = 0;
        do {
          pfVar6 = (float *)(*(int *)(iVar10 + *(int *)((int)this_ + 0x84)) + iVar8);
          *pfVar6 = *pfVar6 - *(float *)((int)this_ + 0x60);
          pfVar6[1] = pfVar6[1] - *(float *)((int)this_ + 100);
          pfVar6[2] = pfVar6[2] - *(float *)((int)this_ + 0x68);
          fVar1 = *(float *)((int)this_ + 8);
          fVar2 = *(float *)((int)this_ + 0x18);
          fVar3 = *(float *)((int)this_ + 0x28);
          local_10 = *(float *)this_;
          local_c = *(float *)((int)this_ + 0x10);
          iVar7 = *(int *)(iVar10 + *(int *)((int)this_ + 0x84));
          local_8 = *(float *)((int)this_ + 0x20);
          pfVar6 = (float *)(iVar7 + iVar8);
          local_20 = local_8 * pfVar6[2] +
                     local_c * *(float *)(iVar7 + 4 + iVar8) + local_10 * *(float *)(iVar7 + iVar8);
          local_1c = *(float *)((int)this_ + 0x24) * pfVar6[2] +
                     *(float *)((int)this_ + 0x14) * pfVar6[1] + *(float *)((int)this_ + 4) * *pfVar6;
          fVar4 = *pfVar6;
          fVar5 = pfVar6[1];
          *pfVar6 = local_20;
          pfVar6[1] = local_1c;
          local_18 = fVar3 * pfVar6[2] + fVar2 * fVar5 + fVar1 * fVar4;
          pfVar6[2] = local_18;
          iVar11 = iVar11 + 1;
          pfVar6[3] = local_14;
          iVar8 = iVar8 + 0x10;
        } while (((iVar11 < *(int *)((int)this_ + 0xac))));
      }
      param_4 = param_4 + 1;
      iVar10 = iVar10 + 4;
    } while (((param_4 < *(int *)((int)this_ + 0xb4))));
  }
  iVar10 = 0;
  if (0 < *(int *)((int)this_ + 0xb0)) {
    iVar11 = 0;
    do {
      FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(4));
      FUN_00548570(bea_arg(this_00), bea_arg(&local_24), bea_arg(4));
      FUN_00548570(bea_arg(this_00), bea_arg(&param_4), bea_arg(4));
      *(int *)(iVar11 + *(int *)((int)this_ + 0x80)) =
           (int)param_1 * 0x60 + *(int *)((int)this_ + 0x134);
      *(int *)(iVar11 + 4 + *(int *)((int)this_ + 0x80)) =
           param_4 * 0x60 + *(int *)((int)this_ + 0x134);
      iVar10 = iVar10 + 1;
      *(int *)(iVar11 + 8 + *(int *)((int)this_ + 0x80)) =
           local_24 * 0x60 + *(int *)((int)this_ + 0x134);
      iVar11 = iVar11 + 0xc;
    } while (((iVar10 < *(int *)((int)this_ + 0xb0))));
  }
  return FUN_004b1eb0(bea_arg(this_), bea_arg(1));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004aede0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

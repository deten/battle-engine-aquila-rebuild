// auto-ported from 0044c440_FUN_0044c440.c (FUN_0044c440, 722 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008550f8 GLOBAL_AT(undefined4*, 0x008550f8)
#define DAT_008550f0 GLOBAL_AT(undefined4*, 0x008550f0)
#define DAT_008550d8 GLOBAL_AT(undefined4*, 0x008550d8)
#define DAT_008550d0 GLOBAL_AT(undefined4*, 0x008550d0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef float10 (BEA_THISCALL* FUN_004daff0_t)(uint32_t);
static const bea_guard<FUN_004daff0_t> FUN_004daff0 = {(FUN_004daff0_t)0x004daff0};

static uint32_t BEA_THISCALL ap_0044c440(void * this_)
{
  float *pfVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  void *this_00;
  float10 fVar11;
  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  void * &local_4c = *reinterpret_cast<void * *>(bea_frame_ + 0x50 - 0x4c);
  longlong &local_48 = *reinterpret_cast<longlong *>(bea_frame_ + 0x50 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  iVar10 = 0x40;
  puVar8 = (undefined4 *)((int)this_ + 0x4008);
  do {
    iVar6 = 0x40;
    puVar3 = puVar8;
    do {
      puVar3[-0x1000] = 0;
      *puVar3 = 1;
      puVar3 = puVar3 + 0x40;
      iVar6 = iVar6 + -1;
    } while (BEA_LOOP_GUARD((iVar6 != 0)));
    puVar8 = puVar8 + 1;
    iVar10 = iVar10 + -1;
  } while (BEA_LOOP_GUARD((iVar10 != 0)));
  DAT_008550f8 = DAT_008550f0;
  local_4c = this_;
  if (DAT_008550f0 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*DAT_008550f0;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    if (*(int *)((int)this_ + 0x8008) == *(int *)((int)this_00 + 0x11c)) {
      fVar11 = bea_fcast<float10>(FUN_004daff0(bea_arg(this_00)));
      pfVar1 = (float *)((int)this_00 + 0x108);
      local_40 = *pfVar1;
      (*(uint32_t*)((char*)&local_48 + 0)) = (int)(longlong)ROUND(fVar11 * bea_fcast<float10>(0.125f));
      iVar6 = (int)local_48;
      local_3c = *(float *)((int)this_00 + 0x10c);
      local_38 = *(undefined4 *)((int)this_00 + 0x110);
      local_34 = *(undefined4 *)((int)this_00 + 0x114);
      (*(uint32_t*)((char*)&local_48 + 0)) = (int)(longlong)ROUND(local_3c);
      local_30 = *pfVar1;
      iVar10 = ((int)((int)local_48 + ((int)local_48 >> 0x1f & 7U)) >> 3) - iVar6;
      local_2c = *(float *)((int)this_00 + 0x10c);
      local_28 = *(undefined4 *)((int)this_00 + 0x110);
      local_24 = *(undefined4 *)((int)this_00 + 0x114);
      (*(uint32_t*)((char*)&local_48 + 0)) = (int)(longlong)ROUND(local_2c);
      iVar4 = (int)local_48 + ((int)local_48 >> 0x1f & 7U);
      local_20 = *pfVar1;
      local_1c = *(undefined4 *)((int)this_00 + 0x10c);
      local_18 = *(undefined4 *)((int)this_00 + 0x110);
      local_14 = *(undefined4 *)((int)this_00 + 0x114);
      (*(uint32_t*)((char*)&local_48 + 0)) = (int)(longlong)ROUND(local_20);
      iVar5 = (int)local_48 + ((int)local_48 >> 0x1f & 7U);
      local_c = *(undefined4 *)((int)this_00 + 0x10c);
      local_10 = *pfVar1;
      local_8 = *(undefined4 *)((int)this_00 + 0x110);
      local_48 = (longlong)ROUND(local_10);
      local_4 = *(undefined4 *)((int)this_00 + 0x114);
      iVar4 = (iVar4 >> 3) + iVar6;
      iVar5 = (iVar5 >> 3) - iVar6;
      iVar6 = ((int)((int)local_48 + ((int)local_48 >> 0x1f & 7U)) >> 3) + iVar6;
      this_ = local_4c;
      if ((((0 < iVar10) && (iVar4 < 0x40)) && (0 < iVar5)) && (iVar6 < 0x40)) {
        for (; BEA_LOOP_GUARD((iVar10 <= iVar4)); iVar10 = iVar10 + 1) {
          if (iVar5 <= iVar6) {
            puVar8 = (undefined4 *)((int)local_4c + (iVar5 * 0x40 + iVar10) * 4 + 8);
            iVar7 = (iVar6 - iVar5) + 1;
            do {
              *puVar8 = 1;
              puVar8 = puVar8 + 0x40;
              iVar7 = iVar7 + -1;
            } while (BEA_LOOP_GUARD((iVar7 != 0)));
          }
        }
      }
    }
    DAT_008550f8 = (undefined4 *)DAT_008550f8[1];
    if (DAT_008550f8 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*DAT_008550f8;
    }
  }
  DAT_008550d8 = DAT_008550d0;
  if (DAT_008550d0 == (int *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *DAT_008550d0;
  }
  while (BEA_LOOP_GUARD((iVar10 != 0))) {
    if (((*(uint *)(iVar10 + 0x34) & 0x400) == 0) &&
       (*(int *)((int)this_ + 0x8008) == *(int *)(iVar10 + 0x138))) {
      (*(uint32_t*)((char*)&local_48 + 0)) = (int)(longlong)ROUND(*(float *)(iVar10 + 0x20));
      iVar6 = (int)((int)local_48 + ((int)local_48 >> 0x1f & 7U)) >> 3;
      local_48 = (longlong)ROUND(*(float *)(iVar10 + 0x1c));
      iVar10 = iVar6 + -1;
      iVar6 = iVar6 + 1;
      iVar5 = (int)((int)local_48 + ((int)local_48 >> 0x1f & 7U)) >> 3;
      iVar4 = iVar5 + -1;
      iVar5 = iVar5 + 1;
      this_ = local_4c;
      if (((0 < iVar10) && ((iVar6 < 0x40 && (0 < iVar4)))) &&
         (piVar9 = DAT_008550d8, piVar2 = DAT_008550d8, iVar5 < 0x40)) {
        for (; BEA_LOOP_GUARD((DAT_008550d8 = piVar9, iVar10 <= iVar6)); iVar10 = iVar10 + 1) {
          piVar9 = DAT_008550d8;
          DAT_008550d8 = piVar2;
          if (iVar4 <= iVar5) {
            puVar8 = (undefined4 *)((int)local_4c + (iVar4 * 0x40 + iVar10) * 4 + 0x4008);
            iVar7 = (iVar5 - iVar4) + 1;
            do {
              *puVar8 = 0;
              puVar8 = puVar8 + 0x40;
              iVar7 = iVar7 + -1;
              piVar9 = DAT_008550d8;
            } while (BEA_LOOP_GUARD((iVar7 != 0)));
          }
          piVar2 = DAT_008550d8;
        }
      }
    }
    DAT_008550d8 = (int *)DAT_008550d8[1];
    if (DAT_008550d8 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *DAT_008550d8;
    }
  }
  local_4c = (void *)(uintptr_t)bea_piece32((DAT_00672fd0 + 1.0f));
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(1000), bea_arg(this_), bea_arg(&local_4c), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044c440, ap_0044c440));

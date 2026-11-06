// auto-ported from 004e7cf0_FUN_004e7cf0.c (FUN_004e7cf0, 581 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};

static undefined4 BEA_THISCALL ap_004e7cf0(void * this_)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  int &local_80 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x80);
  int &local_78 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x78);
  int &iStack_60 = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x60);
  int &iStack_5c = *reinterpret_cast<int *>(bea_frame_ + 0x80 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x4c);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x3c);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x20);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x80 - 0x10);
  *(undefined4 *)((int)this_ + 0x108) = *(undefined4 *)((int)this_ + 0x10c);
  if (*(int *)((int)this_ + 0x120) != 4) {
    if (*(int *)((int)this_ + 0x80) != 0) {
      return 0;
    }
    if (DAT_00672fd0 <= *(float *)((int)this_ + 0x11c) + 5.0f) {
      puVar1 = *(undefined4 **)((int)this_ + 0xa4);
      local_80 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)*puVar1;
      }
      while (BEA_LOOP_GUARD((piVar7 != (int *)0x0))) {
        if (*piVar7 != 0) {
          iVar6 = piVar7[4];
          uVar4 = FUN_00401ec0(bea_arg(local_30), bea_arg(piVar7[1]), bea_arg(piVar7[2]), bea_arg(0));
          uVar4 = FUN_0040d2c0(bea_arg((void *)(piVar7[4] + 0x3c)), bea_arg(local_20), bea_arg(uVar4));
          FUN_00401ee0(bea_arg((void *)(iVar6 + 0x1c)), bea_arg(&local_50), bea_arg(uVar4));
          fVar2 = *(float *)(*piVar7 + 0x1c) - local_50;
          fVar3 = *(float *)(*piVar7 + 0x20) - local_4c;
          bea_vcall<uint32_t>(piVar7[4], 0x138);
          fVar8 = (float10)bea_vcall<float10>(piVar7[4], 0x138);
          if (fVar8 * (float10)1.5f <
              SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3)) {
            if ((*piVar7 != 0) && (iVar6 = piVar7[4], *(int *)(iVar6 + 0xd0) != 0)) {
              iStack_60 = piVar7[1];
              iStack_5c = piVar7[2];
              uStack_58 = 0;
              uVar4 = FUN_0040d2c0(bea_arg((void *)(iVar6 + 0x3c)), bea_arg(auStack_10), bea_arg(&iStack_60));
              FUN_00401ee0(bea_arg((void *)(iVar6 + 0x1c)), bea_arg(&fStack_40), bea_arg(uVar4));
              local_78 = (int)(longlong)ROUND(fStack_40);
              uVar5 = local_78 >> 1;
              iVar6 = local_78 >> 4;
              local_78 = (int)(longlong)ROUND(fStack_3c);
              uVar5 = uVar5 & 0x80000007;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
              }
              if ((*(byte *)(iVar6 * 0x100 + (local_78 >> 1) + *(int *)(piVar7[4] + 0xd0)) &
                  (byte)(1 << ((byte)uVar5 & 0x1f))) == 0) goto LAB_004e7ea8;
            }
            local_80 = local_80 + 1;
          }
        }
LAB_004e7ea8:
        puVar1 = (undefined4 *)puVar1[1];
        if (puVar1 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)*puVar1;
        }
      }
      if (*(int *)((int)this_ + 0xb4) == 0) {
        return 0;
      }
      fVar2 = 1.0f - ((float)local_80 / (float)*(int *)((int)this_ + 0xb4)) * 1.5f;
      if (fVar2 < 0.0f) {
        fVar2 = 0.0f;
      }
      *(float *)((int)this_ + 0x108) = fVar2 * *(float *)((int)this_ + 0x108);
      if (fVar2 <= 0.5f) {
        return 0;
      }
    }
    *(float *)((int)this_ + 0x11c) = DAT_00672fd0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e7cf0, ap_004e7cf0));

// auto-ported from 00476a20_FUN_00476a20.c (FUN_00476a20, 1471 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 compile: local_60 (E+0x70) is a qword slot: fst of a2 (0x476b13) and fistp qword target (0x476ecb/0x476ee7) instead of ._0_4_/._4_4_; corner divide by the fild int at full precision (0x476e61-0x476e9a); corner loop pointers from bea_frame_ (5 x 16 bytes past local_50[5]); FUN_004742a0 has no x87 result (fstp st(0); ret 4 at 0x476a15) so typed uint32_t, not float10
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_0067a070 GLOBAL_AT(char, 0x0067a070)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef uint32_t (BEA_THISCALL* FUN_004742a0_t)(uint32_t, uint32_t);   // ends fstp st(0); ret 4: no x87 result (0x476a15)
static const bea_guard<FUN_004742a0_t> FUN_004742a0 = {(FUN_004742a0_t)0x004742a0};

static void BEA_THISCALL ap_00476a20(void * this_, float *param_1, float param_2, float param_3, float param_4, float *param_5, undefined4 param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *this_00;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;

  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xac);
  undefined4 &local_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x9c);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x8c);
  undefined1 (&local_84)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xc0 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x7c);
  undefined1 (&local_74)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0xc0 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x6c);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x64);
  longlong (&local_60)[2] = *reinterpret_cast<longlong (*)[2]>(bea_frame_ + 0xc0 - 0x60);
  float (&local_50)[5] = *reinterpret_cast<float (*)[5]>(bea_frame_ + 0xc0 - 0x50);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xc0 - 0x4);
  if (DAT_0067a070 == '\0') {
    if (param_5 != (float *)0x0) {
      *(float *)((int)this_ + 0x28) = *param_5;
      *(float *)((int)this_ + 0x2c) = param_5[1];
      *(float *)((int)this_ + 0x30) = param_5[2];
      *(float *)((int)this_ + 0x34) = param_5[3];
    }
    fVar1 = param_2 * param_3;
    local_50[2] = param_5[2];
    fVar2 = param_2 * param_4;
    fVar3 = param_2 + 0.1f;
    local_50[0] = *param_5 - 4.0f;
    local_50[1] = param_5[1] - 4.0f;
    fVar4 = fVar1 * *param_1;
    local_70 = fVar1 * param_1[1];
    local_6c = fVar1 * param_1[2];
    *reinterpret_cast<float *>(&local_60[0]) = local_6c;   // fst [esp+0x70] (0x476b13)
    local_50[4] = param_2 * param_1[8] + local_50[0] + fVar4 + fVar2 * param_1[4];
    local_3c = param_2 * param_1[9] + local_50[1] + local_70 + fVar2 * param_1[5];
    local_38 = param_2 * param_1[10] + local_50[2] + local_6c + fVar2 * param_1[6];
    local_94 = (fVar3 * param_1[8] + local_50[0] + fVar4) - fVar2 * param_1[4];
    local_90 = (fVar3 * param_1[9] + local_50[1] + local_70) - fVar2 * param_1[5];
    local_8c = (fVar3 * param_1[10] + local_50[2] + local_6c) - fVar2 * param_1[6];
    local_b4 = fVar2 * param_1[4];
    local_b0 = fVar2 * param_1[5];
    local_ac = fVar2 * param_1[6];
    local_a0 = param_2 * param_1[9];
    local_9c = param_2 * param_1[10];
    local_80 = local_a0 + local_50[1];
    local_7c = local_9c + local_50[2];
    local_64 = local_70;
    local_30 = local_94;
    local_2c = local_90;
    local_28 = local_8c;
    FUN_00401ec0(bea_arg(&local_b4), bea_arg(((param_2 * param_1[8] + local_50[0]) - fVar4) - local_b4), bea_arg((local_80 - local_70) - local_b0), bea_arg((local_7c - local_6c) - local_ac));
    local_20 = local_b4;
    local_1c = local_b0;
    local_18 = local_ac;
    local_14 = local_a8;
    FUN_00401ec0(bea_arg(local_84), bea_arg(fVar2 * param_1[4]), bea_arg(fVar2 * param_1[5]), bea_arg(fVar2 * param_1[6]));
    FUN_00401ec0(bea_arg(local_74), bea_arg(fVar1 * *param_1), bea_arg(fVar1 * param_1[1]), bea_arg(fVar1 * param_1[2]));
    FUN_00401ec0(bea_arg(&local_a4), bea_arg(fVar3 * param_1[8]), bea_arg(fVar3 * param_1[9]), bea_arg(fVar3 * param_1[10]));
    FUN_00401ec0(bea_arg(&local_b4), bea_arg(local_a4 + local_50[0]), bea_arg(local_a0 + local_50[1]), bea_arg(local_9c + local_50[2]));
    puVar10 = local_84;
    pfVar6 = &local_94;
    this_00 = (void *)FUN_0040d120(bea_arg(&local_b4), bea_arg(local_60), bea_arg(local_74));
    puVar5 = (undefined4 *)FUN_00401ee0(bea_arg(this_00), bea_arg(pfVar6), bea_arg(puVar10));
    local_10 = *puVar5;
    iVar8 = *(int *)((int)this_ + 0x14);
    local_c = puVar5[1];
    local_8 = puVar5[2];
    iVar7 = 5;
    local_4 = puVar5[3];
    pfVar6 = reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x50) + 1;   // 5 corners, 16 bytes apart (0x476e84)
    do {
      iVar7 = iVar7 + -1;
      // fild [esi+0x14]; fdiv st(1): the int divisor at full precision (0x476e61)
      pfVar6[-1] = (float)((float10)pfVar6[-1] / (float10)iVar8);
      *pfVar6 = (float)((float10)*pfVar6 / (float10)iVar8);
      pfVar6 = pfVar6 + 4;
    } while (BEA_LOOP_GUARD((iVar7 != 0)));
    pfVar6 = reinterpret_cast<float *>(bea_frame_ + 0xc0 - 0x50) + 1;
    *(undefined4 *)((int)this_ + 0x1c) = 0x3034;
    *(undefined4 *)((int)this_ + 0x18) = 0x3034;
    iVar8 = 5;
    *(undefined4 *)((int)this_ + 0x20) = 0xffffcfcc;
    *(undefined4 *)((int)this_ + 0x24) = 0xffffcfcc;
    do {
      // fistp qword [esp+0x70]; low dword (0x476ecb, 0x476ee7)
      local_60[0] = (longlong)ROUND(pfVar6[-1]);
      iVar9 = (int)local_60[0];
      if (*(int *)((int)this_ + 0x20) < iVar9) {
        *(int *)((int)this_ + 0x20) = iVar9;
      }
      if (iVar9 < *(int *)((int)this_ + 0x18)) {
        *(int *)((int)this_ + 0x18) = iVar9;
      }
      local_60[0] = (longlong)ROUND(*pfVar6);
      iVar9 = (int)local_60[0];
      if (*(int *)((int)this_ + 0x24) < iVar9) {
        *(int *)((int)this_ + 0x24) = iVar9;
      }
      if (iVar9 < *(int *)((int)this_ + 0x1c)) {
        *(int *)((int)this_ + 0x1c) = iVar9;
      }
      pfVar6 = pfVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (BEA_LOOP_GUARD((iVar8 != 0)));
    iVar8 = *(int *)((int)this_ + 8);
    iVar7 = *(int *)((int)this_ + 0x20) + 2;
    *(int *)((int)this_ + 0x20) = iVar7;
    if (iVar8 <= iVar7) {
      *(int *)((int)this_ + 0x20) = iVar8 + -1;
    }
    if (*(int *)((int)this_ + 0x20) < 0) {
      *(undefined4 *)((int)this_ + 0x20) = 0;
    }
    iVar7 = *(int *)((int)this_ + 0x18) + -2;
    *(int *)((int)this_ + 0x18) = iVar7;
    if (iVar7 < 0) {
      *(undefined4 *)((int)this_ + 0x18) = 0;
    }
    if (iVar8 <= *(int *)((int)this_ + 0x18)) {
      *(int *)((int)this_ + 0x18) = iVar8 + -1;
    }
    iVar7 = *(int *)((int)this_ + 0x24) + 2;
    *(int *)((int)this_ + 0x24) = iVar7;
    if (iVar8 <= iVar7) {
      *(int *)((int)this_ + 0x24) = iVar8 + -1;
    }
    if (*(int *)((int)this_ + 0x24) < 1) {
      *(undefined4 *)((int)this_ + 0x24) = 0;
    }
    iVar7 = *(int *)((int)this_ + 0x1c) + -2;
    *(int *)((int)this_ + 0x1c) = iVar7;
    if (iVar7 < 0) {
      *(undefined4 *)((int)this_ + 0x1c) = 0;
    }
    if (iVar8 <= *(int *)((int)this_ + 0x1c)) {
      *(int *)((int)this_ + 0x1c) = iVar8 + -1;
    }
    FUN_004742a0(bea_arg(this_), bea_arg(local_50));
    iVar8 = 0;
    iVar7 = 0;
    do {
      iVar9 = 0;
      do {
        if ((((iVar9 < *(int *)((int)this_ + 0x18)) || (*(int *)((int)this_ + 0x20) <= iVar9)) ||
            (iVar7 < *(int *)((int)this_ + 0x1c))) || (*(int *)((int)this_ + 0x24) <= iVar7)) {
          *(undefined1 *)(*(int *)((int)this_ + 0x10) + iVar8) = 0;
        }
        else if (*(char *)(*(int *)((int)this_ + 0xc) + iVar8 * 2) <
                 *(char *)(*(int *)((int)this_ + 0xc) + iVar8 * 2 + 1)) {
          *(undefined1 *)(*(int *)((int)this_ + 0x10) + iVar8) = 0;
        }
        else {
          *(undefined1 *)(*(int *)((int)this_ + 0x10) + iVar8) = 1;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 1;
      } while (BEA_LOOP_GUARD((iVar9 < 0x40)));
      iVar7 = iVar7 + 1;
    } while (BEA_LOOP_GUARD((iVar7 < 0x40)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00476a20, ap_00476a20));

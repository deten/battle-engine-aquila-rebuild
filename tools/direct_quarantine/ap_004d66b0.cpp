// auto-ported from 004d66b0_FUN_004d66b0.c (FUN_004d66b0, 851 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_008551a0 GLOBAL_AT(int, 0x008551a0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_C__dev_ONSLAUGHT2_RadarWarningRe_00631784 ((char*)0x00631784)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef undefined4 (BEA_THISCALL* FUN_00409760_t)(uint32_t);
static const bea_guard<FUN_00409760_t> FUN_00409760 = {(FUN_00409760_t)0x00409760};
typedef undefined4 (BEA_THISCALL* FUN_00409780_t)(uint32_t);
static const bea_guard<FUN_00409780_t> FUN_00409780 = {(FUN_00409780_t)0x00409780};
typedef uint32_t (BEA_THISCALL* FUN_0042d9b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042d9b0_t> FUN_0042d9b0 = {(FUN_0042d9b0_t)0x0042d9b0};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004d66b0(void * this_)
{
  int *this_00;
  float fVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4c);
  int &local_48 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x48);
  float * &local_44 = *reinterpret_cast<float * *>(bea_frame_ + 0x50 - 0x44);
  int * &local_40 = *reinterpret_cast<int * *>(bea_frame_ + 0x50 - 0x40);
  undefined1 (&local_3c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x50 - 0x3c);
  int * &local_38 = *reinterpret_cast<int * *>(bea_frame_ + 0x50 - 0x38);
  undefined1 (&local_34)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x50 - 0x34);
  undefined * &local_30 = *reinterpret_cast<undefined * *>(bea_frame_ + 0x50 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x24);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x50 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  this_00 = (int *)((int)this_ + 0x1c);
  local_40 = this_00;
  iVar3 = FUN_00409760(bea_arg(&local_44));
  while (BEA_LOOP_GUARD((iVar3 != 0))) {
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = FUN_00409780(bea_arg(&local_44));
  }
  local_48 = *(int *)((int)this_ + 0x28);
  local_30 = (undefined*)&DAT_008551a0;
  fVar4 = bea_fcast<float>(FUN_00409760(bea_arg(local_34)));
  while (BEA_LOOP_GUARD((fVar4 != 0.0f))) {
    pfVar5 = (float *)FUN_0044a850(bea_arg(this_), bea_arg(local_1c));
    FUN_00401ec0(bea_arg(&local_2c), bea_arg(*(float *)(bea_piece32(fVar4) + 0x1c) - *pfVar5), bea_arg(*(float *)(bea_piece32(fVar4) + 0x20) - pfVar5[1]), bea_arg(*(float *)(bea_piece32(fVar4) + 0x24) - pfVar5[2]));
    if (((SQRT(local_2c * local_2c + local_24 * local_24 + local_28 * local_28) <=
          *(float *)((int)this_ + 0x14)) && (*(int *)(uintptr_t)bea_piece32((bea_piece32(fVar4) + 0xe8)) == *(int *)((int)this_ + 8)))
       && (0.0f < *(float *)(*(int *)(uintptr_t)bea_piece32((bea_piece32(fVar4) + 0xf0)) + 0x1c))) {
      local_38 = this_00;
      pfVar5 = (float *)FUN_00409760(bea_arg(local_3c));
      while (BEA_LOOP_GUARD((pfVar5 != (float *)0x0))) {
        if (pfVar5[3] == fVar4) goto LAB_004d67cd;
        pfVar5 = (float *)FUN_00409780(bea_arg(local_3c));
      }
      pfVar5 = (float *)0x0;
LAB_004d67cd:
      fVar7 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_2c),bea_fcast<float10>(local_28)));
      fVar1 = bea_fcast<float>(-fVar7);
      if (pfVar5 == (float *)0x0) {
        pfVar5 = (float *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x18), bea_arg(0x49), bea_arg(s_C__dev_ONSLAUGHT2_RadarWarningRe_00631784), bea_arg(0x41));
        local_44 = pfVar5;
        if (pfVar5 == (float *)0x0) {
          pfVar5 = (float *)0x0;
        }
        else {
          sVar2 = *(short *)(uintptr_t)bea_piece32((bea_piece32(fVar4) + 0x2e));
          local_4c = DAT_00672fd0;
          pfVar5[3] = 0.0f;
          pfVar5[1] = SQRT(local_2c * local_2c + local_24 * local_24 + local_28 * local_28);
          *pfVar5 = fVar1;
          pfVar5[2] = bea_fcast<float>((int)sVar2);
          FUN_00401000(bea_arg(pfVar5 + 3), bea_arg(fVar4));
          pfVar5[5] = 1.4013e-45;
          pfVar5[4] = local_4c;
        }
        FUN_004e5a80(bea_arg(this_00), bea_arg(pfVar5));
        iVar3 = *(int *)((int)this_ + 8);
        if ((*(byte *)(iVar3 + 0x34) & 8) != 0) {
          fVar4 = *(float *)(iVar3 + 0x114);
          if ((-1.5707964f <= fVar1) || (fVar4 <= 1.5707964f)) {
            if ((1.5707964f < fVar1) && (fVar4 < -1.5707964f)) {
              fVar4 = fVar4 + 6.2831855f;
            }
          }
          else {
            fVar4 = fVar4 - 6.2831855f;
          }
          if (ABS(fVar1 - fVar4) < 0.7853982f) {
            *(undefined4 *)(iVar3 + 0x5e4) = 1;
          }
        }
      }
      else {
        pfVar5[5] = 1.4013e-45;
        *pfVar5 = fVar1;
        pfVar5[1] = SQRT(local_2c * local_2c + local_28 * local_28 + local_24 * local_24);
      }
    }
    fVar4 = bea_fcast<float>(FUN_00409780(bea_arg(local_34)));
  }
  local_4c = DAT_00672fd0 + *(float *)((int)this_ + 0x18);
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(4000), bea_arg(this_), bea_arg(&local_4c), bea_arg(2), bea_arg(0), bea_arg(0));
  if (local_48 < *(int *)((int)this_ + 0x28)) {
    *(undefined4 *)((int)this_ + 0x2c) = 1;
    *(float *)((int)this_ + 0x30) = DAT_00672fd0;
    local_48 = -0x40800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa2), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(&local_48), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  piVar6 = (int *)*this_00;
  if (piVar6 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar6;
  }
  do {
    while(BEA_LOOP_GUARD(( true ))) {
      if (iVar3 == 0) {
        return;
      }
      if (*(int *)(iVar3 + 0x14) != 0) break;
      FUN_004e5bd0(bea_arg(this_00), bea_arg(iVar3));
      if (iVar3 != 0) {
        if (*(void **)(iVar3 + 0xc) != (void *)0x0) {
          FUN_0042d9b0(bea_arg(*(void **)(iVar3 + 0xc)), bea_arg(iVar3 + 0xc));
        }
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar3));
      }
      piVar6 = (int *)*this_00;
      if (piVar6 == (int *)0x0) {
LAB_004d69ea:
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar6;
      }
    }
    piVar6 = (int *)piVar6[1];
    if (piVar6 == (int *)0x0) goto LAB_004d69ea;
    iVar3 = *piVar6;
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d66b0, ap_004d66b0));

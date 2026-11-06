// auto-ported from 00416590_vslot9.c (CBomberAI::vslot9, 510 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBomberAI;
typedef char fStack_10;
typedef char fStack_c;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fce40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fce40_t> FUN_004fce40 = {(FUN_004fce40_t)0x004fce40};

static void BEA_THISCALL ap_00416590(CBomberAI * this_, undefined4 param_1)
{
  int *this_00;
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  int &iStack_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  int &iStack_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  int &iStack_8 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x8);
  if ((*(int *)(this_ + 0x20) != 0) && ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 4) == 0)) {
    bea_vcall<uint32_t>(this_, 0xc);
    iVar2 = *(int *)(this_ + 0xc);
    if (iVar2 == 0) {
      iVar2 = bea_vcall<uint32_t>(this_, 0x14);
      if (iVar2 != 0) {
        return;
      }
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x100);
    }
    else {
      this_00 = *(int **)(this_ + 8);
      fStack_10 = *(float *)(iVar2 + 0x1c) - bea_fcast<float>(this_00[7]);
      fStack_c = *(float *)(iVar2 + 0x20) - bea_fcast<float>(this_00[8]);
      fStack_1c = bea_fcast<float>(this_00[0x45]);
      iStack_18 = this_00[0x46];
      iStack_14 = this_00[0x47];
      fVar1 = SQRT(fStack_10 * fStack_10 + fStack_c * fStack_c);
      if (fVar1 <= 35.0f) {
        if (5.0f < fVar1) {
          fVar4 = (float10)fpatan((float10)fStack_10,(float10)fStack_c);
          fStack_20 = (float)-fVar4;
          if (((float10)-1.5707964f <= -fVar4) || (fStack_1c <= 1.5707964f)) {
            fVar1 = fStack_1c;
            if ((1.5707964f < fStack_20) && (fStack_1c < -1.5707964f)) {
              fVar1 = fStack_1c + 6.2831855f;
            }
          }
          else {
            fVar1 = fStack_1c - 6.2831855f;
          }
          if (1.5707964f < ABS(fStack_20 - fVar1)) {
            *(undefined4 *)(this_ + 0x60) = 0;
          }
        }
      }
      else {
        *(undefined4 *)(this_ + 0x60) = 1;
      }
      fVar1 = *(float *)(iVar2 + 0x1c);
      iStack_8 = this_00[9];
      if (*(int *)(this_ + 0x60) == 0) {
        FUN_004fce40(bea_arg(this_00), bea_arg(fVar1), bea_arg(*(undefined4 *)(iVar2 + 0x20)), bea_arg(iStack_8), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
      }
      else {
        bea_vcall<uint32_t>(this_00, 0xf4, fVar1,*(undefined4 *)(iVar2 + 0x20),iStack_8,*(undefined4 *)(iVar2 + 0x28),0);
      }
    }
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    fStack_20 = (float)(int)uVar3 * 7.6293945e-06f + 0.5f + DAT_00672fd0;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(this_), bea_arg(&fStack_20), bea_arg(0), bea_arg(0), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416590, ap_00416590));

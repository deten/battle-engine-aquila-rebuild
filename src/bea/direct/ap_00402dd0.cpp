// auto-ported from 00402dd0_FUN_00402dd0.c (FUN_00402dd0, 457 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_006fbdfc GLOBAL_AT(int, 0x006fbdfc)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static undefined4 BEA_THISCALL ap_00402dd0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  int &iStack_40 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x40);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &uStack_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  pfVar4 = (float *)bea_vcall<uint32_t>((int)this_ + 8, 0x54);
  if (pfVar4 != (float *)0x0) {
    fStack_20 = pfVar4[4] * 0.8f;
    iStack_40 = 0;
    fStack_1c = pfVar4[5] * 0.8f;
    fStack_18 = pfVar4[6] * 0.8f;
    do {
      iVar5 = 0;
      do {
        iVar6 = 0;
        do {
          if (iStack_40 == 0) {
            fVar1 = pfVar4[2] + fStack_18;
          }
          else {
            fVar1 = pfVar4[2] - fStack_18;
          }
          if (iVar5 == 0) {
            fVar3 = *pfVar4 + fStack_20;
          }
          else {
            fVar3 = *pfVar4 - fStack_20;
          }
          if (iVar6 == 0) {
            fVar2 = pfVar4[1] + fStack_1c;
          }
          else {
            fVar2 = pfVar4[1] - fStack_1c;
          }
          fStack_10 = fVar2 * *(float *)((int)this_ + 0x40) +
                      fVar1 * *(float *)((int)this_ + 0x44) + fVar3 * *(float *)((int)this_ + 0x3c);
          uStack_24 = uStack_4;
          fStack_c = fVar1 * *(float *)((int)this_ + 0x54) +
                     fVar2 * *(float *)((int)this_ + 0x50) + fVar3 * *(float *)((int)this_ + 0x4c);
          fStack_8 = fVar2 * *(float *)((int)this_ + 0x60) +
                     fVar3 * *(float *)((int)this_ + 0x5c) + fVar1 * *(float *)((int)this_ + 100);
          fStack_30 = fStack_10 + *(float *)((int)this_ + 0x1c);
          fStack_2c = fStack_c + *(float *)((int)this_ + 0x20);
          fStack_28 = fStack_8 + *(float *)((int)this_ + 0x24);
          fVar7 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_30)));
          fVar8 = bea_fcast<float10>(bea_vcall<float10>(this_, 0xc0));
          fVar1 = bea_fcast<float>(DAT_006fbdfc);
          if (bea_fcast<float10>(bea_fcast<float>(fVar7)) - fVar8 < bea_fcast<float10>(fStack_28)) {
            return 1;
          }
          fVar7 = bea_fcast<float10>(bea_vcall<float10>(this_, 0xc0));
          if (bea_fcast<float10>(fVar1) - fVar7 < bea_fcast<float10>(fStack_28)) {
            return 1;
          }
          iVar6 = iVar6 + 1;
        } while (((iVar6 < 2)));
        iVar5 = iVar5 + 1;
      } while (((iVar5 < 2)));
      iStack_40 = iStack_40 + 1;
    } while (((iStack_40 < 2)));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402dd0, ap_00402dd0));

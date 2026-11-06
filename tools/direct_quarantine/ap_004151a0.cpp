// auto-ported from 004151a0_vslot66.c (CBoat::vslot66, 649 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CBoat;
typedef char CGroundUnit;
typedef char extraout_ST0;
typedef char fStack_34;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_60;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_006fbdfc GLOBAL_AT(int, 0x006fbdfc)
#define s_FootBase_006239c0 ((char*)0x006239c0)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static void BEA_THISCALL ap_004151a0(CBoat * this_)
{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  CBoat *pCVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST0_01;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x6c);
  longlong &lStack_68 = *reinterpret_cast<longlong *>(bea_frame_ + 0x70 - 0x68);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x38);
  float &fStack_34 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x34);
  float (&afStack_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x70 - 0x30);
  if (*(int *)(this_ + 0x264) == 0) {
    bea_vcall<uint32_t>(this_, 0x114);
  }
  else {
    bea_vcall<uint32_t>(this_, 0x110);
  }
  CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
  if ((((byte)this_[0x2c] & 4) == 0) || (*(int *)(*(int *)(this_ + 0x164) + 0x11c) != 0)) {
    piVar1 = *(int **)(this_ + 0x30);
    FUN_004011b0(bea_arg(afStack_30), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    bea_vcall<uint32_t>(piVar1, 0x1c, s_FootBase_006239c0,1,&fStack_60,afStack_30,1,0);
    if ((fStack_60 != 0.0f) || ((fStack_5c != 0.0f || (fStack_58 != 0.0f)))) {
      pCVar5 = this_ + 0x3c;
      fStack_6c = fStack_60 * *(float *)(this_ + 0x4c) +
                  fStack_5c * *(float *)(this_ + 0x50) + fStack_58 * *(float *)(this_ + 0x54);
      fStack_48 = fStack_60 * *(float *)(this_ + 0x5c) +
                  fStack_5c * *(float *)(this_ + 0x60) + fStack_58 * *(float *)(this_ + 100);
      lStack_68 = CONCAT44((*(uint32_t*)((char*)&lStack_68 + 4)),fStack_48);
      fStack_50 = fStack_60 * *(float *)pCVar5 +
                  fStack_5c * *(float *)(this_ + 0x40) + fStack_58 * *(float *)(this_ + 0x44) +
                  *(float *)(this_ + 0x1c);
      fStack_4c = fStack_6c + *(float *)(this_ + 0x20);
      fStack_48 = fStack_48 + *(float *)(this_ + 0x24);
      fVar6 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_50)));
      if (fVar6 < bea_fcast<float10>(fStack_48)) {
        *(int *)(this_ + 0x268) = *(int *)(this_ + 0x268) + 1;
        fStack_70 = DAT_00672fd0 + 3.0f;
        FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(8000), bea_arg(this_), bea_arg(&fStack_70), bea_arg(0), bea_arg(0), bea_arg(0));
        FUN_0044adb0(bea_arg(&fStack_60), bea_arg(pCVar5));
        fStack_5c = fStack_5c - 0.01f;
        *(float *)(this_ + 0x114) = fStack_60;
        *(float *)(this_ + 0x124) = fStack_5c;
        *(float *)(this_ + 0x118) = fStack_5c;
        *(float *)(this_ + 0x11c) = fStack_58;
        FUN_004062d0(bea_arg(afStack_30), bea_arg(fStack_60), bea_arg(fStack_5c), bea_arg(fStack_58));
        iVar4 = *(int *)(this_ + 0x268);
        pfVar2 = afStack_30;
        for (iVar3 = 0xc; ((iVar3 != 0)); iVar3 = iVar3 + -1) {
          *(float *)pCVar5 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pCVar5 = pCVar5 + 4;
        }
        if (0x3c < iVar4) {
          bea_vcall<uint32_t>(this_, 0x174);
        }
      }
    }
    fStack_70 = bea_fcast<float>(DAT_006fbdfc);
    extraout_ST0_01 = bea_fcast<float10>(bea_vcall<float10>(this_, 0xc0));
    *(float *)(this_ + 0x24) = bea_fcast<float>((extraout_ST0_01 + bea_fcast<float10>(fStack_6c)));
    pfVar2 = (float *)bea_vcall<uint32_t>(this_, 0x6c, &fStack_4c);
    fStack_34 = SQRT(pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
    fStack_3c = fStack_34 * *(float *)(this_ + 0x40);
    fStack_38 = fStack_34 * *(float *)(this_ + 0x50);
    fStack_34 = fStack_34 * *(float *)(this_ + 0x60);
    bea_vcall<uint32_t>(this_, 0x70, &fStack_3c);
  }
  else {
    *(undefined4 *)(this_ + 0x124) = 0x3f65c8fa;
    extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(this_, 0x60));
    *(float *)(this_ + 0x84) = bea_fcast<float>((extraout_ST0 * bea_fcast<float10>(0.05f)));
    extraout_ST0_00 = bea_fcast<float10>(bea_vcall<float10>(this_, 0x60));
    lStack_68 = (longlong)ROUND(extraout_ST0_00);
    iVar4 = (int)lStack_68;
    if (0 < (int)lStack_68) {
      do {
        bea_vcall<uint32_t>(this_, 0x180);
        iVar4 = iVar4 + -1;
      } while (((iVar4 != 0)));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004151a0, ap_004151a0));

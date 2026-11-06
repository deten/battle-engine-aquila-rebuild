// auto-ported from 0047d1c0_vslot66.c (CGroundVehicle::vslot66, 483 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CGroundVehicle;
typedef char Vec3;
typedef char fStack_58;
typedef char fStack_5c;
typedef char fStack_6c;
typedef char fStack_70;
typedef char fStack_74;
typedef char fStack_7c;
typedef char fStack_80;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};

static uint32_t BEA_THISCALL ap_0047d1c0(CGroundVehicle * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x84);
  float &fStack_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x70);
  float &fStack_6c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x6c);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x64);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x5c);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x58);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  undefined4 &uStack_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x14);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x90 - 0x10);
  iVar5 = bea_vcall<uint32_t>(this_, 0xb8);
  if ((iVar5 != 0) && (this_[0x260] != (CGroundVehicle)0x0)) {
    fStack_64 = *(float *)(this_ + 0x114);
    fVar7 = bea_fcast<float10>(fcos(bea_fcast<float10>(fStack_64)));
    fStack_60 = bea_fcast<float>(fVar7);
    fVar8 = bea_fcast<float10>(fsin(bea_fcast<float10>(fStack_64)));
    fStack_5c = bea_fcast<float>(-fVar8);
    puVar6 = (undefined4 *)FUN_00401ec0(bea_arg(auStack_10), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
    uStack_20 = *puVar6;
    fStack_58 = bea_fcast<float>(puVar6[1]);
    fStack_60 = fStack_5c;
    uStack_18 = puVar6[2];
    uStack_14 = puVar6[3];
    fStack_5c = bea_fcast<float>(fVar7);
    fStack_1c = fStack_58;
    FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&fStack_84), bea_arg(this_ + 0x1c));
    fVar1 = fStack_7c * fStack_5c - fStack_80 * fStack_58;
    fVar2 = fStack_58 * fStack_84 - fStack_7c * fStack_60;
    fVar3 = fStack_80 * fStack_60 - fStack_5c * fStack_84;
    FUN_00401ec0(bea_arg(&fStack_74), bea_arg(fVar2 * fStack_7c - fVar3 * fStack_80), bea_arg(fVar3 * fStack_84 - fStack_7c * fVar1), bea_arg(fStack_80 * fVar1 - fVar2 * fStack_84));
    fVar4 = SQRT(fStack_6c * fStack_6c + fStack_70 * fStack_70 + fStack_74 * fStack_74);   // class 19: the asm's order
    if (fVar4 != 0.0f) {
      fVar4 = 1.0f / fVar4;
      fStack_74 = fVar4 * fStack_74;
      fStack_70 = fStack_70 * fVar4;
      fStack_6c = fVar4 * fStack_6c;
    }
    *(float *)(this_ + 0x124) = -fStack_6c;
    fStack_50 = fVar1;
    fStack_4c = fVar2;
    fStack_48 = fVar3;
    FUN_00406d50(bea_arg(&fStack_50));
    *(float *)(this_ + 0x128) = fStack_48;
  }
  return CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047d1c0, ap_0047d1c0));

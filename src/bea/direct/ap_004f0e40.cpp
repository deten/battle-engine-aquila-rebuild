// auto-ported from 004f0e40_vslot22.c (CTentacle::vslot22, 524 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CTentacle;
typedef char Vec3;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_0083d490 GLOBAL_AT(int, 0x0083d490)
#define DAT_0083d494 GLOBAL_AT(int, 0x0083d494)
#define DAT_0083d498 GLOBAL_AT(int, 0x0083d498)
#define DAT_0083d49c GLOBAL_AT(int, 0x0083d49c)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_Tentacle_Activation_Effect_00632d38 ((char*)0x00632d38)
typedef uint32_t (BEA_THISCALL* CComponent__vslot22_t)(uint32_t);
static const bea_guard<CComponent__vslot22_t> CComponent__vslot22 = {(CComponent__vslot22_t)0x00428d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};

static int BEA_THISCALL ap_004f0e40(CTentacle * this_)
{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_44)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x50 - 0x44);
  float * &local_40 = *reinterpret_cast<float * *>(bea_frame_ + 0x50 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x50 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  iVar4 = *(int *)(this_ + 0x214);
  if (iVar4 == 0) {
    CComponent__vslot22(bea_arg((CComponent *)this_));
    iVar2 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Tentacle_Activation_Effect_00632d38));
    iVar4 = 0;
    if (iVar2 != 0) {
      pfVar3 = (float *)FUN_0040d2c0(bea_arg(this_ + 0x3c), bea_arg(local_1c), bea_arg(this_ + 0x2d4));
      local_34 = pfVar3[2] + *(float *)(this_ + 0x24);
      local_38 = pfVar3[1] + *(float *)(this_ + 0x20);
      local_3c = *pfVar3 + *(float *)(this_ + 0x1c);
      local_40 = (float *)0x0;
      local_30 = local_20;
      local_2c = local_3c;
      local_28 = local_38;
      local_24 = local_34;
      FUN_004cb040(bea_arg(local_44));
      FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(iVar2), bea_arg(local_44), bea_arg(DAT_0083d490), bea_arg(DAT_0083d494), bea_arg(DAT_0083d498), bea_arg(DAT_0083d49c), bea_arg(0), bea_arg(0));
      fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_3c)));
      if (fVar5 < bea_fcast<float10>(local_34)) {
        fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_3c)));
        local_34 = bea_fcast<float>(fVar5);
      }
      if (local_40 != (float *)0x0) {
        if (local_40[0x12] == 10000.0) {
          local_40[0x20] = local_3c;
          local_40[0x21] = local_38;
          local_40[0x22] = local_34;
          local_40[0x23] = local_30;
          local_40[0x10] = local_40[0x20];
          local_40[0x11] = local_40[0x21];
          local_40[0x12] = local_40[0x22];
          local_40[0x13] = local_40[0x23];
          *local_40 = local_3c;
          local_40[1] = local_38;
          local_40[2] = local_34;
          local_40[3] = local_30;
          fVar1 = local_40[0x2b];
        }
        else {
          local_40[0x10] = *local_40;
          local_40[0x11] = local_40[1];
          local_40[0x12] = local_40[2];
          local_40[0x13] = local_40[3];
          *local_40 = local_3c;
          local_40[1] = local_38;
          local_40[2] = local_34;
          local_40[3] = local_30;
          fVar1 = local_40[0x2b];
        }
        if (fVar1 != -1.0) {
          local_40[0x2b] = bea_fcast<float>(DAT_00672fd0);
        }
      }
      iVar4 = FUN_004cb050(bea_arg(local_44));
    }
  }
  return iVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f0e40, ap_004f0e40));

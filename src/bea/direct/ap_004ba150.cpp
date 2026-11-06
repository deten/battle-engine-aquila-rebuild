// auto-ported from 004ba150_vslot9.c (CMine::vslot9, 821 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMine;
typedef char Vec3;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define s_C__dev_ONSLAUGHT2_Mine_cpp_006309a4 ((char*)0x006309a4)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00449560_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00449560_t> FUN_00449560 = {(FUN_00449560_t)0x00449560};
typedef float * (BEA_FASTCALL* FUN_0047ec60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ec60_t> FUN_0047ec60 = {(FUN_0047ec60_t)0x0047ec60};
typedef void * (BEA_THISCALL* FUN_0049c3e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049c3e0_t> FUN_0049c3e0 = {(FUN_0049c3e0_t)0x0049c3e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004ba150(CMine * this_, int param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x80);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x70);
  void * &local_68 = *reinterpret_cast<void * *>(bea_frame_ + 0x90 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x40);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x90 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x4);
  fVar7 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(param_1 + 0x44))));
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  fVar8 = bea_fcast<float10>(fsin(bea_fcast<float10>(*(float *)(param_1 + 0x44))));
  puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(&local_64), bea_arg(bea_fcast<float>(fVar8)), bea_arg(bea_fcast<float>(fVar7)), bea_arg(0));
  local_2c = *puVar5;
  local_28 = bea_fcast<float>(puVar5[1]);
  local_24 = puVar5[2];
  local_20 = puVar5[3];
  puVar5 = (undefined4 *)FUN_00401ec0(bea_arg(&local_64), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
  fVar4 = local_28;
  local_1c = *puVar5;
  fVar1 = bea_fcast<float>(puVar5[1]);
  local_14 = puVar5[2];
  local_10 = puVar5[3];
  local_18 = fVar1;
  FUN_0047ec60(bea_arg(&DAT_006fadc8), bea_arg(&local_78), bea_arg(param_1 + 4));
  fVar2 = local_74 * bea_fcast<float>(-fVar8) - fVar4 * local_78;
  fVar3 = fVar1 * local_78 - local_70 * bea_fcast<float>(-fVar8);
  fVar1 = local_70 * fVar4 - local_74 * fVar1;
  local_64 = fVar1;
  local_60 = fVar3;
  local_5c = fVar2;
  FUN_00401ec0(bea_arg(&local_88), bea_arg(local_70 * fVar3 - local_74 * fVar2), bea_arg(fVar2 * local_78 - local_70 * fVar1), bea_arg(local_74 * fVar1 - fVar3 * local_78));
  fVar4 = SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);   // class 19: the asm's order
  if (fVar4 != 0.0f) {
    fVar4 = 1.0f / fVar4;
    local_88 = fVar4 * local_88;
    local_84 = local_84 * fVar4;
    local_80 = fVar4 * local_80;
  }
  *(float *)(param_1 + 0x48) = -local_80;
  local_44 = local_5c;
  local_4c = local_64;
  local_48 = local_60;
  local_40 = local_58;
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);   // class 19: the asm's order
  fVar2 = local_5c;
  if (fVar1 != 0.0f) {
    fVar2 = (1.0f / fVar1) * local_5c;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  local_68 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_Mine_cpp_006309a4), bea_arg(0x1f));
  if (local_68 == (void *)0x0) {
    uVar6 = 0;
  }
  else if (this_ == (CMine *)0x0) {
    uVar6 = FUN_0049c3e0(bea_arg(local_68), bea_arg(0));
  }
  else {
    uVar6 = FUN_0049c3e0(bea_arg(local_68), bea_arg(this_ + 8));
  }
  *(undefined4 *)(this_ + 0x70) = uVar6;
  local_50 = 0;
  local_54 = 0;
  local_68 = (void *)0x0;
  puVar5 = (undefined4 *)FUN_00449560(bea_arg(&local_4c), bea_arg(&local_68), bea_arg(&local_54), bea_arg(&local_50));
  *(undefined4 *)(this_ + 300) = *puVar5;
  *(undefined4 *)(this_ + 0x130) = puVar5[1];
  uVar6 = puVar5[2];
  *(undefined4 *)(this_ + 0x260) = 0;
  *(undefined4 *)(this_ + 0x264) = 0;
  *(undefined4 *)(this_ + 0x134) = uVar6;
  if (DAT_006fbdfc <= *(float *)(this_ + 0x24)) {
    *(undefined4 *)(this_ + 600) = 1;
  }
  else {
    *(undefined4 *)(this_ + 600) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ba150, ap_004ba150));

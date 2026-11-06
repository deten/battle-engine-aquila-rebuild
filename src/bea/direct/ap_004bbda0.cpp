// auto-ported from 004bbda0_vslot66.c (CNamedMesh::vslot66, 683 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xb0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CNamedMesh;
typedef char Vec3;
#define DAT_00662dd0 GLOBAL_AT(int, 0x00662dd0)
typedef uint32_t (BEA_THISCALL* CActor__vslot66_t)(uint32_t);
static const bea_guard<CActor__vslot66_t> CActor__vslot66 = {(CActor__vslot66_t)0x004015e0};
typedef uint32_t (BEA_STDCALL* FUN_004011b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004011b0_t> FUN_004011b0 = {(FUN_004011b0_t)0x004011b0};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};

static uint32_t BEA_THISCALL ap_004bbda0(CNamedMesh * this_)
{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  CNamedMesh *pCVar6;
  float10 fVar7;
  float10 fVar8;
  alignas(16) uint8_t bea_frame_[0xb0] = {};   // the original stack frame (emulate_frame)
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0xa0);
  undefined4 &local_9c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x94);
  undefined4 &local_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x90);
  undefined4 &local_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x88);
  undefined4 &local_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x84);
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x64);
  float (&local_60)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0xb0 - 0x60);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xb0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xb0 - 0x38);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xb0 - 0x30);
  if (DAT_00662dd0 == 1) {
    fVar7 = bea_fcast<float10>(fcos(bea_fcast<float10>(0.0)));
    local_60[1] = 0.0;
    local_94 = bea_fcast<float>(fVar7);
    local_60[0] = bea_fcast<float>(fVar7);
    fVar8 = bea_fcast<float10>(fsin(bea_fcast<float10>(0.0)));
    local_50 = 0;
    local_98 = bea_fcast<float>(fVar8);
    local_48 = 0;
    local_a8 = -local_98;
    local_a4 = 0.0;
    local_a0 = bea_fcast<float>(fVar7);
    local_4c = 0x3f800000;
    local_3c = 0;
    local_60[2] = local_98;
    local_40 = local_a8;
    local_38 = local_a0;
    FUN_004011b0(bea_arg(&local_90), bea_arg(0x10), bea_arg(3), bea_arg(((void*)0x00402d20)));
    local_90 = 0x3f800000;
    local_8c = 0;
    local_78 = -local_98;
    local_88 = 0;
    local_84 = local_9c;
    local_80 = 0;
    local_7c = local_94;
    local_74 = local_9c;
    local_a8 = 0.0;
    local_a4 = local_98;
    local_a0 = local_94;
    local_70 = 0;
    local_6c = local_98;
    local_68 = local_94;
    local_64 = local_9c;
    pfVar2 = (float *)FUN_0040d320(bea_arg(&local_90), bea_arg(local_30), bea_arg(local_60));
    fVar7 = bea_fcast<float10>(fsin(bea_fcast<float10>(0.006135923322290182)));
    pfVar5 = local_60;
    for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    }
    local_94 = bea_fcast<float>(fVar7);
    fVar7 = bea_fcast<float10>(fcos(bea_fcast<float10>(0.006135923322290182)));
    fVar1 = bea_fcast<float>(fVar7);
    local_98 = fVar1;
    puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(&local_a8), bea_arg(fVar1), bea_arg(-local_94), bea_arg(0));
    local_90 = *puVar3;
    local_8c = puVar3[1];
    local_88 = puVar3[2];
    local_84 = puVar3[3];
    puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(&local_a8), bea_arg(local_94), bea_arg(fVar1), bea_arg(0));
    local_80 = *puVar3;
    local_7c = bea_fcast<float>(puVar3[1]);
    local_78 = bea_fcast<float>(puVar3[2]);
    local_74 = puVar3[3];
    puVar3 = (undefined4 *)FUN_00401ec0(bea_arg(&local_a8), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
    local_70 = *puVar3;
    local_6c = bea_fcast<float>(puVar3[1]);
    local_68 = bea_fcast<float>(puVar3[2]);
    local_64 = puVar3[3];
    pfVar2 = (float *)FUN_0040d320(bea_arg(&local_90), bea_arg(local_30), bea_arg(local_60));
    pfVar5 = local_60;
    for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    }
    puVar3 = (undefined4 *)FUN_0040d320(bea_arg(this_ + 0x3c), bea_arg(local_30), bea_arg(local_60));
    pCVar6 = this_ + 0x3c;
    for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
      *(undefined4 *)pCVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      pCVar6 = pCVar6 + 4;
    }
  }
  return CActor__vslot66(bea_arg((CActor *)this_));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004bbda0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

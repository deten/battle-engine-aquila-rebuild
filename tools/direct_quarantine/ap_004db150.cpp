// auto-ported from 004db150_FUN_004db150.c (FUN_004db150, 1185 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x460: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_008551a0 GLOBAL_AT(int, 0x008551a0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef uint32_t (BEA_THISCALL* FUN_004dab50_t)(uint32_t);
static const bea_guard<FUN_004dab50_t> FUN_004dab50 = {(FUN_004dab50_t)0x004dab50};
typedef void * (BEA_THISCALL* FUN_004daba0_t)(uint32_t);
static const bea_guard<FUN_004daba0_t> FUN_004daba0 = {(FUN_004daba0_t)0x004daba0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_CDECL* FUN_0050f7a0_t)(uint32_t);
static const bea_guard<FUN_0050f7a0_t> FUN_0050f7a0 = {(FUN_0050f7a0_t)0x0050f7a0};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_004db150(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  int *this_00;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x460] = {};   // the original stack frame (emulate_frame)
  float &local_458 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x458);
  float &local_454 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x454);
  float &local_450 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x450);
  float &local_44c = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x44c);
  undefined4 &local_448 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x448);
  float &local_444 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x444);
  float &local_440 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x440);
  float &local_43c = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x43c);
  undefined4 &local_438 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x438);
  int * &local_434 = *reinterpret_cast<int * *>(bea_frame_ + 0x460 - 0x434);
  float &local_430 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x430);
  float &local_42c = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x42c);
  float &local_428 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x428);
  float &local_424 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x424);
  float &local_418 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x418);
  float (&local_40c)[5] = *reinterpret_cast<float (*)[5]>(bea_frame_ + 0x460 - 0x40c);
  float &local_3f8 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x3f8);
  float &local_3e8 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x3e8);
  undefined ** &local_3dc = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x460 - 0x3dc);
  float &local_3d8 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x3d8);
  float &local_3d4 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x3d4);
  float &local_3d0 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x3d0);
  undefined4 &local_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x3cc);
  float (&local_3c8)[15] = *reinterpret_cast<float (*)[15]>(bea_frame_ + 0x460 - 0x3c8);
  float &local_38c = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x38c);
  float &local_388 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x388);
  float &local_384 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x384);
  undefined4 &local_380 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x380);
  undefined4 &local_37c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x37c);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x14);
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x460 - 0x10);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x460 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x460 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x460 - 0x4);
  local_434 = (int *)FUN_004daba0(bea_arg(this_));
  if (local_434 == (int *)0x0) {
    uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar5 = uVar5 & 0x8000ffff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
    }
    local_444 = ((float)(int)uVar5 * 1.5258789e-05f - 0.5f) *
                *(float *)(*(int *)((int)this_ + 0xf0) + 0x90) + *(float *)((int)this_ + 0x1c);
    uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar5 = uVar5 & 0x8000ffff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffff0000) + 1;
    }
    local_440 = ((float)(int)uVar5 * 1.5258789e-05f - 0.5f) *
                *(float *)(*(int *)((int)this_ + 0xf0) + 0x90) + *(float *)((int)this_ + 0x20);
    fVar9 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_444));
    local_43c = (float)(fVar9 + (float10)0.5f);
  }
  else {
    bea_vcall<uint32_t>(local_434, 0x168, &local_444);
  }
  this_00 = (int *)FUN_0050f7a0(bea_arg(*(undefined4 *)((int)this_ + 0xf0)));
  if (this_00 != (int *)0x0) {
    FUN_0048dcf0(bea_arg(&local_3dc));
    local_454 = -1.0f;
    local_450 = -1.0f;
    local_20 = -1.0f;
    local_1c = -1.0f;
    local_44c = -1.0f;
    local_14 = local_448;
    local_10 = *(int *)((int)this_ + 0x118) + 1;
    local_3dc = ((void*)0x005de9b4);
    local_18 = -1.0f;
    local_c = 0;
    local_8 = 0;
    local_4 = 0.0f;
    if (*(int *)(this_00[0x3c] + 0x50) == 0) {
      local_418 = *(float *)(this_00[0x3c] + 0x2c) * 0.05f;
    }
    else {
      fVar1 = local_444 - *(float *)((int)this_ + 0x1c);
      fVar3 = local_440 - *(float *)((int)this_ + 0x20);
      fVar2 = local_43c - *(float *)((int)this_ + 0x24);
      local_418 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    }
    local_3d8 = *(float *)((int)this_ + 0x1c);
    local_3d4 = *(float *)((int)this_ + 0x20);
    local_3d0 = *(float *)((int)this_ + 0x24);
    local_3cc = *(undefined4 *)((int)this_ + 0x28);
    fVar9 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg((float *)((int)this_ + 0x1c)));
    if (fVar9 - (float10)1.0f < (float10)local_3d0) {
      local_3d0 = (float)(fVar9 - (float10)1.0f);
    }
    local_454 = local_444 - local_3d8;
    local_18 = local_43c;
    local_450 = local_440 - local_3d4;
    local_20 = local_444;
    local_1c = local_440;
    local_14 = local_438;
    local_44c = local_43c - local_3d0;
    fVar1 = SQRT(local_454 * local_454 + local_44c * local_44c + local_450 * local_450);
    if (fVar1 <= 0.0f) {
      local_458 = 0.0f;
    }
    else {
      fVar9 = _CIasin((float10)local_44c / (float10)fVar1);
      local_458 = (float)fVar9;
    }
    fVar9 = (float10)fpatan((float10)local_454,(float10)local_450);
    local_430 = (float)-fVar9;
    FUN_004062d0(bea_arg(local_40c), bea_arg(local_430), bea_arg(local_458), bea_arg(0));
    pfVar7 = local_40c;
    pfVar8 = local_3c8;
    for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_00401ec0(bea_arg(&local_454), bea_arg(local_40c[1] * local_418), bea_arg(local_3f8 * local_418), bea_arg(local_3e8 * local_418));
    local_38c = local_454;
    local_384 = local_44c;
    local_c = *(int *)((int)this_ + 0xf0);
    local_388 = local_450;
    local_380 = local_448;
    local_37c = 1;
    local_4 = *(float *)(local_c + 0x24);
    local_8 = *(undefined4 *)(local_c + 0x94);
    FUN_00401000(bea_arg(this_00 + 0x3b), bea_arg(*(undefined4 *)((int)this_ + 0xec)));
    piVar4 = local_434;
    if ((local_434 != (int *)0x0) &&
       ((*(int *)(this_00[0x3c] + 0x48) != 0 || (*(float *)(this_00[0x3c] + 0x1c) < 0.0f)))) {
      FUN_004dab50(bea_arg(this_00));
      FUN_00401000(bea_arg(this_00 + 0x3a), bea_arg(piVar4));
      if ((*(byte *)(piVar4 + 0xd) & 8) != 0) {
        FUN_004e5a80(bea_arg(&DAT_008551a0), bea_arg(this_00));
      }
    }
    FUN_00401ec0(bea_arg(&local_42c), bea_arg(local_444 - local_3d8), bea_arg(local_440 - local_3d4), bea_arg(local_43c - local_3d0));
    fVar1 = local_424 * local_424 + local_428 * local_428 + local_42c * local_42c;
    if (fVar1 < local_4 * local_418) {
      fVar1 = SQRT(fVar1);
      uVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      local_434 = (int *)(uVar5 & 0x8000ffff);
      fVar2 = *(float *)(this_00[0x3c] + 0x7c) * fVar1;
      if ((int)local_434 < 0) {
        local_434 = (int *)(((int)local_434 - 1U | 0xffff0000) + 1);
      }
      fVar3 = (float)(int)local_434 * 0.0015258789f * 0.01f * fVar2;
      local_4 = (((fVar3 + fVar3) - fVar2) + fVar1) / local_418;
    }
    bea_vcall<uint32_t>(this_00, 0x24, &local_3dc);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db150, ap_004db150));

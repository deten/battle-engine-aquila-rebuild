// auto-ported from 004d50d0_FUN_004d50d0.c (FUN_004d50d0, 1407 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @autoport-repair: 3 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define _DAT_006316b8 GLOBAL_AT(float, 0x006316b8)
#define _DAT_006316b4 GLOBAL_AT(float, 0x006316b4)
#define DAT_0082b690 GLOBAL_AT(int, 0x0082b690)
#define _DAT_0082b688 GLOBAL_AT(float, 0x0082b688)
#define _DAT_0082b68c GLOBAL_AT(float, 0x0082b68c)
#define DAT_0082b694 GLOBAL_AT(int, 0x0082b694)
#define DAT_0082b698 GLOBAL_AT(int, 0x0082b698)
#define s_WARNING__search_in_invalid_poly_b_0063171c ((char*)0x0063171c)
#define s_WARNING__diff_outside_poly_bucke_0063174c ((char*)0x0063174c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_CDECL* FUN_00478160_t)(void *, void *, void *, void *, void *, void *, void *, ...);
static const bea_guard<FUN_00478160_t> FUN_00478160 = {(FUN_00478160_t)0x00478160};
typedef undefined4 (BEA_THISCALL* FUN_004d57c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d57c0_t> FUN_004d57c0 = {(FUN_004d57c0_t)0x004d57c0};

static undefined4 BEA_THISCALL ap_004d50d0(void * this_, float *param_1, float *param_2)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x28);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x4);
  if (*(int *)((int)this_ + 0x60) == 0) {
    return 0;
  }
  if (*(float *)((int)this_ + 0x74) < 0.0001f) {
    return 0;
  }
  pfVar1 = (float *)((int)this_ + 0x10);
  *(int *)((int)this_ + 0x9c) = *(int *)((int)this_ + 0x9c) + 1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  *(float *)this_ = *param_1 - *(float *)((int)this_ + 0x30);
  *(float *)((int)this_ + 4) = fVar5 - *(float *)((int)this_ + 0x34);
  *(float *)((int)this_ + 8) = fVar6 - *(float *)((int)this_ + 0x38);
  *(undefined4 *)((int)this_ + 0xc) = local_1c;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = *(float *)this_ / *(float *)((int)this_ + 0x70);
  *pfVar1 = *param_2 - *(float *)((int)this_ + 0x30);
  *(float *)((int)this_ + 0x14) = fVar5 - *(float *)((int)this_ + 0x34);
  *(float *)((int)this_ + 0x18) = fVar6 - *(float *)((int)this_ + 0x38);
  *(undefined4 *)((int)this_ + 0x1c) = local_1c;
  *(float *)this_ = fVar7;
  fVar5 = *pfVar1 / *(float *)((int)this_ + 0x70);
  *pfVar1 = fVar5;
  if ((fVar7 < 0.0f) && (fVar5 < 0.0f)) {
    return 0;
  }
  local_10 = (float)*(int *)((int)this_ + 0x68);
  if ((local_10 < fVar7) && (local_10 < fVar5)) {
    return 0;
  }
  fVar5 = *(float *)((int)this_ + 4) / *(float *)((int)this_ + 0x70);
  pfVar2 = (float *)((int)this_ + 0x14);
  *(float *)((int)this_ + 4) = fVar5;
  fVar6 = *pfVar2 / *(float *)((int)this_ + 0x70);
  *pfVar2 = fVar6;
  if ((fVar5 < 0.0f) && (fVar6 < 0.0f)) {
    return 0;
  }
  local_c = (float)*(int *)((int)this_ + 0x6c);
  if ((local_c < fVar5) && (local_c < fVar6)) {
    return 0;
  }
  fVar5 = *(float *)((int)this_ + 8) / *(float *)((int)this_ + 0x74);
  pfVar3 = (float *)((int)this_ + 8);
  pfVar4 = (float *)((int)this_ + 0x18);
  *pfVar3 = fVar5;
  fVar6 = *pfVar4 / *(float *)((int)this_ + 0x74);
  *pfVar4 = fVar6;
  if ((fVar5 < 0.0f) && (fVar6 < 0.0f)) {
    return 0;
  }
  if ((32.0f < fVar5) && (32.0f < fVar6)) {
    return 0;
  }
  local_10 = local_10 - 0.0001f;
  local_18 = 0;
  local_c = local_c - 0.0001f;
  local_14 = 0;
  local_8 = 0;
  local_4 = 0x41ffffcc;
  cVar9 = FUN_00478160(this_,(float *)((int)this_ + 4),pfVar3,pfVar1,pfVar2,pfVar4,&local_18);
  if (cVar9 == '\0') {
    return 0;
  }
  if (*pfVar3 <= *pfVar4) {
    param_1 = (float *)(uintptr_t)bea_piece32(*pfVar3);
  }
  else {
    param_1 = (float *)(uintptr_t)bea_piece32(*pfVar4);
  }
  if (*pfVar3 < *pfVar4) {
    fVar5 = *pfVar4;
  }
  else {
    fVar5 = *pfVar3;
  }
  if (*(float *)((int)this_ + 0x74) == 0.0f) {
    uVar12 = 0xffffffff;
  }
  else {
    fVar6 = (__builtin_bit_cast(float, (uint32_t)(uintptr_t)(param_1)) * *(float *)((int)this_ + 0x74)) / *(float *)((int)this_ + 0x74);
    fVar5 = (fVar5 * *(float *)((int)this_ + 0x74)) / *(float *)((int)this_ + 0x74);
    local_28 = (int)(longlong)ROUND(fVar6);
    iVar11 = local_28;
    if (fVar6 - (float)local_28 < 0.0f) {
      iVar11 = local_28 + -1;
    }
    local_28 = (int)(longlong)ROUND(fVar5);
    if (fVar5 - (float)local_28 < 0.0f) {
      local_28 = local_28 + -1;
    }
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    if (0x1f < local_28) {
      local_28 = 0x1f;
    }
    uVar12 = 0;
    for (; BEA_LOOP_GUARD((iVar11 <= local_28)); iVar11 = iVar11 + 1) {
      uVar12 = uVar12 | 1 << ((byte)iVar11 & 0x1f);
    }
  }
  *(uint *)((int)this_ + 0x8c) = uVar12;
  if (uVar12 != 0) {
    fVar5 = *pfVar1 - *(float *)this_;
    *(undefined4 *)((int)this_ + 0x94) = 0;
    fVar6 = *(float *)((int)this_ + 0x14) - *(float *)((int)this_ + 4);
    if (((float)*(int *)((int)this_ + 0x68) < fVar5) || ((float)*(int *)((int)this_ + 0x6c) < fVar6))
    {
      FUN_00441740(&DAT_0066f580,s_WARNING__diff_outside_poly_bucke_0063174c);
    }
    fVar7 = ABS(fVar5);
    fVar8 = ABS(fVar6);
    if (fVar7 <= fVar8) {
      _DAT_006316b8 = 1.0;
      if (fVar6 <= 0.0f) {
        _DAT_006316b8 = -1.0;
      }
      if (fVar5 == 0.0f) {
        _DAT_006316b4 = 0.0f;
      }
      else {
        _DAT_006316b4 = fVar5 / fVar8;
      }
      local_28 = (int)(longlong)ROUND(fVar8);
      fVar7 = fVar8 - (float)local_28;
    }
    else {
      _DAT_006316b4 = 1.0;
      if (fVar5 <= 0.0f) {
        _DAT_006316b4 = -1.0;
      }
      if (fVar6 == 0.0f) {
        _DAT_006316b8 = 0.0f;
      }
      else {
        _DAT_006316b8 = fVar6 / fVar7;
      }
      local_28 = (int)(longlong)ROUND(fVar7);
      fVar7 = fVar7 - (float)local_28;
    }
    if (fVar7 < 0.0f) {
      local_28 = local_28 + -1;
    }
    DAT_0082b690 = local_28 + 1;
    _DAT_0082b688 = *(float *)this_;
    _DAT_0082b68c = *(float *)((int)this_ + 4);
    local_28 = (int)(longlong)ROUND(_DAT_0082b688);
    if (_DAT_0082b688 - (float)local_28 < 0.0f) {
      local_28 = local_28 + -1;
    }
    *(int *)((int)this_ + 0xb0) = local_28;
    local_28 = (int)(longlong)ROUND(_DAT_0082b68c);
    if (_DAT_0082b68c - (float)local_28 < 0.0f) {
      local_28 = local_28 + -1;
    }
    *(int *)((int)this_ + 0xb4) = local_28;
    DAT_0082b694 = 0;
    DAT_0082b698 = 0;
    if ((((-1 < *(int *)((int)this_ + 0xb0)) &&
         (*(int *)((int)this_ + 0xb0) < *(int *)((int)this_ + 0x68))) &&
        (-1 < *(int *)((int)this_ + 0xb4))) &&
       (*(int *)((int)this_ + 0xb4) < *(int *)((int)this_ + 0x6c))) {
      uVar10 = FUN_004d57c0(bea_arg(this_), bea_arg(0));
      return uVar10;
    }
    FUN_00441740(&DAT_0066f580,s_WARNING__search_in_invalid_poly_b_0063171c);
    return 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d50d0, ap_004d50d0));

// auto-ported from 0048a570_vslot3.c (CInfantryGuide::vslot3, 1770 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 check_fild: (float)piVar2[0x45]/[7]/[8]/[9] -> bea_fcast<float> (original copies +0x114 with mov at 0x48a590 and uses fsub dword [ecx+0x1c/0x20/0x24] at 0x48a589..0x48a5a9)
// @hand-fixed 2026-10-28 fingerprint: local_3c = ROUND(+0x20) is a signed fistp qword (0x48a8aa); (ulonglong) made GCC emit the unsigned split (2^63 test + second fistp) -> (longlong)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CInfantryGuide;
typedef char Vec3;
typedef char extraout_ST0;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR___Unknown_Infantry_guide_s_0062d5ac ((char*)0x0062d5ac)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004bc2e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bc2e0_t> FUN_004bc2e0 = {(FUN_004bc2e0_t)0x004bc2e0};

static undefined4 BEA_THISCALL ap_0048a570(CInfantryGuide * this_)
{
  CInfantryGuide *pCVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float10 extraout_ST0;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x48);
  int &local_40 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x40);
  ulonglong &local_3c = *reinterpret_cast<ulonglong *>(bea_frame_ + 0x50 - 0x3c);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  piVar2 = *(int **)(this_ + 0x18);
  if ((*(byte *)(piVar2 + 0xb) & 4) != 0) {
    uVar7 = bea_vcall<uint32_t>(piVar2, 0x100);
    return uVar7;
  }
  pCVar1 = this_ + 8;
  fVar3 = bea_fcast<float>(piVar2[0x45]);
  FUN_00401ec0(bea_arg(&local_30), bea_arg(*(float *)pCVar1 - bea_fcast<float>(piVar2[7])), bea_arg(*(float *)(this_ + 0xc) - bea_fcast<float>(piVar2[8])), bea_arg(*(float *)(this_ + 0x10) - bea_fcast<float>(piVar2[9])))
  ;
  iVar9 = *(int *)(this_ + 0x18);
  bVar6 = false;
  if ((*(int *)(*(int *)(iVar9 + 0x13c) + 0x20) != 2) && (iVar4 = *(int *)(this_ + 0x44), iVar4 != 0)
     ) {
    if ((*(float *)(iVar4 + 0x1c) != *(float *)(iVar9 + 0x1c)) ||
       ((*(float *)(iVar4 + 0x20) != *(float *)(iVar9 + 0x20) ||
        (*(float *)(iVar4 + 0x24) != *(float *)(iVar9 + 0x24))))) {
      FUN_00401ec0(bea_arg(&local_20), bea_arg(*(float *)(iVar9 + 0x1c) - *(float *)(iVar4 + 0x1c)), bea_arg(*(float *)(iVar9 + 0x20) - *(float *)(iVar4 + 0x20)), bea_arg(*(float *)(iVar9 + 0x24) - *(float *)(iVar4 + 0x24)));
      local_30 = local_20;
      local_2c = local_1c;
      local_24 = local_14;
      fVar5 = SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20);
      local_28 = local_18;
      if (fVar5 != 0.0f) {
        fVar5 = 1.0f / fVar5;
        local_30 = local_20 * fVar5;
        local_2c = local_1c * fVar5;
        local_28 = fVar5 * local_18;
      }
      local_30 = local_30 * 10.0f;
      local_2c = local_2c * 10.0f;
      local_28 = local_28 * 10.0f;
    }
    bVar6 = true;
  }
  if (local_2c * local_2c + local_30 * local_30 < 0.01f) {
    iVar9 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar9 + 0x14c) = 0;
    *(undefined4 *)(iVar9 + 0x150) = 0;
    *(undefined4 *)(iVar9 + 0x154) = 0;
    *(undefined4 *)(iVar9 + 0x158) = local_14;
    return local_14;
  }
  switch(*(undefined4 *)(this_ + 0x1c)) {
  case 0:
    local_48 = fVar3;
    break;
  case 1:
  case 3:
    fVar10 = (float10)fpatan((float10)local_30,(float10)local_2c);
    local_48 = (float)-fVar10;
    break;
  case 2:
    fVar10 = (float10)fpatan((float10)local_30,(float10)local_2c);
    local_48 = (float)(-fVar10 - (float10)3.1415927f);
    break;
  default:
    FUN_00441740(&DAT_0066f580,s_ERROR___Unknown_Infantry_guide_s_0062d5ac);
  }
  *(float *)(*(int *)(this_ + 0x18) + 0x120) = local_48;
  iVar9 = *(int *)(this_ + 0x18);
  if ((*(int *)(*(int *)(iVar9 + 0x13c) + 0x20) == 2) || (bVar6)) goto LAB_0048aa6b;
  if ((1.0f < local_2c * local_2c + local_30 * local_30) && (*(void **)(this_ + 0x20) != (void *)0x0))
  {
    if (*(int *)(this_ + 0x2c) != 0) {
      local_20 = *(float *)pCVar1;
      local_1c = *(float *)(this_ + 0xc);
      local_18 = *(float *)(this_ + 0x10);
      local_14 = *(undefined4 *)(this_ + 0x14);
      (*(uint32_t*)((char*)&local_3c + 0)) = (int)(longlong)ROUND(local_20);
      uVar8 = *(int *)(this_ + 0x24) - (int)local_3c >> 0x1f;
      if (((int)((*(int *)(this_ + 0x24) - (int)local_3c ^ uVar8) - uVar8) < 2) &&
         ((*(uint32_t*)((char*)&local_3c + 0)) = (int)(longlong)ROUND(local_1c),
         uVar8 = *(int *)(this_ + 0x28) - (int)local_3c >> 0x1f,
         (int)((*(int *)(this_ + 0x28) - (int)local_3c ^ uVar8) - uVar8) < 2)) goto LAB_0048a885;
    }
    FUN_004bc2e0(bea_arg(*(void **)(this_ + 0x20)), bea_arg(*(undefined4 *)(iVar9 + 0x1c)), bea_arg(*(undefined4 *)(iVar9 + 0x20)), bea_arg(*(undefined4 *)(iVar9 + 0x24)), bea_arg(*(undefined4 *)(iVar9 + 0x28)), bea_arg(*(float *)pCVar1), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(1), bea_arg(this_ + 0x24));
  }
LAB_0048a885:
  if (*(int *)(this_ + 0x2c) != 0) {
    iVar9 = *(int *)(this_ + 0x18);
    (*(uint32_t*)((char*)&local_3c + 0)) = (int)(longlong)ROUND(*(float *)(iVar9 + 0x1c));
    local_40 = (int)local_3c;
    iVar4 = *(int *)(this_ + 0x30);
    local_3c = (longlong)ROUND(*(float *)(iVar9 + 0x20));
    if (0 < iVar4) {
      local_40 = (uint)*(byte *)(*(int *)(this_ + 0x34) + -1 + iVar4) * 2 + 1;
      local_3c = (ulonglong)((uint)*(byte *)(*(int *)(this_ + 0x3c) + -1 + iVar4) * 2 + 1);
    }
    local_c = (float)(int)local_3c;
    local_20 = (float)local_40 - *(float *)(iVar9 + 0x1c);
    local_1c = local_c - *(float *)(iVar9 + 0x20);
    local_18 = *(float *)(iVar9 + 0x24);
    fVar10 = (float10)fpatan((float10)local_20,(float10)local_1c);
    fVar5 = local_20 * local_20 + local_1c * local_1c;
    while (((local_18 = -local_18, fVar5 < 0.5f))) {
      iVar9 = *(int *)(this_ + 0x30) + -1;
      *(int *)(this_ + 0x30) = iVar9;
      if (iVar9 < 1) {
        iVar9 = *(int *)(this_ + 0x18);
        local_20 = *(float *)pCVar1 - *(float *)(iVar9 + 0x1c);
        local_1c = *(float *)(this_ + 0xc) - *(float *)(iVar9 + 0x20);
        local_18 = *(float *)(this_ + 0x10) - *(float *)(iVar9 + 0x24);
        fVar10 = (float10)fpatan((float10)local_20,(float10)local_1c);
        break;
      }
      if (0 < iVar9) {
        local_40 = (uint)*(byte *)(*(int *)(this_ + 0x34) + -1 + iVar9) * 2 + 1;
        local_3c = (ulonglong)((uint)*(byte *)(*(int *)(this_ + 0x3c) + -1 + iVar9) * 2 + 1);
      }
      local_c = (float)(int)local_3c;
      iVar9 = *(int *)(this_ + 0x18);
      local_20 = (float)local_40 - *(float *)(iVar9 + 0x1c);
      local_1c = local_c - *(float *)(iVar9 + 0x20);
      local_18 = *(float *)(iVar9 + 0x24);
      fVar10 = (float10)fpatan((float10)local_20,(float10)local_1c);
      fVar5 = local_20 * local_20 + local_1c * local_1c;
    }
    local_48 = (float)-fVar10;
    local_24 = local_14;
    *(float *)(*(int *)(this_ + 0x18) + 0x120) = local_48;
    local_30 = local_20;
    local_2c = local_1c;
    local_28 = local_18;
  }
LAB_0048aa6b:
  fVar5 = local_2c * local_2c + local_30 * local_30;
  if (fVar5 < 0.01f) {
    iVar9 = *(int *)(this_ + 0x18);
    *(undefined4 *)(this_ + 0x1c) = 0;
    *(undefined4 *)(iVar9 + 0x14c) = 0;
    *(undefined4 *)(iVar9 + 0x150) = 0;
    *(undefined4 *)(iVar9 + 0x154) = 0;
    *(undefined4 *)(iVar9 + 0x158) = local_14;
    return (undefined4 *)(iVar9 + 0x14c);
  }
  if ((-1.5707964f <= local_48) || (fVar3 <= 1.5707964f)) {
    if ((1.5707964f < local_48) && (fVar3 < -1.5707964f)) {
      fVar3 = fVar3 + 6.2831855f;
    }
  }
  else {
    fVar3 = fVar3 - 6.2831855f;
  }
  if ((0.2f < ABS(local_48 - fVar3)) && (fVar5 < 0.1f)) {
    iVar9 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar9 + 0x14c) = 0;
    *(undefined4 *)(iVar9 + 0x150) = 0;
    *(undefined4 *)(iVar9 + 0x154) = 0;
    *(undefined4 *)(iVar9 + 0x158) = local_14;
    return (undefined4 *)(iVar9 + 0x14c);
  }
  if ((*(int *)(this_ + 0x1c) == 3) && (!bVar6)) {
    iVar9 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar9 + 0x14c) = 0;
    *(undefined4 *)(iVar9 + 0x150) = 0;
    *(undefined4 *)(iVar9 + 0x154) = 0;
    *(undefined4 *)(iVar9 + 0x158) = local_14;
    return (undefined4 *)(iVar9 + 0x14c);
  }
  extraout_ST0 = (float10)bea_vcall<float10>(*(int **)(this_ + 0x18), 0x1bc);
  fVar10 = extraout_ST0 * (float10)0.2f;
  iVar9 = *(int *)(this_ + 0x18);
  *(float *)(iVar9 + 0x14c) = (float)(fVar10 * (float10)*(float *)(iVar9 + 0x40));
  fVar3 = (float)(fVar10 * (float10)*(float *)(iVar9 + 0x60));
  *(float *)(iVar9 + 0x150) = (float)(fVar10 * (float10)*(float *)(iVar9 + 0x50));
  *(float *)(iVar9 + 0x154) = fVar3;
  *(undefined4 *)(iVar9 + 0x158) = uStack_10;
  return bea_piece32(fVar3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048a570, ap_0048a570));

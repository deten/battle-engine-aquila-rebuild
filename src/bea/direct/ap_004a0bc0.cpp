// auto-ported from 004a0bc0_vslot3.c (CMechGuide::vslot3, 1582 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMechGuide;
typedef char Vec3;
typedef char extraout_ST0;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00835944 GLOBAL_AT(int, 0x00835944)
#define DAT_00835b14 GLOBAL_AT(int, 0x00835b14)
#define s_ERROR___Unknown_Infantry_guide_s_0062d5ac ((char*)0x0062d5ac)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004bc2e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bc2e0_t> FUN_004bc2e0 = {(FUN_004bc2e0_t)0x004bc2e0};

static void BEA_THISCALL ap_004a0bc0(CMechGuide * this_)
{
  CMechGuide *pCVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float10 extraout_ST0;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  int &local_4c = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  int &local_3c = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  int &local_34 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x34);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x2c);
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x28);
  undefined8 &local_24 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x60 - 0x24);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x60 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x14);
  undefined1 * &puStack_c = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x60 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x8);
  uVar4 = rdtsc();
  local_2c = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_34 = (int)uVar4;
  piVar2 = *(int **)(this_ + 0x18);
  local_30 = local_34;
  if ((*(byte *)(piVar2 + 0xb) & 4) == 0) {
    pCVar1 = this_ + 8;
    piVar2[0x53] = 0;
    local_58 = 0.0f;
    local_54 = 0.0f;
    local_50 = 0.0f;
    piVar2[0x54] = 0;
    piVar2[0x55] = 0;
    piVar2[0x56] = local_4c;
    iVar7 = *(int *)(this_ + 0x18);
    local_18 = *(float *)(iVar7 + 0x114);
    FUN_00401ec0(bea_arg(&local_48), bea_arg(*(float *)pCVar1 - *(float *)(iVar7 + 0x1c)), bea_arg(*(float *)(this_ + 0xc) - *(float *)(iVar7 + 0x20)), bea_arg(*(float *)(this_ + 0x10) - *(float *)(iVar7 + 0x24)));
    iVar7 = *(int *)(this_ + 0x18);
    local_28 = 0;
    if ((*(int *)(*(int *)(iVar7 + 0x13c) + 0x20) != 2) &&
       (iVar3 = *(int *)(this_ + 0x44), iVar3 != 0)) {
      if ((*(float *)(iVar3 + 0x1c) != *(float *)(iVar7 + 0x1c)) ||
         ((*(float *)(iVar3 + 0x20) != *(float *)(iVar7 + 0x20) ||
          (*(float *)(iVar3 + 0x24) != *(float *)(iVar7 + 0x24))))) {
        FUN_00401ec0(bea_arg(&local_58), bea_arg(*(float *)(iVar7 + 0x1c) - *(float *)(iVar3 + 0x1c)), bea_arg(*(float *)(iVar7 + 0x20) - *(float *)(iVar3 + 0x20)), bea_arg(*(float *)(iVar7 + 0x24) - *(float *)(iVar3 + 0x24)));
        local_48 = local_58;
        local_44 = local_54;
        local_3c = local_4c;
        fVar5 = SQRT(local_54 * local_54 + local_50 * local_50 + local_58 * local_58);
        local_40 = local_50;
        if (fVar5 != 0.0f) {
          fVar5 = 1.0f / fVar5;
          local_48 = local_58 * fVar5;
          local_44 = local_54 * fVar5;
          local_40 = fVar5 * local_50;
        }
        local_48 = local_48 * 10.0f;
        local_44 = local_44 * 10.0f;
        local_40 = local_40 * 10.0f;
      }
      local_28 = 1;
    }
    if (local_44 * local_44 + local_48 * local_48 < 0.01f) {
      uVar4 = rdtsc();
      iVar7 = (int)uVar4;
      goto LAB_004a11bf;
    }
    switch(*(undefined4 *)(this_ + 0x1c)) {
    case 0:
      local_14 = local_18;
      break;
    case 1:
    case 3:
      fVar10 = (float10)fpatan((float10)local_48,(float10)local_44);
      local_14 = (float)-fVar10;
      break;
    case 2:
      fVar10 = (float10)fpatan((float10)local_48,(float10)local_44);
      local_14 = (float)(-fVar10 - (float10)3.1415927f);
      break;
    default:
      FUN_00441740(&DAT_0066f580,s_ERROR___Unknown_Infantry_guide_s_0062d5ac);
    }
    *(float *)(*(int *)(this_ + 0x18) + 0x120) = local_14;
    if ((*(int *)(*(int *)(*(int *)(this_ + 0x18) + 0x13c) + 0x20) != 2) && (local_28 == 0)) {
      if ((1.0f < local_44 * local_44 + local_48 * local_48) &&
         (*(void **)(this_ + 0x20) != (void *)0x0)) {
        local_58 = *(float *)pCVar1;
        local_54 = *(float *)(this_ + 0xc);
        local_50 = *(float *)(this_ + 0x10);
        local_24 = (longlong)ROUND(local_58);
        local_4c = *(int *)(this_ + 0x14);
        uVar8 = *(int *)(this_ + 0x24) - (int)local_24;
        uVar9 = (int)uVar8 >> 0x1f;
        if ((int)((uVar8 ^ uVar9) - uVar9) < 2) {
          local_24 = (longlong)ROUND(local_54);
          uVar8 = *(int *)(this_ + 0x28) - (int)local_24 >> 0x1f;
          if ((int)((*(int *)(this_ + 0x28) - (int)local_24 ^ uVar8) - uVar8) < 2) goto LAB_004a0eb0;
        }
        iVar7 = *(int *)(this_ + 0x18);
        FUN_004bc2e0(bea_arg(*(void **)(this_ + 0x20)), bea_arg(*(undefined4 *)(iVar7 + 0x1c)), bea_arg(*(undefined4 *)(iVar7 + 0x20)), bea_arg(*(undefined4 *)(iVar7 + 0x24)), bea_arg(*(undefined4 *)(iVar7 + 0x28)), bea_arg(*(float *)pCVar1), bea_arg(*(undefined4 *)(this_ + 0xc)), bea_arg(*(undefined4 *)(this_ + 0x10)), bea_arg(*(undefined4 *)(this_ + 0x14)), bea_arg(1), bea_arg(this_ + 0x24));
      }
LAB_004a0eb0:
      if (*(int *)(this_ + 0x2c) != 0) {
        iVar7 = *(int *)(this_ + 0x18);
        (*(uint32_t*)((char*)&local_24 + 0)) = (int)(longlong)ROUND(*(float *)(iVar7 + 0x1c));
        local_1c = (int)local_24;
        iVar3 = *(int *)(this_ + 0x30);
        (*(uint32_t*)((char*)&local_24 + 0)) = (int)(longlong)ROUND(*(float *)(iVar7 + 0x20));
        (*(uint32_t*)((char*)&local_24 + 4)) = (int)local_24;
        if (0 < iVar3) {
          local_1c = (uint)*(byte *)(*(int *)(this_ + 0x34) + -1 + iVar3) * 2 + 1;
          (*(uint32_t*)((char*)&local_24 + 4)) = (uint)*(byte *)(*(int *)(this_ + 0x3c) + -1 + iVar3) * 2 + 1;
        }
        local_48 = (float)local_1c - *(float *)(iVar7 + 0x1c);
        local_44 = (float)(*(uint32_t*)((char*)&local_24 + 4)) - *(float *)(iVar7 + 0x20);
        local_40 = *(float *)(iVar7 + 0x24);
        fVar10 = (float10)fpatan((float10)local_48,(float10)local_44);
        fVar5 = local_44 * local_44 + local_48 * local_48;
        while (BEA_LOOP_GUARD((local_40 = -local_40, fVar5 < 0.5f))) {
          iVar7 = *(int *)(this_ + 0x30) + -1;
          *(int *)(this_ + 0x30) = iVar7;
          if (iVar7 < 1) {
            iVar7 = *(int *)(this_ + 0x18);
            local_48 = *(float *)pCVar1 - *(float *)(iVar7 + 0x1c);
            local_44 = *(float *)(this_ + 0xc) - *(float *)(iVar7 + 0x20);
            local_40 = *(float *)(this_ + 0x10) - *(float *)(iVar7 + 0x24);
            fVar10 = (float10)fpatan((float10)local_48,(float10)local_44);
            break;
          }
          if (0 < iVar7) {
            local_1c = (uint)*(byte *)(*(int *)(this_ + 0x34) + -1 + iVar7) * 2 + 1;
            (*(uint32_t*)((char*)&local_24 + 4)) = (uint)*(byte *)(*(int *)(this_ + 0x3c) + -1 + iVar7) * 2 + 1;
          }
          iVar7 = *(int *)(this_ + 0x18);
          local_48 = (float)local_1c - *(float *)(iVar7 + 0x1c);
          local_44 = (float)(*(uint32_t*)((char*)&local_24 + 4)) - *(float *)(iVar7 + 0x20);
          local_40 = *(float *)(iVar7 + 0x24);
          fVar10 = (float10)fpatan((float10)local_48,(float10)local_44);
          fVar5 = local_44 * local_44 + local_48 * local_48;
        }
        local_14 = (float)-fVar10;
        local_3c = local_4c;
        *(float *)(*(int *)(this_ + 0x18) + 0x120) = local_14;
        local_58 = local_48;
        local_54 = local_44;
        local_50 = local_40;
      }
    }
    fVar5 = local_44 * local_44 + local_48 * local_48;
    local_24 = CONCAT44(fVar5,(int)local_24);
    fVar6 = SQRT(local_44 * local_44 + local_40 * local_40 + local_48 * local_48);
    if (fVar6 != 0.0f) {
      fVar6 = 1.0f / fVar6;
      local_48 = fVar6 * local_48;
      local_44 = local_44 * fVar6;
      local_40 = local_40 * fVar6;
    }
    if (fVar5 < 0.01f) {
      *(undefined4 *)(this_ + 0x1c) = 0;
      uVar4 = rdtsc();
      iVar7 = (int)uVar4;
      goto LAB_004a11bf;
    }
    if ((-1.5707964f <= local_14) || (local_18 <= 1.5707964f)) {
      fVar6 = local_18;
      if ((1.5707964f < local_14) && (local_18 < -1.5707964f)) {
        fVar6 = local_18 + 6.2831855f;
      }
    }
    else {
      fVar6 = local_18 - 6.2831855f;
    }
    if ((0.2f < ABS(local_14 - fVar6)) && (fVar5 < 0.1f)) {
      uVar4 = rdtsc();
      iVar7 = (int)uVar4;
      goto LAB_004a11bf;
    }
    if ((*(int *)(this_ + 0x1c) != 3) || (local_28 != 0)) {
      extraout_ST0 = (float10)bea_vcall<float10>(*(int **)(this_ + 0x18), 0x1bc);
      fVar10 = extraout_ST0 * (float10)0.2f;
      iVar7 = *(int *)(this_ + 0x18);
      *(float *)(iVar7 + 0x14c) = (float)(fVar10 * (float10)*(float *)(iVar7 + 0x40));
      *(float *)(iVar7 + 0x150) = (float)(fVar10 * (float10)*(float *)(iVar7 + 0x50));
      *(float *)(iVar7 + 0x154) = (float)(fVar10 * (float10)*(float *)(iVar7 + 0x60));
      *(int *)(iVar7 + 0x158) = local_4c;
    }
  }
  else {
    bea_vcall<uint32_t>(piVar2, 0x100);
  }
  uVar4 = rdtsc();
  iVar7 = (int)uVar4;
LAB_004a11bf:
  DAT_00835944 = DAT_00835944 + (iVar7 - local_30);
  DAT_00835b14 = DAT_00835b14 + 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a0bc0, ap_004a0bc0));

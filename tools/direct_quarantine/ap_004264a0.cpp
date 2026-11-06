// auto-ported from 004264a0_vslot6.c (CCollisionSeekingThing::vslot6, 1105 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28 compile: garbled uStack_e8 declaration replaced by the store it stood for, auStack_e8[0] = 0 (mov [esp+0x74],ebx at 0x4266f1)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CCollisionSeekingThing;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__expected_a_mesh_collisi_00624730 ((char*)0x00624730)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_004264a0(CCollisionSeekingThing * this_, int *param_1)
{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  float *pfVar8;

  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  float &fStack_14c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x14c);
  float &fStack_148 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x148);
  float &fStack_144 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x144);
  undefined4 &uStack_140 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x140);
  uint &uStack_13c = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0x13c);
  uint &uStack_138 = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0x138);
  uint &uStack_134 = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0x134);
  float &fStack_130 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x130);
  float &fStack_12c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x12c);
  float &fStack_128 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x128);
  float &fStack_124 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x124);
  float &fStack_120 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x120);
  float &fStack_11c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x11c);
  float &fStack_118 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x118);
  undefined4 &uStack_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x114);
  int &iStack_110 = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0x110);
  float &fStack_10c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x10c);
  float &fStack_108 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x108);
  float &fStack_104 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x104);
  float &fStack_100 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x100);
  float &fStack_fc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xfc);
  float &fStack_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xf8);
  float &fStack_f4 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xf4);
  undefined4 &uStack_f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0xf0);
  int &iStack_ec = *reinterpret_cast<int *>(bea_frame_ + 0x150 - 0xec);
  undefined4 (&auStack_e8)[32] = *reinterpret_cast<undefined4 (*)[32]>(bea_frame_ + 0x150 - 0xe8);
  undefined4 &uStack_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x68);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x48);
  undefined4 &uStack_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x44);
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x40);
  undefined4 &uStack_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x20);
  uint &uStack_1c = *reinterpret_cast<uint *>(bea_frame_ + 0x150 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x18);
  if (((((((*(uint *)(this_ + 0xc) & 0x400) != 0) &&
         (iVar3 = param_1[2], *(int *)(this_ + 0x20) != iVar3)) && (param_1[8] != *(int *)(this_ + 8))
        ) && (((*(ushort *)(iVar3 + 0x2c) & 0x10) == 0 &&
              ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 0x10) == 0)))) &&
      (((*(ushort *)(iVar3 + 0x2c) & 4) == 0 ||
       (((*(uint *)(iVar3 + 0x34) & 0x100) == 0 ||
        (iVar3 = bea_vcall<uint32_t>(iVar3 + 8, 0x70), iVar3 != 0)))))) &&
     ((iVar3 = *(int *)(this_ + 8), (*(byte *)(iVar3 + 0x2c) & 4) == 0 ||
      (((*(uint *)(iVar3 + 0x34) & 0x100) == 0 ||
       (iVar3 = bea_vcall<uint32_t>(iVar3 + 8, 0x70), iVar3 != 0)))))) {
    uVar1 = param_1[3];
    uVar5 = *(uint *)(this_ + 0xc);
    uVar4 = uVar1 >> 6 & 3;
    uStack_134 = uVar5 >> 6 & 3;
    if (uVar4 <= uStack_134) {
      uStack_134 = uVar4;
    }
    uVar4 = uVar5 >> 2 & 3;
    uStack_13c = uVar1 & 3;
    if ((uVar1 & 3) < uVar4) {
      uStack_13c = uVar4;
    }
    uVar4 = uVar5 >> 4 & 3;
    if (uVar4 < uStack_13c) {
      uStack_13c = uVar4;
    }
    uVar4 = uVar1 >> 2 & 3;
    uStack_138 = uVar5 & 3;
    if ((uVar5 & 3) < uVar4) {
      uStack_138 = uVar4;
    }
    uVar5 = uVar1 >> 4 & 3;
    if (uVar5 < uStack_138) {
      uStack_138 = uVar5;
    }
    uVar5 = uStack_138;
    if (uStack_13c < 2) {
      piVar6 = (int *)bea_vcall<uint32_t>(this_, 0x1c);
    }
    else {
      piVar6 = *(int **)(this_ + 0x18);
      if ((uVar1 & 0x200) == 0x200) {
        piVar6[6] = 1;
      }
    }
    if (uVar5 < 2) {
      piVar7 = (int *)bea_vcall<uint32_t>(param_1, 0x1c);
    }
    else {
      piVar7 = (int *)param_1[6];
      if ((*(uint *)(this_ + 0xc) & 0x200) != 0) {
        piVar7[6] = 1;
      }
    }
    piVar2 = *(int **)(this_ + 8);
    iStack_110 = 0;
    fStack_14c = bea_fcast<float>(piVar2[7]) + bea_fcast<float>(piVar6[1]);
    fStack_148 = bea_fcast<float>(piVar6[2]) + bea_fcast<float>(piVar2[8]);
    fStack_144 = bea_fcast<float>(piVar6[3]) + bea_fcast<float>(piVar2[9]);
    uStack_114 = uStack_140;
    fStack_120 = fStack_14c;
    fStack_11c = fStack_148;
    fStack_118 = fStack_144;
    pfVar8 = (float *)bea_vcall<uint32_t>(piVar2, 0x64, &fStack_14c);
    fStack_130 = *pfVar8;
    fStack_12c = pfVar8[1];
    fStack_128 = pfVar8[2];
    fStack_124 = pfVar8[3];
    iStack_ec = 0;
    piVar2 = (int *)param_1[2];
    fStack_14c = bea_fcast<float>(piVar7[1]) + bea_fcast<float>(piVar2[7]);
    fStack_148 = bea_fcast<float>(piVar7[2]) + bea_fcast<float>(piVar2[8]);
    fStack_144 = bea_fcast<float>(piVar7[3]) + bea_fcast<float>(piVar2[9]);
    uStack_f0 = uStack_140;
    fStack_fc = fStack_14c;
    fStack_f8 = fStack_148;
    fStack_f4 = fStack_144;
    pfVar8 = (float *)bea_vcall<uint32_t>(piVar2, 0x64, &fStack_14c);
    fStack_10c = *pfVar8;
    fStack_108 = pfVar8[1];
    fStack_14c = fStack_10c - fStack_130;
    fStack_104 = pfVar8[2];
    fStack_100 = pfVar8[3];
    auStack_e8[0] = 0;
    uStack_68 = 0;
    uStack_40 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    uStack_1c = uStack_134;
    fStack_148 = fStack_108 - fStack_12c;
    fStack_144 = fStack_104 - fStack_128;
    uStack_44 = uStack_140;
    fStack_50 = fStack_14c;
    fStack_4c = fStack_148;
    fStack_48 = fStack_144;
    if ((uStack_13c == 2) && (uStack_138 == 2)) {
      iVar3 = bea_vcall<uint32_t>(piVar7, 0x18);
      if ((iVar3 != 3) || (iVar3 = bea_vcall<uint32_t>(piVar6, 0x18), iVar3 != 3)) {
        FUN_00441740(&DAT_0066f580,s_WARNING__expected_a_mesh_collisi_00624730);
        return;
      }
      if (*(float *)(this_ + 0x1c) <= bea_fcast<float>(param_1[7])) {
        piVar7[6] = 1;
        piVar6 = (int *)bea_vcall<uint32_t>(this_, 0x1c);
      }
      else {
        piVar6[6] = 1;
        piVar7 = (int *)bea_vcall<uint32_t>(param_1, 0x1c);
      }
    }
    iVar3 = bea_vcall<uint32_t>(piVar7, 0x14, &fStack_10c,&fStack_130,piVar6,auStack_e8);
    if (iVar3 != 0) {
      if (uStack_134 != 0) {
        if (((*(byte *)(*(int **)(this_ + 8) + 0xd) & 0x20) == 0) && (iStack_110 == 1)) {
          fStack_14c = fStack_120 - bea_fcast<float>(piVar6[1]);
          fStack_148 = fStack_11c - bea_fcast<float>(piVar6[2]);
          fStack_144 = fStack_118 - bea_fcast<float>(piVar6[3]);
          bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4c, &fStack_14c);
          bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x70, &fStack_130);
        }
        if (((*(byte *)((int *)param_1[2] + 0xd) & 0x20) == 0) && (iStack_ec == 1)) {
          fStack_14c = fStack_fc - bea_fcast<float>(piVar7[1]);
          fStack_148 = fStack_f8 - bea_fcast<float>(piVar7[2]);
          fStack_144 = fStack_f4 - bea_fcast<float>(piVar7[3]);
          bea_vcall<uint32_t>(param_1[2], 0x4c, &fStack_14c);
          bea_vcall<uint32_t>(param_1[2], 0x70, &fStack_10c);
        }
      }
      piVar6 = (int *)param_1[2];
      auStack_e8[0] = 1;
      bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x9c, piVar6,auStack_e8);
      bea_vcall<uint32_t>(piVar6, 0x9c, *(undefined4 *)(this_ + 8),auStack_e8);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004264a0, ap_004264a0));

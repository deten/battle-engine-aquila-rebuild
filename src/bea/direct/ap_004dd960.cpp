// auto-ported from 004dd960_vslot2.c (CRTTree::vslot2, 1639 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CRTTree;
typedef char fStack_180;
typedef char uStack_1ac;
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_006321a0 GLOBAL_AT(float, 0x006321a0)
#define DAT_0083cd58 GLOBAL_AT(char, 0x0083cd58)
#define DAT_009c65c0 GLOBAL_AT(undefined4, 0x009c65c0)
#define DAT_009c661c GLOBAL_AT(undefined4, 0x009c661c)
#define DAT_006fbe44 GLOBAL_AT(int, 0x006fbe44)
#define DAT_006fbe48 GLOBAL_AT(int, 0x006fbe48)
#define DAT_009c68fc GLOBAL_AT(char, 0x009c68fc)
#define DAT_009c68a0 GLOBAL_AT(char, 0x009c68a0)
#define DAT_009c6904 GLOBAL_AT(char, 0x009c6904)
#define DAT_009c68a8 GLOBAL_AT(int, 0x009c68a8)
#define DAT_009c68fd GLOBAL_AT(char, 0x009c68fd)
#define DAT_009c68a1 GLOBAL_AT(char, 0x009c68a1)
#define DAT_009c6905 GLOBAL_AT(char, 0x009c6905)
#define DAT_009c690c GLOBAL_AT(char, 0x009c690c)
#define DAT_006fbe54 GLOBAL_AT(int, 0x006fbe54)
#define DAT_009c68b6 GLOBAL_AT(char, 0x009c68b6)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef uint32_t (BEA_THISCALL* FUN_004901e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004901e0_t> FUN_004901e0 = {(FUN_004901e0_t)0x004901e0};
typedef uint32_t (BEA_CDECL* FUN_004b6260_t)(void *, void *, int, undefined4, int, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_004b6260_t> FUN_004b6260 = {(FUN_004b6260_t)0x004b6260};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};

static void BEA_THISCALL ap_004dd960(CRTTree * this_, undefined4 param_1)
{
  int *piVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;

  alignas(16) uint8_t bea_frame_[0x1f0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_1ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1ec);
  undefined4 &local_1e8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1e8);
  undefined4 &local_1e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1e4);
  undefined4 &local_1e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1e0);
  undefined4 &local_1dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1dc);
  undefined4 &local_1d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1d8);
  undefined4 &local_1d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1d4);
  undefined4 &local_1d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1d0);
  undefined4 &local_1cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1cc);
  undefined4 &local_1c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1c8);
  undefined4 uVar10;
  undefined1 *a1;
  ulonglong &uStack_1ac = *reinterpret_cast<ulonglong *>(bea_frame_ + 0x1f0 - 0x1ac);
  undefined4 &uStack_1a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1a4);
  undefined4 &uStack_1a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x1a0);
  undefined4 &uStack_19c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x19c);
  undefined4 &uStack_198 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x198);
  float &fStack_194 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x194);
  float &fStack_190 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x190);
  float &fStack_18c = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x18c);
  float &fStack_188 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x188);
  float &local_184 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x184);
  float &fStack_180 = *reinterpret_cast<float *>(bea_frame_ + 0x1f0 - 0x180);
  undefined4 &uStack_174 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x174);
  undefined1 (&auStack_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x170);
  undefined4 &uStack_160 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x160);
  undefined4 &uStack_15c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x15c);
  undefined4 &uStack_158 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x158);
  undefined4 &uStack_150 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x150);
  undefined4 &uStack_14c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x14c);
  undefined4 &uStack_148 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x148);
  undefined4 &uStack_144 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x144);
  undefined4 &uStack_140 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x140);
  undefined4 &uStack_13c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x13c);
  undefined4 &uStack_138 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x138);
  undefined4 &uStack_134 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x134);
  undefined4 &uStack_130 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x130);
  undefined4 &uStack_12c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x12c);
  undefined1 (&auStack_128)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x128);
  undefined4 &uStack_118 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x118);
  undefined1 (&auStack_114)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x114);
  undefined4 &uStack_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x104);
  undefined4 &uStack_100 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x100);
  undefined4 &uStack_fc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xfc);
  undefined4 &uStack_f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xf4);
  undefined4 &uStack_f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xf0);
  undefined4 &uStack_ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xec);
  undefined4 &uStack_e8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xe8);
  undefined4 &uStack_e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xe4);
  undefined4 &uStack_e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xe0);
  undefined4 &uStack_dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xdc);
  undefined4 &uStack_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xd8);
  undefined4 &uStack_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xd4);
  undefined4 &uStack_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xd0);
  undefined1 (&auStack_cc)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xcc);
  undefined4 &uStack_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xbc);
  undefined1 (&auStack_b8)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0xb8);
  undefined4 &uStack_a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xa8);
  undefined4 &uStack_a4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xa4);
  undefined4 &uStack_a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0xa0);
  undefined4 &uStack_98 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x98);
  undefined4 &uStack_94 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x94);
  undefined4 &uStack_90 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x90);
  undefined4 &uStack_8c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x8c);
  undefined4 &uStack_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x88);
  undefined4 &uStack_84 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x84);
  undefined4 &uStack_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x80);
  undefined4 &uStack_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x7c);
  undefined4 &uStack_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x78);
  undefined4 &uStack_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x1f0 - 0x74);
  undefined1 (&auStack_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1f0 - 0x70);
  undefined4 (&auStack_60)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x1f0 - 0x60);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1f0 - 0x30);
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_184);
  pfVar4 = (float *)bea_vcall<uint32_t>(*(undefined4 **)(this_ + 8), 0x0, &uStack_1a4);
  fStack_194 = *pfVar4;
  fStack_190 = pfVar4[1];
  local_184 = local_184 - fStack_194;
  fStack_18c = pfVar4[2];
  piVar1 = *(int **)(this_ + 8);
  fStack_188 = pfVar4[3];
  fStack_180 = fStack_180 - fStack_190;
  if (piVar1 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar1 + -2;
  }
  if ((((local_184 * local_184 + fStack_180 * fStack_180) - DAT_006321a0 * DAT_006321a0 <= 0.0f) ||
      (piVar7[0x12] != 0)) && ((char)DAT_0083cd58 == '\0')) {
    a1 = auStack_30;
    uVar10 = 0x4dda24;
    puVar5 = (undefined4 *)bea_vcall<uint32_t>(piVar1, 0x4, a1);
    fVar2 = fStack_190;
    puVar8 = puVar5;
    puVar9 = auStack_60;
    for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar8 = (undefined4 *)&local_1ec;
    for (iVar6 = 0xc; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(fStack_194), bea_arg(fVar2), bea_arg(fStack_18c), bea_arg(fStack_188), bea_arg(local_1ec), bea_arg(local_1e8), bea_arg(local_1e4), bea_arg(local_1e0), bea_arg(local_1dc), bea_arg(local_1d8), bea_arg(local_1d4), bea_arg(local_1d0), bea_arg(local_1cc), bea_arg(local_1c8), bea_arg(uVar10), bea_arg(a1));
    uStack_174 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    FUN_0044a5f0(bea_arg(auStack_170), bea_arg(0), bea_arg(0), bea_arg(0));
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    FUN_0044a5f0(bea_arg(auStack_128), bea_arg(0), bea_arg(0), bea_arg(0));
    uStack_bc = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_0044a5f0(bea_arg(auStack_b8), bea_arg(0), bea_arg(0), bea_arg(0));
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    FUN_0044a5f0(bea_arg(auStack_70), bea_arg(0), bea_arg(0), bea_arg(0));
    uStack_118 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    FUN_0044a5f0(bea_arg(auStack_114), bea_arg(0), bea_arg(0), bea_arg(0));
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    FUN_0044a5f0(bea_arg(auStack_cc), bea_arg(0), bea_arg(0), bea_arg(0));
    puVar5 = &DAT_009c65c0;
    puVar8 = &uStack_bc;
    for (iVar6 = 0x17; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = &DAT_009c661c;
    puVar8 = &uStack_118;
    for (iVar6 = 0x17; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0x3f800000;
    uStack_1ac = (ulonglong)(DAT_006fbe44 >> 0x10 & 0xff);
    FUN_004901e0(bea_arg(&uStack_174), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(uStack_198), bea_arg((float)uStack_1ac * 0.00390625f * 0.1f), bea_arg((float)(DAT_006fbe44 >> 8 & 0xff) * 0.00390625f * 0.1f), bea_arg((float)(DAT_006fbe44 & 0xff) * 0.00390625f * 0.1f));
    uVar3 = DAT_006fbe48;
    puVar5 = &uStack_174;
    puVar8 = &DAT_009c65c0;
    for (iVar6 = 0x17; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_1ac = (ulonglong)(uVar3 >> 0x10 & 0xff);
    uStack_19c = 0xbf800000;
    DAT_009c68fc = 1;
    DAT_009c68a0 = 1;
    DAT_009c6904 = 1;
    FUN_004901e0(bea_arg(&uStack_174), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(uStack_198), bea_arg((float)uStack_1ac * 0.00390625f), bea_arg((float)(uVar3 >> 8 & 0xff) * 0.00390625f), bea_arg((float)(uVar3 & 0xff) * 0.00390625f));
    puVar5 = &uStack_174;
    puVar8 = &DAT_009c661c;
    for (iVar6 = 0x17; BEA_LOOP_GUARD((uVar10 = DAT_009c68a8, iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    DAT_009c68fd = 1;
    DAT_009c68a1 = 1;
    DAT_009c6905 = 1;
    fVar2 = (float)(DAT_006fbe44 & 0xff) * 0.00390625f * 0.25f;
    DAT_009c690c = 1;
    (*(uint32_t*)((char*)&uStack_1ac + 0)) =
         (uint)(longlong)
               ROUND(((float)(DAT_006fbe54 >> 0x10 & 0xff) * 0.00390625f * 0.75f +
                     (float)(DAT_006fbe44 >> 0x10 & 0xff) * 0.00390625f * 0.25f) * 255.0f);
    iVar6 = (uint)uStack_1ac;
    uStack_1ac = (ulonglong)(DAT_006fbe54 >> 8 & 0xff);
    (*(uint32_t*)((char*)&uStack_1ac + 0)) =
         (uint)(longlong)ROUND(((float)uStack_1ac * 0.00390625f * 0.75f + fVar2) * 255.0f);
    uVar3 = (uint)uStack_1ac;
    uStack_1ac = (ulonglong)(DAT_006fbe54 & 0xff);
    (*(uint32_t*)((char*)&uStack_1ac + 0)) =
         (uint)(longlong)ROUND(((float)uStack_1ac * 0.00390625f * 0.75f + fVar2) * 255.0f);
    DAT_009c68a8 = (iVar6 << 8 | uVar3) << 8 | (uint)uStack_1ac;
    CFEPBEConfig__vslot7(bea_arg(1));
    FUN_004b6260(&fStack_194,auStack_60,*(undefined4 *)(this_ + 0x14),0,0,0,1,0);
    DAT_009c690c = 1;
    puVar5 = &uStack_bc;
    puVar8 = &DAT_009c65c0;
    DAT_009c68a8 = uVar10;
    for (iVar6 = 0x17; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    DAT_009c68fc = 1;
    puVar5 = &uStack_118;
    puVar8 = &DAT_009c661c;
    for (iVar6 = 0x17; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    DAT_009c68fd = 1;
    DAT_009c68b6 = 0;
    CFEPBEConfig__vslot7(bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd960, ap_004dd960));

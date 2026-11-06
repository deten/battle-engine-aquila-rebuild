// auto-ported from 004b4250_FUN_004b4250.c (FUN_004b4250, 2139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x220: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
#define s_Merging__s_into__s_00630114 ((char*)0x00630114)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004944b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004944b0_t> FUN_004944b0 = {(FUN_004944b0_t)0x004944b0};
typedef float10 (BEA_THISCALL* FUN_0049bc40_t)(uint32_t);
static const bea_guard<FUN_0049bc40_t> FUN_0049bc40 = {(FUN_0049bc40_t)0x0049bc40};
typedef uint32_t (BEA_THISCALL* FUN_0049bc80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049bc80_t> FUN_0049bc80 = {(FUN_0049bc80_t)0x0049bc80};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_004b4250(void * this_, void *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;

  alignas(16) uint8_t bea_frame_[0x220] = {};   // the original stack frame (emulate_frame)
  int &local_214 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x214);
  int &local_210 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x210);
  int &local_20c = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x20c);
  float &local_1f4 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1f4);
  float &local_1f0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1f0);
  float &local_1ec = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1ec);
  float &local_1e4 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1e4);
  float &local_1e0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1e0);
  float &local_1dc = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1dc);
  float &local_1d4 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1d4);
  float &local_1d0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1d0);
  float &local_1cc = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1cc);
  int &local_1c4 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x1c4);
  int &local_1c0 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x1c0);
  float &local_1bc = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1bc);
  float &local_1b8 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1b8);
  float &local_1b4 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1b4);
  float &local_1b0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1b0);
  int &local_1ac = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x1ac);
  int &local_1a8 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x1a8);
  int &local_1a4 = *reinterpret_cast<int *>(bea_frame_ + 0x220 - 0x1a4);
  float &local_1a0 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x1a0);
  float &local_19c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x19c);
  float &local_198 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x198);
  float &local_190 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x190);
  float &local_18c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x18c);
  float &local_188 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x188);
  float &local_180 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x180);
  float &local_17c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x17c);
  float &local_178 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x178);
  float &local_170 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x170);
  float &local_16c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x16c);
  float &local_168 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x168);
  float &local_15c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x15c);
  float &local_158 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x158);
  float &local_150 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x150);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x14c);
  float &local_148 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x148);
  float &local_13c = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x13c);
  float &local_138 = *reinterpret_cast<float *>(bea_frame_ + 0x220 - 0x138);
  undefined1 (&local_130)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x220 - 0x130);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x220 - 0x100);
  FUN_0055de9b(local_100,s_Merging__s_into__s_00630114,(char *)((int)param_1 + 0xdc),
               (char *)((int)this_ + 0xdc));
  CRenderThing__vslot3(local_100);
  local_1a4 = *(int *)((int)this_ + 0xac) + *(int *)((int)param_1 + 0xac);
  local_1ac = *(int *)((int)this_ + 0xb0) + *(int *)((int)param_1 + 0xb0);
  iVar13 = *(int *)((int)this_ + 0xa8) + *(int *)((int)param_1 + 0xa8);
  local_1a8 = iVar13;
  local_1c4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(local_1a4 * 0x10), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xcab));
  if (local_1c4 == 0) {
    local_1c4 = 0;
  }
  local_20c = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar13 * 0x60), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xcae));
  if (local_20c == 0) {
    local_20c = 0;
  }
  iVar13 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(local_1ac * 0xc), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xcb1));
  iVar7 = 0;
  local_210 = 0;
  if (0 < *(int *)((int)this_ + 0xac)) {
    do {
      puVar12 = (undefined4 *)(**(int **)((int)this_ + 0x84) + iVar7);
      puVar10 = (undefined4 *)(local_1c4 + iVar7);
      iVar7 = iVar7 + 0x10;
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      puVar10[2] = puVar12[2];
      puVar10[3] = puVar12[3];
      local_210 = local_210 + 1;
    } while (BEA_LOOP_GUARD((local_210 < *(int *)((int)this_ + 0xac))));
  }
  iVar7 = 0;
  if (0 < *(int *)((int)this_ + 0xa8)) {
    iVar8 = 0;
    do {
      iVar7 = iVar7 + 1;
      puVar10 = (undefined4 *)(iVar8 + *(int *)((int)this_ + 0x134));
      puVar12 = (undefined4 *)(local_20c + iVar8);
      for (iVar11 = 0x18; BEA_LOOP_GUARD((iVar11 != 0)); iVar11 = iVar11 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      iVar8 = iVar8 + 0x60;
    } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_ + 0xa8))));
  }
  local_210 = 0;
  if (0 < *(int *)((int)this_ + 0xb0)) {
    iVar7 = 0;
    piVar14 = (int *)(iVar13 + 8);
    do {
      piVar14[-2] = ((*(int *)(iVar7 + *(int *)((int)this_ + 0x80)) - *(int *)((int)this_ + 0x134)) /
                    0x60) * 0x60 + local_20c;
      piVar14[-1] = ((*(int *)(iVar7 + 4 + *(int *)((int)this_ + 0x80)) - *(int *)((int)this_ + 0x134)
                     ) / 0x60) * 0x60 + local_20c;
      local_210 = local_210 + 1;
      *piVar14 = ((*(int *)(iVar7 + 8 + *(int *)((int)this_ + 0x80)) - *(int *)((int)this_ + 0x134)) /
                 0x60) * 0x60 + local_20c;
      iVar7 = iVar7 + 0xc;
      piVar14 = piVar14 + 3;
    } while (BEA_LOOP_GUARD((local_210 < *(int *)((int)this_ + 0xb0))));
  }
  FUN_004b0fb0(bea_arg(param_1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(&local_1a0), bea_arg(&local_170), bea_arg(1), bea_arg(0), bea_arg(1));
  FUN_004b0fb0(bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(local_130), bea_arg(&local_150), bea_arg(1), bea_arg(0), bea_arg(1));
  iVar7 = 0;
  if (0 < *(int *)((int)param_1 + 0xac)) {
    local_210 = 0;
    do {
      pfVar9 = (float *)(**(int **)((int)param_1 + 0x84) + local_210);
      local_13c = local_18c * pfVar9[1] + local_188 * pfVar9[2] + local_190 * *pfVar9;
      local_138 = local_17c * pfVar9[1] + local_178 * pfVar9[2] + local_180 * *pfVar9;
      local_15c = local_16c + local_13c;
      local_158 = local_168 + local_138;
      fVar2 = (local_1a0 * *pfVar9 + local_19c * pfVar9[1] + local_198 * pfVar9[2] + local_170) -
              local_150;
      fVar3 = local_15c - local_14c;
      fVar4 = local_158 - local_148;
      FUN_0049bc80(bea_arg(local_130), bea_arg(&local_1f4));
      fVar6 = local_1d0;
      fVar5 = local_1e4;
      fVar1 = local_1ec;
      local_1e4 = local_1f0;
      local_1ec = local_1d4;
      local_1d4 = fVar1;
      local_1f0 = fVar5;
      local_1d0 = local_1dc;
      local_1dc = fVar6;
      fVar15 = (float10)FUN_0049bc40(bea_arg(local_130));
      fVar1 = (float)fVar15;
      local_1f4 = local_1f4 / fVar1;
      local_1f0 = local_1f0 / fVar1;
      local_1ec = local_1ec / fVar1;
      FUN_004944b0(bea_arg(&local_1e4), bea_arg(fVar1));
      FUN_004944b0(bea_arg(&local_1d4), bea_arg(fVar1));
      local_1bc = local_1f0 * fVar3 + local_1ec * fVar4 + local_1f4 * fVar2;
      pfVar9 = (float *)((*(int *)((int)this_ + 0xac) + iVar7) * 0x10 + local_1c4);
      iVar7 = iVar7 + 1;
      *pfVar9 = local_1bc;
      local_1b8 = local_1e0 * fVar3 + local_1dc * fVar4 + local_1e4 * fVar2;
      pfVar9[1] = local_1b8;
      local_1b4 = local_1d0 * fVar3 + local_1cc * fVar4 + local_1d4 * fVar2;
      pfVar9[2] = local_1b4;
      pfVar9[3] = local_1b0;
      local_210 = local_210 + 0x10;
    } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)param_1 + 0xac))));
  }
  local_210 = 0;
  if (0 < *(int *)((int)param_1 + 0xa8)) {
    local_1c0 = 0;
    do {
      puVar10 = (undefined4 *)(*(int *)((int)param_1 + 0x134) + local_1c0);
      puVar12 = (undefined4 *)((*(int *)((int)this_ + 0xa8) + local_210) * 0x60 + local_20c);
      for (iVar7 = 0x18; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      pfVar9 = (float *)((*(int *)((int)this_ + 0xa8) + local_210) * 0x60 + local_20c);
      fVar2 = local_198 * pfVar9[2] + local_1a0 * *pfVar9 + local_19c * pfVar9[1];
      fVar3 = local_190 * *pfVar9 + local_188 * pfVar9[2] + local_18c * pfVar9[1];
      fVar4 = local_180 * *pfVar9 + local_178 * pfVar9[2] + local_17c * pfVar9[1];
      FUN_0049bc80(bea_arg(local_130), bea_arg(&local_1f4));
      fVar6 = local_1d0;
      fVar5 = local_1e4;
      fVar1 = local_1ec;
      local_1e4 = local_1f0;
      local_1ec = local_1d4;
      local_1d4 = fVar1;
      local_1f0 = fVar5;
      local_1d0 = local_1dc;
      local_1dc = fVar6;
      fVar15 = (float10)FUN_0049bc40(bea_arg(local_130));
      fVar1 = (float)fVar15;
      local_1f4 = local_1f4 / fVar1;
      local_1f0 = local_1f0 / fVar1;
      local_1ec = local_1ec / fVar1;
      local_1e4 = local_1e4 / fVar1;
      local_1e0 = local_1e0 / fVar1;
      local_1dc = local_1dc / fVar1;
      FUN_004944b0(bea_arg(&local_1d4), bea_arg(fVar1));
      local_1bc = local_1f0 * fVar3 + local_1ec * fVar4 + local_1f4 * fVar2;
      pfVar9 = (float *)((*(int *)((int)this_ + 0xa8) + local_210) * 0x60 + local_20c);
      local_1b8 = local_1e0 * fVar3 + local_1dc * fVar4 + local_1e4 * fVar2;
      *pfVar9 = local_1bc;
      local_1b4 = local_1d4 * fVar2 + local_1d0 * fVar3 + local_1cc * fVar4;
      pfVar9[1] = local_1b8;
      pfVar9[2] = local_1b4;
      pfVar9[3] = local_1b0;
      iVar7 = (*(int *)((int)this_ + 0xa8) + local_210) * 0x60;
      local_210 = local_210 + 1;
      *(int *)(iVar7 + 0x20 + local_20c) =
           *(int *)(iVar7 + 0x20 + local_20c) + *(int *)((int)this_ + 0xac);
      local_1c0 = local_1c0 + 0x60;
    } while (BEA_LOOP_GUARD((local_210 < *(int *)((int)param_1 + 0xa8))));
  }
  iVar7 = 0;
  if (0 < *(int *)((int)param_1 + 0xb0)) {
    local_214 = 0;
    do {
      *(int *)(iVar13 + (*(int *)((int)this_ + 0xb0) + iVar7) * 0xc) =
           ((*(int *)(local_214 + *(int *)((int)param_1 + 0x80)) - *(int *)((int)param_1 + 0x134)) /
            0x60 + *(int *)((int)this_ + 0xa8)) * 0x60 + local_20c;
      *(int *)(iVar13 + 4 + (*(int *)((int)this_ + 0xb0) + iVar7) * 0xc) =
           ((*(int *)(local_214 + 4 + *(int *)((int)param_1 + 0x80)) -
            *(int *)((int)param_1 + 0x134)) / 0x60 + *(int *)((int)this_ + 0xa8)) * 0x60 + local_20c;
      iVar8 = *(int *)((int)this_ + 0xb0) + iVar7;
      iVar7 = iVar7 + 1;
      *(int *)(iVar13 + 8 + iVar8 * 0xc) =
           ((*(int *)(local_214 + 8 + *(int *)((int)param_1 + 0x80)) -
            *(int *)((int)param_1 + 0x134)) / 0x60 + *(int *)((int)this_ + 0xa8)) * 0x60 + local_20c;
      local_214 = local_214 + 0xc;
    } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)param_1 + 0xb0))));
  }
  *(int *)((int)this_ + 0xac) = local_1a4;
  *(int *)((int)this_ + 0xa8) = local_1a8;
  *(int *)((int)this_ + 0xb0) = local_1ac;
  *(int *)((int)this_ + 0x134) = local_20c;
  **(int **)((int)this_ + 0x84) = local_1c4;
  *(int *)((int)this_ + 0x80) = iVar13;
  return *(uint32_t*)((char*)this_ + 0x80);
  return *(uint32_t*)((char*)this_ + 0x80);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004b4250.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

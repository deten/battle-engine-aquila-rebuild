// auto-ported from 004b31f0_FUN_004b31f0.c (FUN_004b31f0, 2418 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00704dac GLOBAL_AT(int, 0x00704dac)
#define DAT_00704db0 GLOBAL_AT(int, 0x00704db0)
#define s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70 ((char*)0x0062fe70)
#define s_Total_polys_saved____d_of__d_006300bc ((char*)0x006300bc)
#define s_Part__s_removed__d_of__d_verts_006300f4 ((char*)0x006300f4)
#define s_Removed__d_of__d_polys_006300dc ((char*)0x006300dc)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004b31f0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;

  alignas(16) uint8_t bea_frame_[0x1a0] = {};   // the original stack frame (emulate_frame)
  int &local_198 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x198);
  int &local_194 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x194);
  int * &local_190 = *reinterpret_cast<int * *>(bea_frame_ + 0x1a0 - 0x190);
  int &local_18c = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x18c);
  int * &local_188 = *reinterpret_cast<int * *>(bea_frame_ + 0x1a0 - 0x188);
  int * &local_184 = *reinterpret_cast<int * *>(bea_frame_ + 0x1a0 - 0x184);
  int &local_180 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x180);
  int &local_17c = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x17c);
  int &local_178 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x178);
  int &local_174 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x174);
  int * &local_16c = *reinterpret_cast<int * *>(bea_frame_ + 0x1a0 - 0x16c);
  int &local_168 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x168);
  int &local_164 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x164);
  int &local_160 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x160);
  int &local_15c = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x15c);
  float &local_158 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x158);
  int &local_154 = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x154);
  float &local_150 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x150);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x14c);
  float &local_148 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x148);
  float &local_144 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x144);
  int &local_13c = *reinterpret_cast<int *>(bea_frame_ + 0x1a0 - 0x13c);
  float &local_138 = *reinterpret_cast<float *>(bea_frame_ + 0x1a0 - 0x138);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x1a0 - 0x100);
  iVar15 = *(int *)((int)this_ + 0xac);
  if (0x1f < iVar15) {
    local_13c = 0;
    local_154 = 0;
    local_138 = 0.2;
    if (300 < iVar15) {
      local_138 = 0.3;
    }
    piVar6 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar15 << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xb4d));
    piVar7 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xb0) << 2), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_MeshPart_cpp_0062fe70), bea_arg(0xb4f));
    local_174 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      local_164 = 1;
      local_15c = 0;
      local_18c = 0x10;
      do {
        iVar16 = 0;
        local_198 = 0;
        local_178 = 0;
        local_188 = (int *)0x0;
        local_184 = piVar6;
        local_16c = piVar7;
        if (0 < *(int *)((int)this_ + 0xb0)) {
          do {
            piVar8 = (int *)(*(int *)((int)this_ + 0x80) + iVar16);
            if (((*(int *)(*piVar8 + 0x20) == local_174) ||
                (*(int *)(piVar8[1] + 0x20) == local_174)) ||
               (*(int *)(piVar8[2] + 0x20) == local_174)) {
              local_178 = local_178 + 1;
              *local_16c = (int)local_188;
              local_16c = local_16c + 1;
              iVar17 = iVar16 + *(int *)((int)this_ + 0x80);
              iVar14 = *(int *)(*(int *)(iVar16 + *(int *)((int)this_ + 0x80)) + 0x20);
              bVar18 = iVar14 == local_174;
              iVar9 = *(int *)(*(int *)(iVar17 + 4) + 0x20);
              iVar17 = *(int *)(*(int *)(iVar17 + 8) + 0x20);
              bVar19 = iVar9 == local_174;
              bVar20 = iVar17 == local_174;
              if (0 < local_198) {
                local_168 = local_198;
                local_190 = piVar6;
                do {
                  iVar12 = *local_190;
                  if (iVar12 == iVar14) {
                    bVar18 = true;
                  }
                  if (iVar12 == iVar9) {
                    bVar19 = true;
                  }
                  if (iVar12 == iVar17) {
                    bVar20 = true;
                  }
                  local_190 = local_190 + 1;
                  local_168 = local_168 + -1;
                } while (BEA_LOOP_GUARD((local_168 != 0)));
              }
              if (!bVar18) {
                *local_184 = iVar14;
                local_198 = local_198 + 1;
                local_184 = local_184 + 1;
              }
              if (!bVar19) {
                *local_184 = *(int *)(*(int *)(iVar16 + 4 + *(int *)((int)this_ + 0x80)) + 0x20);
                local_198 = local_198 + 1;
                local_184 = local_184 + 1;
              }
              if (!bVar20) {
                *local_184 = *(int *)(*(int *)(iVar16 + 8 + *(int *)((int)this_ + 0x80)) + 0x20);
                local_198 = local_198 + 1;
                local_184 = local_184 + 1;
              }
            }
            local_188 = (int *)((int)local_188 + 1);
            iVar16 = iVar16 + 0xc;
          } while (BEA_LOOP_GUARD(((int)local_188 < *(int *)((int)this_ + 0xb0))));
        }
        bVar19 = true;
        local_188 = piVar6;
        local_180 = local_198;
        if (0 < local_198) {
          do {
            local_190 = (int *)0x0;
            if (local_178 < 1) {
LAB_004b34a3:
              bVar19 = false;
            }
            else {
              iVar16 = *local_188;
              piVar8 = piVar7;
              iVar17 = local_178;
              do {
                iVar14 = *(int *)((int)this_ + 0x80) + *piVar8 * 0xc;
                if (((*(int *)(*(int *)(*(int *)((int)this_ + 0x80) + *piVar8 * 0xc) + 0x20) ==
                      iVar16) || (*(int *)(*(int *)(iVar14 + 4) + 0x20) == iVar16)) ||
                   (*(int *)(*(int *)(iVar14 + 8) + 0x20) == iVar16)) {
                  local_190 = (int *)((int)local_190 + 1);
                }
                piVar8 = piVar8 + 1;
                iVar17 = iVar17 + -1;
              } while (BEA_LOOP_GUARD((iVar17 != 0)));
              if ((int)local_190 < 2) goto LAB_004b34a3;
            }
            local_180 = local_180 + -1;
            local_188 = local_188 + 1;
          } while (BEA_LOOP_GUARD((local_180 != 0)));
        }
        if (((int)(iVar15 + (iVar15 >> 0x1f & 3U)) >> 2 <= *(int *)((int)this_ + 0xac)) && (bVar19))
        {
          piVar8 = (int *)0xffffffff;
          local_160 = -1;
          local_158 = 1.0f;
          local_188 = (int *)0x0;
          if (0 < local_198) {
            iVar16 = **(int **)((int)this_ + 0x84);
            local_16c = piVar6;
            do {
              iVar17 = *local_16c;
              local_150 = 0.0f;
              if (0 < local_178) {
                local_17c = local_178;
                local_184 = piVar7;
                do {
                  iVar14 = *(int *)((int)this_ + 0x80) + *local_184 * 0xc;
                  iVar12 = *(int *)(*(int *)(iVar14 + 4) + 0x20) * 0x10;
                  iVar9 = *(int *)(*(int *)(*(int *)((int)this_ + 0x80) + *local_184 * 0xc) + 0x20) *
                          0x10;
                  fVar1 = *(float *)(iVar12 + iVar16) - *(float *)(iVar9 + iVar16);
                  fVar3 = *(float *)(iVar12 + 4 + iVar16) - *(float *)(iVar9 + 4 + iVar16);
                  pfVar10 = (float *)(iVar9 + iVar16);
                  fVar2 = *(float *)(iVar12 + iVar16 + 8) - pfVar10[2];
                  pfVar13 = (float *)(*(int *)(*(int *)(iVar14 + 8) + 0x20) * 0x10 + iVar16);
                  local_14c = (pfVar13[1] - pfVar10[1]) * fVar2 - (pfVar13[2] - pfVar10[2]) * fVar3;
                  local_148 = (pfVar13[2] - pfVar10[2]) * fVar1 - fVar2 * (*pfVar13 - *pfVar10);
                  local_144 = fVar3 * (*pfVar13 - *pfVar10) - (pfVar13[1] - pfVar10[1]) * fVar1;
                  fVar1 = SQRT(local_144 * local_144 + local_148 * local_148 + local_14c * local_14c
                              );
                  if (fVar1 != 0.0f) {
                    fVar1 = 1.0f / fVar1;
                    local_14c = local_14c * fVar1;
                    local_148 = local_148 * fVar1;
                    local_144 = local_144 * fVar1;
                  }
                  fVar1 = 1.0f;
                  local_190 = (int *)0x0;
                  local_180 = local_178;
                  piVar8 = piVar7;
                  do {
                    iVar9 = *(int *)(*(int *)(*(int *)((int)this_ + 0x80) + *piVar8 * 0xc) + 0x20);
                    iVar14 = *(int *)((int)this_ + 0x80) + *piVar8 * 0xc;
                    if (((iVar9 == iVar17) || (*(int *)(*(int *)(iVar14 + 4) + 0x20) == iVar17)) ||
                       (*(int *)(*(int *)(iVar14 + 8) + 0x20) == iVar17)) {
                      pfVar10 = (float *)(iVar9 * 0x10 + iVar16);
                      pfVar13 = (float *)(*(int *)(*(int *)(iVar14 + 4) + 0x20) * 0x10 + iVar16);
                      iVar14 = *(int *)(*(int *)(iVar14 + 8) + 0x20) * 0x10;
                      fVar4 = *(float *)(iVar14 + iVar16) - *pfVar10;
                      iVar14 = iVar14 + iVar16;
                      fVar5 = *(float *)(iVar14 + 4) - pfVar10[1];
                      fVar3 = *(float *)(iVar14 + 8) - pfVar10[2];
                      fVar2 = fVar5 * (pfVar13[2] - pfVar10[2]) - fVar3 * (pfVar13[1] - pfVar10[1]);
                      fVar3 = fVar3 * (*pfVar13 - *pfVar10) - (pfVar13[2] - pfVar10[2]) * fVar4;
                      fVar4 = (pfVar13[1] - pfVar10[1]) * fVar4 - fVar5 * (*pfVar13 - *pfVar10);
                      fVar5 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
                      if (fVar5 != 0.0f) {
                        fVar5 = 1.0f / fVar5;
                        fVar2 = fVar2 * fVar5;
                        fVar3 = fVar3 * fVar5;
                        fVar4 = fVar4 * fVar5;
                      }
                      fVar2 = (1.0f - (fVar3 * local_148 + fVar4 * local_144 + fVar2 * local_14c)) *
                              0.5f;
                      if (fVar2 < fVar1) {
                        fVar1 = fVar2;
                      }
                      local_190 = (int *)((int)local_190 + 1);
                    }
                    piVar8 = piVar8 + 1;
                    local_180 = local_180 + -1;
                  } while (BEA_LOOP_GUARD((local_180 != 0)));
                  if (local_190 == (int *)0x1) {
                    fVar1 = 1.0f;
                  }
                  if (local_150 < fVar1) {
                    local_150 = fVar1;
                  }
                  local_184 = local_184 + 1;
                  local_17c = local_17c + -1;
                  piVar8 = (int *)local_160;
                } while (BEA_LOOP_GUARD((local_17c != 0)));
              }
              iVar17 = iVar17 * 0x10;
              fVar1 = *(float *)(local_15c + iVar16) - *(float *)(iVar17 + iVar16);
              fVar3 = *(float *)(local_15c + 4 + iVar16) - *(float *)(iVar17 + 4 + iVar16);
              fVar2 = *(float *)(local_15c + 8 + iVar16) - *(float *)(iVar17 + iVar16 + 8);
              fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
              if (fVar1 < 1.0f) {
                fVar1 = 1.0f;
              }
              if (fVar1 * local_150 < local_158) {
                piVar8 = local_188;
                local_160 = (int)local_188;
                local_158 = fVar1 * local_150;
              }
              local_188 = (int *)((int)local_188 + 1);
              local_16c = local_16c + 1;
            } while (BEA_LOOP_GUARD(((int)local_188 < local_198)));
          }
          if ((local_158 < local_138) && (piVar8 != (int *)0xffffffff)) {
            local_13c = local_13c + 1;
            iVar16 = 0;
            if (0 < *(int *)((int)this_ + 0xa8)) {
              iVar17 = 0;
              do {
                if (*(int *)(*(int *)((int)this_ + 0x134) + 0x20 + iVar17) == local_174) {
                  *(int *)(*(int *)((int)this_ + 0x134) + 0x20 + iVar17) = piVar6[(int)piVar8];
                }
                iVar14 = *(int *)(*(int *)((int)this_ + 0x134) + 0x20 + iVar17);
                if (local_174 < iVar14) {
                  *(int *)(*(int *)((int)this_ + 0x134) + 0x20 + iVar17) = iVar14 + -1;
                }
                iVar16 = iVar16 + 1;
                iVar17 = iVar17 + 0x60;
              } while (BEA_LOOP_GUARD((iVar16 < *(int *)((int)this_ + 0xa8))));
            }
            iVar16 = local_164;
            iVar17 = local_18c;
            if (local_164 < *(int *)((int)this_ + 0xac)) {
              do {
                puVar11 = (undefined4 *)(**(int **)((int)this_ + 0x84) + iVar17);
                iVar16 = iVar16 + 1;
                puVar11[-4] = *puVar11;
                puVar11[-3] = puVar11[1];
                puVar11[-2] = puVar11[2];
                puVar11[-1] = puVar11[3];
                iVar17 = iVar17 + 0x10;
              } while (BEA_LOOP_GUARD((iVar16 < *(int *)((int)this_ + 0xac))));
            }
            local_174 = local_174 + -1;
            *(int *)((int)this_ + 0xac) = *(int *)((int)this_ + 0xac) + -1;
            local_15c = local_15c + -0x10;
            local_164 = local_164 + -1;
            local_18c = local_18c + -0x10;
          }
        }
        local_15c = local_15c + 0x10;
        local_18c = local_18c + 0x10;
        local_174 = local_174 + 1;
        local_164 = local_164 + 1;
      } while (BEA_LOOP_GUARD((local_174 < *(int *)((int)this_ + 0xac))));
    }
    if (piVar6 != (int *)0x0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar6));
    }
    if (piVar7 != (int *)0x0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar7));
    }
    iVar15 = *(int *)((int)this_ + 0xb0);
    local_18c = 0;
    if (0 < iVar15) {
      iVar17 = 1;
      iVar16 = 0;
      local_194 = 0xc;
      do {
        iVar14 = *(int *)((int)this_ + 0x80);
        iVar9 = *(int *)(*(int *)(iVar14 + 4 + iVar16) + 0x20);
        iVar12 = *(int *)(*(int *)(iVar14 + iVar16) + 0x20);
        if (((iVar12 == iVar9) ||
            (iVar14 = *(int *)(*(int *)(iVar14 + iVar16 + 8) + 0x20), iVar12 == iVar14)) ||
           (iVar9 == iVar14)) {
          local_154 = local_154 + 1;
          iVar14 = local_194;
          iVar9 = iVar17;
          if (iVar17 < iVar15) {
            do {
              puVar11 = (undefined4 *)(*(int *)((int)this_ + 0x80) + iVar14);
              puVar11[-3] = *puVar11;
              iVar15 = *(int *)((int)this_ + 0x80) + iVar14;
              *(undefined4 *)(iVar15 + -8) = *(undefined4 *)(iVar15 + 4);
              iVar15 = *(int *)((int)this_ + 0x80) + iVar14;
              iVar9 = iVar9 + 1;
              *(undefined4 *)(iVar15 + -4) = *(undefined4 *)(iVar15 + 8);
              iVar14 = iVar14 + 0xc;
            } while (BEA_LOOP_GUARD((iVar9 < *(int *)((int)this_ + 0xb0))));
          }
          local_18c = local_18c + -1;
          *(int *)((int)this_ + 0xb0) = *(int *)((int)this_ + 0xb0) + -1;
          iVar16 = iVar16 + -0xc;
          iVar17 = iVar17 + -1;
          local_194 = local_194 + -0xc;
        }
        iVar15 = *(int *)((int)this_ + 0xb0);
        local_18c = local_18c + 1;
        iVar16 = iVar16 + 0xc;
        iVar17 = iVar17 + 1;
        local_194 = local_194 + 0xc;
      } while (BEA_LOOP_GUARD((local_18c < iVar15)));
    }
    FUN_0055de9b(local_100,s_Part__s_removed__d_of__d_verts_006300f4,(char *)((int)this_ + 0xdc),
                 local_13c,*(int *)((int)this_ + 0xa8));
    CRenderThing__vslot3(local_100);
    FUN_0055de9b(local_100,s_Removed__d_of__d_polys_006300dc,local_154,*(int *)((int)this_ + 0xb0));
    CRenderThing__vslot3(local_100);
    DAT_00704dac = DAT_00704dac + local_154;
    DAT_00704db0 = DAT_00704db0 + *(int *)((int)this_ + 0xb0);
    FUN_0055de9b(local_100,s_Total_polys_saved____d_of__d_006300bc,DAT_00704dac,DAT_00704db0);
    CRenderThing__vslot3(local_100);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b31f0, ap_004b31f0));

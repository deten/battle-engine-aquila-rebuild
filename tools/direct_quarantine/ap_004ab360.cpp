// auto-ported from 004ab360_FUN_004ab360.c (FUN_004ab360, 2559 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x2a0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00704af0 GLOBAL_AT(int, 0x00704af0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00704af4 GLOBAL_AT(int, 0x00704af4)
#define s_OptimiseParts___removed__d_of__d_0062fdb8 ((char*)0x0062fdb8)
#define s_Nexus_0062fdfc ((char*)0x0062fdfc)
#define s_Optimising_mesh__s_parts_0062fe04 ((char*)0x0062fe04)
#define s_Removing_part__s_0062fde8 ((char*)0x0062fde8)
#define s_C__dev_ONSLAUGHT2_mesh_cpp_0062f8e8 ((char*)0x0062f8e8)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004b4250_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b4250_t> FUN_004b4250 = {(FUN_004b4250_t)0x004b4250};
typedef undefined4 (BEA_CDECL* FUN_004bae70_t)(uint32_t);
static const bea_guard<FUN_004bae70_t> FUN_004bae70 = {(FUN_004bae70_t)0x004bae70};
typedef undefined4 (BEA_CDECL* FUN_004bb040_t)(uint32_t);
static const bea_guard<FUN_004bb040_t> FUN_004bb040 = {(FUN_004bb040_t)0x004bb040};
typedef bool (BEA_CDECL* FUN_004bb210_t)(uint32_t);
static const bea_guard<FUN_004bb210_t> FUN_004bb210 = {(FUN_004bb210_t)0x004bb210};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_THISCALL ap_004ab360(void * this_)
{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  bool bVar16;
  alignas(16) uint8_t bea_frame_[0x2a0] = {};   // the original stack frame (emulate_frame)
  int &local_298 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x298);
  int &local_294 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x294);
  int * &local_290 = *reinterpret_cast<int * *>(bea_frame_ + 0x2a0 - 0x290);
  int &local_28c = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x28c);
  int &local_288 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x288);
  int &local_284 = *reinterpret_cast<int *>(bea_frame_ + 0x2a0 - 0x284);
  float &local_274 = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x274);
  float (&local_240)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x2a0 - 0x240);
  float &local_230 = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x230);
  float &local_22c = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x22c);
  float &local_228 = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x228);
  float &local_220 = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x220);
  float &local_21c = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x21c);
  float &local_218 = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x218);
  float &local_20c = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x20c);
  float &local_208 = *reinterpret_cast<float *>(bea_frame_ + 0x2a0 - 0x208);
  undefined1 (&local_200)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x2a0 - 0x200);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x2a0 - 0x100);
  DAT_00704af0 = DAT_00704af0 + *(int *)((int)this_ + 0x15c);
  FUN_0055de9b(local_200,s_Optimising_mesh__s_parts_0062fe04,(char *)((int)this_ + 0x24));
  CRenderThing__vslot3(local_200);
  iVar5 = *(int *)((int)this_ + 0x15c);
  local_288 = 0;
  if (0 < iVar5) {
    local_298 = 0;
    do {
      local_294 = 0;
      if (0 < iVar5) {
        do {
          iVar5 = *(int *)((int)this_ + 0x160);
          if (((*(int *)(*(int *)(local_298 + iVar5) + 0x8c) == 1) &&
              (iVar7 = *(int *)(iVar5 + local_294 * 4), *(int *)(iVar7 + 0x8c) == 1)) &&
             (local_288 != local_294)) {
            iVar5 = *(int *)(local_298 + iVar5);
            if ((*(int *)(iVar5 + 0xbc) == 1) || (*(int *)(iVar7 + 0xbc) == 1)) {
              bVar4 = false;
              for (; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = *(int *)(iVar5 + 0x98)) {
                for (iVar7 = *(int *)(*(int *)((int)this_ + 0x160) + local_294 * 4); BEA_LOOP_GUARD((iVar7 != 0));
                    iVar7 = *(int *)(iVar7 + 0x98)) {
                  if (iVar5 == iVar7) {
                    bVar4 = true;
                  }
                  iVar11 = FUN_004bb040(bea_arg(iVar7));
                  if ((iVar11 == 0) || (1 < *(int *)(iVar7 + 0xbc))) break;
                }
                iVar7 = FUN_004bb040(bea_arg(iVar5));
                if ((iVar7 == 0) || (1 < *(int *)(iVar5 + 0xbc))) break;
              }
            }
            else {
              bVar4 = false;
            }
            local_290 = *(int **)((int)this_ + 0x160);
            iVar5 = *(int *)(local_298 + (int)local_290);
            if (*(int *)(iVar5 + 0xa4) != 0) {
              bVar4 = false;
            }
            iVar7 = local_290[local_294];
            if (*(int *)(iVar7 + 0xa4) != 0) {
              bVar4 = false;
            }
            if (*(int *)(iVar5 + 0xb4) != 1) {
              bVar4 = false;
            }
            if (*(int *)(iVar7 + 0xb4) != 1) {
              bVar4 = false;
            }
            local_28c = *(int *)((int)this_ + 0x15c);
            if (0 < local_28c) {
              do {
                iVar11 = *local_290;
                if (*(int *)(iVar11 + 0x8c) == 6) {
                  if (*(int *)(iVar11 + 0x124) == iVar5) {
                    bVar4 = false;
                  }
                  if (*(int *)(iVar11 + 0x124) == iVar7) {
                    bVar4 = false;
                  }
                }
                if ((*(int *)(iVar11 + 0x8c) == 3) && (iVar13 = *(int *)(iVar11 + 0xc0), 0 < iVar13)
                   ) {
                  piVar8 = *(int **)(iVar11 + 0xd0);
                  do {
                    if (*piVar8 == iVar5) {
                      bVar4 = false;
                    }
                    if (*piVar8 == iVar7) {
                      bVar4 = false;
                    }
                    piVar8 = piVar8 + 1;
                    iVar13 = iVar13 + -1;
                  } while (BEA_LOOP_GUARD((iVar13 != 0)));
                }
                local_290 = local_290 + 1;
                local_28c = local_28c + -1;
              } while (BEA_LOOP_GUARD((local_28c != 0)));
            }
            iVar5 = FUN_004bae70(bea_arg(iVar7));
            if (iVar5 == 0) {
              bVar4 = false;
            }
            iVar5 = FUN_004bb040(bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x160) + local_298)));
            if (iVar5 == 0) {
              bVar4 = false;
            }
            iVar5 = FUN_00568390(bea_arg(*(int *)(*(int *)((int)this_ + 0x160) + local_298) + 0xdc), bea_arg(s_Nexus_0062fdfc));
            if (iVar5 == 0) {
              bVar4 = false;
            }
            iVar5 = FUN_00568390(bea_arg(*(int *)(*(int *)((int)this_ + 0x160) + local_294 * 4) + 0xdc), bea_arg(s_Nexus_0062fdfc));
            if ((iVar5 != 0) && (bVar4)) {
              FUN_004b4250(bea_arg(*(void **)(*(int *)((int)this_ + 0x160) + local_298)), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x160) + local_294 * 4)));
              *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0x160) + local_294 * 4) + 0xac) = 0;
              *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0x160) + local_294 * 4) + 0xa8) = 0;
              *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0x160) + local_294 * 4) + 0xb0) = 0;
              *(undefined4 *)(*(int *)(*(int *)((int)this_ + 0x160) + local_294 * 4) + 0x8c) = 2;
            }
          }
          local_294 = local_294 + 1;
        } while (BEA_LOOP_GUARD((local_294 < *(int *)((int)this_ + 0x15c))));
      }
      iVar5 = *(int *)((int)this_ + 0x15c);
      local_288 = local_288 + 1;
      local_298 = local_298 + 4;
    } while (BEA_LOOP_GUARD((local_288 < iVar5)));
  }
  do {
    local_28c = *(int *)((int)this_ + 0x15c);
    iVar5 = 0;
    bVar4 = true;
    local_288 = 0;
    if (local_28c < 1) break;
    local_290 = (int *)0x1;
    do {
      piVar8 = *(int **)((int)this_ + 0x160);
      iVar7 = *(int *)((int)piVar8 + iVar5);
      if ((*(int *)(iVar7 + 0x8c) == 2) &&
         ((*(int *)(iVar7 + 0x98) != 0 || (*(int *)(iVar7 + 0x90) == 1)))) {
        bVar16 = *(int *)(iVar7 + 0xa4) == 0;
        if (0 < local_28c) {
          do {
            iVar11 = *piVar8;
            if ((*(int *)(iVar11 + 0x8c) == 6) && (*(int *)(iVar11 + 0x124) == iVar7)) {
              bVar16 = false;
            }
            if ((*(int *)(iVar11 + 0x8c) == 3) && (iVar13 = *(int *)(iVar11 + 0xc0), 0 < iVar13)) {
              piVar6 = *(int **)(iVar11 + 0xd0);
              do {
                if (*piVar6 == iVar7) {
                  bVar16 = false;
                }
                piVar6 = piVar6 + 1;
                iVar13 = iVar13 + -1;
              } while (BEA_LOOP_GUARD((iVar13 != 0)));
            }
            piVar8 = piVar8 + 1;
            local_28c = local_28c + -1;
          } while (BEA_LOOP_GUARD((local_28c != 0)));
        }
        iVar7 = FUN_00568390(bea_arg(iVar7 + 0xdc), bea_arg(s_Nexus_0062fdfc));
        if (iVar7 == 0) {
          bVar16 = false;
        }
        iVar7 = *(int *)(*(int *)((int)this_ + 0x160) + iVar5);
        if ((1 < *(int *)(iVar7 + 0xbc)) && (0 < *(int *)(iVar7 + 0x90))) {
          bVar16 = false;
        }
        iVar11 = *(int *)((int)this_ + 0x1c);
        if (0 < iVar11) {
          piVar8 = (int *)(*(int *)((int)this_ + 0x20) + 0x40);
          do {
            if (*piVar8 == iVar7) {
              bVar16 = false;
            }
            piVar8 = piVar8 + 0x54;
            iVar11 = iVar11 + -1;
          } while (BEA_LOOP_GUARD((iVar11 != 0)));
        }
        iVar7 = FUN_004bae70(bea_arg(iVar7));
        if (iVar7 == 0) {
          bVar16 = false;
        }
        if (((*(int *)(*(int *)(*(int *)((int)this_ + 0x160) + iVar5) + 0x98) != 0) ||
            (iVar7 = FUN_004bb210(bea_arg(this_)), iVar7 == 0)) && (bVar16)) {
          FUN_0055de9b(local_100,s_Removing_part__s_0062fde8,
                       (char *)(*(int *)(*(int *)((int)this_ + 0x160) + iVar5) + 0xdc));
          CRenderThing__vslot3(local_100);
          iVar7 = *(int *)((int)this_ + 0x160);
          local_294 = 0;
          if (0 < *(int *)(*(int *)(iVar7 + iVar5) + 0x90)) {
            do {
              local_284 = 0;
              iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + iVar5) + 0x94) + local_294 * 4);
              if (0 < *(int *)(iVar7 + 0xbc)) {
                local_28c = 0;
                local_298 = 0;
                do {
                  pfVar9 = (float *)(*(int *)(iVar7 + 200) + local_298);
                  iVar11 = *(int *)(*(int *)((int)this_ + 0x160) + iVar5);
                  pfVar15 = *(float **)(iVar11 + 0x10c);
                  local_20c = pfVar15[4] * *pfVar9 + pfVar15[5] * pfVar9[1] + pfVar15[6] * pfVar9[2]
                  ;
                  pfVar14 = *(float **)(iVar11 + 200);
                  local_208 = pfVar15[8] * *pfVar9 +
                              pfVar15[9] * pfVar9[1] + pfVar15[10] * pfVar9[2];
                  fVar2 = pfVar14[1];
                  fVar3 = pfVar14[2];
                  *pfVar9 = *pfVar9 * *pfVar15 + pfVar15[1] * pfVar9[1] + pfVar15[2] * pfVar9[2] +
                            *pfVar14;
                  pfVar9[1] = local_20c + fVar2;
                  pfVar9[2] = local_208 + fVar3;
                  pfVar9[3] = local_274;
                  pfVar15 = (float *)(*(int *)(iVar7 + 0x10c) + local_28c);
                  pfVar14 = *(float **)(*(int *)(*(int *)((int)this_ + 0x160) + iVar5) + 0x10c);
                  local_240[0] = pfVar14[1] * pfVar15[4] +
                                 *pfVar14 * *pfVar15 + pfVar15[8] * pfVar14[2];
                  local_240[1] = pfVar14[1] * pfVar15[5] +
                                 pfVar14[2] * pfVar15[9] + *pfVar14 * pfVar15[1];
                  local_240[2] = *pfVar14 * pfVar15[2] +
                                 pfVar14[1] * pfVar15[6] + pfVar14[2] * pfVar15[10];
                  local_22c = pfVar14[5] * pfVar15[5] +
                              pfVar14[6] * pfVar15[9] + pfVar15[1] * pfVar14[4];
                  local_230 = pfVar14[5] * pfVar15[4] +
                              *pfVar15 * pfVar14[4] + pfVar14[6] * pfVar15[8];
                  local_228 = pfVar15[2] * pfVar14[4] +
                              pfVar14[5] * pfVar15[6] + pfVar14[6] * pfVar15[10];
                  local_21c = pfVar15[1] * pfVar14[8] +
                              pfVar15[5] * pfVar14[9] + pfVar15[9] * pfVar14[10];
                  local_220 = pfVar15[8] * pfVar14[10] +
                              pfVar15[4] * pfVar14[9] + *pfVar15 * pfVar14[8];
                  local_218 = pfVar15[6] * pfVar14[9] +
                              pfVar14[10] * pfVar15[10] + pfVar15[2] * pfVar14[8];
                  pfVar14 = local_240;
                  for (iVar11 = 0xc; BEA_LOOP_GUARD((iVar11 != 0)); iVar11 = iVar11 + -1) {
                    *pfVar15 = *pfVar14;
                    pfVar14 = pfVar14 + 1;
                    pfVar15 = pfVar15 + 1;
                  }
                  local_284 = local_284 + 1;
                  local_298 = local_298 + 0x10;
                  local_28c = local_28c + 0x30;
                } while (BEA_LOOP_GUARD((local_284 < *(int *)(iVar7 + 0xbc))));
              }
              iVar7 = *(int *)((int)this_ + 0x160);
              local_294 = local_294 + 1;
            } while (BEA_LOOP_GUARD((local_294 < *(int *)(*(int *)(iVar7 + iVar5) + 0x90))));
          }
          iVar11 = 0;
          iVar7 = *(int *)(*(int *)((int)this_ + 0x160) + iVar5);
          if (0 < *(int *)(iVar7 + 0x90)) {
            do {
              iVar13 = iVar11 * 4;
              iVar11 = iVar11 + 1;
              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x94) + iVar13) + 0x98) =
                   *(undefined4 *)(iVar7 + 0x98);
              iVar7 = *(int *)(*(int *)((int)this_ + 0x160) + iVar5);
            } while (BEA_LOOP_GUARD((iVar11 < *(int *)(iVar7 + 0x90))));
          }
          piVar8 = *(int **)((int)this_ + 0x160);
          iVar7 = *(int *)(*(int *)((int)piVar8 + iVar5) + 0x98);
          if (iVar7 == 0) {
            iVar7 = *(int *)(**(int **)(*piVar8 + 0x94) + 0x88);
            *piVar8 = **(int **)(*piVar8 + 0x94);
            iVar7 = iVar7 + 1;
            *(undefined4 *)(**(int **)((int)this_ + 0x160) + 0x88) = 0;
            if (iVar7 < *(int *)((int)this_ + 0x15c)) {
              do {
                *(undefined4 *)(*(int *)((int)this_ + 0x160) + iVar7 * 4 + -4) =
                     *(undefined4 *)(*(int *)((int)this_ + 0x160) + iVar7 * 4);
                iVar11 = *(int *)(*(int *)((int)this_ + 0x160) + -4 + iVar7 * 4);
                iVar7 = iVar7 + 1;
                *(int *)(iVar11 + 0x88) = *(int *)(iVar11 + 0x88) + -1;
              } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_ + 0x15c))));
            }
          }
          else {
            iVar11 = *(int *)(iVar7 + 0x90);
            iVar13 = 0;
            if (0 < iVar11) {
              local_298 = 1;
              do {
                if (*(int *)(*(int *)(iVar7 + 0x94) + iVar13 * 4) ==
                    *(int *)(*(int *)((int)this_ + 0x160) + iVar5)) {
                  iVar10 = local_298;
                  if (local_298 < iVar11) {
                    do {
                      iVar11 = iVar10 * 4;
                      iVar1 = iVar10 * 4;
                      iVar10 = iVar10 + 1;
                      *(undefined4 *)(*(int *)(iVar7 + 0x94) + iVar1 + -4) =
                           *(undefined4 *)(*(int *)(iVar7 + 0x94) + iVar11);
                    } while (BEA_LOOP_GUARD((iVar10 < *(int *)(iVar7 + 0x90))));
                  }
                  iVar13 = iVar13 + -1;
                  local_298 = local_298 + -1;
                  *(int *)(iVar7 + 0x90) = *(int *)(iVar7 + 0x90) + -1;
                }
                iVar13 = iVar13 + 1;
                local_298 = local_298 + 1;
                iVar11 = *(int *)(iVar7 + 0x90);
              } while (BEA_LOOP_GUARD((iVar13 < iVar11)));
            }
            iVar11 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((*(int *)(*(int *)(*(int *)((int)this_ + 0x160) + iVar5) + 0x90) +
                                  *(int *)(iVar7 + 0x90)) * 4), bea_arg(1), bea_arg(s_C__dev_ONSLAUGHT2_mesh_cpp_0062f8e8), bea_arg(0xe56));
            iVar13 = 0;
            if (0 < *(int *)(iVar7 + 0x90)) {
              do {
                iVar13 = iVar13 + 1;
                *(undefined4 *)(iVar11 + -4 + iVar13 * 4) =
                     *(undefined4 *)(*(int *)(iVar7 + 0x94) + -4 + iVar13 * 4);
              } while (BEA_LOOP_GUARD((iVar13 < *(int *)(iVar7 + 0x90))));
            }
            iVar10 = 0;
            iVar13 = *(int *)(*(int *)((int)this_ + 0x160) + iVar5);
            if (0 < *(int *)(iVar13 + 0x90)) {
              do {
                iVar12 = *(int *)(iVar7 + 0x90) + iVar10;
                iVar1 = iVar10 * 4;
                iVar10 = iVar10 + 1;
                *(undefined4 *)(iVar11 + iVar12 * 4) =
                     *(undefined4 *)(*(int *)(iVar13 + 0x94) + iVar1);
                iVar13 = *(int *)(*(int *)((int)this_ + 0x160) + iVar5);
              } while (BEA_LOOP_GUARD((iVar10 < *(int *)(iVar13 + 0x90))));
            }
            if (*(int *)(iVar7 + 0x94) != 0) {
              FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(iVar7 + 0x94)));
              *(undefined4 *)(iVar7 + 0x94) = 0;
            }
            *(int *)(iVar7 + 0x94) = iVar11;
            *(int *)(iVar7 + 0x90) =
                 *(int *)(iVar7 + 0x90) +
                 *(int *)(*(int *)(*(int *)((int)this_ + 0x160) + iVar5) + 0x90);
            piVar8 = local_290;
            if ((int)local_290 < *(int *)((int)this_ + 0x15c)) {
              do {
                *(undefined4 *)(*(int *)((int)this_ + 0x160) + (int)piVar8 * 4 + -4) =
                     *(undefined4 *)(*(int *)((int)this_ + 0x160) + (int)piVar8 * 4);
                iVar7 = *(int *)(*(int *)((int)this_ + 0x160) + -4 + (int)piVar8 * 4);
                piVar8 = (int *)((int)piVar8 + 1);
                *(int *)(iVar7 + 0x88) = *(int *)(iVar7 + 0x88) + -1;
              } while (BEA_LOOP_GUARD(((int)piVar8 < *(int *)((int)this_ + 0x15c))));
            }
          }
          DAT_00704af4 = DAT_00704af4 + 1;
          local_288 = local_288 + -1;
          iVar5 = iVar5 + -4;
          local_290 = (int *)((int)local_290 + -1);
          bVar4 = false;
          *(int *)((int)this_ + 0x15c) = *(int *)((int)this_ + 0x15c) + -1;
        }
      }
      local_28c = *(int *)((int)this_ + 0x15c);
      local_288 = local_288 + 1;
      iVar5 = iVar5 + 4;
      local_290 = (int *)((int)local_290 + 1);
    } while (BEA_LOOP_GUARD((local_288 < local_28c)));
  } while (BEA_LOOP_GUARD((!bVar4)));
  FUN_0055de9b(local_200,s_OptimiseParts___removed__d_of__d_0062fdb8,DAT_00704af4,DAT_00704af0);
  return CRenderThing__vslot3(local_200);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ab360, ap_004ab360));

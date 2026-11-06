// auto-ported from 004a5670_FUN_004a5670.c (FUN_004a5670, 700 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x140: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_OptimiseTextures___reduced_textu_0062fa9c ((char*)0x0062fa9c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_004a5670(void * this_)
{
  int v0;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  alignas(16) uint8_t bea_frame_[0x140] = {};   // the original stack frame (emulate_frame)
  int &local_140 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x140);
  int &local_138 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x138);
  int &local_134 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x134);
  int &local_130 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x130);
  int &local_12c = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x12c);
  int &local_128 = *reinterpret_cast<int *>(bea_frame_ + 0x140 - 0x128);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x140 - 0x100);
  v0 = *(int *)((int)this_ + 4);
  local_138 = 0;
  if (0 < v0) {
    local_140 = 0;
    do {
      iVar2 = local_140;
      local_128 = -1;
      local_130 = 0;
      if (0 < local_140) {
        piVar11 = *(int **)this_;
        iVar15 = *(int *)(local_140 + 8 + (int)piVar11);
        piVar14 = piVar11;
        do {
          if ((iVar15 == piVar14[2]) && (*(int *)(local_140 + (int)piVar11) == *piVar14)) {
            bVar1 = true;
            if (0 < iVar15) {
              pfVar10 = (float *)piVar14[3];
              iVar3 = *(int *)(local_140 + 0xc + (int)piVar11) - (int)pfVar10;
              iVar4 = piVar14[5] - (int)pfVar10;
              iVar12 = *(int *)(local_140 + 0x10 + (int)piVar11) - (int)pfVar10;
              iVar13 = piVar14[4] - (int)pfVar10;
              iVar5 = *(int *)(local_140 + 0x18 + (int)piVar11) - (int)pfVar10;
              iVar9 = *(int *)(local_140 + 0x14 + (int)piVar11) - (int)pfVar10;
              iVar6 = piVar14[6] - (int)pfVar10;
              iVar7 = *(int *)(local_140 + 0x1c + (int)piVar11) - (int)pfVar10;
              iVar8 = piVar14[7] - (int)pfVar10;
              local_134 = iVar15;
              do {
                if (*(float *)(iVar3 + (int)pfVar10) != *pfVar10) {
                  bVar1 = false;
                }
                if (*(float *)(iVar12 + (int)pfVar10) != *(float *)((int)pfVar10 + iVar13)) {
                  bVar1 = false;
                }
                if (*(float *)(iVar9 + (int)pfVar10) != *(float *)(iVar4 + (int)pfVar10)) {
                  bVar1 = false;
                }
                if (*(float *)(iVar5 + (int)pfVar10) != *(float *)(iVar6 + (int)pfVar10)) {
                  bVar1 = false;
                }
                if (*(float *)(iVar7 + (int)pfVar10) != *(float *)(iVar8 + (int)pfVar10)) {
                  bVar1 = false;
                }
                pfVar10 = pfVar10 + 1;
                local_134 = local_134 + -1;
              } while (BEA_LOOP_GUARD((local_134 != 0)));
            }
            if (bVar1) {
              local_128 = local_130;
            }
          }
          local_130 = local_130 + 1;
          piVar14 = piVar14 + 9;
        } while (BEA_LOOP_GUARD((local_130 < local_138)));
        if (local_128 != -1) {
          iVar15 = 0;
          local_134 = 0;
          if (0 < *(int *)((int)this_ + 0x15c)) {
            do {
              local_12c = 0;
              if (0 < *(int *)(*(int *)(iVar15 + *(int *)((int)this_ + 0x160)) + 0xa8)) {
                local_140 = 0x30;
                do {
                  local_130 = 6;
                  iVar3 = local_140;
                  do {
                    piVar11 = (int *)(*(int *)((int)this_ + 0x160) + iVar15);
                    if (*(int *)(*(int *)(*piVar11 + 0x134) + iVar3) == local_138) {
                      *(int *)(*(int *)(*piVar11 + 0x134) + iVar3) = local_128;
                    }
                    iVar3 = iVar3 + 4;
                    local_130 = local_130 + -1;
                  } while (BEA_LOOP_GUARD((local_130 != 0)));
                  local_140 = local_140 + 0x60;
                  local_12c = local_12c + 1;
                } while (BEA_LOOP_GUARD((local_12c < *(int *)(*(int *)(iVar15 + *(int *)((int)this_ + 0x160)) + 0xa8)
                        )));
              }
              local_134 = local_134 + 1;
              iVar15 = iVar15 + 4;
            } while (BEA_LOOP_GUARD((local_134 < *(int *)((int)this_ + 0x15c))));
          }
        }
      }
      local_138 = local_138 + 1;
      local_140 = iVar2 + 0x24;
    } while (BEA_LOOP_GUARD((local_138 < *(int *)((int)this_ + 4))));
  }
  FUN_0055de9b(local_100,s_OptimiseTextures___reduced_textu_0062fa9c,v0,*(int *)((int)this_ + 4));
  return CRenderThing__vslot3(local_100);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a5670, ap_004a5670));

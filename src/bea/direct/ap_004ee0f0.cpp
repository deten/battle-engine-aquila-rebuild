// auto-ported from 004ee0f0_FUN_004ee0f0.c (FUN_004ee0f0, 799 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char iStack_108;
#define DAT_009c8028 GLOBAL_AT(int, 0x009c8028)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_StaticShadows__006329f8 ((char*)0x006329f8)
#define s_Thing_at_0x_x_has_no_RTMesh_when_00632a58 ((char*)0x00632a58)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004ee0f0(void * this_, int param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;

  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)
  int &iStack_130 = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x130);
  int &iStack_12c = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x12c);
  int &iStack_128 = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x128);
  int &iStack_120 = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x120);
  int &iStack_11c = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x11c);
  undefined4 * &puStack_118 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x130 - 0x118);
  int &iStack_114 = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x114);
  int &iStack_10c = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x10c);
  int &iStack_108 = *reinterpret_cast<int *>(bea_frame_ + 0x130 - 0x108);
  undefined4 * &puStack_104 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x130 - 0x104);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x130 - 0x100);
  if (*(int *)this_ != 0) {
    piVar2 = *(int **)(*(int *)this_ + 0x30);
    if ((piVar2 == (int *)0x0) || (iVar1 = bea_vcall<uint32_t>(piVar2, 0x24), iVar1 == 0)) {
      FUN_0055de9b(local_100,s_Thing_at_0x_x_has_no_RTMesh_when_00632a58,*(int *)this_);
      CRenderThing__vslot3(local_100);
      return;
    }
    if (param_1 == -1) {
      param_1 = *(int *)((int)this_ + 0x10);
    }
    if (param_2 == -1) {
      param_2 = *(int *)((int)this_ + 0x14);
    }
    if (param_3 == -1) {
      param_3 = *(int *)((int)this_ + 0x18);
    }
    if (param_4 == -1) {
      param_4 = *(int *)((int)this_ + 0x1c);
    }
    if (*(int **)(*(int *)this_ + 0x30) == (int *)0x0) {
      iStack_114 = 0;
    }
    else {
      iStack_114 = bea_vcall<uint32_t>(*(int **)(*(int *)this_ + 0x30), 0x24);
    }
    piVar2 = (int *)bea_vcall<uint32_t>(*(int *)this_ + 8, 0x70);
    iStack_108 = 0;
    if (0 < *(int *)((int)this_ + 0xc)) {
      iStack_120 = 0;
      do {
        iVar1 = iStack_120 + *(int *)((int)this_ + 8);
        if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
          iVar1 = *(int *)(*(int *)(iStack_114 + 0x160) + iStack_108 * 4);
          if ((piVar2 != (int *)0x0) &&
             ((iVar3 = bea_vcall<uint32_t>(piVar2, 0x1c, iVar1), iVar3 != 0 && (0 < iVar3)))) {
            do {
              if (iVar1 != 0) {
                iVar1 = *(int *)(iVar1 + 0x9c);
              }
              iVar3 = iVar3 + -1;
            } while (BEA_LOOP_GUARD((iVar3 != 0)));
          }
          if (iVar1 != 0) {
            iVar1 = *(int *)((int)this_ + 8);
            iStack_12c = *(int *)(iStack_120 + 4 + iVar1);
            iStack_128 = *(int *)(iStack_120 + 0xc + iVar1) + iStack_12c;
            iVar3 = *(int *)(iStack_120 + iVar1);
            iStack_130 = ((int *)(iStack_120 + iVar1))[2] + iVar3;
            if (iVar3 < param_1) {
              iVar3 = param_1;
            }
            if (iStack_12c < param_2) {
              iStack_12c = param_2;
            }
            if (param_3 + param_1 < iStack_130) {
              iStack_130 = param_3 + param_1;
            }
            if (param_4 + param_2 < iStack_128) {
              iStack_128 = param_4 + param_2;
            }
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            if (iStack_12c < 0) {
              iStack_12c = 0;
            }
            if (0x3f < iStack_130) {
              iStack_130 = 0x3f;
            }
            if (0x3f < iStack_128) {
              iStack_128 = 0x3f;
            }
            if ((iVar3 < iStack_130) && (iStack_12c < iStack_128)) {
              puStack_118 = (undefined4 *)(((char *)&DAT_009c8028) + (iVar3 * 0x40 + iStack_12c) * 4);
              iStack_11c = iStack_12c;
              iStack_10c = iVar3;
              puStack_104 = puStack_118;
              while(BEA_LOOP_GUARD(( true ))) {
                do {
                  puVar4 = (uint *)*puStack_104;
                  if (puVar4 == (uint *)0x0) {
                    puVar4 = (uint *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x200), bea_arg(0x70), bea_arg(s_C__dev_ONSLAUGHT2_StaticShadows__006329f8), bea_arg(0x347))
                    ;
                    *puStack_104 = puVar4;
                    puVar6 = puVar4;
                    for (iVar1 = 0x80; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
                      *puVar6 = 0;
                      puVar6 = puVar6 + 1;
                    }
                  }
                  piVar5 = (int *)(iStack_120 + *(int *)((int)this_ + 8));
                  iVar1 = *(int *)(piVar5[4] +
                                  (((iStack_11c - piVar5[1]) * piVar5[2] - *piVar5) + iVar3) * 4);
                  if (iVar1 != 0) {
                    iVar7 = 0x40;
                    puVar6 = puVar4;
                    do {
                      iVar3 = 2;
                      do {
                        *puVar6 = *puVar6 | *(uint *)((iVar1 - (int)puVar4) + (int)puVar6);
                        puVar6 = puVar6 + 1;
                        iVar3 = iVar3 + -1;
                      } while (BEA_LOOP_GUARD((iVar3 != 0)));
                      iVar7 = iVar7 + -1;
                      iVar3 = iStack_10c;
                    } while (BEA_LOOP_GUARD((iVar7 != 0)));
                  }
                  iStack_11c = iStack_11c + 1;
                  puStack_104 = puStack_104 + 1;
                } while (BEA_LOOP_GUARD((iStack_11c < iStack_128)));
                iVar3 = iVar3 + 1;
                puStack_118 = puStack_118 + 0x40;
                if (iStack_130 <= iVar3) break;
                iStack_11c = iStack_12c;
                iStack_10c = iVar3;
                puStack_104 = puStack_118;
              }
            }
          }
        }
        iStack_108 = iStack_108 + 1;
        iStack_120 = iStack_120 + 0x1c;
      } while (BEA_LOOP_GUARD((iStack_108 < *(int *)((int)this_ + 0xc))));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ee0f0, ap_004ee0f0));

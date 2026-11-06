// auto-ported from 00480a30_FUN_00480a30.c (FUN_00480a30, 602 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_00704290 GLOBAL_AT(int, 0x00704290)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_WARNING__Unexpected_collision_ch_0062cdec ((char*)0x0062cdec)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_00480e10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480e10_t> FUN_00480e10 = {(FUN_00480e10_t)0x00480e10};
typedef uint32_t (BEA_THISCALL* FUN_00480ed0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00480ed0_t> FUN_00480ed0 = {(FUN_00480ed0_t)0x00480ed0};
typedef uint32_t (BEA_THISCALL* FUN_00491d80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491d80_t> FUN_00491d80 = {(FUN_00491d80_t)0x00491d80};
typedef undefined4 (BEA_THISCALL* FUN_00491d90_t)(uint32_t);
static const bea_guard<FUN_00491d90_t> FUN_00491d90 = {(FUN_00491d90_t)0x00491d90};
typedef undefined4 (BEA_STDCALL* FUN_00491da0_t)(uint32_t);
static const bea_guard<FUN_00491da0_t> FUN_00491da0 = {(FUN_00491da0_t)0x00491da0};
typedef uint32_t (BEA_THISCALL* FUN_00492670_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492670_t> FUN_00492670 = {(FUN_00492670_t)0x00492670};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef undefined4 (BEA_THISCALL* FUN_004f3d10_t)(uint32_t);
static const bea_guard<FUN_004f3d10_t> FUN_004f3d10 = {(FUN_004f3d10_t)0x004f3d10};

static void BEA_THISCALL ap_00480a30(void * this_, int param_1)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  int iVar10;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  short &local_10 = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0x10);
  short &local_e = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0xe);
  int &local_c = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0xc);
  short &local_8 = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0x8);
  short &local_6 = *reinterpret_cast<short *>(bea_frame_ + 0x10 - 0x6);
  *(int *)((int)this_ + 8) = param_1;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  if (*(int *)(*(int *)(param_1 + 8) + 0x18) == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + 0xc;
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  for (iVar10 = iVar3; BEA_LOOP_GUARD((-1 < iVar10)); iVar10 = iVar10 + -1) {
    FUN_00492670(bea_arg(&DAT_00704200), bea_arg(&local_8), bea_arg(*(int *)(*(int *)((int)this_ + 8) + 8) + 0x1c), bea_arg(iVar10));
    iVar9 = (int)local_6;
    iVar4 = (int)local_8;
    for (iVar5 = iVar4 + -1; BEA_LOOP_GUARD((iVar2 = iVar9 + -1, iVar5 <= iVar4 + 1)); iVar5 = iVar5 + 1) {
      for (; BEA_LOOP_GUARD((iVar2 <= iVar9 + 1)); iVar2 = iVar2 + 1) {
        local_10 = (short)iVar5;
        local_e = (short)iVar2;
        local_c = iVar10;
        iVar6 = FUN_00491da0(bea_arg(&local_10));
        if (iVar6 != 0) {
          piVar8 = (int *)(*(int *)(DAT_00704290 + local_c * 4) +
                          ((0x40 >> (4U - (char)local_c & 0x1f)) * (int)local_e + (int)local_10) * 8
                          );
          if (iVar3 == iVar10) {
            puVar1 = (undefined4 *)*piVar8;
            if (puVar1 != (undefined4 *)0x0) {
              FUN_00480e10(bea_arg(this_), bea_arg(*puVar1));
              FUN_00480e10(bea_arg(this_), bea_arg(puVar1[1]));
              FUN_00480e10(bea_arg(this_), bea_arg(puVar1[2]));
              FUN_00480e10(bea_arg(this_), bea_arg(puVar1[3]));
            }
            pvVar7 = (void *)FUN_00491d80(bea_arg(&DAT_00704200), bea_arg(piVar8));
            while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
              pvVar7 = (void *)FUN_00492c90(bea_arg(pvVar7));
              piVar8 = (int *)FUN_004f3d10(bea_arg(pvVar7));
              if (((piVar8 != (int *)0x0) && (piVar8 != *(int **)((int)this_ + 8))) &&
                 ((iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x20, piVar8), iVar6 != 0 &&
                  (iVar6 = bea_vcall<uint32_t>(piVar8, 0x20, *(undefined4 *)((int)this_ + 8)), iVar6 != 0
                  )))) {
                if (*(int *)((int)this_ + 0x10) == 1) {
                  FUN_00441740(&DAT_0066f580,s_WARNING__Unexpected_collision_ch_0062cdec);
                }
                else {
                  FUN_00480ed0(bea_arg(this_), bea_arg(piVar8));
                  *(undefined4 *)((int)this_ + 0x10) = 0;
                }
              }
              pvVar7 = (void *)FUN_00491d90(bea_arg(&DAT_00704200));
            }
          }
          else {
            pvVar7 = (void *)FUN_00491d80(bea_arg(&DAT_00704200), bea_arg(piVar8));
            while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
              pvVar7 = (void *)FUN_00492c90(bea_arg(pvVar7));
              piVar8 = (int *)FUN_004f3d10(bea_arg(pvVar7));
              if ((((piVar8 != (int *)0x0) && (piVar8 != *(int **)((int)this_ + 8))) &&
                  (iVar6 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x20, piVar8), iVar6 != 0)) &&
                 (iVar6 = bea_vcall<uint32_t>(piVar8, 0x20, *(undefined4 *)((int)this_ + 8)), iVar6 != 0)
                 ) {
                if (*(int *)((int)this_ + 0x10) == 1) {
                  FUN_00441740(&DAT_0066f580,s_WARNING__Unexpected_collision_ch_0062cdec);
                }
                else {
                  FUN_00480ed0(bea_arg(this_), bea_arg(piVar8));
                  *(undefined4 *)((int)this_ + 0x10) = 0;
                }
              }
              pvVar7 = (void *)FUN_00491d90(bea_arg(&DAT_00704200));
            }
          }
        }
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480a30, ap_00480a30));

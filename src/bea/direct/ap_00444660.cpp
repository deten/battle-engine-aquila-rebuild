// auto-ported from 00444660_FUN_00444660.c (FUN_00444660, 732 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_00672768 GLOBAL_AT(int, 0x00672768)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_monitor_h_0062551c ((char*)0x0062551c)
#define s_Warning____s__Can_t_find_segment_00628714 ((char*)0x00628714)
#define s_C__dev_ONSLAUGHT2_DestructableSe_006287b4 ((char*)0x006287b4)
#define s_component_0062875c ((char*)0x0062875c)
#define s_Warning____s__Can_t_find_mesh_pa_006286c0 ((char*)0x006286c0)
#define s_Warning__No_mesh_for_building_006287ec ((char*)0x006287ec)
#define s_ERROR__no_behavour_for_unit_006286a4 ((char*)0x006286a4)
#define s_Warning____s__only_has_Primary_c_00628768 ((char*)0x00628768)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef void * (BEA_THISCALL* FUN_004425a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004425a0_t> FUN_004425a0 = {(FUN_004425a0_t)0x004425a0};
typedef uint32_t (BEA_THISCALL* FUN_00442700_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00442700_t> FUN_00442700 = {(FUN_00442700_t)0x00442700};
typedef float10 (BEA_THISCALL* FUN_00442900_t)(uint32_t);
static const bea_guard<FUN_00442900_t> FUN_00442900 = {(FUN_00442900_t)0x00442900};
typedef uint32_t (BEA_THISCALL* FUN_00444c10_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00444c10_t> FUN_00444c10 = {(FUN_00444c10_t)0x00444c10};
typedef char * (BEA_THISCALL* FUN_004aa6b0_t)(uint32_t);
static const bea_guard<FUN_004aa6b0_t> FUN_004aa6b0 = {(FUN_004aa6b0_t)0x004aa6b0};
typedef undefined4 (BEA_THISCALL* FUN_004aa820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004aa820_t> FUN_004aa820 = {(FUN_004aa820_t)0x004aa820};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int * (BEA_THISCALL* FUN_004fd8d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd8d0_t> FUN_004fd8d0 = {(FUN_004fd8d0_t)0x004fd8d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00444660(void * this_)
{
  void *this_00;
  void *this_01;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *this_02;
  void *this_03;
  float10 fVar6;
  char *p1;
  int iStack_20;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  piVar4 = *(int **)(*(int *)((int)this_ + 0x10) + 0x30);
  if (piVar4 == (int *)0x0) {
    FUN_00441740(&DAT_0066f580,s_Warning__No_mesh_for_building_006287ec);
    return;
  }
  this_01 = (void *)bea_vcall<uint32_t>(piVar4, 0x24);
  DAT_00672768 = 0;
  uVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_01 + 0x15c) * 4 + 4), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_DestructableSe_006287b4), bea_arg(0x184));
  *(undefined4 *)((int)this_ + 4) = uVar1;
  *(undefined4 *)((int)this_ + 8) = *(undefined4 *)((int)this_01 + 0x15c);
  iVar2 = 0;
  if (-1 < *(int *)((int)this_01 + 0x15c)) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)((int)this_ + 4) + -4 + iVar2 * 4) = 0;
    } while (BEA_LOOP_GUARD((iVar2 <= *(int *)((int)this_01 + 0x15c))));
  }
  FUN_00444c10(bea_arg(this_), bea_arg(**(undefined4 **)((int)this_01 + 0x160)), bea_arg(0));
  if (*(int *)((int)this_ + 0x20) == 1) {
    pcVar3 = (char *)FUN_004aa6b0(bea_arg(this_01));
    FUN_00441740(&DAT_0066f580,s_Warning____s__only_has_Primary_c_00628768,pcVar3);
  }
  iStack_20 = 1;
  iVar2 = FUN_004fd8d0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(1));
  do {
    if (iVar2 == 0) {
      iVar2 = 0;
      if (-1 < *(int *)((int)this_01 + 0x15c)) {
        do {
          if (*(int *)(*(int *)((int)this_ + 4) + iVar2 * 4) != 0) {
            iStack_20 = 0x42c80000;
            iVar5 = *(int *)(*(int *)((int)this_ + 0x10) + 0x164);
            if (iVar5 == 0) {
              FUN_00441740(&DAT_0066f580,s_ERROR__no_behavour_for_unit_006286a4);
            }
            else {
              iStack_20 = *(undefined4 *)(iVar5 + 0xc0);
            }
            bea_vcall<uint32_t>(*(int **)(*(int *)((int)this_ + 4) + iVar2 * 4), 0x2c, iStack_20,*(undefined4 *)((int)this_ + 0x1c));
          }
          iVar2 = iVar2 + 1;
        } while (BEA_LOOP_GUARD((iVar2 <= *(int *)((int)this_01 + 0x15c))));
      }
      if (*(void **)((int)this_ + 0xc) != (void *)0x0) {
        fVar6 = (float10)FUN_00442900(bea_arg(*(void **)((int)this_ + 0xc)));
        *(float *)((int)this_ + 0x18) = (float)fVar6;
      }
      return;
    }
    piVar4 = (int *)FUN_004fd8d0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(iStack_20));
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar5 = FUN_004aa820(bea_arg(this_01), bea_arg(s_component_0062875c), bea_arg(*(undefined4 *)(iVar2 + 0x270)));
      if (iVar5 == 0) {
        iVar2 = *(int *)(iVar2 + 0x270);
        pcVar3 = (char *)FUN_004aa6b0(bea_arg(this_01));
        p1 = s_Warning____s__Can_t_find_mesh_pa_006286c0;
      }
      else {
        this_00 = *(void **)(*(int *)((int)this_ + 4) + *(int *)(*(int *)(iVar5 + 0x98) + 0x88) * 4);
        if (this_00 != (void *)0x0) {
          this_02 = (undefined4 *)
                    FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x44), bea_arg(0x55), bea_arg(s_C__dev_ONSLAUGHT2_DestructableSe_006287b4), bea_arg(0x1a8));
          uStack_4 = 0;
          if (this_02 == (undefined4 *)0x0) {
            this_02 = (undefined4 *)0x0;
          }
          else {
            FUN_004425a0(bea_arg(this_02), bea_arg(this_), bea_arg(0xffffffff), bea_arg(this_00), bea_arg(0));
            this_02[0x10] = iVar2;
            (*(uint8_t*)((char*)&uStack_4 + 0)) = 2;
            if (*(int *)(iVar2 + 4) == 0) {
              this_03 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_monitor_h_0062551c), bea_arg(0x18));
              (*(uint8_t*)((char*)&uStack_4 + 0)) = 3;
              if (this_03 == (void *)0x0) {
                this_03 = (void *)0x0;
              }
              else {
                FUN_004e5840(bea_arg(this_03));
              }
              *(void **)(iVar2 + 4) = this_03;
            }
            (*(uint8_t*)((char*)&uStack_4 + 0)) = 2;
            FUN_004e5a80(bea_arg(*(void **)(iVar2 + 4)), bea_arg(this_02 + 0x10));
            *this_02 = ((void*)0x005db0ac);
          }
          uStack_4 = 0xffffffff;
          FUN_00442700(bea_arg(this_00), bea_arg(this_02));
          goto LAB_0044489d;
        }
        iVar2 = *(int *)(iVar5 + 0x88);
        pcVar3 = (char *)FUN_004aa6b0(bea_arg(this_01));
        p1 = s_Warning____s__Can_t_find_segment_00628714;
      }
      FUN_00441740(&DAT_0066f580,p1,pcVar3,iVar2);
    }
LAB_0044489d:
    iStack_20 = iStack_20 + 1;
    iVar2 = FUN_004fd8d0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(iStack_20));
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00444660, ap_00444660));

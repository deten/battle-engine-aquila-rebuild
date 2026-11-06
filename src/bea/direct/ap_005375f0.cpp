// auto-ported from 005375f0_FUN_005375f0.c (FUN_005375f0, 488 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089c5e4 GLOBAL_AT(int, 0x0089c5e4)
#define DAT_0089c5e8 GLOBAL_AT(int, 0x0089c5e8)
#define DAT_0089c5ec GLOBAL_AT(undefined4, 0x0089c5ec)
#define DAT_0089c7f0 GLOBAL_AT(int, 0x0089c7f0)
#define DAT_0089c7f4 GLOBAL_AT(int, 0x0089c7f4)
#define DAT_0089c7f8 GLOBAL_AT(int, 0x0089c7f8)
#define DAT_0089c7fc GLOBAL_AT(int, 0x0089c7fc)
#define DAT_0089c800 GLOBAL_AT(int, 0x0089c800)
#define DAT_0089c804 GLOBAL_AT(int, 0x0089c804)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
#define s_SHIT_this_should_never_happen_0064fd3c ((char*)0x0064fd3c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_0044b2a0_t)(uint32_t);
static const bea_guard<FUN_0044b2a0_t> FUN_0044b2a0 = {(FUN_0044b2a0_t)0x0044b2a0};
typedef void * (BEA_THISCALL* FUN_004b6e50_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6e50_t> FUN_004b6e50 = {(FUN_004b6e50_t)0x004b6e50};
typedef uint32_t (BEA_THISCALL* FUN_004b7ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ca0_t> FUN_004b7ca0 = {(FUN_004b7ca0_t)0x004b7ca0};
typedef uint32_t (BEA_THISCALL* FUN_004de1f0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004de1f0_t> FUN_004de1f0 = {(FUN_004de1f0_t)0x004de1f0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_005375f0(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *this_00;
  void *this_01;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = param_1;
  uVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
  uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar2));
  uVar3 = bea_vcall<uint32_t>(puVar1[1], 0x30);
  uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar3));
  fVar10 = (float10)bea_vcall<float10>(puVar1[2], 0x34);
  fVar11 = (float)fVar10;
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x228), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x734));
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = ((void*)0x005e4f2c);
    puVar4[1] = DAT_0089c5e4;
    *puVar4 = ((void*)0x005d92d4);
    puVar4[2] = DAT_0089c5e8;
    puVar8 = &DAT_0089c5ec;
    puVar9 = puVar4 + 3;
    for (iVar7 = 0x81; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar4[0x84] = DAT_0089c7f0;
    puVar4[0x85] = DAT_0089c7f4;
    puVar4[0x86] = DAT_0089c7f8;
    puVar4[0x87] = DAT_0089c7fc;
    puVar4[0x88] = DAT_0089c800;
    puVar4[0x89] = DAT_0089c804;
    *puVar4 = ((void*)0x005e4f1c);
  }
  FUN_004e5b20(bea_arg((void *)((int)this_ + 0x28)), bea_arg(puVar4));
  DAT_0089c800 = 1;
  this_00 = (void *)FUN_0044b2a0(bea_arg(&DAT_00672fc8));
  uVar5 = 0;
  if (this_00 != (void *)0x0) {
    param_1 = (undefined4 *)0x3d4ccccd;
    FUN_004de1f0(bea_arg(this_00), bea_arg(0x7d1), bea_arg(&param_1), bea_arg(this_), bea_arg(puVar4));
    iVar7 = 0;
    if ((*(byte *)(*(int *)((int)this_ + 0x10) + 0x34) & 0x10) != 0) {
      iVar7 = *(int *)((int)this_ + 0x10);
    }
    this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x741));
    if (this_01 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      uVar12 = 10;
      uVar5 = bea_vcall<uint32_t>(puVar1[1], 0x30);
      piVar6 = (int *)FUN_004b6e50(bea_arg(this_01), bea_arg(uVar2), bea_arg(uVar3), bea_arg(uVar5), bea_arg(fVar11), bea_arg(iVar7), bea_arg(this_00), bea_arg(uVar12));
    }
    if (DAT_008a9d84 == (void *)0x0) {
      uVar5 = CRenderThing__vslot3(s_SHIT_this_should_never_happen_0064fd3c);
      if (piVar6 != (int *)0x0) {
        uVar5 = bea_vcall<uint32_t>(piVar6, 0x4, 1);
      }
    }
    else {
      uVar5 = FUN_004b7ca0(bea_arg(DAT_008a9d84), bea_arg(piVar6));
    }
  }
  return uVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005375f0, ap_005375f0));

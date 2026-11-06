// auto-ported from 005377e0_FUN_005377e0.c (FUN_005377e0, 251 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef void * (BEA_THISCALL* FUN_004b6e50_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6e50_t> FUN_004b6e50 = {(FUN_004b6e50_t)0x004b6e50};
typedef uint32_t (BEA_THISCALL* FUN_004b7ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ca0_t> FUN_004b7ca0 = {(FUN_004b7ca0_t)0x004b7ca0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_005377e0(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  void *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *this_01;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  this_00 = DAT_008a9d84;
  uVar1 = 0;
  if (DAT_008a9d84 != (void *)0x0) {
    uVar1 = bea_vcall<uint32_t>(*param_1, 0x30);
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar1));
    uVar2 = bea_vcall<uint32_t>(param_1[1], 0x30);
    uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar2));
    fVar6 = (float10)bea_vcall<float10>(param_1[2], 0x34);
    fVar7 = (float)fVar6;
    uVar3 = bea_vcall<uint32_t>(param_1[3], 0x30);
    iVar5 = 0;
    if ((*(byte *)(*(int *)((int)this_ + 0x10) + 0x34) & 0x10) != 0) {
      iVar5 = *(int *)((int)this_ + 0x10);
    }
    this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x75f));
    if (this_01 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar8 = 0;
      uVar4 = bea_vcall<uint32_t>(param_1[1], 0x30);
      uVar1 = FUN_004b6e50(bea_arg(this_01), bea_arg(uVar1), bea_arg(uVar2), bea_arg(uVar4), bea_arg(fVar7), bea_arg(iVar5), bea_arg(uVar8), bea_arg(uVar3));
    }
    uVar1 = FUN_004b7ca0(bea_arg(this_00), bea_arg(uVar1));
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005377e0, ap_005377e0));

// auto-ported from 00537410_FUN_00537410.c (FUN_00537410, 229 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_0089c328 GLOBAL_AT(int, 0x0089c328)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s__unknown__0064fd30 ((char*)0x0064fd30)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef void * (BEA_THISCALL* FUN_004b6e50_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b6e50_t> FUN_004b6e50 = {(FUN_004b6e50_t)0x004b6e50};
typedef uint32_t (BEA_THISCALL* FUN_004b7ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ca0_t> FUN_004b7ca0 = {(FUN_004b7ca0_t)0x004b7ca0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined4 BEA_THISCALL ap_00537410(void * this_, undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
  void *this_00;
  undefined4 uVar1;
  void *this_01;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  this_00 = DAT_008a9d84;
  uVar1 = 0;
  if (DAT_008a9d84 != (void *)0x0) {
    uVar1 = FUN_004f7bf0(bea_arg(s__unknown__0064fd30));
    FUN_0055e64e(bea_arg(&DAT_0089c328), bea_arg(uVar1));
    iVar3 = 0;
    if ((*(byte *)(*(int *)((int)this_ + 0x10) + 0x34) & 0x10) != 0) {
      iVar3 = *(int *)((int)this_ + 0x10);
    }
    uVar1 = bea_vcall<uint32_t>(*param_1, 0x30);
    uVar1 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar1));
    fVar4 = (float10)bea_vcall<float10>(param_1[1], 0x34);
    fVar5 = (float)fVar4;
    this_01 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3c), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x70f));
    uVar2 = 0;
    if (this_01 != (void *)0x0) {
      uVar7 = 10;
      uVar6 = 0;
      uVar2 = bea_vcall<uint32_t>(*param_1, 0x30);
      uVar2 = FUN_004b6e50(bea_arg(this_01), bea_arg(&DAT_0089c328), bea_arg(uVar1), bea_arg(uVar2), bea_arg(fVar5), bea_arg(iVar3), bea_arg(uVar6), bea_arg(uVar7));
    }
    uVar1 = FUN_004b7ca0(bea_arg(this_00), bea_arg(uVar2));
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00537410, ap_00537410));

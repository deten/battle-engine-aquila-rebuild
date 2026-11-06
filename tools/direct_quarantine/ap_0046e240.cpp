// auto-ported from 0046e240_FUN_0046e240.c (FUN_0046e240, 540 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDXEngine;
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0066e8c0 GLOBAL_AT(char, 0x0066e8c0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_00662f40 GLOBAL_AT(int, 0x00662f40)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_008552fc GLOBAL_AT(int, 0x008552fc)
#define _DAT_00855300 GLOBAL_AT(int, 0x00855300)
#define _DAT_00855304 GLOBAL_AT(int, 0x00855304)
#define _DAT_00855308 GLOBAL_AT(int, 0x00855308)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_00679fa8 GLOBAL_AT(int, 0x00679fa8)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_0083d454 GLOBAL_AT(int, 0x0083d454)
#define s_game_resources_0062c140 ((char*)0x0062c140)
typedef uint32_t (BEA_THISCALL* CDXEngine__vslot2_t)(uint32_t);
static const bea_guard<CDXEngine__vslot2_t> CDXEngine__vslot2 = {(CDXEngine__vslot2_t)0x0053d6d0};
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef uint32_t (BEA_THISCALL* FUN_0042cf40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042cf40_t> FUN_0042cf40 = {(FUN_0042cf40_t)0x0042cf40};
typedef uint32_t (BEA_THISCALL* FUN_0042cf70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cf70_t> FUN_0042cf70 = {(FUN_0042cf70_t)0x0042cf70};
typedef undefined4 (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef undefined4 (BEA_THISCALL* FUN_0046c360_t)(uint32_t);
static const bea_guard<FUN_0046c360_t> FUN_0046c360 = {(FUN_0046c360_t)0x0046c360};
typedef undefined4 (BEA_THISCALL* FUN_0046c430_t)(uint32_t);
static const bea_guard<FUN_0046c430_t> FUN_0046c430 = {(FUN_0046c430_t)0x0046c430};
typedef uint32_t (BEA_THISCALL* FUN_0046ca70_t)(uint32_t);
static const bea_guard<FUN_0046ca70_t> FUN_0046ca70 = {(FUN_0046ca70_t)0x0046ca70};
typedef undefined4 (BEA_STDCALL* FUN_0046cd30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046cd30_t> FUN_0046cd30 = {(FUN_0046cd30_t)0x0046cd30};
typedef undefined4 (BEA_THISCALL* FUN_0046dc30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046dc30_t> FUN_0046dc30 = {(FUN_0046dc30_t)0x0046dc30};
typedef uint32_t (BEA_THISCALL* FUN_00472a10_t)(uint32_t);
static const bea_guard<FUN_00472a10_t> FUN_00472a10 = {(FUN_00472a10_t)0x00472a10};
typedef uint32_t (BEA_THISCALL* FUN_00481650_t)(uint32_t);
static const bea_guard<FUN_00481650_t> FUN_00481650 = {(FUN_00481650_t)0x00481650};
typedef uint32_t (BEA_THISCALL* FUN_004b7320_t)(uint32_t);
static const bea_guard<FUN_004b7320_t> FUN_004b7320 = {(FUN_004b7320_t)0x004b7320};
typedef uint32_t (BEA_THISCALL* FUN_004b8e70_t)(uint32_t);
static const bea_guard<FUN_004b8e70_t> FUN_004b8e70 = {(FUN_004b8e70_t)0x004b8e70};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef uint32_t (BEA_THISCALL* FUN_004d0510_t)(uint32_t);
static const bea_guard<FUN_004d0510_t> FUN_004d0510 = {(FUN_004d0510_t)0x004d0510};
typedef uint32_t (BEA_THISCALL* FUN_004e2c50_t)(uint32_t);
static const bea_guard<FUN_004e2c50_t> FUN_004e2c50 = {(FUN_004e2c50_t)0x004e2c50};

static undefined4 BEA_THISCALL ap_0046e240(void * this_, undefined4 param_1)
{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined4 *)((int)this_ + 0x24) = 0;
  if (DAT_0083d448 != 0) {
    DAT_0066e8c0 = 1;
  }
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(1), bea_arg(1), bea_arg(1));
  DAT_0066e8c0 = 0;
  if (DAT_00662dcc != 0) {
    FUN_004bb490(bea_arg(&DAT_00889a48));
  }
  if (DAT_00662f40 != 0) {
    FUN_004e2c50(bea_arg(&DAT_00896988));
  }
  *(undefined4 *)((int)this_ + 0xa08) = 1;
  iVar2 = FUN_0046c360(bea_arg(this_));
  if (iVar2 == 0) {
    bea_vcall<uint32_t>(this_, 0x8);
    return 3;
  }
  *(undefined4 *)((int)this_ + 0x2a0) = param_1;
  iVar2 = FUN_0046c430(bea_arg(this_));
  if (iVar2 == 0) {
    FUN_0046ca70(bea_arg(this_));
    return 3;
  }
  _DAT_008552fc = 0xffffffff;
  _DAT_00855300 = 0xffffffff;
  _DAT_00855304 = 0xffffffff;
  _DAT_00855308 = 0xffffffff;
  iVar2 = FUN_0046cd30(bea_arg(param_1), bea_arg(0));
  if (iVar2 == 0) {
    FUN_0042c750(bea_arg(s_game_resources_0062c140), bea_arg(0xffffffff));
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0x42480000), bea_arg(0x42820000));
  CDXEngine__vslot2(bea_arg((CDXEngine *)&DAT_0089c9a0));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3ea8f5c3));
  FUN_00472a10(bea_arg(&DAT_00679fa8));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f28f5c3));
  FUN_00481650(bea_arg(&DAT_008aa4e8));
  FUN_0042cf70(bea_arg(&DAT_00663498), bea_arg(0x3f800000));
  bVar1 = true;
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0x42820000), bea_arg(0x42a00000));
  iVar2 = 0;
  do {
    FUN_004b7320(bea_arg(*(void **)((int)this_ + 0x2ec)));
    FUN_004b8e70(bea_arg(*(void **)((int)this_ + 0x2f0)));
    FUN_004d0510(bea_arg(*(void **)((int)this_ + 0x2f4)));
    uVar3 = FUN_0046dc30(bea_arg(this_), bea_arg(param_1));
    *(undefined4 *)((int)this_ + 0x34) = uVar3;
    FUN_0046ca70(bea_arg(this_));
    if ((DAT_0083d454 == 4) && (iVar2 < 5)) {
      *(undefined4 *)((int)this_ + 0x34) = 4;
      iVar2 = iVar2 + 1;
    }
    if (*(int *)((int)this_ + 0x34) == 4) {
      *(undefined4 *)((int)this_ + 0x24) = 1;
      FUN_004bb490(bea_arg(&DAT_00889a48));
      iVar4 = FUN_0046c430(bea_arg(this_));
      if (iVar4 == 0) {
        FUN_0046ca70(bea_arg(this_));
LAB_0046e40e:
        bVar1 = false;
      }
    }
    else {
      if (*(int *)((int)this_ + 0x34) != 3) goto LAB_0046e40e;
      FUN_0042d080(bea_arg(0), bea_arg(0xf5), bea_arg(0xffffffff));
    }
    *(undefined4 *)((int)this_ + 0xa08) = 0;
    if (!bVar1) {
      *(undefined4 *)((int)this_ + 0x24) = 0;
      FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(0x42480000));
      bea_vcall<uint32_t>(this_, 0x8);
      return *(undefined4 *)((int)this_ + 0x34);
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046e240, ap_0046e240));

// auto-ported from 00510a90_FUN_00510a90.c (FUN_00510a90, 968 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006602a0 GLOBAL_AT(int, 0x006602a0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
#define DAT_008553f0 GLOBAL_AT(undefined4*, 0x008553f0)
#define DAT_008553f4 GLOBAL_AT(undefined4*, 0x008553f4)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
#define DAT_00855404 GLOBAL_AT(undefined4*, 0x00855404)
#define DAT_00855408 GLOBAL_AT(undefined4*, 0x00855408)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_THISCALL* FUN_0040f890_t)(uint32_t);
static const bea_guard<FUN_0040f890_t> FUN_0040f890 = {(FUN_0040f890_t)0x0040f890};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00510e60_t)(uint32_t);
static const bea_guard<FUN_00510e60_t> FUN_00510e60 = {(FUN_00510e60_t)0x00510e60};
typedef uint32_t (BEA_THISCALL* FUN_00510eb0_t)(uint32_t);
static const bea_guard<FUN_00510eb0_t> FUN_00510eb0 = {(FUN_00510eb0_t)0x00510eb0};
typedef uint32_t (BEA_THISCALL* FUN_00510f10_t)(uint32_t);
static const bea_guard<FUN_00510f10_t> FUN_00510f10 = {(FUN_00510f10_t)0x00510f10};
typedef uint32_t (BEA_THISCALL* FUN_00511040_t)(uint32_t);
static const bea_guard<FUN_00511040_t> FUN_00511040 = {(FUN_00511040_t)0x00511040};
typedef uint32_t (BEA_THISCALL* FUN_00511070_t)(uint32_t);
static const bea_guard<FUN_00511070_t> FUN_00511070 = {(FUN_00511070_t)0x00511070};
typedef uint32_t (BEA_THISCALL* FUN_005110f0_t)(uint32_t);
static const bea_guard<FUN_005110f0_t> FUN_005110f0 = {(FUN_005110f0_t)0x005110f0};
typedef uint32_t (BEA_THISCALL* FUN_005113a0_t)(uint32_t);
static const bea_guard<FUN_005113a0_t> FUN_005113a0 = {(FUN_005113a0_t)0x005113a0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_00510a90(void)
{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = (void *)FUN_00406d20(bea_arg(&DAT_006602a0));
  while (BEA_LOOP_GUARD((pvVar4 != (void *)0x0))) {
    FUN_004e5bd0(bea_arg(&DAT_006602a0), bea_arg(pvVar4));
    FUN_0040f890(bea_arg(pvVar4));
    if (pvVar4 != (void *)0x0) {
      FUN_005113a0(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
    pvVar4 = (void *)FUN_00406d20(bea_arg(&DAT_006602a0));
  }
  if (DAT_008553e8 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_008553e8;
      DAT_008553e8[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_008553e8), bea_arg(pvVar4));
      FUN_00511040(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_008553ec != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_008553ec;
      DAT_008553ec[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_008553ec), bea_arg(pvVar4));
      FUN_00510f10(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_008553f0 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_008553f0;
      DAT_008553f0[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_008553f0), bea_arg(pvVar4));
      FUN_00510eb0(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_008553f4 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      piVar2 = (int *)*DAT_008553f4;
      DAT_008553f4[2] = (int)piVar2;
      if ((piVar2 == (int *)0x0) || (puVar1 = (undefined4 *)*piVar2, puVar1 == (undefined4 *)0x0))
      break;
      FUN_004e5bd0(bea_arg(DAT_008553f4), bea_arg(puVar1));
      bea_vcall<uint32_t>(puVar1, 0x0, 1);
    }
  }
  if (DAT_008553f8 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_008553f8;
      DAT_008553f8[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_008553f8), bea_arg(pvVar4));
      FUN_00511070(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_008553fc != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_008553fc;
      DAT_008553fc[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_008553fc), bea_arg(pvVar4));
      FUN_005110f0(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_00855400 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_00855400;
      DAT_00855400[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_00855400), bea_arg(pvVar4));
      FUN_005110f0(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_00855404 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      puVar1 = (undefined4 *)*DAT_00855404;
      DAT_00855404[2] = (int)puVar1;
      if ((puVar1 == (undefined4 *)0x0) || (pvVar4 = (void *)*puVar1, pvVar4 == (void *)0x0)) break;
      FUN_004e5bd0(bea_arg(DAT_00855404), bea_arg(pvVar4));
      FUN_00510e60(bea_arg(pvVar4));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar4));
    }
  }
  if (DAT_00855408 != (int *)0x0) {
    while(BEA_LOOP_GUARD(( true ))) {
      piVar2 = (int *)*DAT_00855408;
      DAT_00855408[2] = (int)piVar2;
      if ((piVar2 == (int *)0x0) || (iVar3 = *piVar2, iVar3 == 0)) break;
      FUN_004e5bd0(bea_arg(DAT_00855408), bea_arg(iVar3));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(iVar3 + 0x10)));
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(iVar3 + 8)));
      *(undefined4 *)(iVar3 + 8) = 0;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(iVar3 + 0xc)));
      *(undefined4 *)(iVar3 + 0xc) = 0;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar3));
    }
  }
  piVar2 = DAT_008553e8;
  if (DAT_008553e8 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_008553e8));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_008553e8 = (int *)0x0;
  }
  piVar2 = DAT_008553ec;
  if (DAT_008553ec != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_008553ec));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_008553ec = (int *)0x0;
  }
  piVar2 = DAT_008553f0;
  if (DAT_008553f0 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_008553f0));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_008553f0 = (int *)0x0;
  }
  piVar2 = DAT_008553f4;
  if (DAT_008553f4 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_008553f4));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_008553f4 = (int *)0x0;
  }
  piVar2 = DAT_008553f8;
  if (DAT_008553f8 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_008553f8));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_008553f8 = (int *)0x0;
  }
  piVar2 = DAT_008553fc;
  if (DAT_008553fc != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_008553fc));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_008553fc = (int *)0x0;
  }
  piVar2 = DAT_00855400;
  if (DAT_00855400 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_00855400));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_00855400 = (int *)0x0;
  }
  piVar2 = DAT_00855404;
  if (DAT_00855404 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_00855404));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_00855404 = (int *)0x0;
  }
  piVar2 = DAT_00855408;
  if (DAT_00855408 != (int *)0x0) {
    FUN_004e5c60(bea_arg(DAT_00855408));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(piVar2));
    DAT_00855408 = (int *)0x0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00510a90, ap_00510a90));

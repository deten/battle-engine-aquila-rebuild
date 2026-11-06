// auto-ported from 0044e020_vslot66.c (CFenrir::vslot66, 416 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CCarrier;
typedef char CFenrir;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define s_Fenrir_Flamethrower_00628e64 ((char*)0x00628e64)
typedef uint32_t (BEA_THISCALL* CCarrier__vslot66_t)(uint32_t);
static const bea_guard<CCarrier__vslot66_t> CCarrier__vslot66 = {(CCarrier__vslot66_t)0x00421c40};
typedef uint32_t (BEA_THISCALL* FUN_004e1800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1800_t> FUN_004e1800 = {(FUN_004e1800_t)0x004e1800};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 (BEA_THISCALL* FUN_004e1ab0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1ab0_t> FUN_004e1ab0 = {(FUN_004e1ab0_t)0x004e1ab0};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static const bea_guard<FUN_00509f70_t> FUN_00509f70 = {(FUN_00509f70_t)0x00509f70};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_0044e020(CFenrir * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined4 uVar5;
  
  if (*(float *)(this_ + 0xf8) < -0.01f) {
    *(undefined4 *)(this_ + 0xf8) = 0xbc23d70a;
  }
  puVar1 = *(undefined4 **)(this_ + 0x17c);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    iVar3 = FUN_00568390(bea_arg(s_Fenrir_Flamethrower_00628e64), bea_arg(**(undefined4 **)((int)this_00 + 0xa4)));
    if (iVar3 == 0) {
      iVar3 = FUN_00509f70(bea_arg(this_00));
      if (iVar3 != 0) {
        FUN_00506010(bea_arg(this_00));
      }
      break;
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  puVar1 = *(undefined4 **)(this_ + 0x19c);
  iVar3 = 0;
  *(undefined4 **)(this_ + 0x1a4) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
    if (((*piVar4 != 0) && (iVar2 = *(int *)(*piVar4 + 0x270), 0x17 < iVar2)) && (iVar2 < 0x1c)) {
      iVar3 = iVar3 + 1;
    }
    puVar1 = *(undefined4 **)(*(int *)(this_ + 0x1a4) + 4);
    *(undefined4 **)(this_ + 0x1a4) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
  }
  *(float *)(this_ + 0x284) = (float)iVar3 * 0.25f * *(float *)(*(int *)(this_ + 0x164) + 0xb4);
  if (iVar3 == 0) {
    FUN_004e1800(bea_arg(&DAT_00896988), bea_arg(*(int *)(this_ + 0x28c) + 0x40), bea_arg(this_));
    iVar3 = FUN_004e1ab0(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(this_ + 0x288)), bea_arg(this_));
    if (iVar3 != 0) goto LAB_0044e1b6;
    uVar5 = *(undefined4 *)(this_ + 0x288);
  }
  else {
    FUN_004e1800(bea_arg(&DAT_00896988), bea_arg(*(int *)(this_ + 0x288) + 0x40), bea_arg(this_));
    iVar3 = FUN_004e1ab0(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(this_ + 0x28c)), bea_arg(this_));
    if (iVar3 != 0) goto LAB_0044e1b6;
    uVar5 = *(undefined4 *)(this_ + 0x28c);
  }
  FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(uVar5), bea_arg(this_), bea_arg(0x3f333333), bea_arg(2), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
LAB_0044e1b6:
  CCarrier__vslot66(bea_arg((CCarrier *)this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044e020, ap_0044e020));

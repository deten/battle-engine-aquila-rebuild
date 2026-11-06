// auto-ported from 00409950_FUN_00409950.c (FUN_00409950, 1156 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define _DAT_008969b8 GLOBAL_AT(float, 0x008969b8)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004e1260_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1260_t> FUN_004e1260 = {(FUN_004e1260_t)0x004e1260};
typedef uint32_t (BEA_THISCALL* FUN_004e1800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1800_t> FUN_004e1800 = {(FUN_004e1800_t)0x004e1800};
typedef int * (BEA_THISCALL* FUN_004e1880_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1880_t> FUN_004e1880 = {(FUN_004e1880_t)0x004e1880};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 (BEA_THISCALL* FUN_004e1ab0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1ab0_t> FUN_004e1ab0 = {(FUN_004e1ab0_t)0x004e1ab0};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};

static void BEA_THISCALL ap_00409950(void * this_)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_004e1ab0(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5c4)), bea_arg(this_));
  if (iVar4 == 0) {
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5c4)), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
  }
  if (7.0f <= *(float *)((int)this_ + 0xf8)) {
    if (2.0f <= *(float *)((int)this_ + 0xfc)) {
      iVar4 = FUN_004e1880(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5ac) + 0x40), bea_arg(this_));
      if (iVar4 != 0) {
        FUN_004e1260(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(iVar4 + 0xc)), bea_arg(0), bea_arg(0x3ca3d70a), bea_arg(this_));
      }
      if ((*(int *)((int)this_ + 0x5b0) != 0) &&
         (iVar4 = FUN_004e1880(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5b0) + 0x40), bea_arg(this_)), iVar4 != 0))
      {
        FUN_004e1260(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(iVar4 + 0xc)), bea_arg(0), bea_arg(0x3ca3d70a), bea_arg(this_));
      }
      iVar4 = FUN_004e1880(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5a8) + 0x40), bea_arg(this_));
      if (iVar4 != 0) {
        FUN_004e1260(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(iVar4 + 0xc)), bea_arg(0), bea_arg(0x3ca3d70a), bea_arg(this_));
      }
    }
    else {
      FUN_004e1800(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5a8) + 0x40), bea_arg(this_));
      if (*(int *)((int)this_ + 0x5b0) != 0) {
        FUN_004e1800(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5b0) + 0x40), bea_arg(this_));
      }
      iVar4 = FUN_004e1ab0(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5ac)), bea_arg(this_));
      if (iVar4 == 0) {
        FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5ac)), bea_arg(this_), bea_arg(0x3f800000), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
      }
    }
  }
  else {
    FUN_004e1800(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5ac) + 0x40), bea_arg(this_));
    if (*(int *)((int)this_ + 0x5b0) != 0) {
      FUN_004e1800(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x5b0) + 0x40), bea_arg(this_));
    }
    iVar4 = FUN_004e1ab0(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5a8)), bea_arg(this_));
    if (iVar4 == 0) {
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5a8)), bea_arg(this_), bea_arg(0x3f800000), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
    }
  }
  if (*(int *)((int)this_ + 0x5e4) != 0) {
    iVar4 = FUN_004e1ab0(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5b8)), bea_arg(this_));
    if (iVar4 == 0) {
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5b8)), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
    }
    *(undefined4 *)((int)this_ + 0x5e4) = 0;
  }
  piVar1 = *(int **)((int)this_ + 0x294);
  *(int **)((int)this_ + 0x29c) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar4 != 0))) {
    if ((*(int *)(iVar4 + 0xc) == 0) && (*(float *)(iVar4 + 8) < DAT_00672fd0)) {
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5bc)), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
      *(undefined4 *)(iVar4 + 0xc) = 1;
    }
    piVar1 = *(int **)(*(int *)((int)this_ + 0x29c) + 4);
    *(int **)((int)this_ + 0x29c) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
  }
  if (*(int *)((int)this_ + 0x4e0) == 0) {
    if ((*(int *)((int)this_ + 0x4c8) == 0) ||
       (iVar4 = FUN_004fd3d0(bea_arg(this_), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0x4c8) + 0x138))), iVar4 == 0)
       ) {
      uVar5 = 0;
    }
    else {
      if ((*(int *)((int)this_ + 0x5e8) != 0) || (*(int *)((int)this_ + 0x4c8) == 0))
      goto LAB_00409d06;
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5c0)), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
      uVar5 = *(undefined4 *)((int)this_ + 0x4c8);
    }
  }
  else {
    if (*(int *)((int)this_ + 0x5e8) != 0) goto LAB_00409d06;
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5c0)), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
    uVar5 = *(undefined4 *)((int)this_ + 0x4e0);
  }
  FUN_00401000(bea_arg((void *)((int)this_ + 0x5e8)), bea_arg(uVar5));
LAB_00409d06:
  iVar4 = bea_vcall<uint32_t>(this_, 0x10c);
  if ((iVar4 != 0) && (*(int *)((int)this_ + 0x260) == 2)) {
    fVar2 = SQRT(*(float *)((int)this_ + 0x7c) * *(float *)((int)this_ + 0x7c) +
                 *(float *)((int)this_ + 0x80) * *(float *)((int)this_ + 0x80) +
                 *(float *)((int)this_ + 0x84) * *(float *)((int)this_ + 0x84));
    fVar3 = fVar2 + *(float *)((int)this_ + 0x5cc);
    *(float *)((int)this_ + 0x5cc) = fVar3;
    if (1.5f < fVar3) {
      *(int *)((int)this_ + 0x5d0) = *(int *)((int)this_ + 0x5d0) + 1;
      *(float *)((int)this_ + 0x5cc) = fVar3 - 1.5f;
    }
    if (0.01f <= fVar2) {
      return;
    }
    if (5 < *(int *)((int)this_ + 0x5d0)) {
      FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)((int)this_ + 0x5c8)), bea_arg(this_), bea_arg(_DAT_008969b8), bea_arg(3), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(1));
    }
  }
  *(undefined4 *)((int)this_ + 0x5d0) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00409950, ap_00409950));

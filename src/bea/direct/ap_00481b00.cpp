// auto-ported from 00481b00_FUN_00481b00.c (FUN_00481b00, 1084 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00427190_t)(uint32_t);
static const bea_guard<FUN_00427190_t> FUN_00427190 = {(FUN_00427190_t)0x00427190};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00539f40_t)(uint32_t);
static const bea_guard<FUN_00539f40_t> FUN_00539f40 = {(FUN_00539f40_t)0x00539f40};
typedef uint32_t (BEA_THISCALL* FUN_0053bda0_t)(uint32_t);
static const bea_guard<FUN_0053bda0_t> FUN_0053bda0 = {(FUN_0053bda0_t)0x0053bda0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00481b00(void * this_)
{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  if (*(void **)((int)this_ + 0x30) != (void *)0x0) {
    FUN_00539f40(bea_arg(*(void **)((int)this_ + 0x30)));
  }
  if (*(void **)((int)this_ + 0x60) != (void *)0x0) {
    FUN_00427190(bea_arg(*(void **)((int)this_ + 0x60)));
  }
  pvVar1 = *(void **)((int)this_ + 0x60);
  if (pvVar1 != (void *)0x0) {
    FUN_0053bda0(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x60) = 0;
  }
  pvVar1 = *(void **)((int)this_ + 0x30);
  if (pvVar1 != (void *)0x0) {
    FUN_00539f40(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0x30) = 0;
  }
  if (*(int *)((int)this_ + 0x104) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x104) + 8)));
    *(undefined4 *)((int)this_ + 0x104) = 0;
  }
  if (*(int *)((int)this_ + 0x108) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x108) + 8)));
    *(undefined4 *)((int)this_ + 0x108) = 0;
  }
  if (*(int *)((int)this_ + 0x10c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x10c) + 8)));
    *(undefined4 *)((int)this_ + 0x10c) = 0;
  }
  if (*(int *)((int)this_ + 0x110) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x110) + 8)));
    *(undefined4 *)((int)this_ + 0x110) = 0;
  }
  if (*(int *)((int)this_ + 0x114) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x114) + 8)));
    *(undefined4 *)((int)this_ + 0x114) = 0;
  }
  if (*(int *)((int)this_ + 0x118) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x118) + 8)));
    *(undefined4 *)((int)this_ + 0x118) = 0;
  }
  if (*(int *)((int)this_ + 0x11c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x11c) + 8)));
    *(undefined4 *)((int)this_ + 0x11c) = 0;
  }
  if (*(int *)((int)this_ + 0x120) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x120) + 8)));
    *(undefined4 *)((int)this_ + 0x120) = 0;
  }
  if (*(int *)((int)this_ + 0x124) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x124) + 8)));
    *(undefined4 *)((int)this_ + 0x124) = 0;
  }
  if (*(int *)((int)this_ + 0x128) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x128) + 8)));
    *(undefined4 *)((int)this_ + 0x128) = 0;
  }
  if (*(int *)((int)this_ + 300) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 300) + 8)));
    *(undefined4 *)((int)this_ + 300) = 0;
  }
  if (*(int *)((int)this_ + 0x130) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x130) + 8)));
    *(undefined4 *)((int)this_ + 0x130) = 0;
  }
  if (*(int *)((int)this_ + 0x134) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x134) + 8)));
    *(undefined4 *)((int)this_ + 0x134) = 0;
  }
  if (*(int *)((int)this_ + 0x138) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x138) + 8)));
    *(undefined4 *)((int)this_ + 0x138) = 0;
  }
  if (*(int *)((int)this_ + 0x13c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x13c) + 8)));
    *(undefined4 *)((int)this_ + 0x13c) = 0;
  }
  if (*(int *)((int)this_ + 0x140) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x140) + 8)));
    *(undefined4 *)((int)this_ + 0x140) = 0;
  }
  if (*(int *)((int)this_ + 0x148) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x148) + 8)));
    *(undefined4 *)((int)this_ + 0x148) = 0;
  }
  if (*(int *)((int)this_ + 0x14c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x14c) + 8)));
    *(undefined4 *)((int)this_ + 0x14c) = 0;
  }
  if (*(int *)((int)this_ + 0x150) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x150) + 8)));
    *(undefined4 *)((int)this_ + 0x150) = 0;
  }
  if (*(int *)((int)this_ + 0x154) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x154) + 8)));
    *(undefined4 *)((int)this_ + 0x154) = 0;
  }
  if (*(int *)((int)this_ + 0x158) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x158) + 8)));
    *(undefined4 *)((int)this_ + 0x158) = 0;
  }
  if (*(int *)((int)this_ + 0x15c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x15c) + 8)));
    *(undefined4 *)((int)this_ + 0x15c) = 0;
  }
  if (*(int *)((int)this_ + 0x160) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x160) + 8)));
    *(undefined4 *)((int)this_ + 0x160) = 0;
  }
  if (*(int *)((int)this_ + 0x164) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x164) + 8)));
    *(undefined4 *)((int)this_ + 0x164) = 0;
  }
  if (*(int *)((int)this_ + 0x168) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x168) + 8)));
    *(undefined4 *)((int)this_ + 0x168) = 0;
  }
  if (*(int *)((int)this_ + 0x16c) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x16c) + 8)));
    *(undefined4 *)((int)this_ + 0x16c) = 0;
  }
  if (*(int *)((int)this_ + 0x170) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x170) + 8)));
    *(undefined4 *)((int)this_ + 0x170) = 0;
  }
  if (*(int *)((int)this_ + 0x174) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x174) + 8)));
    *(undefined4 *)((int)this_ + 0x174) = 0;
  }
  if (*(int *)((int)this_ + 0x144) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x144) + 8)));
    *(undefined4 *)((int)this_ + 0x144) = 0;
  }
  if (*(int *)((int)this_ + 0x1a0) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1a0) + 8)));
    *(undefined4 *)((int)this_ + 0x1a0) = 0;
  }
  if (*(int *)((int)this_ + 0x1a4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1a4) + 8)));
    *(undefined4 *)((int)this_ + 0x1a4) = 0;
  }
  if (*(int *)((int)this_ + 0x1a8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1a8) + 8)));
    *(undefined4 *)((int)this_ + 0x1a8) = 0;
  }
  if (*(int *)((int)this_ + 0x1ac) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1ac) + 8)));
    *(undefined4 *)((int)this_ + 0x1ac) = 0;
  }
  if (*(int *)((int)this_ + 0x1b0) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1b0) + 8)));
    *(undefined4 *)((int)this_ + 0x1b0) = 0;
  }
  if (*(int *)((int)this_ + 0x1b4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1b4) + 8)));
    *(undefined4 *)((int)this_ + 0x1b4) = 0;
  }
  if (*(int *)((int)this_ + 0x1c8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1c8) + 8)));
    *(undefined4 *)((int)this_ + 0x1c8) = 0;
  }
  if (*(int *)((int)this_ + 0x1cc) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1cc) + 8)));
    *(undefined4 *)((int)this_ + 0x1cc) = 0;
  }
  if (*(int *)((int)this_ + 0x1d0) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1d0) + 8)));
    *(undefined4 *)((int)this_ + 0x1d0) = 0;
  }
  if (*(int *)((int)this_ + 0x1d4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1d4) + 8)));
    *(undefined4 *)((int)this_ + 0x1d4) = 0;
  }
  if (*(int *)((int)this_ + 0x1d8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x1d8) + 8)));
    *(undefined4 *)((int)this_ + 0x1d8) = 0;
  }
  piVar3 = (int *)((int)this_ + 0x178);
  iVar2 = 6;
  do {
    if (*piVar3 != 0) {
      FUN_004f27e0(bea_arg((void *)(*piVar3 + 8)));
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00481b00, ap_00481b00));

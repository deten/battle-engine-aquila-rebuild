// auto-ported from 0050ada0_FUN_0050ada0.c (FUN_0050ada0, 461 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0067a748 GLOBAL_AT(undefined4*, 0x0067a748)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0067a07c GLOBAL_AT(int, 0x0067a07c)
#define DAT_0067a078 GLOBAL_AT(int, 0x0067a078)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef uint32_t (BEA_CDECL* FUN_0040f140_t)(void);
static const bea_guard<FUN_0040f140_t> FUN_0040f140 = {(FUN_0040f140_t)0x0040f140};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_CDECL* FUN_00505ab0_t)(void);
static const bea_guard<FUN_00505ab0_t> FUN_00505ab0 = {(FUN_00505ab0_t)0x00505ab0};
typedef void * (BEA_THISCALL* FUN_0050d680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050d680_t> FUN_0050d680 = {(FUN_0050d680_t)0x0050d680};
typedef uint32_t (BEA_THISCALL* FUN_0050d7f0_t)(uint32_t);
static const bea_guard<FUN_0050d7f0_t> FUN_0050d7f0 = {(FUN_0050d7f0_t)0x0050d7f0};
typedef uint32_t (BEA_CDECL* FUN_0050d9a0_t)(void);
static const bea_guard<FUN_0050d9a0_t> FUN_0050d9a0 = {(FUN_0050d9a0_t)0x0050d9a0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 * BEA_THISCALL ap_0050ada0(void * this_)
{
  void *this_00;
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (DAT_0067a748 != (int *)0x0) {
    bea_vcall<uint32_t>(DAT_0067a748, 0x4, 1);
  }
  DAT_0067a748 = (int *)0x0;
  if (*(void **)((int)this_ + 0x200) != (void *)0x0) {
    FUN_0050d680(bea_arg(*(void **)((int)this_ + 0x200)), bea_arg(1));
  }
  *(undefined4 *)((int)this_ + 0x200) = 0;
  if (*(void **)((int)this_ + 0x204) != (void *)0x0) {
    FUN_0050d680(bea_arg(*(void **)((int)this_ + 0x204)), bea_arg(1));
  }
  *(undefined4 *)((int)this_ + 0x204) = 0;
  if (*(void **)((int)this_ + 0x208) != (void *)0x0) {
    FUN_0050d680(bea_arg(*(void **)((int)this_ + 0x208)), bea_arg(1));
  }
  *(undefined4 *)((int)this_ + 0x208) = 0;
  iVar1 = FUN_00406d20(bea_arg(this_));
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    piVar2 = (int *)FUN_00406d20(bea_arg(this_));
    bea_vcall<uint32_t>(piVar2, 0x8);
    puVar4 = *(undefined4 **)this_;
    *(undefined4 **)((int)this_ + 8) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*puVar4;
    }
    if (piVar2 == piVar3) {
      FUN_004e5bd0(bea_arg(this_), bea_arg(piVar2));
    }
    iVar1 = FUN_00406d20(bea_arg(this_));
  }
  FUN_0050d7f0(bea_arg((void *)((int)this_ + 0x120)));
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0xb0)));
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x110)));
  while(BEA_LOOP_GUARD(( true ))) {
    puVar4 = *(undefined4 **)((int)this_ + 0xc0);
    *(undefined4 **)((int)this_ + 200) = puVar4;
    if ((puVar4 == (undefined4 *)0x0) || (this_00 = (void *)*puVar4, this_00 == (void *)0x0)) break;
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0xc0)), bea_arg(this_00));
    FUN_0044b1d0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  FUN_004e5c60(bea_arg(this_));
  while(BEA_LOOP_GUARD(( true ))) {
    piVar2 = *(int **)((int)this_ + 0xf0);
    *(int **)((int)this_ + 0xf8) = piVar2;
    if ((piVar2 == (int *)0x0) || ((int *)*piVar2 == (int *)0x0)) break;
    bea_vcall<uint32_t>(*piVar2, 0x4, 1);
  }
  while(BEA_LOOP_GUARD(( true ))) {
    piVar2 = *(int **)((int)this_ + 0x100);
    *(int **)((int)this_ + 0x108) = piVar2;
    if ((piVar2 == (int *)0x0) || ((int *)*piVar2 == (int *)0x0)) break;
    bea_vcall<uint32_t>(*piVar2, 0x4, 1);
  }
  FUN_00505ab0();
  FUN_0040f140();
  FUN_0050d9a0();
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(DAT_0067a07c));
  DAT_0067a07c = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(DAT_0067a078));
  DAT_0067a078 = 0;
  puVar4 = (undefined4 *)((int)this_ + 0x198);
  iVar1 = 0x1a;
  do {
    puVar4[-0x1a] = 0;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0xe0)));
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x50)));
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x30)));
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x20)));
  *(undefined4 *)((int)this_ + 0x20c) = 0;
  *(undefined4 *)((int)this_ + 0x210) = 0;
  *(undefined4 *)((int)this_ + 0x214) = 0;
  *(undefined4 *)((int)this_ + 0x218) = 0;
  return (undefined4 *)((int)this_ + 0x20c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050ada0, ap_0050ada0));

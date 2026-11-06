// auto-ported from 00510f10_FUN_00510f10.c (FUN_00510f10, 297 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_00510f10(void * this_)
{
  int *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puStack_8;
  uint local_4;
  this_00 = (int *)((int)this_ + 0x5c);
  local_4 = 1;
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = (int *)*this_00;
    *(int **)((int)this_ + 100) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) break;
    FUN_004e5bd0(bea_arg(this_00), bea_arg(iVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
  }
  piVar1 = (int *)((int)this_ + 0x4c);
  while(BEA_LOOP_GUARD(( true ))) {
    piVar3 = (int *)*piVar1;
    *(int **)((int)this_ + 0x54) = piVar3;
    if ((piVar3 == (int *)0x0) || (iVar2 = *piVar3, iVar2 == 0)) break;
    FUN_004e5bd0(bea_arg(piVar1), bea_arg(iVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x30)));
  *(undefined4 *)((int)this_ + 0x30) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)this_));
  *(undefined4 *)this_ = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)));
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x20)));
  *(undefined4 *)((int)this_ + 0x20) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x24)));
  *(undefined4 *)((int)this_ + 0x24) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
  *(undefined4 *)((int)this_ + 0x28) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x2c)));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg(this_00));
  local_4 = 0xffffffff;
  return FUN_004e5c60(bea_arg(piVar1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00510f10, ap_00510f10));

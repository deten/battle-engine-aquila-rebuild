// auto-ported from 004ae640_FUN_004ae640.c (FUN_004ae640, 534 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004d3a00_t)(uint32_t);
static const bea_guard<FUN_004d3a00_t> FUN_004d3a00 = {(FUN_004d3a00_t)0x004d3a00};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004ae640(void * this_)
{
  int iVar1;
  void *this_00;
  int iVar2;
  
  if (*(int *)((int)this_ + 0x104) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x104)));
    *(undefined4 *)((int)this_ + 0x104) = 0;
  }
  if (*(int *)((int)this_ + 0x108) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x108)));
    *(undefined4 *)((int)this_ + 0x108) = 0;
  }
  if ((0 < *(int *)((int)this_ + 0x90)) && (*(int *)((int)this_ + 0x94) != 0)) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x94)));
    *(undefined4 *)((int)this_ + 0x94) = 0;
  }
  if (*(int *)((int)this_ + 0x134) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x134)));
  }
  if (*(int *)((int)this_ + 0x84) != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 0xb4)) {
      do {
        iVar1 = *(int *)(*(int *)((int)this_ + 0x84) + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1));
        }
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xb4))));
    }
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x84)));
  }
  if (*(int *)((int)this_ + 0x80) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x80)));
  }
  if (*(int *)((int)this_ + 0xc4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xc4)));
  }
  if (*(int *)((int)this_ + 0x10c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x10c)));
  }
  if (*(int *)((int)this_ + 200) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 200)));
  }
  if (*(int *)((int)this_ + 0xcc) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xcc)));
  }
  if (*(int *)((int)this_ + 0xd0) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xd0)));
  }
  if (*(int *)((int)this_ + 0xd4) != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0xd4) + iVar2 * 4)));
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xac))));
    }
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xd4)));
  }
  if (*(int *)((int)this_ + 0xd8) != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 0xd8) + iVar2 * 4)));
        iVar2 = iVar2 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xac))));
    }
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xd8)));
  }
  this_00 = *(void **)((int)this_ + 0x100);
  if (this_00 != (void *)0x0) {
    FUN_004d3a00(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  if (*(int *)((int)this_ + 0xfc) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0xfc)));
    *(undefined4 *)((int)this_ + 0xfc) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x138) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x138), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x138) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae640, ap_004ae640));

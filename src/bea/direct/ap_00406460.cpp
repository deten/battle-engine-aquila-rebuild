// auto-ported from 00406460_FUN_00406460.c (FUN_00406460, 247 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004988b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004988b0_t> FUN_004988b0 = {(FUN_004988b0_t)0x004988b0};
typedef uint32_t (BEA_THISCALL* FUN_004ad7f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004ad7f0_t> FUN_004ad7f0 = {(FUN_004ad7f0_t)0x004ad7f0};

static void BEA_THISCALL ap_00406460(void * this_)
{
  undefined4 uVar1;
  void *this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this_ + 0x260);
  if (((iVar2 == 1) || (iVar2 == 3)) && (*(int *)((int)this_ + 0x5f0) == 1)) {
    uVar1 = *(undefined4 *)((int)this_ + 0x5ec);
    *(undefined4 *)((int)this_ + 0x5ec) = *(undefined4 *)((int)this_ + 0x30);
    *(undefined4 *)((int)this_ + 0x30) = uVar1;
    *(undefined4 *)((int)this_ + 0x5f0) = 0;
    *(int *)((int)this_ + 0x5f4) = *(int *)((int)this_ + 0x70);
    *(undefined4 *)(*(int *)((int)this_ + 0x70) + 8) = 0;
    *(undefined4 *)((int)this_ + 0x70) = 0;
  }
  else {
    if (iVar2 != 2) {
      return;
    }
    if (*(int *)((int)this_ + 0x5f0) != 0) {
      return;
    }
    uVar1 = *(undefined4 *)((int)this_ + 0x5ec);
    *(undefined4 *)((int)this_ + 0x5ec) = *(undefined4 *)((int)this_ + 0x30);
    *(undefined4 *)((int)this_ + 0x30) = uVar1;
    *(undefined4 *)((int)this_ + 0x5f0) = 1;
    *(int *)((int)this_ + 0x70) = *(int *)((int)this_ + 0x5f4);
    if (this_ == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)this_ + 8;
    }
    *(int *)(*(int *)((int)this_ + 0x5f4) + 8) = iVar2;
    *(undefined4 *)((int)this_ + 0x5f4) = 0;
  }
  iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar2 == 1) {
    if ((*(int *)((int)this_ + 0x30) != 0) && (*(int *)((int)this_ + 0x70) != 0)) {
      iVar2 = 0x14;
      do {
        FUN_004988b0(bea_arg(*(void **)((int)this_ + 0x70)), bea_arg(1), bea_arg(0));
        iVar2 = iVar2 + -1;
      } while (BEA_LOOP_GUARD((iVar2 != 0)));
    }
    if (((*(int *)((int)this_ + 0x38) != 0) &&
        (this_00 = *(void **)(*(int *)((int)this_ + 0x38) + 0x18), this_00 != (void *)0x0)) &&
       (*(int *)((int)this_ + 0x30) != 0)) {
      FUN_004ad7f0(bea_arg(this_00), bea_arg(*(int *)((int)this_ + 0x30)));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00406460, ap_00406460));

// auto-ported from 00414cb0_FUN_00414cb0.c (FUN_00414cb0, 168 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855148 GLOBAL_AT(undefined4*, 0x00855148)
#define DAT_00855140 GLOBAL_AT(undefined4*, 0x00855140)
#define DAT_008550a8 GLOBAL_AT(undefined4*, 0x008550a8)
#define DAT_008550a0 GLOBAL_AT(undefined4*, 0x008550a0)
typedef undefined4 (BEA_THISCALL* FUN_004e6610_t)(uint32_t);
static const bea_guard<FUN_004e6610_t> FUN_004e6610 = {(FUN_004e6610_t)0x004e6610};
typedef uint32_t (BEA_THISCALL* FUN_0053b5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053b5f0_t> FUN_0053b5f0 = {(FUN_0053b5f0_t)0x0053b5f0};

static void BEA_THISCALL ap_00414cb0(void * this_)
{
  int iVar1;
  void *this_00;
  
  *(undefined4 *)((int)this_ + 0x60) = 0;
  DAT_00855148 = DAT_00855140;
  if (DAT_00855140 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *DAT_00855140;
  }
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    FUN_0053b5f0(bea_arg(this_), bea_arg(*(undefined4 *)(iVar1 + 0x1c)), bea_arg(*(undefined4 *)(iVar1 + 0x20)), bea_arg(0xffff00));
    DAT_00855148 = (int *)DAT_00855148[1];
    if (DAT_00855148 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *DAT_00855148;
    }
  }
  DAT_008550a8 = DAT_008550a0;
  if (DAT_008550a0 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*DAT_008550a0;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    iVar1 = FUN_004e6610(bea_arg(this_00));
    if (iVar1 == 1) {
      FUN_0053b5f0(bea_arg(this_), bea_arg(*(undefined4 *)((int)this_00 + 0x1c)), bea_arg(*(undefined4 *)((int)this_00 + 0x20)), bea_arg(0xff0808));
    }
    DAT_008550a8 = (undefined4 *)DAT_008550a8[1];
    if (DAT_008550a8 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*DAT_008550a8;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414cb0, ap_00414cb0));

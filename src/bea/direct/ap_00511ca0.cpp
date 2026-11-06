// auto-ported from 00511ca0_FUN_00511ca0.c (FUN_00511ca0, 116 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef undefined4 (BEA_THISCALL* FUN_004e1910_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1910_t> FUN_004e1910 = {(FUN_004e1910_t)0x004e1910};

static void BEA_THISCALL ap_00511ca0(void * this_)
{
  undefined4 uVar1;
  
  if (*(int *)((int)this_ + 0x1c) != 0) {
    uVar1 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(*(int *)((int)this_ + 0x1c)));
    *(undefined4 *)((int)this_ + 4) = uVar1;
  }
  if (*(int *)((int)this_ + 0x20) != 0) {
    uVar1 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(*(int *)((int)this_ + 0x20)));
    *(undefined4 *)((int)this_ + 8) = uVar1;
  }
  if (*(int *)((int)this_ + 0x24) != 0) {
    uVar1 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x24)), bea_arg(0));
    *(undefined4 *)((int)this_ + 0xc) = uVar1;
  }
  if (*(int *)((int)this_ + 0x28) != 0) {
    uVar1 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x28)), bea_arg(0));
    *(undefined4 *)((int)this_ + 0x10) = uVar1;
  }
  if (*(int *)((int)this_ + 0x2c) != 0) {
    uVar1 = FUN_004e1910(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x2c)), bea_arg(0));
    *(undefined4 *)((int)this_ + 0x14) = uVar1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00511ca0, ap_00511ca0));

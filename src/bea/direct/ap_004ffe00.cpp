// auto-ported from 004ffe00_FUN_004ffe00.c (FUN_004ffe00, 251 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_004ffe00(void * this_)
{
  uint uVar1;
  
  uVar1 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar1 = uVar1 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  *(float *)((int)this_ + 0x48) = (float)(int)uVar1 * 6.1035155e-07f + 0.04f;
  uVar1 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar1 = uVar1 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  *(float *)((int)this_ + 0x54) = (float)(int)uVar1 * 6.1035155e-07f + 0.04f;
  uVar1 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar1 = uVar1 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  if (0.5f < (float)(int)uVar1 * 1.5258789e-05f) {
    *(float *)((int)this_ + 0x48) = -*(float *)((int)this_ + 0x48);
  }
  uVar1 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar1 = uVar1 & 0x8000ffff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffff0000) + 1;
  }
  if (0.5f < (float)(int)uVar1 * 1.5258789e-05f) {
    *(float *)((int)this_ + 0x54) = -*(float *)((int)this_ + 0x54);
  }
  *(float *)((int)this_ + 0x50) = -*(float *)((int)this_ + 0x48);
  *(float *)((int)this_ + 0x5c) = -*(float *)((int)this_ + 0x54);
  *(undefined4 *)((int)this_ + 0x4c) = *(undefined4 *)((int)this_ + 0x48);
  *(undefined4 *)((int)this_ + 0x58) = *(undefined4 *)((int)this_ + 0x54);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ffe00, ap_004ffe00));

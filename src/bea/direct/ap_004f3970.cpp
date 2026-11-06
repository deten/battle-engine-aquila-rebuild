// auto-ported from 004f3970_FUN_004f3970.c (FUN_004f3970, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855140 GLOBAL_AT(int, 0x00855140)
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static undefined4 BEA_THISCALL ap_004f3970(void * this_, int param_1)
{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)((int)this_ + 0x2c);
  uVar2 = CONCAT31((int3)((uint)param_1 >> 8),bVar1);
  if (param_1 == 1) {
    if ((bVar1 & 0x20) == 0) {
      uVar2 = FUN_004e5a80(bea_arg(&DAT_00855140), bea_arg(this_));
      *(byte *)((int)this_ + 0x2c) = *(byte *)((int)this_ + 0x2c) | 0x20;
      return uVar2;
    }
  }
  else if ((bVar1 & 0x20) != 0) {
    uVar2 = FUN_004e5bd0(bea_arg(&DAT_00855140), bea_arg(this_));
    *(byte *)((int)this_ + 0x2c) = *(byte *)((int)this_ + 0x2c) & 0xdf;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3970, ap_004f3970));

// auto-ported from 004e7070_vslot66.c (CNormalSquad::vslot66, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef undefined4 (BEA_THISCALL* FUN_004e7110_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e7110_t> FUN_004e7110 = {(FUN_004e7110_t)0x004e7110};

static void BEA_THISCALL ap_004e7070(CNormalSquad * this_, float param_1)
{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = bea_piece32(param_1);
  iVar2 = FUN_004e7110(bea_arg(this_), bea_arg(param_1));
  if (iVar2 == 0) {
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    param_1 = (float)(int)uVar3 * 1.5258789e-07f + 0.99f + DAT_00672fd0;
  }
  else {
    param_1 = -1.0;
  }
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa2), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(uVar1));
  iVar2 = bea_vcall<uint32_t>(this_, 0x118);
  if (iVar2 != 0) {
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e7070, ap_004e7070));

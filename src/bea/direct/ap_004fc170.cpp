// auto-ported from 004fc170_vslot87.c (CUnit::vslot87, 161 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 (BEA_THISCALL* FUN_004fc220_t)(uint32_t);
static const bea_guard<FUN_004fc220_t> FUN_004fc220 = {(FUN_004fc220_t)0x004fc220};

static undefined4 BEA_THISCALL ap_004fc170(CUnit * this_)
{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(this_ + 0x140) != 0) &&
     (iVar2 = *(int *)(*(int *)(*(int *)(this_ + 0x140) + 0xa0) + 0x14), iVar2 != 0)) {
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(iVar2), bea_arg(this_), bea_arg(0x3f333333), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
  }
  FUN_004fc220(bea_arg(this_));
  iVar2 = *(int *)(this_ + 0x140);
  *(undefined4 *)(this_ + 0x1e8) = 0;
  uVar3 = 0;
  if (iVar2 != 0) {
    fVar1 = *(float *)(*(int *)(iVar2 + 0xa0) + 0x8c);
    uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),
                     (ushort)(fVar1 < 0.0f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                     (ushort)(fVar1 == 0.0f) << 0xe);
    if ((fVar1 == 0.0f) == 0) {
      fVar1 = DAT_00672fd0 + *(float *)(*(int *)(iVar2 + 0xa0) + 0x8c);
      *(undefined4 *)(this_ + 0x168) = 2;
      *(float *)(this_ + 0x16c) = fVar1;
      return uVar3;
    }
  }
  *(undefined4 *)(this_ + 0x168) = 0;
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc170, ap_004fc170));

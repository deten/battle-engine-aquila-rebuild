// auto-ported from 00447a40_vslot118.c (CDropship::vslot118, 118 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDropship;
typedef undefined4 (BEA_THISCALL* FUN_00447d50_t)(uint32_t);
static const bea_guard<FUN_00447d50_t> FUN_00447d50 = {(FUN_00447d50_t)0x00447d50};

static undefined4 BEA_THISCALL ap_00447a40(CDropship * this_)
{
  float fVar1;
  int iVar2;
  undefined2 uVar4;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(this_ + 0x290) != 0) {
    iVar2 = *(int *)(this_ + 0x294);
    if ((iVar2 == 0) && (iVar2 = FUN_00447d50(bea_arg(this_)), iVar2 == 0)) {
      return 0;
    }
    fVar1 = *(float *)(this_ + 0x114) - 3.1415927f;
    *(undefined4 *)(this_ + 0x27c) = 2;
    *(float *)(this_ + 0x2a0) = fVar1;
    uVar4 = (undefined2)((uint)iVar2 >> 0x10);
    if (fVar1 >= 3.1415927f && (fVar1 == 3.1415927f) == 0) {
      *(float *)(this_ + 0x2a0) = fVar1 - 6.2831855f;
      return CONCAT22(uVar4,(ushort)(fVar1 < 3.1415927f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                            (ushort)(fVar1 == 3.1415927f) << 0xe);
    }
    uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < -3.1415927f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                           (ushort)(fVar1 == -3.1415927f) << 0xe);
    if (fVar1 < -3.1415927f) {
      *(float *)(this_ + 0x2a0) = fVar1 + 6.2831855f;
      return uVar3;
    }
  }
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00447a40, ap_00447a40));

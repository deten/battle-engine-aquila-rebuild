// auto-ported from 004dfd10_vslot18.c (CBuilding::vslot18, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CBuilding;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
typedef CActor * (BEA_THISCALL* CActor__vslot18_t)(uint32_t);
static const bea_guard<CActor__vslot18_t> CActor__vslot18 = {(CActor__vslot18_t)0x00402030};

static undefined4 BEA_THISCALL ap_004dfd10(CBuilding * this_)
{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  
  uVar5 = CActor__vslot18(bea_arg((CActor *)this_));
  fVar1 = *(float *)(this_ + 0x24);
  bVar2 = bea_isnan(DAT_006fbdfc);
  bVar3 = DAT_006fbdfc < fVar1;
  bVar4 = DAT_006fbdfc == fVar1;
  if (bVar3) {
    *(float *)(this_ + 0x24) = DAT_006fbdfc;
    *(float *)(this_ + 0x94) = DAT_006fbdfc;
  }
  return CONCAT22((short)((uint)uVar5 >> 0x10),
                  (ushort)bVar3 << 8 | (ushort)(bVar2 || bea_isnan(fVar1)) << 10 | (ushort)bVar4 << 0xe);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dfd10, ap_004dfd10));

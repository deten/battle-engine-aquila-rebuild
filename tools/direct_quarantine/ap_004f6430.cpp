// auto-ported from 004f6430_FUN_004f6430.c (FUN_004f6430, 80 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004f6430(void * this_)
{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte bStack_8;
  
  iVar6 = bea_vcall<uint32_t>((int)this_ + 8, 0x54);
  fVar2 = *(float *)(iVar6 + 0x10);
  iVar6 = bea_vcall<uint32_t>((int)this_ + 8, 0x54);
  fVar1 = *(float *)(iVar6 + 0x14);
  bVar3 = bea_isnan(fVar2);
  bVar4 = fVar1 < fVar2;
  bVar5 = fVar1 == fVar2;
  if (bVar4 == 0 && bVar5 == 0) {
    fVar2 = fVar1;
  }
  bStack_8 = (byte)(longlong)ROUND(fVar2 * 6.0f);
  if (6 < bStack_8) {
    bStack_8 = 6;
  }
  return CONCAT31((int3)(CONCAT22((short)((uint)iVar6 >> 0x10),
                                  (ushort)bVar4 << 8 | (ushort)(bea_isnan(fVar1) || bVar3) << 10 |
                                  (ushort)bVar5 << 0xe) >> 8),bStack_8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6430, ap_004f6430));

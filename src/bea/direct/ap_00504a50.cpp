// auto-ported from 00504a50_vslot66.c (CWarspiteDome::vslot66, 240 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CWarspiteDome;
typedef char pCVar3;
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot66_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot66_t> CGroundUnit__vslot66 = {(CGroundUnit__vslot66_t)0x0047c970};
typedef uint32_t (BEA_THISCALL* FUN_00504b40_t)(uint32_t);
static const bea_guard<FUN_00504b40_t> FUN_00504b40 = {(FUN_00504b40_t)0x00504b40};

static uint BEA_THISCALL ap_00504a50(CWarspiteDome * this_)
{
  float fVar1;
  uint uVar2;
  CWarspiteDome *pCVar3;
  int iVar4;
  
  CGroundUnit__vslot66(bea_arg((CGroundUnit *)this_));
  FUN_00504b40(bea_arg(this_));
  uVar2 = 0;
  if (*(int *)(this_ + 0x214) != 0) {
    *(undefined4 *)(this_ + 0x284) = *(undefined4 *)(this_ + 0x280);
    if (*(int *)(this_ + 0x168) != 2) {
      *(float *)(this_ + 0x260) = *(float *)(this_ + 0x260) + 0.005f;
    }
    fVar1 = *(float *)(this_ + 0x260);
    pCVar3 = this_ + 0x288;
    iVar4 = 6;
    *(float *)(this_ + 0x260) = fVar1 * 0.97f;
    *(float *)(this_ + 0x280) = fVar1 * 0.97f + *(float *)(this_ + 0x280);
    do {
      *(float *)(pCVar3 + 0x18) = *(float *)pCVar3;
      if (*(float *)(pCVar3 + -0x20) == 0.0f) {
        if (0.0f < *(float *)pCVar3) {
          *(float *)pCVar3 = *(float *)pCVar3 - *(float *)pCVar3 * 0.25f;
        }
        fVar1 = *(float *)pCVar3;
        uVar2 = bea_piece32((ushort)((ushort)(fVar1 < 0.0f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                              (ushort)(fVar1 == 0.0f) << 0xe));
        if (fVar1 < 0.0f || (fVar1 == 0.0f) != 0) {
          *(float *)pCVar3 = 0.0f;
        }
      }
      else {
        if (*(float *)pCVar3 < 1.0f) {
          *(float *)pCVar3 = (1.0f - *(float *)pCVar3) * 0.9f + *(float *)pCVar3;
        }
        fVar1 = *(float *)pCVar3;
        uVar2 = CONCAT22((short)(bea_piece32(*(float *)(pCVar3 + -0x20)) >> 0x10),
                         (ushort)(fVar1 < 1.0f) << 8 | (ushort)bea_isnan(fVar1) << 10 |
                         (ushort)(fVar1 == 1.0f) << 0xe);
        if (fVar1 >= 1.0f) {
          *(float *)pCVar3 = 1.0f;
          *(float *)(pCVar3 + -0x20) = 0.0f;
        }
      }
      pCVar3 = pCVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00504a50, ap_00504a50));

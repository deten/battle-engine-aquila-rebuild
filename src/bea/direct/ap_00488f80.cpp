// auto-ported from 00488f80_vslot35.c (CInfantryUnit::vslot35, 178 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CInfantryUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Infantry_cpp_0062d4a8 ((char*)0x0062d4a8)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot35_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot35_t> CGroundUnit__vslot35 = {(CGroundUnit__vslot35_t)0x0047c8e0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00488f80(CInfantryUnit * this_, int param_1)
{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  iVar3 = bea_vcall<uint32_t>(this_ + 8, 0x54);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x18);
    fVar2 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                 *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10)) * 0.5f;
    puVar4 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x5c), bea_arg(s_C__dev_ONSLAUGHT2_Infantry_cpp_0062d4a8), bea_arg(0x7a));
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[7] = uVar1;
      puVar4[6] = bea_piece32(fVar2 * fVar2);
      puVar4[5] = bea_piece32(fVar2);
      *puVar4 = ((void*)0x005d88cc);
      *(undefined4 **)(param_1 + 0xc) = puVar4;
      return CGroundUnit__vslot35(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return CGroundUnit__vslot35(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00488f80, ap_00488f80));

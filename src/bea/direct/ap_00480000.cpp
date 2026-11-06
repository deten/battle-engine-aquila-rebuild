// auto-ported from 00480000_vslot26_t8.c (CHiveBoss::vslot26_t8, 75 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CHiveBoss;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s___all_flash___0062ccb8 ((char*)0x0062ccb8)
typedef int (BEA_THISCALL* CUnit__vslot26_t8_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot26_t8_t> CUnit__vslot26_t8 = {(CUnit__vslot26_t8_t)0x004fd5e0};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_00480000(CHiveBoss * this_, undefined4 param_1)
{
  undefined4 uVar1;
  
  if (((*(int *)(this_ + 0x170) != 0) && (*(int *)(this_ + 0x29c) != 0)) &&
     (*(float *)(*(int *)(this_ + 0x29c) + 0x14) == DAT_00672fd0)) {
    FUN_00441740(&DAT_0066f580,s___all_flash___0062ccb8);
    return 100;
  }
  uVar1 = CUnit__vslot26_t8(bea_arg((CUnit *)this_), bea_arg(param_1));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480000, ap_00480000));

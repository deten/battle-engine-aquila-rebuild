// auto-ported from 00506930_vslot0.c (CWeapon::vslot0, 192 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWeapon;
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef undefined4 (BEA_THISCALL* FUN_005069f0_t)(uint32_t);
static const bea_guard<FUN_005069f0_t> FUN_005069f0 = {(FUN_005069f0_t)0x005069f0};

static undefined4 BEA_THISCALL ap_00506930(CWeapon * this_, float param_1)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = bea_piece32(param_1);
  if ((*(short *)(bea_piece32(param_1) + 4) == 0x1389) && ((*(byte *)(*(int *)(this_ + 8) + 0x2c) & 4) == 0))
  {
    iVar1 = *(int *)(*(int *)(this_ + 0xa4) + 0xc + *(int *)(this_ + 0x68) * 4);
    iVar5 = 0;
    piVar2 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      while (BEA_LOOP_GUARD((iVar5 != iVar1))) {
        iVar5 = iVar5 + 1;
        piVar2 = *(int **)(DAT_008553ec[2] + 4);
        DAT_008553ec[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar4 = 0;
      if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x44), *(int *)(this_ + 0x6c) < iVar4)) {
        FUN_005069f0(bea_arg(this_));
        *(int *)(this_ + 0x6c) = *(int *)(this_ + 0x6c) + 1;
        param_1 = DAT_00672fd0 + *(float *)(iVar3 + 0x3c);
        iVar4 = FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x1389), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
      }
    }
  }
  return iVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00506930, ap_00506930));

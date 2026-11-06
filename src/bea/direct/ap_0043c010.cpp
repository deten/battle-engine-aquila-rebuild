// auto-ported from 0043c010_vslot1.c (CFeatureExplosion::vslot1, 153 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFeatureExplosion;
#define DAT_00855404 GLOBAL_AT(undefined4*, 0x00855404)
typedef uint32_t (BEA_THISCALL* FUN_00511c10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00511c10_t> FUN_00511c10 = {(FUN_00511c10_t)0x00511c10};

static undefined4 BEA_THISCALL ap_0043c010(CFeatureExplosion * this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  uint32_t eax_in = 0;
  byte *pbVar3;
  int iVar4;
  void *this_00;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 != (byte *)0x0) {
    piVar2 = (int *)*DAT_00855404;
    DAT_00855404[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*piVar2;
    }
    eax_in = 0;
    if (this_00 != (void *)0x0) {
      do {
        pbVar6 = *(byte **)((int)this_00 + 0x20);
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0043c064:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0043c069;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0043c064;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_0043c069:
        if (iVar4 == 0) {
          if (this_00 == (void *)0x0) {
            return 0;
          }
          uVar5 = FUN_00511c10(bea_arg(this_00), bea_arg(this_ + 8));
          return uVar5;
        }
        piVar2 = *(int **)(DAT_00855404[2] + 4);
        DAT_00855404[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)*piVar2;
        }
        if (this_00 == (void *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043c010, ap_0043c010));

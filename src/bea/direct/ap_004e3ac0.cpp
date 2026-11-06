// auto-ported from 004e3ac0_FUN_004e3ac0.c (FUN_004e3ac0, 410 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_008a9b8c GLOBAL_AT(int, 0x008a9b8c)
#define s_Spawned_more_than_we_should_be_a_00632690 ((char*)0x00632690)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_CDECL* FUN_00511510_t)(uint32_t);
static const bea_guard<FUN_00511510_t> FUN_00511510 = {(FUN_00511510_t)0x00511510};

static int BEA_THISCALL ap_004e3ac0(void * this_)
{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  uint32_t eax_in = 0;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar5 = *(int *)((int)this_ + 0x3d0);
  if (iVar5 != 0) {
    iVar6 = 0;
    if (*(int *)((int)this_ + 0xb0) == 0) {
      pbVar2 = *(byte **)(iVar5 + 4);
      if (pbVar2 != (byte *)0x0) {
        piVar3 = (int *)*DAT_008553fc;
        DAT_008553fc[2] = (int)piVar3;
        if (piVar3 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar3;
        }
        while (BEA_LOOP_GUARD((iVar5 != 0))) {
          pbVar7 = *(byte **)(iVar5 + 0xb0);
          pbVar4 = pbVar2;
          do {
            bVar1 = *pbVar4;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_004e3bd3:
              iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_004e3bd8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_004e3bd3;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar6 = 0;
LAB_004e3bd8:
          if (iVar6 == 0) goto LAB_004e3bfd;
          piVar3 = *(int **)(DAT_008553fc[2] + 4);
          DAT_008553fc[2] = (int)piVar3;
          if (piVar3 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar3;
          }
        }
      }
      iVar5 = 0;
LAB_004e3bfd:
      iVar6 = FUN_00511510(bea_arg(iVar5));
      iVar6 = -iVar6;
    }
    else if (*(int *)((int)this_ + 0xb0) == 1) {
      pbVar2 = *(byte **)(iVar5 + 4);
      if (pbVar2 != (byte *)0x0) {
        piVar3 = (int *)*DAT_008553fc;
        DAT_008553fc[2] = (int)piVar3;
        if (piVar3 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar3;
        }
        while (BEA_LOOP_GUARD((iVar5 != 0))) {
          pbVar7 = *(byte **)(iVar5 + 0xb0);
          pbVar4 = pbVar2;
          do {
            bVar1 = *pbVar4;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_004e3b39:
              iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_004e3b3e;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_004e3b39;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar6 = 0;
LAB_004e3b3e:
          if (iVar6 == 0) {
            iVar6 = FUN_00511510(bea_arg(iVar5));
            goto LAB_004e3c0a;
          }
          piVar3 = *(int **)(DAT_008553fc[2] + 4);
          DAT_008553fc[2] = (int)piVar3;
          if (piVar3 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar3;
          }
        }
      }
      iVar6 = FUN_00511510(bea_arg(0));
    }
LAB_004e3c0a:
    if (*(int *)(*(int *)((int)this_ + 0x3d0) + 0xc) < *(int *)((int)this_ + 0x3d8)) {
      FUN_00441740(&DAT_0066f580,s_Spawned_more_than_we_should_be_a_00632690);
    }
    eax_in = DAT_008a9b8c +
             (*(int *)(*(int *)((int)this_ + 0x3d0) + 0xc) - *(int *)((int)this_ + 0x3d8)) *
             *(int *)(*(int *)((int)this_ + 0x3d0) + 0x10) * iVar6;
    DAT_008a9b8c = eax_in;
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3ac0, ap_004e3ac0));

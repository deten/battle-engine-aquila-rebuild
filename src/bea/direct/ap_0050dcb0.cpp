// auto-ported from 0050dcb0_FUN_0050dcb0.c (FUN_0050dcb0, 479 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00855360 GLOBAL_AT(undefined4*, 0x00855360)
#define DAT_00855358 GLOBAL_AT(undefined4*, 0x00855358)
#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 * (BEA_CDECL* FUN_0048c650_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0048c650_t> FUN_0048c650 = {(FUN_0048c650_t)0x0048c650};
typedef undefined4 * (BEA_CDECL* FUN_0050df80_t)(int, ...);
static const bea_guard<FUN_0050df80_t> FUN_0050df80 = {(FUN_0050df80_t)0x0050df80};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_0050dcb0(void)
{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_4 = 0;
  
  DAT_00855360 = DAT_00855358;
  if (DAT_00855358 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)*DAT_00855358;
  }
  do {
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    if (puVar8[1] == 0) {
      pbVar2 = (byte *)*puVar8;
      if (pbVar2 != (byte *)0x0) {
        iVar10 = 0;
        piVar6 = (int *)*DAT_008553fc;
        DAT_008553fc[2] = (int)piVar6;
        if (piVar6 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar6;
        }
        while (BEA_LOOP_GUARD((iVar5 != 0))) {
          pbVar9 = *(byte **)(iVar5 + 0xb0);
          pbVar4 = pbVar2;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0050dd30:
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_0050dd35;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0050dd30;
            pbVar4 = pbVar4 + 2;
            pbVar9 = pbVar9 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar5 = 0;
LAB_0050dd35:
          if (iVar5 == 0) goto LAB_0050dd5a;
          iVar10 = iVar10 + 1;
          piVar6 = *(int **)(DAT_008553fc[2] + 4);
          DAT_008553fc[2] = (int)piVar6;
          if (piVar6 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar6;
          }
        }
      }
      iVar10 = -1;
LAB_0050dd5a:
      piVar6 = (int *)FUN_0050df80(iVar10);
      if (piVar6 != (int *)0x0) {
        iVar10 = FUN_0048c650(8,0);
        pbVar2 = (byte *)*puVar8;
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
            pbVar9 = *(byte **)(iVar5 + 0xb0);
            pbVar4 = pbVar2;
            do {
              bVar1 = *pbVar4;
              bVar11 = bVar1 < *pbVar9;
              if (bVar1 != *pbVar9) {
LAB_0050ddd0:
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_0050ddd5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar11 = bVar1 < pbVar9[1];
              if (bVar1 != pbVar9[1]) goto LAB_0050ddd0;
              pbVar4 = pbVar4 + 2;
              pbVar9 = pbVar9 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar7 = 0;
LAB_0050ddd5:
            if (iVar7 == 0) goto LAB_0050de02;
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
LAB_0050de02:
        *(int *)(iVar10 + 0x3bc) = iVar5;
        *(undefined4 *)(iVar10 + 4) = 0x43800000;
        *(undefined4 *)(iVar10 + 8) = 0x43800000;
        *(undefined4 *)(iVar10 + 0xc) = 0;
        *(undefined4 *)(iVar10 + 0x10) = local_4;
        bea_vcall<uint32_t>(piVar6, 0x24, iVar10);
        bea_vcall<uint32_t>(piVar6, 0x8);
        if (iVar10 != 0) {
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar10));
        }
      }
    }
    DAT_00855360 = (undefined4 *)DAT_00855360[1];
    if (DAT_00855360 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)*DAT_00855360;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050dcb0, ap_0050dcb0));

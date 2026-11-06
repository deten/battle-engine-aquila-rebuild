// auto-ported from 0044ed40_FUN_0044ed40.c (FUN_0044ed40, 340 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089da3c GLOBAL_AT(undefined4*, 0x0089da3c)
#define DAT_0089da34 GLOBAL_AT(undefined4*, 0x0089da34)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define _DAT_006602a8 GLOBAL_AT(undefined4*, 0x006602a8)
#define DAT_006602a0 GLOBAL_AT(undefined4*, 0x006602a0)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};

static undefined4 BEA_CDECL ap_0044ed40(int param_1)
{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  DAT_0089da3c = DAT_0089da34;
  if (DAT_0089da34 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0089da34;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (DAT_0089d94c == *piVar2) break;
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*DAT_0089da3c;
    }
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)FUN_00406d20(bea_arg(&DAT_0089da34));
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  while (BEA_LOOP_GUARD((DAT_0089d94c != *piVar2))) {
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*DAT_0089da3c;
    }
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  if (piVar2 != (int *)0x0) {
    puVar5 = (undefined4 *)piVar2[5];
    iVar6 = 0;
    piVar2[7] = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
    if (puVar5 != (undefined4 *)0x0) {
      while (BEA_LOOP_GUARD((iVar6 != param_1))) {
        iVar6 = iVar6 + 1;
        puVar5 = *(undefined4 **)(piVar2[7] + 4);
        piVar2[7] = (int)puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)*puVar5;
        }
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
      }
      if ((byte *)*puVar5 != (byte *)0x0) {
        _DAT_006602a8 = DAT_006602a0;
        if (DAT_006602a0 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *DAT_006602a0;
        }
        if (iVar6 != 0) {
          do {
            pbVar3 = *(byte **)(iVar6 + 0xa8);
            pbVar7 = (byte *)*puVar5;
            do {
              bVar1 = *pbVar3;
              bVar8 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_0044ee5c:
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_0044ee61;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar8 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_0044ee5c;
              pbVar3 = pbVar3 + 2;
              pbVar7 = pbVar7 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar4 = 0;
LAB_0044ee61:
            if (iVar4 == 0) {
              if (iVar6 == 0) {
                return 0;
              }
              return *(undefined4 *)(iVar6 + 0x5c);
            }
            _DAT_006602a8 = (int *)_DAT_006602a8[1];
            if (_DAT_006602a8 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *_DAT_006602a8;
            }
            if (iVar6 == 0) {
              return 0;
            }
          } while(BEA_LOOP_GUARD(( true )));
        }
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044ed40, ap_0044ed40));

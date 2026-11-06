// auto-ported from 0044f300_FUN_0044f300.c (FUN_0044f300, 551 bytes) by tools/autoport.py
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
#define DAT_008553e8 GLOBAL_AT(undefined4*, 0x008553e8)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};

static undefined4 BEA_CDECL ap_0044f300(int param_1, int param_2, int param_3)
{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
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
    piVar2 = (int *)FUN_00406d30(bea_arg(&DAT_0089da34));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar8 = 0;
    puVar3 = (undefined4 *)FUN_00406d20(bea_arg(piVar2 + 5));
    if (puVar3 != (undefined4 *)0x0) {
      while (BEA_LOOP_GUARD((iVar8 != param_1))) {
        iVar8 = iVar8 + 1;
        puVar3 = *(undefined4 **)(piVar2[7] + 4);
        piVar2[7] = (int)puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = (undefined4 *)*puVar3;
        }
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
      }
      if ((byte *)*puVar3 != (byte *)0x0) {
        _DAT_006602a8 = DAT_006602a0;
        if (DAT_006602a0 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *DAT_006602a0;
        }
        if (iVar8 != 0) {
          do {
            pbVar4 = *(byte **)(iVar8 + 0xa8);
            pbVar7 = (byte *)*puVar3;
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_0044f403:
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_0044f408;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_0044f403;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar5 = 0;
LAB_0044f408:
            if (iVar5 == 0) {
              if (iVar8 == 0) {
                return 0;
              }
              puVar3 = *(undefined4 **)(iVar8 + 0x50);
              iVar5 = 0;
              *(undefined4 **)(iVar8 + 0x58) = puVar3;
              if (puVar3 == (undefined4 *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = (undefined4 *)*puVar3;
              }
              if (puVar3 == (undefined4 *)0x0) {
                return 0;
              }
              while (BEA_LOOP_GUARD((iVar5 != param_2))) {
                iVar5 = iVar5 + 1;
                puVar3 = *(undefined4 **)(*(int *)(iVar8 + 0x58) + 4);
                *(undefined4 **)(iVar8 + 0x58) = puVar3;
                if (puVar3 == (undefined4 *)0x0) {
                  puVar3 = (undefined4 *)0x0;
                }
                else {
                  puVar3 = (undefined4 *)*puVar3;
                }
                if (puVar3 == (undefined4 *)0x0) {
                  return 0;
                }
              }
              pbVar4 = (byte *)*puVar3;
              if (pbVar4 == (byte *)0x0) {
                return 0;
              }
              puVar3 = (undefined4 *)*DAT_008553e8;
              DAT_008553e8[2] = puVar3;
              if (puVar3 == (undefined4 *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                puVar3 = (undefined4 *)*puVar3;
              }
              if (puVar3 == (undefined4 *)0x0) {
                return 0;
              }
              do {
                pbVar7 = (byte *)*puVar3;
                pbVar6 = pbVar4;
                do {
                  bVar1 = *pbVar6;
                  bVar9 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_0044f4c7:
                    iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_0044f4cc;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar9 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_0044f4c7;
                  pbVar6 = pbVar6 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (BEA_LOOP_GUARD((bVar1 != 0)));
                iVar8 = 0;
LAB_0044f4cc:
                if (iVar8 == 0) {
                  if (puVar3 == (undefined4 *)0x0) {
                    return 0;
                  }
                  if (param_3 == 0) {
                    return puVar3[0x10];
                  }
                  if (param_3 == 1) {
                    return puVar3[0x11];
                  }
                  if (param_3 == 2) {
                    return puVar3[0x12];
                  }
                  return 0;
                }
                puVar3 = *(undefined4 **)(DAT_008553e8[2] + 4);
                DAT_008553e8[2] = puVar3;
                if (puVar3 == (undefined4 *)0x0) {
                  puVar3 = (undefined4 *)0x0;
                }
                else {
                  puVar3 = (undefined4 *)*puVar3;
                }
                if (puVar3 == (undefined4 *)0x0) {
                  return 0;
                }
              } while(BEA_LOOP_GUARD(( true )));
            }
            _DAT_006602a8 = (int *)_DAT_006602a8[1];
            if (_DAT_006602a8 == (int *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *_DAT_006602a8;
            }
            if (iVar8 == 0) {
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
BEA_HOOKS(BEA_HOOK(0x0044f300, ap_0044f300));

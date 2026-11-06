// auto-ported from 00521d20_vslot3.c (CFEPWingmen::vslot3, 1047 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPWingmen;
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0089da6c GLOBAL_AT(int, 0x0089da6c)
#define DAT_0089da74 GLOBAL_AT(undefined4*, 0x0089da74)
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_008a9bc0 GLOBAL_AT(int, 0x008a9bc0)
#define DAT_008a9bc4 GLOBAL_AT(char, 0x008a9bc4)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0089da44 GLOBAL_AT(int, 0x0089da44)
#define s_Jason_Fighter_0063d274 ((char*)0x0063d274)
#define s_Billy_Fighter_00633b88 ((char*)0x00633b88)
#define s_Tara_Fighter_00633b98 ((char*)0x00633b98)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef void* (BEA_THISCALL* FUN_00406d30_t)(uint32_t);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef int * (BEA_THISCALL* FUN_005230e0_t)(uint32_t);
static const bea_guard<FUN_005230e0_t> FUN_005230e0 = {(FUN_005230e0_t)0x005230e0};

static int * BEA_THISCALL ap_00521d20(CFEPWingmen * this_, int param_1, undefined4 param_2)
{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  char *pcVar12;
  bool bVar13;
  char cVar14;
  
  piVar2 = (int *)(param_1 + -0x2c);
  switch(param_1) {
  case 0x2c:
    _DAT_008a956c = DAT_0089d94c;
    FUN_00468770(1);
    piVar2 = (int *)FUN_00406d20(bea_arg(&DAT_0089da6c));
    while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
      piVar10 = piVar2;
      if (DAT_0089d94c == *piVar2) goto LAB_00521db5;
      DAT_0089da74 = (undefined4 *)DAT_0089da74[1];
      if (DAT_0089da74 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*DAT_0089da74;
      }
    }
    piVar10 = (int *)0x0;
LAB_00521db5:
    iVar5 = *(int *)(this_ + 0x18);
    if (piVar10 != (int *)0x0) {
      if (piVar10[1] != 0) {
        if (iVar5 == 0) {
          iVar3 = FUN_00406d20(bea_arg(DAT_008553fc));
          while (BEA_LOOP_GUARD((iVar3 != 0))) {
            pbVar11 = *(byte **)(iVar3 + 0xb0);
            pcVar6 = s_Tara_Fighter_00633b98;
            do {
              bVar1 = *pcVar6;
              bVar13 = bVar1 < *pbVar11;
              if (bVar1 != *pbVar11) {
LAB_00521e20:
                iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00521e25;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar6[1];
              bVar13 = bVar1 < pbVar11[1];
              if (bVar1 != pbVar11[1]) goto LAB_00521e20;
              pcVar6 = pcVar6 + 2;
              pbVar11 = pbVar11 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar7 = 0;
LAB_00521e25:
            if (iVar7 == 0) goto LAB_00521e4e;
            piVar2 = *(int **)(*(int *)((int)DAT_008553fc + 8) + 4);
            *(int **)((int)DAT_008553fc + 8) = piVar2;
            if (piVar2 == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *piVar2;
            }
          }
          iVar3 = 0;
LAB_00521e4e:
          DAT_008a9bc0 = 0;
          uVar9 = 0xffffffff;
          pcVar6 = *(char **)(iVar3 + 0x2c);
          do {
            pcVar12 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar12 = pcVar6 + 1;
            cVar14 = *pcVar6;
            pcVar6 = pcVar12;
          } while (BEA_LOOP_GUARD((cVar14 != '\0')));
          uVar9 = ~uVar9;
          pcVar6 = pcVar12 + -uVar9;
          pcVar12 = (char *)&DAT_008a9bc4;
          for (uVar8 = uVar9 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
            *pcVar12 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        iVar5 = iVar5 + -1;
      }
      if (piVar10[2] != 0) {
        if (iVar5 == 0) {
          iVar3 = FUN_00406d20(bea_arg(DAT_008553fc));
          while (BEA_LOOP_GUARD((iVar3 != 0))) {
            pbVar11 = *(byte **)(iVar3 + 0xb0);
            pcVar6 = s_Billy_Fighter_00633b88;
            do {
              bVar1 = *pcVar6;
              bVar13 = bVar1 < *pbVar11;
              if (bVar1 != *pbVar11) {
LAB_00521edf:
                iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00521ee4;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar6[1];
              bVar13 = bVar1 < pbVar11[1];
              if (bVar1 != pbVar11[1]) goto LAB_00521edf;
              pcVar6 = pcVar6 + 2;
              pbVar11 = pbVar11 + 2;
            } while (BEA_LOOP_GUARD((bVar1 != 0)));
            iVar7 = 0;
LAB_00521ee4:
            if (iVar7 == 0) goto LAB_00521f0d;
            piVar2 = *(int **)(*(int *)((int)DAT_008553fc + 8) + 4);
            *(int **)((int)DAT_008553fc + 8) = piVar2;
            if (piVar2 == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *piVar2;
            }
          }
          iVar3 = 0;
LAB_00521f0d:
          DAT_008a9bc0 = 1;
          uVar9 = 0xffffffff;
          pcVar6 = *(char **)(iVar3 + 0x2c);
          do {
            pcVar12 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar12 = pcVar6 + 1;
            cVar14 = *pcVar6;
            pcVar6 = pcVar12;
          } while (BEA_LOOP_GUARD((cVar14 != '\0')));
          uVar9 = ~uVar9;
          pcVar6 = pcVar12 + -uVar9;
          pcVar12 = (char *)&DAT_008a9bc4;
          for (uVar8 = uVar9 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar9 = uVar9 & 3; BEA_LOOP_GUARD((uVar9 != 0)); uVar9 = uVar9 - 1) {
            *pcVar12 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        iVar5 = iVar5 + -1;
      }
      piVar2 = (int *)piVar10[3];
      if ((piVar2 != (int *)0x0) && (iVar5 == 0)) {
        iVar5 = FUN_00406d20(bea_arg(DAT_008553fc));
        while (BEA_LOOP_GUARD((iVar5 != 0))) {
          pbVar11 = *(byte **)(iVar5 + 0xb0);
          pcVar6 = s_Jason_Fighter_0063d274;
          do {
            bVar1 = *pcVar6;
            bVar13 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_00521fa2:
              iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00521fa7;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar13 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_00521fa2;
            pcVar6 = pcVar6 + 2;
            pbVar11 = pbVar11 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar3 = 0;
LAB_00521fa7:
          if (iVar3 == 0) goto LAB_00521fcc;
          piVar2 = *(int **)(*(int *)((int)DAT_008553fc + 8) + 4);
          *(int **)((int)DAT_008553fc + 8) = piVar2;
          if (piVar2 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar2;
          }
        }
        iVar5 = 0;
LAB_00521fcc:
        DAT_008a9bc0 = 2;
        uVar9 = 0xffffffff;
        pcVar6 = *(char **)(iVar5 + 0x2c);
        do {
          pcVar12 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar12 = pcVar6 + 1;
          cVar14 = *pcVar6;
          pcVar6 = pcVar12;
        } while (BEA_LOOP_GUARD((cVar14 != '\0')));
        uVar9 = ~uVar9;
        pcVar6 = pcVar12 + -uVar9;
        pcVar12 = (char *)&DAT_008a9bc4;
        for (uVar8 = uVar9 >> 2; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar8 = uVar9 & 3; BEA_LOOP_GUARD((uVar8 != 0)); uVar8 = uVar8 - 1) {
          *pcVar12 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar12 = pcVar12 + 1;
        }
        return (int *)uVar9;
      }
    }
    break;
  case 0x2e:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(3), bea_arg(0x19));
    uVar4 = FUN_00468770(2);
    return (int *)uVar4;
  case 0x36:
    piVar2 = (int *)FUN_00406d20(bea_arg(&DAT_0089da6c));
    while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
      if (DAT_0089d94c == *piVar2) goto LAB_0052202e;
      piVar2 = (int *)FUN_00406d30(bea_arg(&DAT_0089da6c));
    }
    piVar2 = (int *)0x0;
LAB_0052202e:
    if (piVar2 != (int *)0x0) {
      cVar14 = piVar2[1] != 0;
      if (piVar2[3] != 0) {
        cVar14 = cVar14 + '\x01';
      }
      if (piVar2[2] != 0) {
        cVar14 = cVar14 + '\x01';
      }
      if (cVar14 != '\0') {
        iVar5 = *(int *)(this_ + 0x18);
        *(int *)(this_ + 0x18) = iVar5 + -1;
        if (iVar5 + -1 < 0) {
          iVar5 = FUN_005230e0(bea_arg(&DAT_0089da44));
          uVar9 = 0;
          if (iVar5 != 0) {
            uVar9 = (uint)(*(int *)(iVar5 + 4) != 0);
            if (*(int *)(iVar5 + 0xc) != 0) {
              uVar9 = uVar9 + 1;
            }
            if (*(int *)(iVar5 + 8) != 0) {
              uVar9 = uVar9 + 1;
            }
          }
          *(uint *)(this_ + 0x18) = uVar9 - 1;
        }
        uVar4 = FUN_00468770(0);
        *(undefined4 *)(this_ + 0x1c) = 0x3f800000;
        return (int *)uVar4;
      }
    }
    break;
  case 0x37:
    piVar2 = (int *)FUN_005230e0(bea_arg(&DAT_0089da44));
    if (piVar2 != (int *)0x0) {
      cVar14 = piVar2[1] != 0;
      if (piVar2[3] != 0) {
        cVar14 = cVar14 + '\x01';
      }
      if (piVar2[2] != 0) {
        cVar14 = cVar14 + '\x01';
      }
      if (cVar14 != '\0') {
        *(int *)(this_ + 0x18) = *(int *)(this_ + 0x18) + 1;
        iVar5 = FUN_005230e0(bea_arg(&DAT_0089da44));
        uVar9 = 0;
        if (iVar5 != 0) {
          uVar9 = (uint)(*(int *)(iVar5 + 4) != 0);
          if (*(int *)(iVar5 + 0xc) != 0) {
            uVar9 = uVar9 + 1;
          }
          if (*(int *)(iVar5 + 8) != 0) {
            uVar9 = uVar9 + 1;
          }
        }
        if ((int)(uVar9 - 1) < *(int *)(this_ + 0x18)) {
          *(undefined4 *)(this_ + 0x18) = 0;
        }
        piVar2 = (int *)FUN_00468770(0);
        *(undefined4 *)(this_ + 0x20) = 0x3f800000;
      }
    }
  }
  return piVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521d20, ap_00521d20));

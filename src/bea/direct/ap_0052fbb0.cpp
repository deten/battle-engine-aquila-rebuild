// auto-ported from 0052fbb0_FUN_0052fbb0.c (FUN_0052fbb0, 492 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Variable;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR_can_t_find_event_str_0064cd6c ((char*)0x0064cd6c)
#define s_FATAL_ERROR__Could_not_find_symb_0064cde0 ((char*)0x0064cde0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064cce0 ((char*)0x0064cce0)
#define s_FATAL_ERROR__Data_type_wrong_typ_0064cda0 ((char*)0x0064cda0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef uint32_t (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef Variable* (BEA_THISCALL* FUN_00539760_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539760_t> FUN_00539760 = {(FUN_00539760_t)0x00539760};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_0052fbb0(void * this_, undefined4 *param_1)
{
  byte bVar1;
  undefined4 uVar2;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  char *pcVar12;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar4 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x20), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cce0), bea_arg(0x4e));
  if (puVar4 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this_ + 8);
    puVar4[1] = 0;
    *puVar4 = ((void*)0x005d92d4);
    puVar4[2] = uVar2;
    FUN_004e5840(bea_arg(puVar4 + 3));
    *puVar4 = ((void*)0x005e4ef8);
    puVar4[7] = param_1;
    param_1 = puVar4;
  }
  this_00 = *(void **)(*(int *)((int)this_ + 0x1c) + 0x58);
  if (this_00 == (void *)0x0) {
    pcVar12 = s_FATAL_ERROR__Could_not_find_symb_0064cde0;
LAB_0052fd76:
    FUN_00441740(&DAT_0066f580,pcVar12);
  }
  else {
    iVar3 = *(int *)((int)this_00 + 8);
    puVar4 = *(undefined4 **)((int)this_ + 0xc);
    *(undefined4 **)((int)this_ + 0x14) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)*puVar4;
    }
    while (BEA_LOOP_GUARD((piVar9 != (int *)0x0))) {
      iVar10 = 0;
      while (BEA_LOOP_GUARD((((iVar5 = FUN_00539760(bea_arg(this_00), bea_arg(iVar10)), iVar5 == 0 || (*(int *)(iVar5 + 8) == 0)) ||
             (*(int *)(iVar5 + 8) != *piVar9))))) {
        iVar10 = iVar10 + 1;
        if (iVar3 <= iVar10) {
          pcVar12 = s_FATAL_ERROR_can_t_find_event_str_0064cd6c;
          goto LAB_0052fd76;
        }
      }
      iVar10 = FUN_00539760(bea_arg(*(void **)(param_1[7] + 0x58)), bea_arg(iVar10));
      piVar9 = *(int **)(iVar10 + 8);
      if ((piVar9 == (int *)0x0) || (iVar10 = bea_vcall<uint32_t>(piVar9, 0x4c), iVar10 != 3)) {
LAB_0052fd3c:
        FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__Data_type_wrong_typ_0064cda0);
      }
      else {
        pbVar6 = (byte *)bea_vcall<uint32_t>(*(int **)(iVar5 + 8), 0x38);
        pbVar7 = (byte *)bea_vcall<uint32_t>(piVar9, 0x38);
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0052fcf5:
            iVar10 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0052fcfa;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0052fcf5;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar10 = 0;
LAB_0052fcfa:
        if (iVar10 != 0) goto LAB_0052fd3c;
        piVar8 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cce0), bea_arg(0x1b));
        if (piVar8 == (int *)0x0) {
          FUN_004e5b20(bea_arg(param_1 + 3), bea_arg(0));
        }
        else {
          *piVar8 = (int)piVar9;
          piVar8[1] = 0;
          FUN_004e5b20(bea_arg(param_1 + 3), bea_arg(piVar8));
        }
      }
      puVar4 = *(undefined4 **)(*(int *)((int)this_ + 0x14) + 4);
      *(undefined4 **)((int)this_ + 0x14) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)*puVar4;
      }
    }
  }
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052fbb0, ap_0052fbb0));

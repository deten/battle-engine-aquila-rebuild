// auto-ported from 005392a0_FUN_005392a0.c (FUN_005392a0, 166 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Variable;
#define s_SpawnThing_0064f9fc ((char*)0x0064f9fc)
#define PTR_s_FollowWaypoint_0064ce20 GLOBAL_AT(void*, 0x0064ce20)
typedef undefined4 (BEA_CDECL* FUN_0050d9e0_t)(uint32_t);
static const bea_guard<FUN_0050d9e0_t> FUN_0050d9e0 = {(FUN_0050d9e0_t)0x0050d9e0};
typedef Variable* (BEA_THISCALL* FUN_00539760_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539760_t> FUN_00539760 = {(FUN_00539760_t)0x00539760};

static int BEA_THISCALL ap_005392a0(void * this_)
{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar7 = 0;
  iVar4 = *(int *)((int)this_ + 0xc);
  if (0 < iVar4) {
    do {
      piVar2 = *(int **)(*(int *)((int)this_ + 4) + iVar7 * 4);
      iVar4 = bea_vcall<uint32_t>(piVar2, 0x8);
      if (iVar4 == 0x18) {
        uVar3 = piVar2[1];
        pbVar8 = (&PTR_s_FollowWaypoint_0064ce20)[(uVar3 & 0xff) * 0x10];
        pcVar5 = s_SpawnThing_0064f9fc;
        do {
          bVar1 = *pcVar5;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00539301:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00539306;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar5[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00539301;
          pcVar5 = pcVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_00539306:
        if (iVar4 == 0) {
          iVar4 = FUN_00539760(bea_arg(*(void **)((int)this_ + 0x58)), bea_arg(*(undefined4 *)
                                (*(int *)(*(int *)((int)this_ + 4) +
                                         (iVar7 - (uVar3 >> 8 & 0xff)) * 4) + 4)));
          uVar6 = bea_vcall<uint32_t>(*(int **)(iVar4 + 8), 0x38);
          FUN_0050d9e0(bea_arg(uVar6));
        }
      }
      iVar4 = *(int *)((int)this_ + 0xc);
      iVar7 = iVar7 + 1;
    } while (BEA_LOOP_GUARD((iVar7 < iVar4)));
  }
  return iVar4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005392a0, ap_005392a0));

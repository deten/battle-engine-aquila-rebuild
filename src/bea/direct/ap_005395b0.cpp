// auto-ported from 005395b0_FUN_005395b0.c (FUN_005395b0, 426 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__00650134 ((char*)0x00650134)
typedef void * (BEA_THISCALL* FUN_004241a0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004241a0_t> FUN_004241a0 = {(FUN_004241a0_t)0x004241a0};
typedef void * (BEA_THISCALL* FUN_004241f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004241f0_t> FUN_004241f0 = {(FUN_004241f0_t)0x004241f0};
typedef void * (BEA_THISCALL* FUN_0052f690_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052f690_t> FUN_0052f690 = {(FUN_0052f690_t)0x0052f690};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static int * BEA_THISCALL ap_005395b0(void * this_)
{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  int *piStack_20;
  int *local_1c;
  int local_18;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_1c = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__00650134), bea_arg(0xb4));
  if (local_1c == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    FUN_004241a0(bea_arg(local_1c), bea_arg(0x10), bea_arg(1));
    local_1c[4] = 0;
  }
  iVar2 = *(int *)((int)this_ + 8);
  local_18 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = 0;
      piVar3 = *(int **)(*(int *)this_ + local_18 * 4);
      if ((int *)piVar3[2] != (int *)0x0) {
        iVar4 = bea_vcall<uint32_t>(piVar3[2], 0x48);
      }
      piStack_20 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x18), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__00650134), bea_arg(0x2d));
      if (piStack_20 == (int *)0x0) {
        piStack_20 = (int *)0x0;
      }
      else {
        iVar8 = piVar3[3];
        uVar5 = bea_vcall<uint32_t>(piVar3, 0x38);
        FUN_0052f690(bea_arg(piStack_20), bea_arg(uVar5));
        piStack_20[3] = iVar8;
        piStack_20[2] = iVar4;
        piStack_20[4] = 0;
        *(undefined1 *)(piStack_20 + 5) = 0;
      }
      pbVar6 = (byte *)bea_vcall<uint32_t>(piStack_20, 0x38);
      iVar4 = 0;
      if (0 < local_1c[4]) {
        do {
          pbVar7 = (byte *)bea_vcall<uint32_t>(*(int **)(*local_1c + iVar4 * 4), 0x38);
          pbVar9 = pbVar6;
          do {
            bVar1 = *pbVar7;
            bVar10 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_005396ff:
              iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00539704;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar10 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_005396ff;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar8 = 0;
LAB_00539704:
          if (iVar8 == 0) {
            if (*(int *)(*local_1c + iVar4 * 4) != 0) goto LAB_00539730;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (BEA_LOOP_GUARD((iVar4 < local_1c[4])));
      }
      piStack_20[4] = local_1c[4];
      FUN_004241f0(bea_arg(local_1c), bea_arg(piStack_20));
      local_1c[4] = local_1c[4] + 1;
LAB_00539730:
      local_18 = local_18 + 1;
    } while (BEA_LOOP_GUARD((local_18 < iVar2)));
  }
  return local_1c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005395b0, ap_005395b0));

// auto-ported from 0043f510_vslot34.c (CCutscene::vslot34, 360 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CCutscene;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c ((char*)0x0062811c)
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_0043f510(CCutscene * this_, undefined4 param_1)
{
  char cVar1;
  CCutscene *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  
  iVar9 = *(int *)(this_ + 0x7c);
  if (this_ == (CCutscene *)0x0) {
    pCVar2 = (CCutscene *)0x0;
  }
  else {
    pCVar2 = this_ + 8;
  }
  *(CCutscene **)(this_ + 0xd58) = pCVar2;
  *(undefined4 *)(this_ + 0xd70) = 0;
  for (; BEA_LOOP_GUARD((iVar9 != 0)); iVar9 = *(int *)(iVar9 + 0x248)) {
    *(undefined4 *)(iVar9 + 0x128) = 0xffffffff;
    iVar8 = *(int *)(this_ + 0x7c);
    if (iVar8 != iVar9) {
      do {
        iVar3 = FUN_00568390(bea_arg(iVar9 + 8), bea_arg(iVar8 + 8));
        if (iVar3 == 0) {
          uVar4 = *(undefined4 *)(iVar8 + 0x128);
          *(undefined1 *)(iVar9 + 300) = 1;
          *(undefined4 *)(iVar9 + 0x128) = uVar4;
        }
        iVar8 = *(int *)(iVar8 + 0x248);
      } while (BEA_LOOP_GUARD((iVar8 != iVar9)));
    }
    if (*(int *)(iVar9 + 0x128) == -1) {
      *(undefined1 *)(iVar9 + 300) = 0;
      *(undefined4 *)(iVar9 + 0x128) = *(undefined4 *)(this_ + 0xd70);
      *(int *)(this_ + 0xd70) = *(int *)(this_ + 0xd70) + 1;
    }
  }
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 0xd70) << 2), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c), bea_arg(0x1eb));
  iVar9 = *(int *)(this_ + 0x7c);
  *(undefined4 *)(this_ + 0xd6c) = uVar4;
  if (iVar9 != 0) {
    iVar8 = 0;
    do {
      if (*(char *)(iVar9 + 300) == '\0') {
        uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x100), bea_arg(0x1d), bea_arg(s_C__dev_ONSLAUGHT2_Cutscene_cpp_0062811c), bea_arg(0x1f5));
        *(undefined4 *)(iVar8 + *(int *)(this_ + 0xd6c)) = uVar4;
        uVar6 = 0xffffffff;
        pcVar10 = (char *)(iVar9 + 8);
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (BEA_LOOP_GUARD((cVar1 != '\0')));
        uVar6 = ~uVar6;
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = *(char **)(iVar8 + *(int *)(this_ + 0xd6c));
        for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        iVar8 = iVar8 + 4;
        for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      iVar9 = *(int *)(iVar9 + 0x248);
    } while (BEA_LOOP_GUARD((iVar9 != 0)));
  }
  piVar5 = (int *)FUN_00516580(5);
  *(int **)(this_ + 0x30) = piVar5;
  if (piVar5 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar5, 0x4, this_ + 0x958);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043f510, ap_0043f510));

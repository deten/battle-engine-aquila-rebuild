// auto-ported from 004176c0_vslot34.c (CBuilding::vslot34, 417 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x5c0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CBuilding;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s__s_msh_00623b6c ((char*)0x00623b6c)
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_004176c0(CBuilding * this_, int param_1)
{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x5c0] = {};   // the original stack frame (emulate_frame)
  char (&local_5b8)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x5c0 - 0x5b8);
  char (&local_4b8)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x5c0 - 0x4b8);
  undefined1 &local_3b8 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x5c0 - 0x3b8);
  undefined1 &local_2b8 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x5c0 - 0x2b8);
  CBuilding * &local_1b8 = *reinterpret_cast<CBuilding * *>(bea_frame_ + 0x5c0 - 0x1b8);
  undefined4 &local_1ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x5c0 - 0x1ac);
  undefined4 &local_1a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x5c0 - 0x1a8);
  int &local_1a4 = *reinterpret_cast<int *>(bea_frame_ + 0x5c0 - 0x1a4);
  int &local_1a0 = *reinterpret_cast<int *>(bea_frame_ + 0x5c0 - 0x1a0);
  char (&local_19c)[400] = *reinterpret_cast<char (*)[400]>(bea_frame_ + 0x5c0 - 0x19c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x5c0 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x5c0 - 0x4);
  local_1b8 = (CBuilding *)0x0;
  local_5b8[0] = '\0';
  local_4b8[0] = '\0';
  local_3b8 = 0;
  local_2b8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  if (this_ != (CBuilding *)0x0) {
    local_1b8 = this_ + 8;
  }
  FUN_0055de9b(local_19c,s__s_msh_00623b6c,*(char **)(*(int *)(param_1 + 0x3bc) + 0x2c));
  uVar5 = 0xffffffff;
  pcVar7 = local_19c;
  do {
    pcVar9 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar9 + -uVar5;
  pcVar9 = local_5b8;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_0055de9b(local_19c,s__s_msh_00623b6c,*(char **)(*(int *)(param_1 + 0x3bc) + 0x30));
  uVar5 = 0xffffffff;
  pcVar7 = local_19c;
  do {
    pcVar9 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar7 = pcVar9 + -uVar5;
  pcVar9 = local_4b8;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  piVar3 = (int *)FUN_00516580(4);
  *(int **)(this_ + 0x30) = piVar3;
  if (piVar3 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar3, 0x4, local_5b8);
  }
  iVar8 = 0;
  iVar4 = local_1a4;
  if (0 < local_1a0) {
    do {
      iVar2 = *(int *)(iVar4 + iVar8 * 4);
      if (iVar2 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
        *(undefined4 *)(local_1a4 + iVar8 * 4) = 0;
        iVar4 = local_1a4;
      }
      iVar8 = iVar8 + 1;
    } while (BEA_LOOP_GUARD((iVar8 < local_1a0)));
  }
  if (iVar4 != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar4));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004176c0, ap_004176c0));

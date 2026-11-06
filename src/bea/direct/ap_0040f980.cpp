// auto-ported from 0040f980_FUN_0040f980.c (FUN_0040f980, 1939 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674 ((char*)0x00623674)
#define s_cockpit2_msh_00623608 ((char*)0x00623608)
#define s_Animated_Explosion_Emitter_2_00623618 ((char*)0x00623618)
typedef uint32_t (BEA_THISCALL* FUN_0040f890_t)(uint32_t);
static const bea_guard<FUN_0040f890_t> FUN_0040f890 = {(FUN_0040f890_t)0x0040f890};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0040f980(void * this_, void *param_1)
{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  int &local_10c = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x10c);
  int &local_108 = *reinterpret_cast<int *>(bea_frame_ + 0x110 - 0x108);
  undefined4 &local_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x110 - 0x104);
  char (&local_100)[256] = *reinterpret_cast<char (*)[256]>(bea_frame_ + 0x110 - 0x100);
  FUN_0040f890(bea_arg(this_));
  FUN_00548570(bea_arg(param_1), bea_arg(&local_108), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x1c), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x20), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x28), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 8), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x2c), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg(this_), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x10), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x14), bea_arg(4));
  FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x18), bea_arg(4));
  if (local_108 < 8) {
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
  }
  if (local_108 < 5) {
    pcVar9 = (char *)((int)&local_104 + 3);
    iVar8 = -1;
    local_104 = pcVar9;
    do {
      iVar3 = iVar8;
      iVar8 = iVar3 + 1;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xc0));
    iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xc1));
    *piVar2 = iVar3;
    iVar3 = 0;
    if (-1 < iVar8) {
      do {
        *(char *)(*piVar2 + iVar3) = local_100[iVar3];
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
    }
    FUN_004e5a80(bea_arg((void *)((int)this_ + 0x50)), bea_arg(piVar2));
    iVar8 = -1;
    pcVar9 = local_104;
    do {
      iVar3 = iVar8;
      iVar8 = iVar3 + 1;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xcf));
    iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xd0));
    *piVar2 = iVar3;
    iVar3 = 0;
    if (-1 < iVar8) {
      do {
        *(char *)(*piVar2 + iVar3) = local_100[iVar3];
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
    }
    FUN_004e5a80(bea_arg((void *)((int)this_ + 0x50)), bea_arg(piVar2));
    iVar8 = -1;
    pcVar9 = local_104;
    do {
      iVar3 = iVar8;
      iVar8 = iVar3 + 1;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xde));
    iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xdf));
    *piVar2 = iVar3;
    iVar3 = 0;
    if (-1 < iVar8) {
      do {
        *(char *)(*piVar2 + iVar3) = local_100[iVar3];
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
    }
    FUN_004e5a80(bea_arg((void *)((int)this_ + 0x40)), bea_arg(piVar2));
    iVar8 = -1;
    pcVar9 = local_104;
    do {
      iVar3 = iVar8;
      iVar8 = iVar3 + 1;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xed));
    iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xee));
    *piVar2 = iVar3;
    iVar3 = 0;
    if (-1 < iVar8) {
      do {
        *(char *)(*piVar2 + iVar3) = local_100[iVar3];
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
    }
    FUN_004e5a80(bea_arg((void *)((int)this_ + 0x40)), bea_arg(piVar2));
    iVar8 = -1;
    pcVar9 = local_104;
    do {
      iVar3 = iVar8;
      iVar8 = iVar3 + 1;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xfc));
    iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0xfd));
    *piVar2 = iVar3;
    iVar3 = 0;
    if (-1 < iVar8) {
      do {
        *(char *)(*piVar2 + iVar3) = local_100[iVar3];
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
    }
    FUN_004e5a80(bea_arg((void *)((int)this_ + 0x40)), bea_arg(piVar2));
  }
  pcVar9 = (char *)((int)&local_104 + 3);
  iVar8 = -1;
  local_104 = pcVar9;
  do {
    iVar3 = iVar8;
    iVar8 = iVar3 + 1;
    pcVar9 = pcVar9 + 1;
    FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
  } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
  uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x10c));
  *(undefined4 *)((int)this_ + 0xa8) = uVar4;
  iVar3 = 0;
  if (-1 < iVar8) {
    do {
      *(char *)(*(int *)((int)this_ + 0xa8) + iVar3) = local_100[iVar3];
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
  }
  if (local_108 < 5) {
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
  }
  if (1 < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x24), bea_arg(4));
  }
  if (2 < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0xa0), bea_arg(4));
  }
  if (local_108 < 4) {
    pcVar9 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1d), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x130));
    uVar6 = 0xffffffff;
    *(char **)((int)this_ + 0x68) = pcVar9;
    pcVar5 = s_Animated_Explosion_Emitter_2_00623618;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar6 = ~uVar6;
    pcVar5 = pcVar10 + -uVar6;
    for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    iVar8 = -1;
    pcVar9 = local_104;
    do {
      iVar3 = iVar8;
      iVar8 = iVar3 + 1;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x12a));
    *(undefined4 *)((int)this_ + 0x68) = uVar4;
    iVar3 = 0;
    if (-1 < iVar8) {
      do {
        *(char *)(*(int *)((int)this_ + 0x68) + iVar3) = local_100[iVar3];
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
    }
  }
  if (4 < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    pcVar9 = local_104;
    for (; BEA_LOOP_GUARD((local_104 = pcVar9, local_10c != 0)); local_10c = local_10c + -1) {
      iVar8 = -1;
      do {
        iVar3 = iVar8;
        iVar8 = iVar3 + 1;
        pcVar9 = pcVar9 + 1;
        FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
      } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
      piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x144));
      iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x145));
      *piVar2 = iVar3;
      iVar3 = 0;
      if (-1 < iVar8) {
        do {
          *(char *)(iVar3 + *piVar2) = local_100[iVar3];
          iVar3 = iVar3 + 1;
        } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
      }
      FUN_004e5b20(bea_arg((void *)((int)this_ + 0x40)), bea_arg(piVar2));
      pcVar9 = local_104;
    }
    FUN_00548570(bea_arg(param_1), bea_arg(&local_10c), bea_arg(4));
    pcVar9 = local_104;
    for (; BEA_LOOP_GUARD((local_104 = pcVar9, local_10c != 0)); local_10c = local_10c + -1) {
      iVar8 = -1;
      do {
        iVar3 = iVar8;
        iVar8 = iVar3 + 1;
        pcVar9 = pcVar9 + 1;
        FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
      } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
      piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x15b));
      iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x15c));
      *piVar2 = iVar3;
      iVar3 = 0;
      if (-1 < iVar8) {
        do {
          *(char *)(*piVar2 + iVar3) = local_100[iVar3];
          iVar3 = iVar3 + 1;
        } while (BEA_LOOP_GUARD((iVar3 <= iVar8)));
      }
      FUN_004e5b20(bea_arg((void *)((int)this_ + 0x50)), bea_arg(piVar2));
      pcVar9 = local_104;
    }
    iVar8 = (int)this_ + 0x88;
    iVar3 = 6;
    local_10c = 0;
    do {
      FUN_00548570(bea_arg(param_1), bea_arg(iVar8 + -0x18), bea_arg(4));
      FUN_00548570(bea_arg(param_1), bea_arg(iVar8), bea_arg(4));
      iVar8 = iVar8 + 4;
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  if (5 < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 4), bea_arg(4));
  }
  if (6 < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x34), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x30), bea_arg(4));
  }
  if (7 < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0xc), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x38), bea_arg(4));
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0x3c), bea_arg(4));
  }
  if (local_108 < 8) {
    *(undefined4 *)((int)this_ + 4) = 0x3e99999a;
    *(undefined4 *)this_ = 0x3f666666;
    *(undefined4 *)((int)this_ + 0xc) = 0x3ba3d70a;
    *(undefined4 *)((int)this_ + 8) = 0x3c75c28f;
  }
  if (8 < local_108) {
    pcVar9 = local_104;
    iVar8 = -1;
    do {
      iVar3 = iVar8;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
      iVar8 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    pcVar9 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x192));
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar6 = ~uVar6;
    *(char **)((int)this_ + 100) = pcVar9;
    pcVar5 = pcVar10 + -uVar6;
    for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (9 < local_108) {
    pcVar9 = local_104;
    iVar8 = -1;
    do {
      iVar3 = iVar8;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
      iVar8 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    pcVar9 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x1a1));
    uVar6 = 0xffffffff;
    pcVar5 = local_100;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar10;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar6 = ~uVar6;
    *(char **)((int)this_ + 0x60) = pcVar9;
    pcVar5 = pcVar10 + -uVar6;
    for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  if (local_108 < 0xb) {
    pcVar5 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xd), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x1b6));
    pcVar9 = s_cockpit2_msh_00623608;
    *(char **)((int)this_ + 0x6c) = pcVar5;
  }
  else {
    pcVar9 = local_104;
    iVar8 = -1;
    do {
      iVar3 = iVar8;
      pcVar9 = pcVar9 + 1;
      FUN_00548570(bea_arg(param_1), bea_arg(pcVar9), bea_arg(1));
      iVar8 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((*pcVar9 != '\0')));
    pcVar5 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar3 + 2), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x1b0));
    pcVar9 = local_100;
    *(char **)((int)this_ + 0x6c) = pcVar5;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar10 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar6 = ~uVar6;
  pcVar9 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; BEA_LOOP_GUARD((uVar7 != 0)); uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (0xb < local_108) {
    FUN_00548570(bea_arg(param_1), bea_arg((int)this_ + 0xa4), bea_arg(4));
    return;
  }
  *(undefined4 *)((int)this_ + 0xa4) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f980, ap_0040f980));

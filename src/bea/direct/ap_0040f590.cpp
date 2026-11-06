// auto-ported from 0040f590_FUN_0040f590.c (FUN_0040f590, 759 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_Standard_00623668 ((char*)0x00623668)
#define s_Missile_Pod_00623638 ((char*)0x00623638)
#define s_cockpit2_msh_00623608 ((char*)0x00623608)
#define s_Animated_Explosion_Emitter_2_00623618 ((char*)0x00623618)
#define s_Vulcan_Cannon_1_00623658 ((char*)0x00623658)
#define s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674 ((char*)0x00623674)
#define s_Pulse_Cannon_Pod_00623644 ((char*)0x00623644)
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0040f590(void * this_)
{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(9), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x20));
  uVar5 = 0xffffffff;
  *(char **)((int)this_ + 0xa8) = pcVar2;
  pcVar8 = s_Standard_00623668;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x23));
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x24));
  uVar5 = 0xffffffff;
  *puVar3 = pcVar2;
  pcVar8 = s_Vulcan_Cannon_1_00623658;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_004e5a80(bea_arg((void *)((int)this_ + 0x40)), bea_arg(puVar3));
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x28));
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x11), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x29));
  uVar5 = 0xffffffff;
  *puVar3 = pcVar2;
  pcVar8 = s_Pulse_Cannon_Pod_00623644;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_004e5a80(bea_arg((void *)((int)this_ + 0x40)), bea_arg(puVar3));
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x2d));
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x2e));
  uVar5 = 0xffffffff;
  *puVar3 = pcVar2;
  pcVar8 = s_Vulcan_Cannon_1_00623658;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_004e5a80(bea_arg((void *)((int)this_ + 0x50)), bea_arg(puVar3));
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x32));
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x33));
  uVar5 = 0xffffffff;
  *puVar3 = pcVar2;
  pcVar8 = s_Missile_Pod_00623638;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_004e5a80(bea_arg((void *)((int)this_ + 0x50)), bea_arg(puVar3));
  puVar3 = (undefined4 *)((int)this_ + 0x88);
  iVar7 = 6;
  do {
    puVar3[-6] = 0;
    *puVar3 = 0x447a0000;
    puVar3 = puVar3 + 1;
    iVar7 = iVar7 + -1;
  } while (BEA_LOOP_GUARD((iVar7 != 0)));
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1d), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x3d));
  uVar5 = 0xffffffff;
  *(char **)((int)this_ + 0x68) = pcVar2;
  pcVar8 = s_Animated_Explosion_Emitter_2_00623618;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  puVar4 = (undefined1 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x40));
  *(undefined1 **)((int)this_ + 100) = puVar4;
  *puVar4 = 0;
  puVar4 = (undefined1 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x43));
  *(undefined1 **)((int)this_ + 0x60) = puVar4;
  *puVar4 = 0;
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xd), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngineDa_00623674), bea_arg(0x46));
  uVar5 = 0xffffffff;
  *(char **)((int)this_ + 0x6c) = pcVar2;
  pcVar8 = s_cockpit2_msh_00623608;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  for (uVar6 = uVar5 >> 2; BEA_LOOP_GUARD((uVar6 != 0)); uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; BEA_LOOP_GUARD((uVar5 != 0)); uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x1c) = 0x41a00000;
  *(undefined4 *)((int)this_ + 0x20) = 0x40200000;
  *(undefined4 *)((int)this_ + 0x28) = 0x3c23d70a;
  *(undefined4 *)((int)this_ + 0xc) = 0x3dcccccd;
  *(undefined4 *)((int)this_ + 8) = 0x3e99999a;
  *(undefined4 *)((int)this_ + 0x2c) = 0x3f800000;
  *(undefined4 *)this_ = 0x40f00000;
  *(undefined4 *)((int)this_ + 4) = 0x40a00000;
  *(undefined4 *)((int)this_ + 0x10) = 0x40800000;
  *(undefined4 *)((int)this_ + 0x14) = 0x40000000;
  *(undefined4 *)((int)this_ + 0x18) = 0x3fc00000;
  *(undefined4 *)((int)this_ + 0x24) = 0x42b40000;
  *(undefined4 *)((int)this_ + 0x30) = 0x3f666666;
  *(undefined4 *)((int)this_ + 0x34) = 0x3e19999a;
  *(undefined4 *)((int)this_ + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0xa4) = 1;
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040f590, ap_0040f590));

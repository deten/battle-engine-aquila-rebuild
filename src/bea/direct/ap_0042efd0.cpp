// auto-ported from 0042efd0_FUN_0042efd0.c (FUN_0042efd0, 585 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_m_b_rubble_00625878 ((char*)0x00625878)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0042efd0(void * this_)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)((int)this_ + 0xe0) = 3;
  *(undefined4 *)((int)this_ + 0xfc) = 3;
  *(undefined4 *)((int)this_ + 0xb8) = 0;
  *(undefined4 *)((int)this_ + 0xb4) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)this_ = 0;
  pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xb), bea_arg(0xf), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x5e7));
  uVar3 = 0xffffffff;
  *(char **)((int)this_ + 0x30) = pcVar2;
  pcVar6 = s_m_b_rubble_00625878;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0xc0) = 0;
  *(undefined4 *)((int)this_ + 0xc4) = 0;
  *(undefined4 *)((int)this_ + 200) = 0;
  *(undefined4 *)((int)this_ + 0xd4) = 0;
  *(undefined4 *)((int)this_ + 0xcc) = 0;
  *(undefined4 *)((int)this_ + 0xd0) = 0;
  *(undefined4 *)((int)this_ + 0xf4) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0xf8) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x144) = 0;
  *(undefined4 *)((int)this_ + 0x148) = 0x43480000;
  *(undefined4 *)((int)this_ + 0x14c) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x150) = 0x3d4ccccd;
  *(undefined4 *)((int)this_ + 0x140) = 2;
  *(undefined4 *)((int)this_ + 0x100) = 0;
  *(undefined4 *)((int)this_ + 0x104) = 0;
  *(undefined4 *)((int)this_ + 0x108) = 0;
  *(undefined4 *)((int)this_ + 0x160) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x110) = 0;
  *(undefined4 *)((int)this_ + 0x154) = 0;
  *(undefined4 *)((int)this_ + 0xe4) = 0;
  *(undefined4 *)((int)this_ + 0x188) = 0x40400000;
  *(undefined4 *)((int)this_ + 0x18c) = 0x41400000;
  *(undefined4 *)((int)this_ + 0x158) = 0x447a0000;
  *(undefined4 *)((int)this_ + 0x15c) = 0x40800000;
  *(undefined4 *)((int)this_ + 0xe8) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xec) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xf0) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xd8) = 0x40c90fdb;
  *(undefined4 *)((int)this_ + 0xdc) = 0x40c90fdb;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x118) = 0;
  *(undefined4 *)((int)this_ + 0x11c) = 0;
  *(undefined4 *)((int)this_ + 0x120) = 0;
  *(undefined4 *)((int)this_ + 0x124) = 0;
  puVar8 = (undefined4 *)((int)this_ + 0x164);
  for (iVar5 = 7; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *puVar8 = 0x3f800000;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)this_ + 400) = 0;
  *(undefined4 *)((int)this_ + 0x194) = 0;
  *(undefined4 *)((int)this_ + 0x180) = 0;
  *(undefined4 *)((int)this_ + 0xbc) = 0;
  *(undefined4 *)((int)this_ + 0x184) = 0;
  *(undefined4 *)((int)this_ + 0x10c) = 0;
  *(undefined4 *)((int)this_ + 0x128) = 0;
  *(undefined4 *)((int)this_ + 300) = 0;
  *(undefined4 *)((int)this_ + 0x130) = 0;
  *(undefined4 *)((int)this_ + 0x198) = 0;
  *(undefined4 *)((int)this_ + 0x19c) = 0;
  *(undefined4 *)((int)this_ + 0x134) = 0;
  *(undefined4 *)((int)this_ + 0x138) = 0;
  *(undefined4 *)((int)this_ + 0x13c) = 0;
  *(undefined4 *)((int)this_ + 0x1a0) = 0;
  *(undefined4 *)((int)this_ + 0x1a4) = 0;
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  *(undefined4 *)((int)this_ + 0x80) = 0;
  *(undefined4 *)((int)this_ + 0x84) = 0;
  *(undefined4 *)((int)this_ + 0x88) = 0;
  *(undefined4 *)((int)this_ + 0x8c) = 0;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0x94) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  *(undefined4 *)((int)this_ + 0xac) = 0;
  *(undefined4 *)((int)this_ + 0x1a8) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x114) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042efd0, ap_0042efd0));

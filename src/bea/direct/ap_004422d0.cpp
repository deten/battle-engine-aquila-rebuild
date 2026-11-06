// auto-ported from 004422d0_FUN_004422d0.c (FUN_004422d0, 172 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066ffb0 GLOBAL_AT(int, 0x0066ffb0)
#define DAT_0066ff80 GLOBAL_AT(undefined4, 0x0066ff80)
#define DAT_0066ffb8 GLOBAL_AT(int, 0x0066ffb8)
#define DAT_0066ffbc GLOBAL_AT(int, 0x0066ffbc)
#define DAT_0066ffc0 GLOBAL_AT(int, 0x0066ffc0)
#define DAT_0066ffc4 GLOBAL_AT(int, 0x0066ffc4)
#define DAT_00662b2c GLOBAL_AT(char, 0x00662b2c)

static void * BEA_THISCALL ap_004422d0(void * this_)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  *(void **)this_ = DAT_0066ffb0;
  DAT_0066ffb0 = this_;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x84) = 0x3f000000;
  *(undefined4 *)((int)this_ + 0x88) = 0x3f000000;
  *(undefined4 *)((int)this_ + 0x8c) = 0x3f000000;
  puVar5 = &DAT_0066ff80;
  puVar7 = (undefined4 *)((int)this_ + 0x14);
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)((int)this_ + 0x94) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x44) = DAT_0066ffb8;
  *(undefined4 *)((int)this_ + 0x48) = DAT_0066ffbc;
  *(undefined4 *)((int)this_ + 0x4c) = DAT_0066ffc0;
  *(undefined4 *)((int)this_ + 0x50) = DAT_0066ffc4;
  puVar5 = &DAT_0066ff80;
  puVar7 = (undefined4 *)((int)this_ + 0x54);
  for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_00662b2c;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (BEA_LOOP_GUARD((cVar1 != '\0')));
  uVar3 = ~uVar3;
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = (char *)((int)this_ + 0x98);
  for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004422d0, ap_004422d0));

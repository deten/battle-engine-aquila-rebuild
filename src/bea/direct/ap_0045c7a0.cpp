// auto-ported from 0045c7a0_vslot0.c (CFEPGoodies::vslot0, 203 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPGoodies;
#define DAT_00679870 GLOBAL_AT(undefined4, 0x00679870)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00677f00 GLOBAL_AT(undefined4, 0x00677f00)
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static undefined4 BEA_THISCALL ap_0045c7a0(CFEPGoodies * this_)
{
  int iVar1;
  undefined4 *puVar2;
  CFEPGoodies *pCVar3;
  float10 fVar4;
  
  *(undefined4 *)(this_ + 0x13c) = 0;
  *(undefined4 *)(this_ + 0x140) = 0;
  *(undefined4 *)(this_ + 0x134) = 0;
  *(undefined4 *)(this_ + 0x144) = 0;
  *(undefined4 *)(this_ + 0x14c) = 0;
  *(undefined4 *)(this_ + 400) = 0x3f800000;
  *(undefined4 *)(this_ + 0x194) = 0;
  *(undefined4 *)(this_ + 0x198) = 0;
  *(undefined4 *)(this_ + 0x19c) = 0;
  *(undefined4 *)(this_ + 0x1d4) = 0;
  *(undefined4 *)(this_ + 0x1d8) = 0;
  puVar2 = &DAT_00679870;
  pCVar3 = this_ + 0x1a0;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this_ + 0x1d0) = 0x41200000;
  *(undefined4 *)(this_ + 0x184) = 0;
  *(undefined4 *)(this_ + 0x180) = 0;
  *(undefined4 *)(this_ + 0x15c) = 0;
  *(undefined4 *)(this_ + 0x160) = 0;
  *(undefined4 *)(this_ + 0x164) = 0;
  *(undefined4 *)(this_ + 0x174) = 0x41000000;
  *(undefined4 *)(this_ + 0x188) = 0xc2480000;
  *(undefined4 *)(this_ + 0x18c) = 0;
  *(undefined4 *)(this_ + 0x158) = 0;
  fVar4 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)(this_ + 8) = (float)fVar4;
  puVar2 = &DAT_00677f00;
  for (iVar1 = 0xe8; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045c7a0, ap_0045c7a0));

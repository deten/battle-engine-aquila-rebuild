// auto-ported from 0043aea0_FUN_0043aea0.c (FUN_0043aea0, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0043aea0(void * this_, char *param_1)
{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 != (char *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x28)));
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    pcVar2 = (char *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(~uVar3), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x54a));
    uVar3 = 0xffffffff;
    *(char **)((int)this_ + 0x28) = pcVar2;
    do {
      pcVar5 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043aea0, ap_0043aea0));

// auto-ported from 00437fe0_FUN_00437fe0.c (FUN_00437fe0, 106 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00437fe0(void * this_, char *param_1)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 != (char *)0x0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xc)));
    *(undefined4 *)((int)this_ + 0xc) = 0;
    iVar2 = 0;
    cVar1 = *param_1;
    while (BEA_LOOP_GUARD((cVar1 != '\0'))) {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar4];
    }
    iVar2 = iVar2 + 1;
    uVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar2), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x23c));
    *(undefined4 *)((int)this_ + 0xc) = uVar3;
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        *(char *)(*(int *)((int)this_ + 0xc) + iVar4) = param_1[iVar4];
        iVar4 = iVar4 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < iVar2)));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00437fe0, ap_00437fe0));

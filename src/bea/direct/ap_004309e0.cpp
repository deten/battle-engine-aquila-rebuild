// auto-ported from 004309e0_FUN_004309e0.c (FUN_004309e0, 254 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553f8 GLOBAL_AT(int, 0x008553f8)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_CDECL ap_004309e0(char *param_1)
{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x50), bea_arg(0x3f), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x96a));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar4 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_1[iVar1];
    }
    uVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar4 + 1), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x4dc));
    puVar3[0xc] = uVar5;
    iVar4 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar4 = iVar4 + 1;
      *(char *)(puVar3[0xc] + -1 + iVar4) = cVar2;
      cVar2 = param_1[iVar4];
    }
    *(undefined1 *)(puVar3[0xc] + iVar4) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 1;
    puVar3[0x10] = 10;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[0x11] = 0;
    puVar3[0x13] = 0xffffffff;
    puVar3[0x12] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
  }
  return FUN_004e5b20(bea_arg(DAT_008553f8), bea_arg(puVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004309e0, ap_004309e0));

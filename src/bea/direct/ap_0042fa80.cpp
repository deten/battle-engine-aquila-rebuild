// auto-ported from 0042fa80_FUN_0042fa80.c (FUN_0042fa80, 416 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553ec GLOBAL_AT(int, 0x008553ec)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_CDECL ap_0042fa80(char *param_1)
{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_4 = 0xffffffff;
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc0), bea_arg(0x3c), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x955));
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_004e5840(bea_arg(puVar3 + 0x13));
    (*(uint8_t*)((char*)&local_4 + 0)) = 1;
    FUN_004e5840(bea_arg(puVar3 + 0x17));
    iVar4 = 0;
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_1[iVar1];
    }
    uVar5 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar4 + 1), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x2dc));
    puVar3[0xc] = uVar5;
    iVar4 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar4 = iVar4 + 1;
      *(char *)(puVar3[0xc] + -1 + iVar4) = cVar2;
      cVar2 = param_1[iVar4];
    }
    *(undefined1 *)(puVar3[0xc] + iVar4) = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 1;
    puVar3[0x12] = 1;
    puVar3[0xf] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0x42c80000;
    puVar3[0x1b] = 0xc1200000;
    puVar3[0x1c] = 0x461c4000;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0x3f000000;
    puVar3[0x10] = 0;
    puVar3[0x24] = 5;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x29] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x27] = 0x42200000;
    puVar3[0x28] = 0x41200000;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 1;
    puVar3[0x2e] = 0xffffffff;
    puVar3[0x2f] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
  }
  local_4 = 0xffffffff;
  return FUN_004e5b20(bea_arg(DAT_008553ec), bea_arg(puVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042fa80, ap_0042fa80));

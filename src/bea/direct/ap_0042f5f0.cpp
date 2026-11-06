// auto-ported from 0042f5f0_FUN_0042f5f0.c (FUN_0042f5f0, 257 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008553e8 GLOBAL_AT(int, 0x008553e8)
#define s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850 ((char*)0x00625850)
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_CDECL ap_0042f5f0(char *param_1)
{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  piVar3 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x4c), bea_arg(0x3d), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x95c));
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar4 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_1[iVar1];
    }
    iVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(iVar4 + 1), bea_arg(4), bea_arg(s_C__dev_ONSLAUGHT2_WorldPhysicsMa_00625850), bea_arg(0x470));
    *piVar3 = iVar4;
    iVar4 = 0;
    cVar2 = *param_1;
    while (BEA_LOOP_GUARD((cVar2 != '\0'))) {
      iVar4 = iVar4 + 1;
      *(char *)(*piVar3 + -1 + iVar4) = cVar2;
      cVar2 = param_1[iVar4];
    }
    *(undefined1 *)(*piVar3 + iVar4) = 0;
    piVar3[2] = 0x40000000;
    piVar3[3] = -1;
    piVar3[4] = -1;
    piVar3[5] = -1;
    piVar3[6] = -1;
    piVar3[7] = -1;
    piVar3[9] = 0;
    piVar3[8] = 0x3f800000;
    piVar3[1] = 0;
    piVar3[10] = 1;
    piVar3[0xb] = 1;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0xfe0572;
    piVar3[0x10] = 0;
    piVar3[0x11] = 0;
    piVar3[0x12] = 0;
  }
  return FUN_004e5b20(bea_arg(DAT_008553e8), bea_arg(piVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042f5f0, ap_0042f5f0));

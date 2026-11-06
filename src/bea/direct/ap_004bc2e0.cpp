// auto-ported from 004bc2e0_FUN_004bc2e0.c (FUN_004bc2e0, 247 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00829dc4 GLOBAL_AT(int, 0x00829dc4)
#define DAT_00829dc8 GLOBAL_AT(int, 0x00829dc8)
#define DAT_00630ab4 GLOBAL_AT(int, 0x00630ab4)
#define DAT_00630ab8 GLOBAL_AT(int, 0x00630ab8)
#define DAT_00809dc0 GLOBAL_AT(int, 0x00809dc0)
typedef uint32_t (BEA_CDECL* FUN_004be1d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004be1d0_t> FUN_004be1d0 = {(FUN_004be1d0_t)0x004be1d0};

static uint32_t BEA_THISCALL ap_004bc2e0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  iVar6 = DAT_00829dc4 + -1;
  iVar2 = DAT_00829dc8 + -1;
  iVar5 = DAT_00630ab4 + 1;
  iVar1 = DAT_00630ab8 + 1;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (0x100 < iVar5) {
    iVar5 = 0x100;
  }
  if (0x100 < iVar1) {
    iVar1 = 0x100;
  }
  if (iVar2 < iVar1) {
    iVar4 = iVar2 << 8;
    iVar1 = iVar1 - iVar2;
    do {
      if (iVar6 < iVar5) {
        puVar7 = (undefined4 *)((int)&DAT_00809dc0 + (iVar4 + iVar6) * 2);
        for (uVar3 = (uint)(iVar5 - iVar6) >> 1; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        for (uVar3 = (uint)((iVar5 - iVar6 & 1U) != 0); BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
          *(undefined2 *)puVar7 = 0xffff;
          puVar7 = (undefined4 *)((int)puVar7 + 2);
        }
      }
      iVar4 = iVar4 + 0x100;
      iVar1 = iVar1 + -1;
    } while (BEA_LOOP_GUARD((iVar1 != 0)));
  }
  DAT_00829dc4 = 0xff;
  DAT_00829dc8 = 0xff;
  DAT_00630ab4 = 0;
  DAT_00630ab8 = 0;
  return FUN_004be1d0(bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(this_), bea_arg(param_9), bea_arg(param_10));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc2e0, ap_004bc2e0));

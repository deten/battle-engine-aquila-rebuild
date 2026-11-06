// auto-ported from 004e5990_FUN_004e5990.c (FUN_004e5990, 85 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d130 GLOBAL_AT(int, 0x0083d130)
#define DAT_0083d134 GLOBAL_AT(int, 0x0083d134)
#define DAT_0083d138 GLOBAL_AT(int, 0x0083d138)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_004e5990(void)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = DAT_0083d130;
  uVar4 = DAT_0083d134;
  while (BEA_LOOP_GUARD((uVar3 = uVar1, uVar2 = uVar5, uVar3 != 0))) {
    uVar1 = *(uint *)(uVar3 + 4);
    if ((uVar3 < uVar4) || (uVar5 = uVar3, uVar4 + DAT_0083d138 * 8 <= uVar3)) {
      uVar4 = uVar1;
      if (uVar2 != 0) {
        *(uint *)(uVar2 + 4) = uVar1;
        uVar4 = DAT_0083d130;
      }
      DAT_0083d130 = uVar4;
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar3));
      uVar5 = uVar2;
      uVar4 = DAT_0083d134;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5990, ap_004e5990));

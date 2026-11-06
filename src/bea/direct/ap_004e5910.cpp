// auto-ported from 004e5910_FUN_004e5910.c (FUN_004e5910, 113 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083d134 GLOBAL_AT(int, 0x0083d134)
#define DAT_0083d130 GLOBAL_AT(int, 0x0083d130)
#define DAT_0083d138 GLOBAL_AT(int, 0x0083d138)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_CDECL ap_004e5910(void)
{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_0083d134;
  while (BEA_LOOP_GUARD((uVar1 = DAT_0083d130, uVar1 != 0))) {
    DAT_0083d130 = *(uint *)(uVar1 + 4);
    if ((uVar1 < uVar2) || (uVar2 + DAT_0083d138 * 8 <= uVar1)) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar1));
      uVar2 = DAT_0083d134;
    }
  }
  DAT_0083d130 = uVar1;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(uVar2));
  DAT_0083d134 = 0;
  DAT_0083d130 = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5910, ap_004e5910));

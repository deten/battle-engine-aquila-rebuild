// auto-ported from 00450400_FUN_00450400.c (FUN_00450400, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c6994 GLOBAL_AT(undefined4, 0x009c6994)
#define DAT_006776f8 GLOBAL_AT(undefined4, 0x006776f8)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
typedef uint32_t (BEA_THISCALL* FUN_00550b10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550b10_t> FUN_00550b10 = {(FUN_00550b10_t)0x00550b10};

static uint32_t BEA_CDECL ap_00450400(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  puVar2 = &DAT_009c6994;
  puVar3 = &DAT_006776f8;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return FUN_00550b10(bea_arg(&DAT_009c65c0), bea_arg(0x3f800000), bea_arg(0x45dac000), bea_arg(0x3f800000), bea_arg(0x3f400000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00450400, ap_00450400));

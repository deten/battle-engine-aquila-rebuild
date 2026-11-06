// auto-ported from 004cbc60_FUN_004cbc60.c (FUN_004cbc60, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_0082b404 GLOBAL_AT(int, 0x0082b404)
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};

static uint32_t BEA_CDECL ap_004cbc60(void)
{
  int *piVar1;
  int iVar2;
  for (piVar1 = DAT_0082b404; BEA_LOOP_GUARD((piVar1 != (int *)0x0)); piVar1 = (int *)piVar1[0x10]) {
    iVar2 = bea_vcall<uint32_t>(piVar1, 0x4);
    if (iVar2 == 0xb) {
      bea_vcall<uint32_t>(piVar1, 0x5c, 0);
    }
  }
  return FUN_00513bc0(bea_arg(0xf), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cbc60, ap_004cbc60));

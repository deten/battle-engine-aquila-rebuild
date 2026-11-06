// auto-ported from 0054fd80_FUN_0054fd80.c (FUN_0054fd80, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c64d0 GLOBAL_AT(int, 0x009c64d0)
#define DAT_009c6468 GLOBAL_AT(int, 0x009c6468)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00501310_t)(uint32_t);
static const bea_guard<FUN_00501310_t> FUN_00501310 = {(FUN_00501310_t)0x00501310};
typedef uint32_t (BEA_STDCALL* FUN_00514010_t)(uint32_t);
static const bea_guard<FUN_00514010_t> FUN_00514010 = {(FUN_00514010_t)0x00514010};

static uint32_t BEA_CDECL ap_0054fd80(void)
{
  int iVar1;
  for (iVar1 = DAT_009c64d0; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x1a0)) {
    if (*(int *)(iVar1 + 0x194) != 0) {
      FUN_004f27e0(bea_arg((void *)(*(int *)(iVar1 + 0x194) + 8)));
      *(undefined4 *)(iVar1 + 0x194) = 0;
    }
    if (*(void **)(iVar1 + 0x198) != (void *)0x0) {
      FUN_00501310(bea_arg(*(void **)(iVar1 + 0x198)));
      *(undefined4 *)(iVar1 + 0x198) = 0;
    }
  }
  return FUN_00514010(bea_arg(&DAT_009c6468));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054fd80, ap_0054fd80));

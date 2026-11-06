// auto-ported from 00456d40_vslot4.c (CFEPDebriefing::vslot4, 137 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define _DAT_0089d794 GLOBAL_AT(int, 0x0089d794)
#define _DAT_0089d798 GLOBAL_AT(int, 0x0089d798)
#define _DAT_0089d79c GLOBAL_AT(int, 0x0089d79c)
#define _DAT_0089d7a0 GLOBAL_AT(int, 0x0089d7a0)
#define DAT_00677d80 GLOBAL_AT(undefined4, 0x00677d80)
#define DAT_0089d764 GLOBAL_AT(undefined4, 0x0089d764)
#define _DAT_0089d7a4 GLOBAL_AT(int, 0x0089d7a4)
typedef uint32_t (BEA_STDCALL* FUN_004679e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004679e0_t> FUN_004679e0 = {(FUN_004679e0_t)0x004679e0};
typedef uint32_t (BEA_CDECL* FUN_004685a0_t)(void);
static const bea_guard<FUN_004685a0_t> FUN_004685a0 = {(FUN_004685a0_t)0x004685a0};

static uint32_t BEA_STDCALL ap_00456d40(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_4 = 0;
  _DAT_0089d794 = 0;
  _DAT_0089d798 = 0xc0000000;
  _DAT_0089d79c = 0;
  _DAT_0089d7a0 = local_4;
  puVar2 = &DAT_00677d80;
  puVar3 = &DAT_0089d764;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  _DAT_0089d7a4 = 0x3f800000;
  FUN_004685a0();
  return FUN_004679e0(bea_arg(param_1), bea_arg(0x3fffffff), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00456d40, ap_00456d40));

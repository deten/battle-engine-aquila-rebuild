// auto-ported from 00462b70_vslot4.c (CFEPMain::vslot4, 281 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00452ce0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00452ce0_t> FUN_00452ce0 = {(FUN_00452ce0_t)0x00452ce0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

static uint32_t BEA_STDCALL ap_00462b70(float param_1, int param_2)
{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  fVar1 = (param_1 - 0.5f) + (param_1 - 0.5f);
  if (0.0f <= fVar1) {
    if (1.0f < fVar1) {
      fVar1 = 1.0f;
    }
  }
  else {
    fVar1 = 0.0f;
  }
  if (param_2 == 0xc) {
    fVar1 = 1.0f;
  }
  fVar1 = 2.0f - fVar1;
  iVar2 = FUN_00515940();
  iVar3 = FUN_00515b00();
  local_c = (int)(longlong)ROUND((1.0f - (1.0f - fVar1) * (1.0f - fVar1)) * 255.0f);
  return FUN_00452ce0(bea_arg((fVar1 * fVar1 * fVar1 - 1.0f) * 0.87f + 1.0f), bea_arg(local_c * 0x3f0000 | 0xffffff), bea_arg((float)iVar2 * 0.5f - 0.0f), bea_arg((float)iVar3 * 0.5f - 0.0f));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00462b70, ap_00462b70));

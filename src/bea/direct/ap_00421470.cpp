// auto-ported from 00421470_FUN_00421470.c (FUN_00421470, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static uint32_t BEA_STDCALL ap_00421470(float param_1)
{
  byte bVar1;
  undefined2 *puVar2;
  float10 fVar3;
  char local_8;
  
  if (param_1 == 1.0f) {
    bVar1 = 0x53;
  }
  else if (0.0f < param_1) {
    fVar3 = (float10)FUN_0055dfe7((double)(param_1 * 4.0f));
    local_8 = (char)(longlong)ROUND(fVar3);
    bVar1 = 0x44 - local_8;
  }
  else {
    bVar1 = 0x45;
  }
  (*(uint16_t*)((char*)&param_1 + 0)) = (ushort)bVar1;
  puVar2 = (undefined2 *)FUN_004f7bf0(bea_arg(&param_1));
  return *puVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421470, ap_00421470));

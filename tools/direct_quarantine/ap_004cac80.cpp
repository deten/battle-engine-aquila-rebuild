// auto-ported from 004cac80_FUN_004cac80.c (FUN_004cac80, 211 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_CDECL ap_004cac80(float param_1, float param_2)
{
  FUN_0055dfe7((double)(param_1 * 32.0f));
  FUN_0055dfe7((double)(param_2 * 32.0f));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cac80, ap_004cac80));

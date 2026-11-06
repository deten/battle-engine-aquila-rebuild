// auto-ported from 00479770_FUN_00479770.c (FUN_00479770, 346 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062c98c GLOBAL_AT(int, 0x0062c98c)
#define DAT_0062c990 GLOBAL_AT(int, 0x0062c990)
#define DAT_0062c994 GLOBAL_AT(int, 0x0062c994)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Error__Should_not_be_here_in__Di_0062c998 ((char*)0x0062c998)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static float10 BEA_CDECL ap_00479770(float *param_1, float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  fVar1 = ABS(*param_1) - ABS(*param_2);
  uVar4 = 0;
  if (0.0f < fVar1) {
    uVar4 = DAT_0062c98c;
  }
  fVar2 = ABS(param_1[1]) - ABS(param_2[1]);
  if (0.0f < fVar2) {
    uVar4 = uVar4 | DAT_0062c990;
  }
  fVar3 = ABS(param_1[2]) - ABS(param_2[2]);
  if (0.0f < fVar3) {
    uVar4 = uVar4 | DAT_0062c994;
  }
  if (uVar4 != 0) {
    if (uVar4 == DAT_0062c98c) {
      return (float10)fVar1;
    }
    if (uVar4 == DAT_0062c990) {
      return (float10)fVar2;
    }
    if (uVar4 == DAT_0062c994) {
      return (float10)fVar3;
    }
    if (uVar4 == (DAT_0062c990 | DAT_0062c98c)) {
      return SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2);
    }
    if (uVar4 == (DAT_0062c994 | DAT_0062c98c)) {
      return SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar3 * (float10)fVar3);
    }
    if (uVar4 == (DAT_0062c994 | DAT_0062c990)) {
      return SQRT((float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3);
    }
    if (uVar4 == (DAT_0062c994 | DAT_0062c990 | DAT_0062c98c)) {
      return SQRT((float10)fVar3 + (float10)fVar3 +
                  (float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2);
    }
    FUN_00441740(&DAT_0066f580,s_Error__Should_not_be_here_in__Di_0062c998);
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479770, ap_00479770));

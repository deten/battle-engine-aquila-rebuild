// auto-ported from 0045d730_FUN_0045d730.c (FUN_0045d730, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char _DAT_00679af8;
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define DAT_0089bda8 GLOBAL_AT(int, 0x0089bda8)
#define DAT_0089bda4 GLOBAL_AT(int, 0x0089bda4)
#define _DAT_00679af8 GLOBAL_AT(float, 0x00679af8)
typedef undefined4 (BEA_THISCALL* FUN_0044dea0_t)(uint32_t);
static const bea_guard<FUN_0044dea0_t> FUN_0044dea0 = {(FUN_0044dea0_t)0x0044dea0};

static void BEA_CDECL ap_0045d730(int param_1, float *param_2, float param_3)
{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_0044dea0(bea_arg(&DAT_00675688));
  if ((iVar2 == 0) && (param_1 == 0)) {
    fVar1 = 0.0f;
    if ((DAT_0089bda8 < 0x21d) || (399 < DAT_0089bda4)) {
      if ((DAT_0089bda8 < 100) && (DAT_0089bda4 < 400)) {
        fVar1 = (float)(DAT_0089bda8 + -100);
      }
    }
    else {
      fVar1 = (float)(DAT_0089bda8 + -0x21c);
    }
    fVar1 = _DAT_00679af8 * fVar1 * fVar1 * fVar1 * 0.002f + *param_2;
    *param_2 = fVar1;
    if (fVar1 < 0.0f) {
      *param_2 = 0.0f;
    }
    if (param_3 < *param_2) {
      *param_2 = param_3;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045d730, ap_0045d730));

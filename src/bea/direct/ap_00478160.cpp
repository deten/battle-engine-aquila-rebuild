// auto-ported from 00478160_FUN_00478160.c (FUN_00478160, 941 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @autoport-repair: 9 float/pointer cast(s) made bit copies (compiler-located, tools/repair_fcasts.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_00478160(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5, float *param_6, float *param_7)
{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint local_4;
  
  pfVar6 = param_7;
  pfVar5 = param_3;
  pfVar4 = param_2;
  pfVar3 = param_1;
  uVar7 = 0;
  local_4 = 0;
  if (*param_2 <= param_7[3]) {
    if (*param_2 < param_7[1]) {
      local_4 = 2;
    }
  }
  else {
    local_4 = 1;
  }
  if (*param_1 <= param_7[2]) {
    if (*param_1 < *param_7) {
      local_4 = local_4 | 8;
    }
  }
  else {
    local_4 = local_4 | 4;
  }
  if (*param_3 <= param_7[5]) {
    if (*param_3 < param_7[4]) {
      local_4 = local_4 | 0x20;
    }
  }
  else {
    local_4 = local_4 | 0x10;
  }
  param_1 = (float *)local_4;
  if (*param_5 <= param_7[3]) {
    if (*param_5 < param_7[1]) {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  if (*param_4 <= param_7[2]) {
    if (*param_4 < *param_7) {
      uVar7 = uVar7 | 8;
    }
  }
  else {
    uVar7 = uVar7 | 4;
  }
  if (*param_6 <= param_7[5]) {
    if (*param_6 < param_7[4]) {
      uVar7 = uVar7 | 0x20;
    }
  }
  else {
    uVar7 = uVar7 | 0x10;
  }
  param_3 = (float *)uVar7;
  if (uVar7 != 0 || local_4 != 0) {
    do {
      if (((uint)param_1 & (uint)param_3) != 0) {
        return 0;
      }
      uVar7 = (uint)param_3;
      if (param_1 != (float *)0x0) {
        uVar7 = (uint)param_1;
      }
      if ((uVar7 & 1) == 0) {
        if ((uVar7 & 2) == 0) {
          if ((uVar7 & 4) == 0) {
            if ((uVar7 & 8) == 0) {
              if ((uVar7 & 0x10) == 0) {
                param_7 = (float *)(uintptr_t)bea_piece32(pfVar6[4]);
                fVar2 = (pfVar6[4] - *pfVar5) / (*param_6 - *pfVar5);
                fVar1 = (*param_4 - *pfVar3) * fVar2 + *pfVar3;
                fVar2 = (*param_5 - *pfVar4) * fVar2;
              }
              else {
                param_7 = (float *)(uintptr_t)bea_piece32(pfVar6[5]);
                fVar2 = (pfVar6[5] - *pfVar5) / (*param_6 - *pfVar5);
                fVar1 = (*param_4 - *pfVar3) * fVar2 + *pfVar3;
                fVar2 = (*param_5 - *pfVar4) * fVar2;
              }
              param_2 = (float *)(uintptr_t)bea_piece32((fVar2 + *pfVar4));
              goto LAB_004783ce;
            }
            fVar1 = *pfVar6;
            fVar2 = *pfVar6;
          }
          else {
            fVar1 = pfVar6[2];
            fVar2 = pfVar6[2];
          }
          fVar2 = (fVar2 - *pfVar3) / (*param_4 - *pfVar3);
          param_2 = (float *)(uintptr_t)bea_piece32(((*param_5 - *pfVar4) * fVar2 + *pfVar4));
          param_7 = (float *)(uintptr_t)bea_piece32(((*param_6 - *pfVar5) * fVar2 + *pfVar5));
        }
        else {
          fVar2 = (pfVar6[1] - *pfVar4) / (*param_5 - *pfVar4);
          fVar1 = (*param_4 - *pfVar3) * fVar2 + *pfVar3;
          param_2 = (float *)(uintptr_t)bea_piece32(pfVar6[1]);
          param_7 = (float *)(uintptr_t)bea_piece32(((*param_6 - *pfVar5) * fVar2 + *pfVar5));
        }
      }
      else {
        fVar2 = (pfVar6[3] - *pfVar4) / (*param_5 - *pfVar4);
        fVar1 = (*param_4 - *pfVar3) * fVar2 + *pfVar3;
        param_2 = (float *)(uintptr_t)bea_piece32(pfVar6[3]);
        param_7 = (float *)(uintptr_t)bea_piece32(((*param_6 - *pfVar5) * fVar2 + *pfVar5));
      }
LAB_004783ce:
      if ((float *)uVar7 == param_1) {
        param_1 = (float *)0x0;
        *pfVar3 = fVar1;
        *pfVar4 = bea_fcast<float>(param_2);
        *pfVar5 = bea_fcast<float>(param_7);
        if (*pfVar4 <= pfVar6[3]) {
          if (*pfVar4 < pfVar6[1]) {
            param_1 = (float *)0x2;
          }
        }
        else {
          param_1 = (float *)0x1;
        }
        if (*pfVar3 <= pfVar6[2]) {
          if (*pfVar3 < *pfVar6) {
            param_1 = (float *)((uint)param_1 | 8);
          }
        }
        else {
          param_1 = (float *)((uint)param_1 | 4);
        }
        if (bea_fcast<float>(param_7) <= pfVar6[5]) {
          if (bea_fcast<float>(param_7) < pfVar6[4]) {
            param_1 = (float *)((uint)param_1 | 0x20);
          }
        }
        else {
          param_1 = (float *)((uint)param_1 | 0x10);
        }
      }
      else {
        *param_4 = fVar1;
        *param_5 = bea_fcast<float>(param_2);
        *param_6 = bea_fcast<float>(param_7);
        param_3 = (float *)0x0;
        if (*param_5 <= pfVar6[3]) {
          if (*param_5 < pfVar6[1]) {
            param_3 = (float *)0x2;
          }
        }
        else {
          param_3 = (float *)0x1;
        }
        if (*param_4 <= pfVar6[2]) {
          if (*param_4 < *pfVar6) {
            param_3 = (float *)((uint)param_3 | 8);
          }
        }
        else {
          param_3 = (float *)((uint)param_3 | 4);
        }
        if (bea_fcast<float>(param_7) <= pfVar6[5]) {
          if (bea_fcast<float>(param_7) < pfVar6[4]) {
            param_3 = (float *)((uint)param_3 | 0x20);
          }
        }
        else {
          param_3 = (float *)((uint)param_3 | 0x10);
        }
      }
    } while (BEA_LOOP_GUARD((param_3 != (float *)0x0 || param_1 != (float *)0x0)));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00478160, ap_00478160));

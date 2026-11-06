// auto-ported from 004d4c00_FUN_004d4c00.c (FUN_004d4c00, 767 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b69c GLOBAL_AT(int, 0x0082b69c)
typedef undefined4 (BEA_THISCALL* FUN_004d4f00_t)(uint32_t);
static const bea_guard<FUN_004d4f00_t> FUN_004d4f00 = {(FUN_004d4f00_t)0x004d4f00};

static undefined4 BEA_THISCALL ap_004d4c00(void * this_, float *param_1, float param_2)
{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_10;
  undefined4 local_4 = 0;
  
  if (*(int *)((int)this_ + 0x60) == 0) {
    return 0;
  }
  if (*(float *)((int)this_ + 0x74) < 0.0001f) {
    return 0;
  }
  *(int *)((int)this_ + 0x9c) = *(int *)((int)this_ + 0x9c) + 1;
  *(float *)((int)this_ + 0x88) = param_2;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)((int)this_ + 0x20) = *param_1 - *(float *)((int)this_ + 0x30);
  *(float *)((int)this_ + 0x24) = fVar1 - *(float *)((int)this_ + 0x34);
  *(float *)((int)this_ + 0x28) = fVar2 - *(float *)((int)this_ + 0x38);
  *(undefined4 *)((int)this_ + 0x2c) = local_4;
  if (*(float *)((int)this_ + 0x74) == 0.0f) {
    uVar8 = 0xffffffff;
  }
  else {
    fVar1 = (*(float *)((int)this_ + 0x28) - param_2) / *(float *)((int)this_ + 0x74);
    fVar2 = (param_2 + *(float *)((int)this_ + 0x28)) / *(float *)((int)this_ + 0x74);
    local_10 = (int)(longlong)ROUND(fVar1);
    iVar7 = local_10;
    if (fVar1 - (float)local_10 < 0.0f) {
      iVar7 = local_10 + -1;
    }
    local_10 = (int)(longlong)ROUND(fVar2);
    if (fVar2 - (float)local_10 < 0.0f) {
      local_10 = local_10 + -1;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    if (0x1f < local_10) {
      local_10 = 0x1f;
    }
    uVar8 = 0;
    for (; BEA_LOOP_GUARD((iVar7 <= local_10)); iVar7 = iVar7 + 1) {
      uVar8 = uVar8 | 1 << ((byte)iVar7 & 0x1f);
    }
  }
  *(uint *)((int)this_ + 0x8c) = uVar8;
  if (uVar8 == 0) {
    return 0;
  }
  fVar1 = (*(float *)((int)this_ + 0x20) - param_2) / *(float *)((int)this_ + 0x70);
  local_10 = (int)(longlong)ROUND(fVar1);
  iVar7 = local_10;
  if (fVar1 - (float)local_10 < 0.0f) {
    iVar7 = local_10 + -1;
  }
  iVar3 = *(int *)((int)this_ + 0x68);
  *(int *)((int)this_ + 0xa0) = iVar7;
  if (iVar3 <= iVar7) {
    return 0;
  }
  fVar1 = (*(float *)((int)this_ + 0x24) - param_2) / *(float *)((int)this_ + 0x70);
  local_10 = (int)(longlong)ROUND(fVar1);
  iVar10 = local_10;
  if (fVar1 - (float)local_10 < 0.0f) {
    iVar10 = local_10 + -1;
  }
  *(int *)((int)this_ + 0xa4) = iVar10;
  if (iVar10 < *(int *)((int)this_ + 0x6c)) {
    fVar1 = (param_2 + *(float *)((int)this_ + 0x20)) / *(float *)((int)this_ + 0x70);
    local_10 = (int)(longlong)ROUND(fVar1);
    iVar9 = local_10;
    if (fVar1 - (float)local_10 < 0.0f) {
      iVar9 = local_10 + -1;
    }
    *(int *)((int)this_ + 0xa8) = iVar9;
    if (-1 < iVar9) {
      fVar1 = (param_2 + *(float *)((int)this_ + 0x24)) / *(float *)((int)this_ + 0x70);
      local_10 = (int)(longlong)ROUND(fVar1);
      if (fVar1 - (float)local_10 < 0.0f) {
        local_10 = local_10 + -1;
      }
      *(int *)((int)this_ + 0xac) = local_10;
      if (-1 < local_10) {
        if (iVar7 < 0) {
          *(undefined4 *)((int)this_ + 0xa0) = 0;
        }
        if (iVar10 < 0) {
          *(undefined4 *)((int)this_ + 0xa4) = 0;
        }
        if (iVar3 <= iVar9) {
          *(int *)((int)this_ + 0xa8) = iVar3 + -1;
        }
        if (*(int *)((int)this_ + 0x6c) <= local_10) {
          *(int *)((int)this_ + 0xac) = *(int *)((int)this_ + 0x6c) + -1;
        }
        *(int *)((int)this_ + 0xb4) = *(int *)((int)this_ + 0xa4);
        *(int *)((int)this_ + 0xb0) = *(int *)((int)this_ + 0xa0);
        *(undefined4 *)((int)this_ + 0x90) =
             *(undefined4 *)
              (*(int *)((int)this_ + 0x60) +
              (*(int *)((int)this_ + 0xa4) * iVar3 + *(int *)((int)this_ + 0xa0)) * 4);
        puVar4 = *(undefined4 **)((int)this_ + 0x90);
        iVar7 = 0;
        *(undefined4 *)((int)this_ + 0x94) = 0;
        if (puVar4 != (undefined4 *)0x0) {
          if ((int)puVar4[2] < 1) {
            sVar5 = -1;
          }
          else {
            DAT_0082b69c = 0;
            sVar5 = *(short *)*puVar4;
          }
          if (sVar5 != -1) {
            iVar7 = *(int *)((int)this_ + 100) + sVar5 * 0xc;
          }
          *(int *)((int)this_ + 0x94) = iVar7;
        }
        uVar6 = FUN_004d4f00(bea_arg(this_));
        return uVar6;
      }
      return 0;
    }
    return 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d4c00, ap_004d4c00));

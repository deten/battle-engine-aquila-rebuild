// auto-ported from 004aea50_FUN_004aea50.c (FUN_004aea50, 912 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004aea50(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_14;
  
  if (*(int *)((int)this_ + 0x84) != 0) {
    fVar5 = 0.0f;
    *(undefined4 *)(*(int *)((int)this_ + 0xfc) + 0x20) = 0;
    local_3c = 999999.0;
    pfVar7 = (float *)**(undefined4 **)((int)this_ + 0x84);
    iVar6 = 0;
    local_34 = 999999.0;
    local_2c = 999999.0;
    local_38 = -999999.0;
    local_30 = -999999.0;
    local_28 = -999999.0;
    if (0 < *(int *)((int)this_ + 0xac)) {
      do {
        fVar1 = *pfVar7;
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        local_14 = pfVar7[3];
        if (fVar1 < local_3c) {
          local_3c = fVar1;
        }
        if (fVar2 < local_34) {
          local_34 = fVar2;
        }
        if (fVar3 < local_2c) {
          local_2c = fVar3;
        }
        if (local_38 < fVar1) {
          local_38 = fVar1;
        }
        if (local_30 < fVar2) {
          local_30 = fVar2;
        }
        if (local_28 < fVar3) {
          local_28 = fVar3;
        }
        fVar1 = fVar1 + *(float *)((int)this_ + 0x60);
        fVar2 = fVar2 + *(float *)((int)this_ + 100);
        fVar3 = fVar3 + *(float *)((int)this_ + 0x68);
        fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
        if (fVar5 < fVar1) {
          fVar5 = fVar1;
        }
        pfVar7 = pfVar7 + 4;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*(int *)((int)this_ + 0xfc) + 0x20) = 1;
      } while (((iVar6 < *(int *)((int)this_ + 0xac))));
    }
    pfVar7 = *(float **)((int)this_ + 0xfc);
    *pfVar7 = (local_38 + local_3c) * 0.5f;
    pfVar7[1] = (local_30 + local_34) * 0.5f;
    pfVar7[2] = (local_28 + local_2c) * 0.5f;
    pfVar7[3] = local_14;
    iVar6 = *(int *)((int)this_ + 0xfc);
    *(float *)(iVar6 + 0x10) = (local_3c - local_38) * 0.5f;
    *(float *)(iVar6 + 0x14) = (local_34 - local_30) * 0.5f;
    *(float *)(iVar6 + 0x18) = (local_2c - local_28) * 0.5f;
    *(float *)(iVar6 + 0x1c) = local_14;
    fVar1 = *(float *)(*(int *)((int)this_ + 0xfc) + 0x10);
    if (fVar1 <= 0.0f) {
      fVar1 = -fVar1;
    }
    *(float *)(*(int *)((int)this_ + 0xfc) + 0x10) = fVar1;
    fVar1 = *(float *)(*(int *)((int)this_ + 0xfc) + 0x14);
    if (fVar1 <= 0.0f) {
      fVar1 = -fVar1;
    }
    *(float *)(*(int *)((int)this_ + 0xfc) + 0x14) = fVar1;
    fVar1 = *(float *)(*(int *)((int)this_ + 0xfc) + 0x18);
    if (fVar1 <= 0.0f) {
      fVar1 = -fVar1;
    }
    *(float *)(*(int *)((int)this_ + 0xfc) + 0x18) = fVar1;
    puVar4 = *(undefined4 **)((int)this_ + 0xfc);
    *(undefined4 *)((int)this_ + 0x130) = puVar4[6];
    if (((bea_fcast<float>(puVar4[4]) <= bea_fcast<float>(puVar4[5])) && (bea_fcast<float>(puVar4[5]) <= bea_fcast<float>(puVar4[6]))) ||
       ((bea_fcast<float>(puVar4[6]) <= bea_fcast<float>(puVar4[5]) && (bea_fcast<float>(puVar4[5]) <= bea_fcast<float>(puVar4[4]))))) {
      *(undefined4 *)((int)this_ + 0x130) = puVar4[5];
    }
    if (((bea_fcast<float>(puVar4[5]) <= bea_fcast<float>(puVar4[4])) && (bea_fcast<float>(puVar4[4]) <= bea_fcast<float>(puVar4[6]))) ||
       ((bea_fcast<float>(puVar4[6]) <= bea_fcast<float>(puVar4[4]) && (bea_fcast<float>(puVar4[4]) <= bea_fcast<float>(puVar4[5]))))) {
      *(undefined4 *)((int)this_ + 0x130) = puVar4[4];
    }
    *(float *)((int)this_ + 300) = SQRT(fVar5);
    if (puVar4[8] == 0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      iVar6 = *(int *)((int)this_ + 0xfc);
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(undefined4 *)((int)this_ + 300) = 0;
    }
    iVar6 = *(int *)((int)this_ + 0xfc);
    fVar5 = *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18) +
            *(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
            *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10);
    *(float *)(iVar6 + 0x24) = fVar5;
    if (0.0f < fVar5) {
      *(float *)(iVar6 + 0x24) = SQRT(fVar5);
      return;
    }
  }
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004aea50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

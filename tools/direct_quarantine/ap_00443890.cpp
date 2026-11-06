// auto-ported from 00443890_vslot3.c (CDestroyableExtraSegment::vslot3, 298 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_18: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableExtraSegment;
typedef char pCVar1;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)

static void BEA_THISCALL ap_00443890(CDestroyableExtraSegment * this_, float param_1, int *param_2)
{
  CDestroyableExtraSegment *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 uStack_18 = 0;
  undefined1 local_10 [16];
  
  if (*(int *)(this_ + 0x1c) != 0) {
    fVar2 = *(float *)(this_ + 0xc);
    *(float *)(this_ + 0xc) = fVar2 - param_1;
    uVar6 = DAT_00672fd0;
    *(float *)(this_ + 0x18) = param_1;
    *(undefined4 *)(this_ + 0x14) = uVar6;
    if (fVar2 - param_1 < 0.0f) {
      *(undefined4 *)(this_ + 0xc) = 0;
    }
  }
  if ((*(float *)(this_ + 0xc) <= 0.0f) && (*(int *)(this_ + 0x38) == 0)) {
    pfVar7 = (float *)bea_vcall<uint32_t>(param_2, 0x78, local_10);
    pCVar1 = this_ + 0x40;
    fVar2 = (float)param_2[8];
    fVar3 = pfVar7[1];
    fVar4 = (float)param_2[9];
    fVar5 = pfVar7[2];
    *(float *)pCVar1 = (float)param_2[7] - *pfVar7;
    *(float *)(this_ + 0x44) = fVar2 - fVar3;
    *(float *)(this_ + 0x48) = fVar4 - fVar5;
    *(undefined4 *)(this_ + 0x4c) = uStack_18;
    fVar2 = SQRT(*(float *)(this_ + 0x48) * *(float *)(this_ + 0x48) +
                 *(float *)(this_ + 0x44) * *(float *)(this_ + 0x44) +
                 *(float *)pCVar1 * *(float *)pCVar1);
    if (fVar2 != 0.0f) {
      fVar2 = 1.0f / fVar2;
      *(float *)pCVar1 = fVar2 * *(float *)pCVar1;
      *(float *)(this_ + 0x44) = fVar2 * *(float *)(this_ + 0x44);
      *(float *)(this_ + 0x48) = fVar2 * *(float *)(this_ + 0x48);
    }
    *(float *)pCVar1 = *(float *)pCVar1 * 0.03f;
    *(float *)(this_ + 0x44) = *(float *)(this_ + 0x44) * 0.03f;
    *(float *)(this_ + 0x48) = *(float *)(this_ + 0x48) * 0.03f;
    *(undefined4 *)(this_ + 0x50) = 1;
    bea_vcall<uint32_t>(this_, 0x20);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443890, ap_00443890));

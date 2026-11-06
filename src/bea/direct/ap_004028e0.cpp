// auto-ported from 004028e0_FUN_004028e0.c (FUN_004028e0, 254 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_006fbdf4 GLOBAL_AT(int, 0x006fbdf4)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint (BEA_FASTCALL* FUN_0047ea20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0047ea20_t> FUN_0047ea20 = {(FUN_0047ea20_t)0x0047ea20};

static void BEA_THISCALL ap_004028e0(void * this_)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int local_8;
  
  iVar9 = *(int *)((int)this_ + 0x18);
  local_8 = (int)(longlong)ROUND(*(float *)(iVar9 + 0x1c));
  iVar7 = local_8;
  if ((local_8 != *(int *)((int)this_ + 0x24)) ||
     (local_8 = (int)(longlong)ROUND(*(float *)(iVar9 + 0x20)),
     local_8 != *(int *)((int)this_ + 0x28))) {
    *(int *)((int)this_ + 0x24) = iVar7;
    local_8 = (int)(longlong)ROUND(*(float *)(iVar9 + 0x20));
    *(int *)((int)this_ + 0x28) = local_8;
    fVar2 = *(float *)(iVar9 + 0x24);
    fVar4 = -DAT_006fbdfc;
    *(undefined4 *)((int)this_ + 0x20) = 0x497423f0;
    local_8 = (int)(longlong)ROUND(*(float *)(iVar9 + 0x1c));
    iVar7 = local_8;
    local_8 = (int)(longlong)ROUND(*(float *)(iVar9 + 0x20));
    iVar9 = local_8 + -0x14;
    if (iVar9 <= local_8 + 0x14) {
      iVar1 = iVar7 + -0x14;
      iVar5 = iVar1;
      fVar6 = bea_fcast<float>(DAT_006fbdf4);
      do {
        for (; ((DAT_006fbdf4 = bea_piece32(fVar6), iVar5 <= iVar7 + 0x14)); iVar5 = iVar5 + 5) {
          sVar8 = FUN_0047ea20(bea_arg(&DAT_006fadc8), bea_arg(iVar5), bea_arg(iVar9));
          fVar3 = -((float)(int)sVar8 * fVar6);
          if (-((float)(int)sVar8 * fVar6) < fVar4) {
            fVar3 = fVar4;
          }
          fVar3 = -fVar2 - fVar3;
          if (fVar3 < *(float *)((int)this_ + 0x20)) {
            *(float *)((int)this_ + 0x20) = fVar3;
          }
          fVar6 = bea_fcast<float>(DAT_006fbdf4);
        }
        iVar9 = iVar9 + 5;
        iVar5 = iVar1;
      } while (((iVar9 <= local_8 + 0x14)));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004028e0, ap_004028e0));

// auto-ported from 00520f70_FUN_00520f70.c (FUN_00520f70, 399 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_005214d0_t)(uint32_t);
static const bea_guard<FUN_005214d0_t> FUN_005214d0 = {(FUN_005214d0_t)0x005214d0};

static void BEA_THISCALL ap_00520f70(void * this_, uint32_t param_1_bits)
{float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  short sVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = (int)param_1_bits;
  do {
    iVar10 = *(int *)((int)this_ + 0x6ec);
    iVar8 = *(int *)((int)this_ + 0x6e8);
    fVar3 = 0.0f;
    iVar11 = 0;
    if (0 < iVar10) {
      piVar6 = (int *)((*(int *)((int)this_ + 0x6e4) + iVar8 + *(int *)((int)this_ + 0x6e4) * 4) *
                       0x70 + 0x58 + (int)this_);
      iVar9 = iVar10;
      do {
        iVar11 = *piVar6;
        piVar6 = piVar6 + 2;
        iVar9 = iVar9 + -1;
        fVar3 = fVar3 + (float)iVar11;
        iVar11 = iVar10;
      } while (BEA_LOOP_GUARD((iVar9 != 0)));
    }
    param_1_f = 0.0f;
    iVar10 = *(int *)((int)this_ + 0x6e4) * 5;
    iVar9 = iVar10 + iVar7;
    uVar2 = *(uint *)((int)this_ + (iVar11 + (iVar10 + iVar8) * 0xe) * 8 + 0x58);
    iVar10 = iVar9 * 0xe;
    *(int *)((int)this_ + 0x6e8) = iVar7;
    *(undefined4 *)((int)this_ + 0x6ec) = 0;
    fVar3 = (float)uVar2 * *(float *)((int)this_ + 0x6f4) + fVar3;
    sVar1 = *(short *)((int)this_ + iVar9 * 0x70 + 0x54);
    while (BEA_LOOP_GUARD((sVar1 != 0))) {
      fVar4 = (float)*(uint *)((int)this_ + (iVar10 + *(int *)((int)this_ + 0x6ec)) * 8 + 0x58);
      fVar5 = fVar4 + param_1_f;
      if (fVar3 <= fVar5) {
        *(float *)((int)this_ + 0x6f4) = (fVar3 - param_1_f) / fVar4;
        goto LAB_00521087;
      }
      iVar7 = *(int *)((int)this_ + 0x6ec) + 1;
      *(int *)((int)this_ + 0x6ec) = iVar7;
      param_1_f = fVar5;
      sVar1 = *(short *)((int)this_ + (iVar7 + iVar10) * 8 + 0x54);
    }
    *(undefined4 *)((int)this_ + 0x6f4) = 0x3f000000;
    *(int *)((int)this_ + 0x6ec) = *(int *)((int)this_ + 0x6ec) + -1;
LAB_00521087:
    iVar7 = FUN_005214d0(bea_arg(this_));
    if (iVar7 == 0) {
      return;
    }
    iVar8 = *(int *)((int)this_ + 0x6e8) - iVar8;
    if ((iVar8 != -1) && (iVar8 != 1)) {
      iVar8 = ((-2 < iVar8) - 1 & 2) - 1;
    }
    iVar7 = iVar8 + *(int *)((int)this_ + 0x6e8);
    if (iVar7 < 0) {
      iVar7 = 4;
    }
    else if (4 < iVar7) {
      iVar7 = 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00520f70.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

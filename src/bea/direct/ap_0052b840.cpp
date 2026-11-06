// auto-ported from 0052b840_FUN_0052b840.c (FUN_0052b840, 526 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b484 GLOBAL_AT(int, 0x0082b484)
typedef int (BEA_THISCALL* FUN_0052b760_t)(uint32_t);
static const bea_guard<FUN_0052b760_t> FUN_0052b760 = {(FUN_0052b760_t)0x0052b760};
typedef undefined4 (BEA_THISCALL* FUN_0052ba50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0052ba50_t> FUN_0052ba50 = {(FUN_0052ba50_t)0x0052ba50};

static undefined4 BEA_THISCALL ap_0052b840(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)((int)this_ + 0x32e40) * 0x516c;
  iVar2 = *(int *)((int)this_ + *(int *)((int)this_ + 0x32e40) * 0x516c + 0x516c);
  iVar4 = iVar2 * 0xf68 + iVar6 + 0x464;
  puVar1 = (undefined4 *)
           ((int)this_ + *(int *)((int)this_ + iVar2 * 0xf68 + iVar6 + 0x13b4) * 0x18 + iVar4 + 0x140)
  ;
  if ((*(int *)((int)this_ + 0x32e44) == 0) && (*(int *)((int)this_ + iVar4 + 0x138) == 0)) {
    uVar5 = FUN_0052ba50(bea_arg(this_), bea_arg(1));
    return uVar5;
  }
  *(undefined4 *)((int)this_ + 0x32e4c) = 0;
  uVar7 = (uint)(*(int *)((int)this_ + 0x32e44) == 0);
  *(uint *)((int)this_ + 0x32e44) = uVar7;
  *(uint *)((int)this_ + iVar4 + 0xf54) = uVar7;
  bea_vcall<uint32_t>(this_, 0x0);
  *(undefined4 *)((int)this_ + 0x32e78) = *(undefined4 *)((int)this_ + iVar4 + 0xf54);
  *(undefined4 *)((int)this_ + 0x32e68) = *(undefined4 *)((int)this_ + iVar4 + 0xf58);
  *(undefined4 *)((int)this_ + 0x32e80) = puVar1[5];
  *(undefined4 *)((int)this_ + 0x32e74) = *(undefined4 *)((int)this_ + 0x32e94);
  if (*(int *)((int)this_ + 0x32e44) == 0) {
    *(undefined4 *)((int)this_ + 0x32e58) = *puVar1;
    *(undefined4 *)((int)this_ + 0x32e5c) = puVar1[1];
    *(undefined4 *)((int)this_ + 0x32e60) = puVar1[2];
    *(undefined4 *)((int)this_ + 0x32e8c) = 1;
  }
  else {
    *(int *)((int)this_ + 0x32e58) = *(int *)((int)this_ + 0x33014) - *(int *)((int)this_ + 0x3300c);
    *(int *)((int)this_ + 0x32e5c) = *(int *)((int)this_ + 0x33018) - *(int *)((int)this_ + 0x33010);
    uVar5 = *(undefined4 *)((int)this_ + iVar6 + 0x45c);
    *(undefined4 *)((int)this_ + 0x32e8c) = 0;
    *(undefined4 *)((int)this_ + 0x32e60) = uVar5;
  }
  if (DAT_0082b484 == 1) {
    fVar3 = 1.7777778f;
  }
  else {
    if (DAT_0082b484 == 2) {
      *(undefined4 *)((int)this_ + 0x32e90) = 0x3f800000;
      goto LAB_0052b9c9;
    }
    fVar3 = 1.3333334f;
  }
  *(float *)((int)this_ + 0x32e90) =
       ((float)*(uint *)((int)this_ + 0x32e5c) / (float)*(int *)((int)this_ + 0x32e58)) * fVar3;
LAB_0052b9c9:
  *(uint *)((int)this_ + 0x32e84) = *(uint *)((int)this_ + 0x32e84) | 1;
  iVar6 = FUN_0052b760(bea_arg(this_));
  if (-1 < iVar6) {
    if (*(int *)((int)this_ + 0x32e44) != 0) {
      SetWindowPos(*(HWND *)((int)this_ + 0x32e94),(HWND)0xfffffffe,*(int *)((int)this_ + 0x32ffc),
                   *(int *)((int)this_ + 0x33000),
                   *(int *)((int)this_ + 0x33004) - *(int *)((int)this_ + 0x32ffc),
                   *(int *)((int)this_ + 0x33008) - *(int *)((int)this_ + 0x33000),0x40);
    }
    *(undefined4 *)((int)this_ + 0x32e4c) = 1;
    return 0;
  }
  if (*(int *)((int)this_ + 0x32e44) != 0) {
    uVar5 = FUN_0052ba50(bea_arg(this_), bea_arg(1));
    return uVar5;
  }
  return 0x80004005;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0052b840.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.

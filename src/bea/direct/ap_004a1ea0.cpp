// auto-ported from 004a1ea0_FUN_004a1ea0.c (FUN_004a1ea0, 182 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004a1640_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1640_t> FUN_004a1640 = {(FUN_004a1640_t)0x004a1640};

static void BEA_THISCALL ap_004a1ea0(void * this_, int param_1)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  if ((param_1 == 1) && (*(int *)((int)this_ + 0x874) == 0)) {
    FUN_004a1640(bea_arg(this_), bea_arg(1));
    iVar4 = *(int *)((int)this_ + 0x4c);
    local_8 = param_1;
    if (iVar4 != 0) {
      do {
        iVar6 = 0;
        uVar7 = 0x8fffffff;
        iVar1 = iVar4;
        iVar5 = iVar4;
        iVar8 = 0;
        if (iVar4 != 0) {
          do {
            iVar2 = iVar1;
            uVar3 = *(uint *)(iVar2 + 4) & 0xfffffff0;
            if (uVar3 < uVar7) {
              iVar5 = iVar2;
              iVar6 = iVar8;
              uVar7 = uVar3;
            }
            iVar1 = *(int *)(iVar2 + 0xc);
            iVar8 = iVar2;
          } while (BEA_LOOP_GUARD((*(int *)(iVar2 + 0xc) != 0)));
          if (iVar6 != 0) {
            *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
            *(int *)(iVar5 + 0xc) = iVar4;
            iVar4 = iVar5;
          }
        }
        if (local_8 != 0) {
          local_8 = 0;
          *(int *)((int)this_ + 0x4c) = iVar4;
        }
        iVar4 = *(int *)(iVar4 + 0xc);
      } while (BEA_LOOP_GUARD((iVar4 != 0)));
      *(undefined4 *)((int)this_ + 0x874) = 1;
      return;
    }
  }
  *(int *)((int)this_ + 0x874) = param_1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1ea0, ap_004a1ea0));

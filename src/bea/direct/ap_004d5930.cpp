// auto-ported from 004d5930_FUN_004d5930.c (FUN_004d5930, 189 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static undefined4 BEA_THISCALL ap_004d5930(void * this_, int *param_1)
{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    iVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    iVar5 = *(int *)((int)this_ + 0x68);
    iVar4 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    piVar2 = *(int **)(*(int *)((int)this_ + 0x60) +
                      ((iVar4 % *(int *)((int)this_ + 0x6c)) * *(int *)((int)this_ + 0x68) +
                      iVar3 % iVar5) * 4);
    if ((piVar2 != (int *)0x0) && (0 < piVar2[2])) {
      iVar5 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
      psVar1 = (short *)(*(int *)((int)this_ + 100) +
                        *(short *)(*piVar2 + (iVar5 % piVar2[2]) * 2) * 0xc);
      if (psVar1 != (short *)0x0) {
        *param_1 = **(int **)((int)this_ + 0x98) + *psVar1 * 6;
        param_1[1] = **(int **)((int)this_ + 0x98) + psVar1[1] * 6;
        param_1[2] = **(int **)((int)this_ + 0x98) + psVar1[2] * 6;
        return 1;
      }
    }
    iVar6 = iVar6 + 1;
  } while (BEA_LOOP_GUARD((iVar6 < 1000)));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d5930, ap_004d5930));

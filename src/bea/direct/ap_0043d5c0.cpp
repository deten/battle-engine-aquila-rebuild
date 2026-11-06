// auto-ported from 0043d5c0_vslot1.c (CComponentUse::vslot1, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855400 GLOBAL_AT(undefined4*, 0x00855400)
typedef uint32_t (BEA_THISCALL* FUN_005119e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005119e0_t> FUN_005119e0 = {(FUN_005119e0_t)0x005119e0};

static undefined4 BEA_THISCALL ap_0043d5c0(int this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  uint32_t eax_in = 0;
  byte *pbVar3;
  int iVar4;
  void *this_local;
  undefined4 uVar5;

  byte *pbVar6;
  bool bVar7;
  
  if (param_1 != (byte *)0x0) {
    piVar2 = (int *)*DAT_00855400;
    DAT_00855400[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      this_local = (void *)0x0;
    }
    else {
      this_local = (void *)*piVar2;
    }
    eax_in = 0;
    if (this_local != (void *)0x0) {
      do {
        pbVar6 = *(byte **)((int)this_local + 0xb0);
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0043d617:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0043d61c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0043d617;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar4 = 0;
LAB_0043d61c:
        if (iVar4 == 0) {
          if (this_local == (void *)0x0) {
            return 0;
          }
          uVar5 = FUN_005119e0(bea_arg(this_local), bea_arg(this_ + 8), bea_arg(this_ + 0x108), bea_arg(*(undefined4 *)(this_ + 0x208)));
          return uVar5;
        }
        piVar2 = *(int **)(DAT_00855400[2] + 4);
        DAT_00855400[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          this_local = (void *)0x0;
        }
        else {
          this_local = (void *)*piVar2;
        }
        if (this_local == (void *)0x0) {
          return 0;
        }
      } while(BEA_LOOP_GUARD(( true )));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043d5c0, ap_0043d5c0));

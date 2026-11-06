// auto-ported from 004926e0_FUN_004926e0.c (FUN_004926e0, 383 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_FATAL_ERROR__invalid_sector_in_m_0062dc30 ((char*)0x0062dc30)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};

static void BEA_THISCALL ap_004926e0(void * this_)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *this_00;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = 0x40;
  local_24 = 0x40;
  local_18 = 0x10;
  local_14 = 0;
  do {
    local_1c = 0;
    if (local_10 != 0) {
      do {
        local_20 = 0;
        if (local_24 != 0) {
          iVar9 = 0x40 >> ((byte)local_14 & 0x1f);
          do {
            sVar10 = (short)local_1c;
            sVar11 = (short)local_20;
            if (((((4 < local_14) || (local_14 < 0)) || (sVar10 < 0)) ||
                ((iVar9 <= sVar10 || (sVar11 < 0)))) || (iVar9 <= sVar11)) {
              FUN_00441740(&DAT_0066f580,s_FATAL_ERROR__invalid_sector_in_m_0062dc30);
            }
            iVar8 = sVar11 * iVar9 + (int)sVar10;
            iVar1 = *(int *)(local_18 + *(int *)((int)this_ + 0x90));
            piVar2 = *(int **)(iVar1 + 4 + iVar8 * 8);
            piVar5 = piVar2;
            do {
              piVar3 = piVar5;
              if (piVar3 == (int *)0x0) goto LAB_00492800;
              piVar5 = (int *)*piVar3;
            } while (BEA_LOOP_GUARD(((int *)*piVar3 != (int *)0x0)));
            if (piVar3 != (int *)0x0) {
              piVar6 = (int *)0x0;
              piVar5 = piVar3;
              while (BEA_LOOP_GUARD((((piVar4 = piVar6, this_00 = piVar2, this_00 != (int *)0x0 &&
                      (this_00 != piVar3)) && (*this_00 != 0))))) {
                iVar7 = FUN_00492c90(bea_arg(this_00));
                piVar2 = (int *)*this_00;
                piVar6 = this_00;
                if ((iVar7 != 0) && ((*(uint *)(iVar7 + 0x34) & 0x2000000) != 0)) {
                  if (piVar4 == (int *)0x0) {
                    *(int **)(iVar1 + iVar8 * 8 + 4) = piVar2;
                  }
                  else {
                    *piVar4 = (int)piVar2;
                  }
                  if (piVar2 != (int *)0x0) {
                    piVar2[1] = (int)piVar4;
                  }
                  *this_00 = 0;
                  this_00[1] = (int)piVar5;
                  *piVar5 = (int)this_00;
                  piVar6 = piVar4;
                  piVar5 = this_00;
                }
              }
            }
LAB_00492800:
            local_20 = local_20 + 1;
          } while (BEA_LOOP_GUARD((local_20 < local_24)));
        }
        local_1c = local_1c + 1;
      } while (BEA_LOOP_GUARD((local_1c < local_10)));
    }
    local_10 = local_10 >> 1;
    local_24 = local_24 >> 1;
    local_18 = local_18 + -4;
    local_14 = local_14 + 1;
    if (3 < local_14) {
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004926e0, ap_004926e0));

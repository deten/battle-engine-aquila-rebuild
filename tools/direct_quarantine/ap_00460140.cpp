// auto-ported from 00460140_FUN_00460140.c (FUN_00460140, 464 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 * (BEA_CDECL* FUN_0041b7b0_t)(void);
static const bea_guard<FUN_0041b7b0_t> FUN_0041b7b0 = {(FUN_0041b7b0_t)0x0041b7b0};

static void * BEA_THISCALL ap_00460140(void * this_)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  *(undefined **)this_ = ((void*)0x005db584);
  puVar9 = this_;
  for (iVar4 = 0x32; BEA_LOOP_GUARD((puVar9 = puVar9 + 1, iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar9 = 0;
  }
  local_14 = -1;
  iVar4 = -6;
  iVar8 = 0;
  piVar6 = this_;
  do {
    iVar2 = FUN_0041b7b0();
    piVar1 = (int *)(iVar2 + iVar8);
    iVar2 = *piVar1 % 10;
    if ((iVar2 == 0) || (iVar2 == 1)) {
      piVar6 = piVar6 + 1;
      local_14 = local_14 + 1;
      iVar4 = iVar4 + 6;
    }
    iVar8 = iVar8 + 0x14;
    *(int *)((int)this_ + (iVar4 + *piVar6) * 4 + 0xcc) = *piVar1;
    *piVar6 = *piVar6 + 1;
  } while (BEA_LOOP_GUARD((iVar8 < 0x35c)));
  *(int *)((int)this_ + 0x345c) = local_14 + 1;
  puVar9 = (undefined4 *)((int)this_ + 0xa2c);
  for (iVar4 = 300; BEA_LOOP_GUARD((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_4 = 0;
  do {
    iVar4 = FUN_0041b7b0();
    local_14 = -1;
    local_10 = -1;
    iVar8 = 0;
    piVar6 = (int *)((int)this_ + 0xcc);
    do {
      iVar2 = 0;
      do {
        if (*piVar6 == *(int *)(iVar4 + local_4)) {
          local_14 = iVar8;
          local_10 = iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (BEA_LOOP_GUARD((iVar2 < 6)));
      iVar8 = iVar8 + 1;
    } while (BEA_LOOP_GUARD((iVar8 < 0x32)));
    if ((local_14 != -1) && (local_10 != -1)) {
      local_8 = 2;
      local_c = local_4;
      do {
        local_c = local_c + 4;
        iVar8 = -1;
        iVar4 = FUN_0041b7b0();
        iVar4 = *(int *)(iVar4 + local_c);
        if (iVar4 != -1) {
          iVar3 = FUN_0041b7b0();
          iVar2 = -1;
          iVar7 = 0;
          piVar6 = (int *)((int)this_ + 0xcc);
          do {
            iVar5 = 0;
            do {
              if (*piVar6 == *(int *)(iVar3 + iVar4 * 0x14)) {
                iVar8 = iVar5;
                iVar2 = iVar7;
              }
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 1;
            } while (BEA_LOOP_GUARD((iVar5 < 6)));
            iVar7 = iVar7 + 1;
          } while (BEA_LOOP_GUARD((iVar7 < 0x32)));
          if ((iVar2 != -1) && (iVar8 != -1)) {
            iVar4 = local_10 + local_14 * 6;
            *(int *)((int)this_ + (*(int *)((int)this_ + iVar4 * 4 + 0xa2c) + iVar4 * 4) * 8 + 0xedc)
                 = iVar2;
            *(int *)((int)this_ + (*(int *)((int)this_ + iVar4 * 4 + 0xa2c) + 0x1dc + iVar4 * 4) * 8)
                 = iVar8;
            *(int *)((int)this_ + iVar4 * 4 + 0xa2c) = *(int *)((int)this_ + iVar4 * 4 + 0xa2c) + 1;
          }
        }
        local_8 = local_8 + -1;
      } while (BEA_LOOP_GUARD((local_8 != 0)));
    }
    local_4 = local_4 + 0x14;
  } while (BEA_LOOP_GUARD((local_4 < 0x35c)));
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00460140, ap_00460140));

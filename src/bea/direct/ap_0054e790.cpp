// auto-ported from 0054e790_FUN_0054e790.c (FUN_0054e790, 445 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_0054e790_t)(uint32_t);
static const bea_guard<FUN_0054e790_t> FUN_0054e790 = {(FUN_0054e790_t)0x0054e790};
typedef void * (BEA_THISCALL* FUN_0054e950_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0054e950_t> FUN_0054e950 = {(FUN_0054e950_t)0x0054e950};

static void BEA_THISCALL ap_0054e790(void * this_)
{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)((int)this_ + 0x10) == 0) && (*(int *)((int)this_ + 0xc) == 0)) {
    piVar3 = (int *)((int)this_ + 0x14);
    bVar1 = true;
    local_20 = 2;
    piVar2 = piVar3;
    do {
      iVar5 = 2;
      do {
        iVar7 = 2;
        do {
          iVar4 = 2;
          do {
            if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0xc) == 0)) {
              bVar1 = false;
            }
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + -1;
          } while (BEA_LOOP_GUARD((iVar4 != 0)));
          iVar7 = iVar7 + -1;
        } while (BEA_LOOP_GUARD((iVar7 != 0)));
        iVar5 = iVar5 + -1;
      } while (BEA_LOOP_GUARD((iVar5 != 0)));
      local_20 = local_20 + -1;
    } while (BEA_LOOP_GUARD((local_20 != 0)));
    if (bVar1) {
      local_8 = 2;
      *(undefined4 *)((int)this_ + 0xc) = 1;
      do {
        local_c = 2;
        do {
          local_10 = 2;
          do {
            local_14 = 2;
            do {
              iVar5 = *piVar3;
              if (iVar5 != 0) {
                iVar7 = *(int *)(iVar5 + 8);
                if (*(int *)(iVar5 + 0x10) == 0) {
                  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + iVar7;
                  iVar5 = *piVar3;
                  if (iVar5 != 0) {
                    puVar6 = (undefined4 *)(iVar5 + 0x14);
                    local_20 = 2;
                    do {
                      iVar7 = 2;
                      do {
                        iVar4 = 2;
                        do {
                          iVar8 = 2;
                          do {
                            if ((void *)*puVar6 != (void *)0x0) {
                              FUN_0054e950(bea_arg((void *)*puVar6), bea_arg(1));
                            }
                            *puVar6 = 0;
                            puVar6 = puVar6 + 1;
                            iVar8 = iVar8 + -1;
                          } while (BEA_LOOP_GUARD((iVar8 != 0)));
                          iVar4 = iVar4 + -1;
                        } while (BEA_LOOP_GUARD((iVar4 != 0)));
                        iVar7 = iVar7 + -1;
                      } while (BEA_LOOP_GUARD((iVar7 != 0)));
                      local_20 = local_20 + -1;
                    } while (BEA_LOOP_GUARD((local_20 != 0)));
                    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar5));
                  }
                  *piVar3 = 0;
                }
                else {
                  *(undefined4 *)((int)this_ + 0x10) = 1;
                  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + iVar7;
                }
              }
              piVar3 = piVar3 + 1;
              local_14 = local_14 + -1;
            } while (BEA_LOOP_GUARD((local_14 != 0)));
            local_10 = local_10 + -1;
          } while (BEA_LOOP_GUARD((local_10 != 0)));
          local_c = local_c + -1;
        } while (BEA_LOOP_GUARD((local_c != 0)));
        local_8 = local_8 + -1;
      } while (BEA_LOOP_GUARD((local_8 != 0)));
      return;
    }
    local_8 = 2;
    do {
      iVar5 = 2;
      do {
        iVar7 = 2;
        do {
          iVar4 = 2;
          do {
            if ((void *)*piVar3 != (void *)0x0) {
              FUN_0054e790(bea_arg((void *)*piVar3));
            }
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (BEA_LOOP_GUARD((iVar4 != 0)));
          iVar7 = iVar7 + -1;
        } while (BEA_LOOP_GUARD((iVar7 != 0)));
        iVar5 = iVar5 + -1;
      } while (BEA_LOOP_GUARD((iVar5 != 0)));
      local_8 = local_8 + -1;
    } while (BEA_LOOP_GUARD((local_8 != 0)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054e790, ap_0054e790));

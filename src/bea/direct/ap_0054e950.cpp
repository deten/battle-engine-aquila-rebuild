// auto-ported from 0054e950_FUN_0054e950.c (FUN_0054e950, 116 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef void * (BEA_THISCALL* FUN_0054e950_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0054e950_t> FUN_0054e950 = {(FUN_0054e950_t)0x0054e950};

static void * BEA_THISCALL ap_0054e950(void * this_, uint param_1)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  puVar3 = (undefined4 *)((int)this_ + 0x14);
  local_4 = 2;
  do {
    iVar2 = 2;
    do {
      iVar1 = 2;
      do {
        iVar4 = 2;
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            FUN_0054e950(bea_arg((void *)*puVar3), bea_arg(1));
          }
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (BEA_LOOP_GUARD((iVar4 != 0)));
        iVar1 = iVar1 + -1;
      } while (BEA_LOOP_GUARD((iVar1 != 0)));
      iVar2 = iVar2 + -1;
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
    local_4 = local_4 + -1;
  } while (BEA_LOOP_GUARD((local_4 != 0)));
  if ((param_1 & 1) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_));
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054e950, ap_0054e950));

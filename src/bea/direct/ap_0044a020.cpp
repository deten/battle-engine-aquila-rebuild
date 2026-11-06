// auto-ported from 0044a020_FUN_0044a020.c (FUN_0044a020, 159 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_engine_cpp_00628b40 ((char*)0x00628b40)
typedef uint32_t (BEA_THISCALL* FUN_0041ad30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad30_t> FUN_0041ad30 = {(FUN_0041ad30_t)0x0041ad30};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_0044a020(void * this_, int param_1, undefined4 param_2, undefined4 *param_3, undefined4 param_4)
{
  int *piVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  puVar4 = (undefined4 *)((int)this_ + (param_1 * 3 + 0x87) * 8);
  for (iVar3 = 6; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this_ + param_1 * 4 + 0x468) = param_4;
  piVar1 = *(int **)((int)this_ + param_1 * 4 + 4);
  if (piVar1 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar1, 0x20, 1);
  }
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x48), bea_arg(0x26), bea_arg(s_C__dev_ONSLAUGHT2_engine_cpp_00628b40), bea_arg(0x136));
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0041ad30(bea_arg(this_00), bea_arg(param_2));
  }
  *(undefined4 *)((int)this_ + param_1 * 4 + 4) = uVar2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a020, ap_0044a020));

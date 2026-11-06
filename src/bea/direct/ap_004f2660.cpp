// auto-ported from 004f2660_FUN_004f2660.c (FUN_004f2660, 164 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_text_cpp_00632dd8 ((char*)0x00632dd8)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004f2660(void * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this_ + 4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0xffffffff;
  *(undefined4 *)this_ = *param_1;
  *(undefined4 *)((int)this_ + 0x10) = param_1[4];
  *(undefined4 *)((int)this_ + 0x14) = param_1[5];
  uVar1 = param_1[6];
  *(undefined4 *)((int)this_ + 0x18) = uVar1;
  *(undefined4 *)((int)this_ + 0x1c) = param_1[7];
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(uVar1), bea_arg(0x72), bea_arg(s_C__dev_ONSLAUGHT2_text_cpp_00632dd8), bea_arg(0x155));
  uVar4 = *(uint *)((int)this_ + 0x18);
  *(undefined4 **)((int)this_ + 4) = puVar2;
  puVar5 = (undefined4 *)param_1[1];
  for (uVar3 = uVar4 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(int *)((int)this_ + 8) = (param_1[2] - param_1[1]) + *(int *)((int)this_ + 4);
  *(int *)((int)this_ + 0xc) = (param_1[3] - param_1[1]) + *(int *)((int)this_ + 4);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2660, ap_004f2660));

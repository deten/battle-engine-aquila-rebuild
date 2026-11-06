// auto-ported from 00406fc0_FUN_00406fc0.c (FUN_00406fc0, 155 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define s_C__dev_ONSLAUGHT2_BattleEngine_c_006230bc ((char*)0x006230bc)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00406fc0(void * this_, int param_1, float param_2, undefined4 param_3)
{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((*(byte *)(param_1 + 0x2c) & 4) == 0) {
    puVar4 = *(undefined4 **)((int)this_ + 0x294);
    *(undefined4 **)((int)this_ + 0x29c) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar4;
    }
    while (((piVar2 != (int *)0x0))) {
      if (*piVar2 == param_1) {
        return;
      }
      puVar4 = *(undefined4 **)(*(int *)((int)this_ + 0x29c) + 4);
      *(undefined4 **)((int)this_ + 0x29c) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*puVar4;
      }
    }
    puVar3 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x15), bea_arg(s_C__dev_ONSLAUGHT2_BattleEngine_c_006230bc), bea_arg(0x332))
    ;
    puVar4 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar4 = puVar3;
    }
    FUN_00401000(bea_arg(puVar4), bea_arg(param_1));
    fVar1 = DAT_00672fd0;
    puVar4[1] = bea_piece32(DAT_00672fd0);
    puVar4[4] = param_3;
    puVar4[2] = bea_piece32(fVar1 + param_2);
    FUN_004e5b20(bea_arg((void *)((int)this_ + 0x294)), bea_arg(puVar4));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00406fc0, ap_00406fc0));
